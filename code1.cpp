//menentukan bilangan positif , negatif dan nol
#include <iostream>

using namespace std ;

int main(int argc, char const *argv[])
{
	int l;
	cout << "masukkan angka : " ;
	cin >> l ;

	if (l == 0)
	{
		cout << "Ini bilangan Nol";
	}
	else if (l < 0)
	{
		cout << "ini bilangan negatif";
	}
	else if (l > 0 )
	{
		cout << "ini bilangan positif";
	}
	else
	{
		cout << "Ini huruf lo bukan angka eeeee";
	}
	return 0;
}
