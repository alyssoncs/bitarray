#ifndef _BITARRAY_H_
#define _BITARRAY_H_

#include <stddef.h>


typedef unsigned char bitnode;


bitnode *create_bit_array(size_t n);

void destroy_bit_array(bitnode *bitarr);

void set_bit(bitnode *bitarr, size_t bitpos);

void clear_bit(bitnode *bitarr, size_t bitpos);

int bit_value(bitnode *bitarr, size_t bitpos);

#endif
