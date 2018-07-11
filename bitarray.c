#include "bitarray.h"
#include <stdlib.h>

bitnode *create_bit_array(size_t n)
{
	bitnode *bitarr;
	size_t p = n / 8;

	if (n % 8) //if n is not a multiple of 8
		p++;
	bitarr = (bitnode *)malloc(sizeof(bitnode) * p);
	return bitarr;
}

void destroy_bit_array(bitnode *bitarr)
{
	free(bitarr);
}

void set_bit(bitnode *bitarr, size_t bitpos)
{
	size_t p = bitpos / 8;
	bitnode aux = 1;

	if (bitarr) {
		aux = aux << (7 - (bitpos % 8));
		bitarr[p] = bitarr[p] | aux;
	}
}

void clear_bit(bitnode *bitarr, size_t bitpos)
{
	size_t p = bitpos / 8;
	bitnode aux = 1;

	if (bitarr) {
		aux = ~(aux << (7 - (bitpos % 8)));
		bitarr[p] = bitarr[p] & aux;
	}
}

int bit_value(bitnode *bitarr, size_t bitpos)
{
	size_t p = bitpos / 8;
	bitnode aux = 1;

	if (bitarr) {
		aux = aux << (7 - (bitpos % 8));

		if (bitarr[p] & aux)
			return 1;
		else return 0;
	}
	return 0;
}
