/* File : mjam.c */
/* memanfaatkan primitif jam */
#include "jam.h"
#include "jam.c"

int main()
{/* KAMUS */
	Jam J1;
	Jam J2;
	int dt;

/* PROGRAM */
 printf ("Hello..\n");
 BacaJam (&J1);
 TulisJam (J1);
 printf("\nKonversi jam ke detik: %d\n", JamToDetik(J1));
 dt = JamToDetik(J1);
 J2=DetikToJam(dt);
 TulisJam(J2);
return 0;
}
