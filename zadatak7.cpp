#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int generisiBacanje();

int main()
{
	srand(time(NULL));
	
	cout << "tri uzastopna bacanja desila su se nakon " << generisiBacanje() << " puta.";
}

int generisiBacanje()
{
	int broj_bacanja = 0;
	int broj_istih = 0;

	do {
		int kocka1 = rand() % 6 + 1;
		int kocka2 = rand() % 6 + 1;
		int kocka3 = rand() % 6 + 1;

		if (kocka1 == kocka2 && kocka2 == kocka3)
			broj_istih++;
		else
			broj_istih = 0;

		broj_bacanja++;
	} while (broj_istih < 2);

	return broj_bacanja;
}