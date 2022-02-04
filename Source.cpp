#include <iostream>
using namespace std;
int main()
{
	float suma = 0;
	int n;
	while (cout << "Unesite n: ", cin >> n, n < 0);

	for (int i = 1; i <= n; i++)
		suma += 1 / pow(2 * i + 1, 2);

	cout << "Suma je: " << suma;
}