/* File : Nilai.h */

#ifndef nilai_H
#define nilai_H
#include "boolean.h"
#include "stdio.h"

#define Kehadiran(N) (N).KK
#define Tugas(N) (N).TT
#define Quiz(N) (N).QQ
#define UTS(N) (N).UU
#define UAS(N) (N).SS

typedef struct
{
	int KK;
	int TT;
	int QQ;
	int UU;
	int SS;
} Nilai;

Nilai MakeNilai(int K, int T, int Q, int U, int S);

boolean IsValid(int K, int T, int Q, int U, int S);

void TulisNilai(Nilai N);

void BacaNilai(Nilai *N);
 
int TotalNilai(Nilai N);

Nilai IndeksNilai(int Nilai);

#endif
