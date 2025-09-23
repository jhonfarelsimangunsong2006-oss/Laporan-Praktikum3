#include<iostream>
using namespace std;
int main()
{
	int A=15, B=4, temp;
	cout << "Nilai A sebelum ditukar: " << A << ", "<< "Nilai B sebelum ditukar: " << B << endl;
	temp = A;
	A = B;
	B = temp;
	cout << "Nilai A setelah ditukar: " << A << ", " << "Nilai B setelah ditukar: " << B;
	return 0;

}
