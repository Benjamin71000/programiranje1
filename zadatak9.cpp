#include <iostream>
#include <time.h>
using namespace std;

int bacanjeKocke()
{
	int kocka;
	kocka = rand() % 6 + 1;
	return kocka;
}

int main()
{
	srand(time(NULL));

	int bacanje = 0;
	int case1 = 0, case2 = 0, case3 = 0,
		case4 = 0, case5 = 0, case6 = 0;
	int num;

	do {
		cout << "Unesite n: "; cin >> num;
	} while (num <= 10 || num >= 1000);

	while (bacanje < num)
	{
		int kocka = bacanjeKocke();

		switch (kocka) 
		{
		case 1: case1++; break;
		case 2: case2++; break;
		case 3: case3++; break;
		case 4: case4++; break;
		case 5: case5++; break;
		case 6: case6++; break;
		default: cout << "Unos nije tacan.";
		}

		cout << kocka << " ";
		bacanje++;
	}

	cout << endl;
	cout << "procenat bacanja za broj 1: " << (100 * double(case1) / num * 100) / 100 << "%" << endl;
	cout << "procenat bacanja za broj 2: " << (100 * double(case2) / num * 100) / 100 << "%" << endl;
	cout << "procenat bacanja za broj 3: " << (100 * double(case3) / num * 100) / 100 << "%" << endl;
	cout << "procenat bacanja za broj 4: " << (100 * double(case4) / num * 100) / 100 << "%" << endl;
	cout << "procenat bacanja za broj 5: " << (100 * double(case5) / num * 100) / 100 << "%" << endl;
	cout << "procenat bacanja za broj 6: " << (100 * double(case6) / num * 100) / 100 << "%" << endl;



}