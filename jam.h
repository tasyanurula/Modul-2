/* File : jam.h */

/* spesifikasi ADT Jam */
#ifndef jam_H
#define jam_H
#include "boolean.h"
#include "stdio.h"

/* Notasi Akses */
#define Hour(J) (J).HH
#define Minute(J) (J).MM
#define Second(J) (J).SS
typedef struct
{
	int HH; /* 0..23 */
	int MM; /* 0..59 */
	int SS; /* 0..59 */
      } Jam;

Jam MakeJam(int H, int M, int S);

boolean IsValid(int H, int M, int S);

/*-----------Baca & Tulis Jam------------*/
void BacaJam(Jam *J);
/* I.S. : J tak terdefinisi*/
/* F.S : J terdefinisi dan merupakan jam valid */
/* Proses : mengulang baca komponen H,M,S sehingga memberi nilai yang valid */

void TulisJam(Jam J);
/* I.S. : J sembarang*/
/* F.S : J ditulis ke layar dengan format HH:MM:SS */
/* Proses : Menulis ke layar */

/*--------Konversi terhadap type jam---------*/
int JamToDetik(Jam J);
/* Konversi Jam ke Detik */


Jam DetikToJam(int N);
/* Konversi detik ke jam */

#endif
