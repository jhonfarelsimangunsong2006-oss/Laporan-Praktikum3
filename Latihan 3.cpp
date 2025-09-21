#include<iostream>
#include<string>
using namespace std;
int main()
{
    string username;
    int pin;

    cout<< "Masukkan username: ";
    cin>>username;
    cout<< "Masukkan pin: ";
    cin>>pin;
    if(username != "ugo")
        {
        cout<<"username tidak dikenal"<<endl;
    }
        if (pin < 0 || pin > 999)
            {
                cout<<"pin tidak valid"<<endl;

            }
        else{
            cout<<"akses diterima"<<endl;
        }
        return 0;

}
