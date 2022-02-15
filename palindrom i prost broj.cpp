#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int broj)
{
	for (int i = 2; i * i <= broj; i++)
		if (broj % i == 0)
			return 0;
	return 1;
}

int obrni(int broj)
{
	int noviBroj = 0;
	while (broj)
	{
		noviBroj = noviBroj * 10 + broj % 10;
		broj /= 10;
	}

	return noviBroj;
}

bool isPalindrom(int broj)
{
	return broj == obrni(broj);
}

bool isPrimePalindrom(int broj)
{
	return isPrime(broj) && isPalindrom(broj);
}

int main()
{
	int num;

	do {
		cout << "Unesi broj: "; cin >> num;
	} while (num < 100);

	cout << "Broj " << num << ((isPrimePalindrom(num)) ? " jeste polindrom i prost" : " nije polindrom i prost");
}