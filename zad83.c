// Program treba izracunat posotak  ocjena.

#include<stdio.h>

	int main()
{
	int ocjene[5], i;
	float sum=0, postotak, prosjek;
    printf("Unesi ocjene iz SiS, OM, Programiranje II, OET 2, Engleski jezik :");
	for(i=0; i<5; i++)
	{
	 scanf("%d",&ocjene[i]);
	 sum=sum+ocjene[i];
	}
	// Racunanje postotka i prosjeka.
	prosjek=sum/5;
	postotak=prosjek*100;
	// Ispis prosjeka i postotka.
	printf("Prosjek ocjena je: %f",prosjek);
	printf("\nPostotak ocjena je: %f%",postotak);
	return 0;
}
