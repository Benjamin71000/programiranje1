#include <iostream>
using namespace std;

int zamjeni(int n);

int main()
{
	int n;

	while (cout << "Unesite n: ", cin >> n, n < 0);

	int noviBroj = zamjeni(n);

	cout << "Od unesenog broja napravljen je broj sa tim ciframa gdje je svaka  parna cifra zamjenjena sa cifrom 5: " << noviBroj << endl;
	cout << "Razlika ove dvije cifre je: " << abs(n - noviBroj);


}

int zamjeni(int num)
{
	int trenutnaCifra;
	int noviBroj = 0;
	int brojac = 0;

	while (num > 0)
	{
		trenutnaCifra = num % 10;

		if (trenutnaCifra % 2 == 0) 
		{
			noviBroj = noviBroj + 5 * pow(10.0, brojac);
			brojac++;
			num /= 10;
		}
		else
		{
			noviBroj = noviBroj + trenutnaCifra * pow(10.0, brojac);
			brojac++;
			num /= 10;
		}

	}
	return noviBroj;
}