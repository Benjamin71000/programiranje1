#include <iostream>
using namespace std;

int faktorijel(int num)
{
	if (num < 0)
		return -1;
	if (num == 0)
		return 1;
	return num * faktorijel(num - 1);
}

int main()
{
	int broj;

	do {
		cout << "Unesite broj: "; cin >> broj;

		if (faktorijel(broj) == -1)
			cout << "Unesite pozitivan broj!" << endl;
		else
			cout << faktorijel(broj);
	} while (broj < 0);
		
	
}