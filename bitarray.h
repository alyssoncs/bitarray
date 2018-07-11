#ifndef _BITARRAY_H_
#define _BITARRAY_H_
/*
 * typedef struct
 * {
 *      unsigned char b0 : 1;
 *      unsigned char b1 : 1;
 *      unsigned char b2 : 1;
 *      unsigned char b3 : 1;
 *      unsigned char b4 : 1;
 *      unsigned char b5 : 1;
 *      unsigned char b6 : 1;
 *      unsigned char b7 : 1;
 * } bitnode;
 */
typedef unsigned char bitnode;

bitnode *createBitArray(unsigned long long n);                  //n e' o numero de bits que são necessarios
void destroyBitArray(bitnode *bitarr);
void setBit(bitnode *bitarr, unsigned long long bitpos);        //seta um bit como 1
void clearBit(bitnode *bitarr, unsigned long long bitpos);      //seta um bit como 0
int bitValue(bitnode *bitarr, unsigned long long bitpos);       //retorna o valor de um bit no vetor

#endif
