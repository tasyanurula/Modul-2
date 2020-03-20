/* File : jam1.h */

/* spesifikasi ADT Jam */
#ifndef jam_H
#define jam_H
#include "boolean.h"
#include "stdio.h"

/* Notasi Akses */
#define Hour(J) (J).HH
#define Minute(J) (J).MM
#define Second(J) (J).SS
#define Day(J) (J).DD
typedef struct
{
	int HH; /* 0..23 */
	int MM; /* 0..59 */
	int SS; /* 0..59 */
	int DD;
} Jam; 

Jam MakeJam(int H, int M, int S, int D);

boolean IsValid(int H, int M, int S, int D );

/*-----------Baca & Tulis Jam------------*/
void BacaJam(Jam *J);


void TulisHasil(Jam J);

void TulisJam(Jam J);


/*--------Konversi terhadap type jam---------*/
int JamToDetik(Jam J);
/* Konversi Jam ke Detik */

int HaritoJam(Jam J);
/* Konversi Hari ke jam */


Jam DetikToJam(int N);
/* Konversi detik ke jam */

#endif
