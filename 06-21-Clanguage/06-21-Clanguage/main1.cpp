#include "Default.h"

double CelToFah(int degree);
double FahToCel(int degree);


int main()
{
	int degree,Cel,Fah;
	printf("�����µ��� �Է��ϼ���: ");
	scanf_s("%d", &degree);
	
	
	printf("ȭ���µ��� �Է��ϼ���: ");
	scanf_s("%d", &degree);


	printf("ȭ���µ�: %f \n", CelToFah(degree));
	printf("�����µ�: %f \n", FahToCel(degree));

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
