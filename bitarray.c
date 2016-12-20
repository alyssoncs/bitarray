#include "bitarray.h"
#include <stdlib.h>

bitnode* createBitArray(unsigned long n)
{
	bitnode* bitarr;
	unsigned long p = n/8;

	if(n%8) p++;
	bitarr = (bitnode*)malloc(sizeof(bitnode)*p);
	return bitarr;
}

void destroyBitArray(bitnode* bitarr)
{
	free(bitarr);
}

void setBit(bitnode* bitarr, unsigned long bitpos)
{
	unsigned long p = bitpos/8;
	bitnode aux = 1;

	aux = aux << (7-(bitpos%8));
	bitarr[p] = bitarr[p] | aux;
}

void clearBit(bitnode* bitarr, unsigned long bitpos)
{
	unsigned long p = bitpos/8;
	bitnode aux = 1;

	aux = ~(aux << (7-(bitpos%8)));
	bitarr[p] = bitarr[p] & aux;
}

int bitValue(bitnode* bitarr, unsigned long bitpos)
{
	unsigned long p = bitpos/8;
	bitnode aux = 1;

	aux = aux << (7-(bitpos%8));
	
	if(bitarr[p] & aux)
		return 1;
	else return 0;
}
