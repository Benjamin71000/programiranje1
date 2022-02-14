#include <iostream>
using namespace std;

int fibonacci(int num)
{
	if (num < 2)
		return num;
	
		return fibonacci(num - 1) + fibonacci(num - 2);
}

int main()
{
	int broj;
	cout << "Koji clan fibonaccijevog niza zelite izracunati: "; cin >> broj;

	cout << endl << broj << ". clan fibonaccijevog niza je: " << fibonacci(broj) << endl << endl;

	for (int i = 1; i <= broj; i++)
		cout << fibonacci(i) << " ";	
}