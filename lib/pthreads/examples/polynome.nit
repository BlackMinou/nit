module polynome

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
		return valeur_seq_ij(x, 0, taille - 1)

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
		var imax = taille
		for i in [imin..imax[ do
			for j in [0..other.taille[ do 
				if i + j == k then res += self[i] * other[j]
			end
		end
		return res
	end

	fun fois_seq(other: Polynome): Polynome do
		var res = new Array[Int].with_capacity(taille + other.taille - 1)
		for k in [0..res.length[ do res[k] = fois_seq_k(k, other)
		return new Polynome(res)
	end
end
