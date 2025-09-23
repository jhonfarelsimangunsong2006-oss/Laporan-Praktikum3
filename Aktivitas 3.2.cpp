#include <iostream>
using namespace std;

int main (){
    int a;
    cout << "Masukkan bilangan bulat di bawah 200: ";
    cin >> a;
    if (a > 200){
        cout << " Invalid";
    }
    else if (a < 2){
        cout << " tidak bilangan prima.";
    }
    else if (a == 2 || a == 3 || a == 5 || a == 7 || a == 11 || a == 13 || a == 17){
        cout << "  bilangan prima.";
    }
    else if (a % 2 == 0){
        cout << " tidak bilangan prima.";
    }
    else if (a % 3 == 0){
        cout << " tidak bilangan prima.";
    }
    else if (a % 5 == 0){
        cout << " tidak bilangan prima.";
    }
    else if (a % 7 == 0){
        cout << a << " bukan bilangan prima.";
    }
    else if (a % 11 == 0){
        cout << a << " bukan bilangan prima.";
    }
    else if (a % 13 == 0){
        cout << a << " bukan bilangan prima.";
    }
    else{
        cout << a << " adalah bilangan prima.";
    }
return 0;}



