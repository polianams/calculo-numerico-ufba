#include <iostream>

using namespace std;

int main ()
{
	int numero = 0;
	cout << "Digite um numero inteiro: " << endl;
	cin >> numero;
	
	for (int i = 1; i <= numero; i++)
	{
		if (i%2 != 0)
		{
			cout << "Impar: " << i << endl; 
		}
	}
	 
	return 0;
}
