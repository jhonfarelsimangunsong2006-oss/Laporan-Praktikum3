#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> x;
    if (x < 1){
        cout << "Invalid. Bilangan yang dimasukkan salah!";
    } else if (x % 2 == 0 && x != 2) {
            cout << x << " Tidak bilangan prima.";
    } else {
            cout << x << " bilangan prima.";
    }

    return 0;
    }

