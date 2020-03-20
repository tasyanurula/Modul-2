/* File : jam.c */
/* Body AFT Jam*/

#include "jam.h"

/* Konstruktor Jam */
Jam MakeJam(int H, int M, int S)

/* Mmebentuk Jam dari H, M, S yang valid */
{
	/*Kamus Lokal*/
	Jam J1;
	int N;
	/* Algoritma */
	Hour(J1) = H;
	Minute(J1) = M;
	Second(J1) = S;
	return J1;
}

/* Validator Jam */

boolean IsValid(int H, int M, int S)
/* Mengirim true jika H,M,S dapat membentuk Jam yang valid */

{
	/* Kamus Lokal */
	/* Algoritma */
	return ((H >= 0 && H <= 23) &&
	(M >= 0 && M <= 59) &&
	(S >= 0 && S <= 59));
}

/* Baca dan Tulis Jam */
void BacaJam(Jam *J)
/* I.S : J tak terdefinisi */
/* F.S : J terdefinisi dan merupakan jam valid */
/* Proses : mengulang baca komponen H,M,S sehingga membentuk J yang  Valid */

{
	/* Kamus Lokal */
	int H, M, S;
	/* Algoritma */
	do  {
	 printf("Masukan Jam : "); scanf("%d",&H);
	 printf("Masukan Menit: "); scanf("%d", &M);
	 printf("Masukan Detik: "); scanf("%d", &S);
       } while(!IsValid(H,M,S));
 *J = MakeJam(H,M,S);
}

void TulisJam(Jam J)
/* I.S : J sembarang */
/* F.s : J ditulis ke layar dengan format HH:MM:SS */
/* Proses : Menulis ke layar */
{
    /* Kamus lokal */
    /* Algoritma */
    printf("%d:%d:%d", Hour(J), Minute(J), Second(J));
}

    int JamToDetik(Jam J)
    /* Konversi Jam menjadi detik */
{
     
    /* Algoritma */
	return(3600 *Hour(J) + 60 *Minute(J) + Second(J));
}

	
Jam DetikToJam(int N)
/* Konversi detik ke Jam */
{
/* Kamus lokal */
int sisa;
Jam Jaja;
      /* Algoritma */
      Hour(Jaja) = N % 3600;
      sisa = N % 3600;          
      Minute(Jaja) = sisa / 60; 
      Second(Jaja) = sisa % 60; 
      return Jaja;
}
