#include "Default.h"

double CelToFah(int degree);
double FahToCel(int degree);


int main()
{
	int degree,Cel,Fah;
	printf("¼·¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
	scanf_s("%d", &degree);
	
	
	printf("È­¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
	scanf_s("%d", &degree);


	printf("È­¾¾¿Âµµ: %f \n", CelToFah(degree));
	printf("¼·¾¾¿Âµµ: %f \n", FahToCel(degree));

	return 0;
}

double CelToFah(int degree)
{
	double Fah = (1.8 * degree) + 32;
	return Fah;
}

double FahToCel(int degree)
{
	double Cel = (degree / 1.8) - (32/1.8);
	return Cel;
}
