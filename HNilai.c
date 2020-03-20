/* File HNilai.c */

#include "nilai.h"
#include "nilai.c"

int main()
{
	Nilai Ni;
	Nilai In;
	int Tn;
	
/* PROGRAM */
	printf("=================================\n");
	printf ("==Indeks Prestasi Mata Kuliah X==");
	printf("\n=================================\n");
	BacaNilai(&Ni);
	printf("\n=================================\n");
	printf("KETERANGAN \n");
	printf(" \n");
	TulisNilai(Ni);
	printf(" \n");
	printf("\nTotal Nilai : %d\n", TotalNilai(Ni));
	printf("\n=================================\n");
	Tn = TotalNilai(Ni);
In= IndeksNilai(Tn);
	printf("\n=================================\n");
return 0;
}
