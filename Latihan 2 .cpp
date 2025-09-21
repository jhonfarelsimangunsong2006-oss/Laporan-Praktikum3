#include <iostream>
using namespace std;

int main(){
    int a, b, x;
    cout<<"Masukkan 2 bilangan (pisahkan dengan spasi): ";
    cin>>a>>b;

    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"Pilih operasi kalkulator: ";
    cin>>x;

    switch(x){
        case 1: cout<<"Hasil: "<<a+b;
        break;
        case 2: cout<<"Hasil: "<<a-b;
        break;
        case 3: cout<<"Hasil: "<<a*b;
        break;
        case 4: if(b==0){
            cout<<"Hasil: Tidak terdefinisi.";
        }
            else{
                cout<<"Hasil: "<<a/b;
            }
        break;
        default: cout<<"Invalid.";
    }
    return 0;
}
