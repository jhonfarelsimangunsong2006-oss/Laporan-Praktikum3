#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> a;
    if (a < 1){
        cout << "Invalid. Bilangan yang dimasukkan salah!";
    } else if (a % 2 == 0 && a != 2) {
            cout << a << " Tidak bilangan prima.";
    } else {
            cout << a << " bilangan prima.";
    }

    return 0;
    }


