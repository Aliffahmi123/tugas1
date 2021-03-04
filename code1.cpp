//menentukan bilangan positif , negatif dan nol
#include <iostream>

using namespace std ;

int main(int argc, char const *argv[])
{
	int l;
	cout << "masukkan angka : " ;
	cin >> l ;

	while (l == 0)
	{
		cout << "Ini bilangan Nol";
	}
	while(l < 0)
	{
		cout << "ini bilangan negatif";
	}
	while (l > 0 )
	{
		cout << "ini bilangan positif";
	}
	while
	{
		cout << "Ini huruf lo bukan angka eeeee";
	}
	return 0;
}
