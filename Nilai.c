/* File : Nilai.c */

#include "nilai.h"
Nilai MakeNilai(int K, int T, int Q, int U, int S)

{
	Nilai Ni;
	
	Kehadiran(Ni) = K;
	Tugas(Ni) = T;
	Quiz(Ni) = Q;
	UTS(Ni) = U;
	UAS(Ni) = S;
	return Ni;
}

boolean IsValid(int K, int T, int Q, int U, int S)
{
	return ((K >= 1 && K <= 14) && 
	(T >= 0 && T <= 100) &&
	(Q >= 0 && Q <= 100) &&
	(U >= 0 && U <= 100) &&
	(S >= 0 && S <= 100));
}

void TulisNilai(Nilai N)

{
	printf("Total Kehadiran = %d",Kehadiran(N));
	printf(" \n");
	printf("Nilai Tugas = %d",Tugas(N));
	printf(" \n");
	printf("Nilai Quiz = %d",Quiz(N));
	printf(" \n");
	printf("Nilai UTS = %d",UTS(N));
	printf(" \n");
	printf("Nilai UAS = %d",UAS(N));
}

void BacaNilai(Nilai *N)
{
int K, T, Q, U, S;
do {
printf("Masukkan Total Kehadiran : "); scanf("%d",&K);
printf("Masukkan Nilai Tugas : "); scanf("%d",&T);
printf("Masukkan Nilai Quiz : "); scanf("%d",&Q);
printf("Masukkan Nilai UTS : "); scanf("%d",&U);
	printf("Masukkan Nilai UAS : "); scanf("%d",&S);	
	}while(!IsValid(K,T,Q,U,S));
	*N = MakeNilai(K,T,Q,U,S);
}

int TotalNilai(Nilai N)
{
	return (Kehadiran(N)*5/7 + Tugas(N) * 0.2 + Quiz(N) * 0.15 + UTS(N) * 0.25 + UAS(N) * 0.3);
}

Nilai IndeksNilai(int Nilai){
	if (Nilai >= 0 && Nilai <= 20) {
		printf("Indeks Prestasi : E");
	}
	else if(Nilai >= 21 && Nilai <= 40){
		printf("Indeks Prestasi : D");
	}
	else if(Nilai >= 41 && Nilai <= 60){
		printf("Indeks Prestasi : C");
	}
	else if(Nilai >= 61 && Nilai <= 80){
		printf("Indeks Prestasi : B");
	}
	else if(Nilai >= 81 && Nilai <= 100){
		printf("Indeks Prestasi : A");
	}
}
