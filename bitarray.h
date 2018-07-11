#ifndef _BITARRAY_H_
#define _BITARRAY_H_

typedef unsigned char bitnode;

bitnode *create_bit_array(unsigned long long n);                  //n e' o numero de bits que são necessarios
void destroy_bit_array(bitnode *bitarr);
void set_bit(bitnode *bitarr, unsigned long long bitpos);        //seta um bit como 1
void clear_bit(bitnode *bitarr, unsigned long long bitpos);      //seta um bit como 0
int bit_value(bitnode *bitarr, unsigned long long bitpos);       //retorna o valor de um bit no vetor

#endif
