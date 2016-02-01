NITC=../../bin/nitc
NITLS=../../bin/nitls

all: bin/action_nitro

bin/action_nitro: $(shell ${NITLS} -M src/action_nitro.nit linux) ${NITC} pre-build
	${NITC} src/action_nitro.nit -m linux -o $@

bin/texture_atlas_parser: src/texture_atlas_parser.nit
	${NITC} src/texture_atlas_parser.nit -o $@

src/texts.nit: art/texts.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_png_and_nit art/texts.svg -a assets/ -s src/ -x 2.0 -g

pre-build: src/texts.nit

check: bin/action_nitro
	NIT_TESTING=true bin/action_nitro

# ---
# Android

android: bin/action_nitro.apk
bin/action_nitro.apk: $(shell ${NITLS} -M src/action_nitro.nit android) ${NITC} res/drawable-hdpi/icon.png pre-build
	${NITC} src/android.nit -m android -o $@

android-release: $(shell ${NITLS} -M src/action_nitro.nit android) ${NITC} res/drawable-hdpi/icon.png pre-build
	${NITC} src/android.nit -m android -o bin/action_nitro.apk --release

res/drawable-hdpi/icon.png: art/icon.svg
	make -C ../inkscape_tools/
	../inkscape_tools/bin/svg_to_icons --out res --android art/icon.svg
