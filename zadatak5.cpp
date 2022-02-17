#include <iostream>
using namespace std;

int obrniBroj(int);

int main() 
{
	int A, B;
	while (cout << "Unesite A: ", cin >> A, A < 100000);
	
	B = obrniBroj(A);
	cout << "A = " << A;
	cout << "B = " << B;
}

int obrniBroj(int num)
{
	int trenutna_cifra = 0;
	int novi_broj = 0;

	while (num > 0)    // obavezno while / do while loop!!! mora imati koliko puta ovo odradit
	{
		trenutna_cifra = num % 10;
		if (trenutna_cifra % 2 == 0)
			num = num / 10;
		else 
		{
			novi_broj = novi_broj * 10 + trenutna_cifra;
			num = num / 10;
		}
	}
	return novi_broj;
}
