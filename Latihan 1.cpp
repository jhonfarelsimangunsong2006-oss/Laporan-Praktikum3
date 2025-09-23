#include <iostream>
using namespace std;

int main()
{

	int a;
	cout << "Masukkan sebuah bilangan bulat: ";
	cin >> a;
		if (a == 0){
		cout << " bilangan netral.";
		}
		else if (a < 0){
		cout << "  bilangan negatif.";
		}
		else if (a % 2 == 0){
		cout << "  bilangan genap.";
		}
		else{
		cout << "  bilangan ganjil.";
		}
return 0;
}

