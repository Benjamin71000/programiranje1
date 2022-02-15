#include<iostream>
/*
Napišite program koji korištenjem
rekurzivne funkcije ispisuje binarni
ekvivalent unesenog prirodnog broja N.
*/
using namespace std;


void binarniBroj_recursive(int n)
{
    // base case
    if (n <= 0)
        return;

    // recursive case
    binarniBroj_recursive(n / 2);
    cout << n % 2;
}



int main()
{
    int n;


    do {
        cout << "Unesite neki broj za ispis binarno: ";
        cin >> n;
    } while (n <= 0);

    binarniBroj_recursive(n);

    system("pause>0");
    return 0;
}