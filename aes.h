
#ifndef _AES_H_INC_
#define _AES_H_INC_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cuda.h>
#include <cuda_runtime.h>

// AES only supports Nb=4
#define AES_BLOCK_SIZE 16
#define Nb 4			// number of columns in the state & expanded key
#define Nk 4			// number of columns in a key
#define Nr 10	  		// number of rounds in encryption

typedef unsigned char uchar;

//extern unsigned char counter[AES_BLOCK_SIZE];
//extern unsigned char ecount_buf[AES_BLOCK_SIZE];
//extern int num;

/*typedef struct {
	uchar Sbox[256];
	uchar InvSbox[256];
	uchar Xtime2Sbox[256];
	uchar Xtime3Sbox[256];
	uchar Xtime2[256];
	uchar Xtime9[256];
	uchar XtimeB[256];
	uchar XtimeD[256];
	uchar XtimeE[256];
} t_global;
*/


#endif // _AES_H_INC_
