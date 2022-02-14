#include <iostream>
using namespace std;

int sumaKvadrata(int n, int m)
{
	if (n < 0 || m < 0)
		return -1;
	if (n > m)
		return -2;

	if (n == m)
		return n * n;

	return n * n + sumaKvadrata(n + 1, m);
}

int main()
{
	int n, m;
	cout << "Unesite n i m: "; cin >> n >> m;

	cout << sumaKvadrata(n, m);
}