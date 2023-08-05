#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
    string binario;
	int decimal = 0;

	cout << "Digite o numero em binario: " << endl;
	cin >> binario;
	
	//Primeira maneira de calcular o valor em decimal
	for (int i = 0; i < binario.size(); i++)
	{
		if (binario[i] == '1')
		{
			decimal += pow(2, binario.size() - 1 - i);
		}
	}
	cout << "O valor em decimal e: " << decimal << endl;
	
	//Outra maneira de calcular o valor em decimal
	int decimal2 = std::stoi (binario, nullptr, 2);
	cout << "O valor em decimal e: " << decimal2 << endl;

	return 0;
}