module polynome

import pthreads
import test_barrier

class ValeurThread
	super HWThread
	
	redef type E: Int
	var p: Polynome
	var x: Int
	var inf: Int
	var sup: Int
	var seuil: Int
	redef fun main do
		return p.valeur_rec_ij(x, inf, sup, seuil)
	end
end

class FoisBlocThread
	super HWThread

	redef type E: Array[Int]
	var p: Polynome
	var o: Polynome
	var inf: Int
	var sup: Int
	var res: Array[Int]
	redef fun main do 
		for k in [inf..sup] do
			res[k] = p.fois_seq_k(k, o)
		end
		return res
	end

end

class Polynome
	var coeffs: Array[Int]

	init do
		assert coeffs.length >= 1
		while coeffs.length > 1 and coeffs.last == 0 do
			coeffs.pop
		end
		self.coeffs = coeffs
	end

	fun taille: Int do return coeffs.length

	fun [](k: Int): Int do
		assert k >= 0 and k < taille
		return coeffs[k]
	end

	fun zero: Bool do return taille == 1 and self[0] == 0

	fun canonique: Bool do return zero or self[taille - 1] != 0

	redef fun ==(other) do
		assert other isa Polynome
		if taille != other.taille then return false
		for k in [0..taille[ do
			if self[k] != other [k] then return false
		end
		return true
	end

	fun +(other: Polynome): Polynome do
		var biggest: nullable Polynome
		var lowest: nullable Polynome
		if self.taille > other.taille then
			biggest = self
			lowest = other
		else
			biggest = other
			lowest = self
		end
		var res = new Array[Int].with_capacity(biggest.taille)
		for k in [0..lowest.taille[ do res[k] = biggest[k] + lowest[k]
		for k in [lowest.taille..biggest.taille[ do res[k] = biggest[k]
		return new Polynome(res)

	end

	fun valeur(x: Int): Int do
		var seuil = 1

		return valeur_rec_ij(x, 0, taille - 1, seuil)

	end

	fun valeur_rec_ij(x, i, j, seuil: Int): Int do
		if j - i + 1 <= seuil then return valeur_seq_ij(x, i, j)
		var m = (i + j)/2
		var t = new ValeurThread(0, self, x, i, m, seuil)
		t.start
		var v2 = valeur_rec_ij(x, m+1, j, seuil)
		return t.join + v2
	end
	
	fun valeur_seq_ij(x, i, j: Int): Int do
		var val = 0
		for k in [i..j] do 
			if k == 0 then
				val += self[k]
			else
				val += (x**k)*self[k]
			end
		end
		return val
	end

	fun fois_seq_k(k: Int, other: Polynome): Int do
		var res = 0
		var imin = 0
		var imax = self.taille
		for i in [imin..imax[ do
			for j in [0..other.taille[ do 
				if (i + j) == k then 
					res += self[i] * other[j]
				end
			end
		end
		return res
	end

	fun fois_seq(other: Polynome): Polynome do
		var taille = self.taille + other.taille - 1
		var res = new Array[Int].with_capacity(taille)
		for k in [0..taille[ do res[k] = fois_seq_k(k, other)
		return new Polynome(res)
	end

	fun fois_forkjoin_bloc(other: Polynome): Polynome do
		var nb_threads = 10
		var res = new Array[Int].filled_with(0, taille + other.taille - 1)
		var threads = new Array[FoisBlocThread]
		for i in [0..nb_threads] do
			var inf = i * res.length / nb_threads
			var sup = ((i + 1) * res.length / nb_threads) -1
			var t = new FoisBlocThread(0, self, other, inf, sup, res)
			threads.add(t)
			t.start	
		end
		for t in threads do t.join
		return new Polynome(res)
	end
end

var t1 = new Array[Int].with_capacity(100)
var t2 = new Array[Int].with_capacity(50)
for i in [0..100[ do t1[i] = 10.rand
for i in [0..50[ do t2[i] = 10.rand
var p1 = new Polynome(t1)
var p2 = new Polynome(t2)
print p1.valeur_rec_ij(1, 0, p1.taille -1, 10)
print p1.valeur_seq_ij(1, 0, p1.taille - 1)
var p3 = p1.fois_seq(p2)
var p4 = p1.fois_forkjoin_bloc(p2)
print p3 == p4
