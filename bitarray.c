#include "bitarray.h"
#include <stdlib.h>

bitnode *create_bit_array(size_t n)
{
	size_t size = n / 8;

	if (n % 8 != 0)
		size++;

	bitnode *bitarr = calloc(sizeof(bitnode) * size);

	return bitarr;
}

void destroy_bit_array(bitnode *bitarr)
{
	free(bitarr);
}

static bitnode _get_mask(size_t bitpos)
{
	bitnode bit_number = bitpos % 8;	/* The n'th bit that this bit will ocupy in its byte */
	bitnode mask = 1 << (7 - bitnumber);	/* The mask to set that bit */		

	return mask;
}


void set_bit(bitnode *bitarr, size_t bitpos)
{
	if (bitarr) {
		size_t index = bitpos / 8;		/* The byte that this bit belongs to */
		bitnode mask = _get_mask(bitpos);

		bitarr[index] |= mask;
	}
}

void clear_bit(bitnode *bitarr, size_t bitpos)
{
	if (bitarr) {
		size_t index = bitpos / 8;		/* The byte that this bit belongs to */
		bitnode mask = ~(_get_mask(bitpos));

		bitarr[index] &= mask;
	}
}

int bit_value(bitnode *bitarr, size_t bitpos)
{
	if (bitarr) {
		size_t index = bitpos / 8;
		bitnode mask = _get_mask(bitpos);

		return !!(bitarr[index] & mask);
	}

	return 0;
}
