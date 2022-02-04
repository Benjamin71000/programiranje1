/*
Napisati program koji ce omoguciti korisniku unos broja n(10<=n<=1000).
Ispisati sve brojeve u rangu 0-n koji zadovoljavaju uslove:
-da su prosti
-da su im cifre u rastucem redoslijedu(npr, 149 - ne 175)
*/


#include <iostream>
using namespace std;

bool isPrime(int num)
{
	int counter = 0;

	for (int i = 2; i <= num / 2; i++)
		if (num % i == 0)
			counter++;

	if (counter > 0) return false;
	else return true;
}


bool isSorted(int num)
{
	int current_num = 0;
	int previous_num = 0;
	bool first_num = true;

	do {
		current_num = num % 10;
		num /= 10;

		if (first_num == true && num == 0)
			return true;

		if (first_num == true) {
			previous_num = current_num;
			first_num = false;
			continue;
		}

		if (current_num > previous_num)  //ovde moze biti >= ako necemo da su zadnje dvije cifre jednake
			return false;

		previous_num = current_num;

	} while (num != 0);
	return true;
}

int main() {

	int num;
	do {
		cout << "Unesi n: "; cin >> num;
	} while (num < 10 || num > 1000);

	for (int i = 2; i <= num; i++)
		if (isPrime(i) == true && isSorted(i) == true)
			cout << i << " ";
}
