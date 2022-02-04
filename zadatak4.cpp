#include <iostream>
using namespace std;

int faktorijel(int);
int sumaFaktorijel(int);

int main() 
{
	int num;
	cout << "Unesi cijeli broj: "; cin >> num;
	cout << "Suma neparnih faktorijela je " << sumaFaktorijel(num);
}

int faktorijel(int num)
{
	int faktorijel = 1;
	for (int i = 1; i <= num; i++)
		faktorijel = faktorijel * i;

	return faktorijel;
}

int sumaFaktorijel(int num)
{
	int suma = 0;
	for (int i = 1; i <= num; i += 2)
		suma += faktorijel(i);

	return suma;
}