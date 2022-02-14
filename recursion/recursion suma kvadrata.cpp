#include <iostream>
using namespace std;

int sumaKvadrata(int num)
{
	if (num == 1)
		return num;

	if (num < 0)
		return -1;

	else
		return num * num + sumaKvadrata(num - 1);
}

int main()
{
	int broj;

	cout << "Unesite broj: "; cin >> broj;
	cout << sumaKvadrata(broj);
	
}