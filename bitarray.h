#ifndef _BITARRAY_H_
#define _BITARRAY_H_

#include <stddef.h>


typedef unsigned char bitnode;


bitnode *create_bit_array(size_t n);                  //n e' o numero de bits que são necessarios

void destroy_bit_array(bitnode *bitarr);

void set_bit(bitnode *bitarr, size_t bitpos);        //seta um bit como 1

void clear_bit(bitnode *bitarr, size_t bitpos);      //seta um bit como 0

int bit_value(bitnode *bitarr, size_t bitpos);       //retorna o valor de um bit no vetor

#endif
