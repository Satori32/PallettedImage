#include <stdio.h>
#include <stdint.h>

#include "SurfaceT.h"
#include "Vector.h"
struct PalletedImage {
	//type C = NULL;
	typedef RGB32 C;
	//type Color=C;
	Vector<Color> Pallette;
	//type W = NULL;
	typedef uint64_t W;
	//type Word = W;
	SurfaceT<Word> Pixel;
};

PalletedImage ConstructPalletedImage(Vector<RGB32>& P, SurfaceT<uint64_t>& S) {
	PalletedImage PI;
	PI.Pallette = P;
	PI.Pixel = S;

	return PI;
}

bool Free(PalletedImage& In) {
	Free(In.Pallette);
	Free(In.Pixel);

	return true;
}