#include <iostream>
using namespace std;

int faktorijel(int);
bool prostBroj(int);

int main()
{
	int broj;
	int suma = 0;

	cout << "Unesite prirodan broj: "; cin >> broj;

	for (int i = 1; i <= broj; i++)
	{
		if (prostBroj(i))
			suma += faktorijel(i);
	}

	cout << "Suma je " << suma;
}

int faktorijel(int num)
{
	long unsigned int faktorijel = 1;

	for (int i = 1; i <= num; i++) 
	{
		faktorijel *= i;
	}
	
	return faktorijel;
}

bool prostBroj(int num)
{
	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
			return false;
	}
	if (num == 1)
		return false;

	return true;
}