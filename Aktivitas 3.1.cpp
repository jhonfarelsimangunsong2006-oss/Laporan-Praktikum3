#include <iostream>
using namespace std;

int main(){
    int x;
    cout << " Masukkan nilai: ";
    cin >> x;
    if (x >= 80){
        cout << "Nilai A";
    }
    else if (x >= 60 && x < 80){
        cout << "Nilai B";
    }
    else if (x >= 40 && x < 60){
        cout << "Nilai C";
    }
    else if (x < 20){
        cout << "Nilai E";
    }
    else{
        cout << "Nilai D";
    }
    return 0;
}
