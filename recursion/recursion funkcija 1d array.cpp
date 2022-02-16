/*Napišite program koji će omogućiti kreiranje niza od 7 cijelih brojeva, te uz pomoć rekurzivnih
funkcija omogućiti :
· unos elemenata,
· ispis elemenata,
· izračunati sumu svih elemenata niza,
· sumu pozitivnih elemenata niza,
· sumu elemenata niza s parnim indeksom.*/

#include <iostream>
using namespace std;

void unos(int n[], int v) {

	cout << "Unesi " << v + 1 << ". clan: ";

	if (v == 0)
		cin >> n[v];

	else {
		cin >> n[v];
		unos(n, v - 1);

	}

}

void ispis(int n[], int v) {

	if (v == 0)
		cout << n[v] << " ";

	else {

		cout << n[v] << " ";
		ispis(n, v - 1);

	}

}

int suma(int n[], int v) {

	if (v == 0)
		return n[v];

	else
		return n[v] + suma(n, v - 1);

}

int sumaPozitivnih(int n[], int v) {

	if (v == -1)
		return 0;

	if (n[v] > 0)
		return n[v] + sumaPozitivnih(n, v - 1);

	else
		sumaPozitivnih(n, v - 1);

}

int sumaParniIndeks(int n[], int v) {

	if (v == -1)
		return 0;

	if (v % 2 == 0)
		return n[v] + sumaParniIndeks(n, v - 1);

	else
		sumaParniIndeks(n, v - 1);

}

int main() {

	const int v = 7;
	int n[v];

	unos(n, v - 1);

	cout << "\nClanovi niza su: ";
	ispis(n, v - 1);

	cout << "\n\nSuma clanova niza je " << suma(n, v - 1) << ".";

	cout << "\n\nSuma pozitivnih clanova niza je " << sumaPozitivnih(n, v - 1) << ".";

	cout << "\n\nSuma clanova niza sa parnim indeksom je " << sumaParniIndeks(n, v - 1) << ".";

	system("pause>0");
	return 0;

}
