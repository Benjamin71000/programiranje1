#include <iostream>
using namespace std;

void unos(int& num)
{
	cout << "Unesite broj: "; cin >> num;
}

int main()
{
	int broj = 0;
	int sastavljeni_broj = 0;

	do {
		unos(broj);
		if (broj <= 9 && broj >= 0)
			sastavljeni_broj = sastavljeni_broj * 10 + broj;
		
		if (broj > 9)
			cout << "Cifra nije validna..." << endl;


	} while (broj >= 0);

	cout << "Sastavljeni broj je " << sastavljeni_broj << endl;
	return 0;
}
