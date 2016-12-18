#ifndef _CONVERTER_H_
#define _CONVERTER_H_

#include "../Hash.h"


trit_t trit_tValue(trit_t *const trits, const int offset, const int size);
char *bytes_3(trit_t *const trits, const int offset, const int size);
void getTrits(const char * bytes, trit_t *const trits, int length);
int indexOf(char *values, char find);
trit_t *trits(const char *trytes);
void copyTrits(trit_t const value, trit_t *const destination, const int offset, const int size);
char *trytes_3(trit_t *const trits, const int offset, const int size);
int tryteValue(trit_t *const trits, const int offset);
void init_converter();

#define bytes_2(A,B) bytes_3(A,0,B)
#define trytes_2(A,B) trytes_3(A,0,B)

#define GET_TRYTES(_1,_2,_3,NAME,...) NAME
#define GET_BYTES(_1,_2,_3,NAME,...) NAME
#define trytes(...) GET_TRYTES(__VA_ARGS__, trytes_3, trytes_2)(__VA_ARGS__)
#define bytes(...) GET_BYTES(__VA_ARGS__, bytes_3, bytes_2)(__VA_ARGS__)

#endif
