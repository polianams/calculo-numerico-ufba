#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> decimal_para_binario (int numero)
{
	vector<int> binario;
	if (numero == 0)
		binario.push_back(0);
		
	else
	{
		while (numero != 1)
		{
			binario.push_back(numero%2);
			numero = numero/2;
		}
		binario.push_back(1);
		reverse(binario.begin(), binario.end());
	}
	
	for (uint i = 0; i < binario.size(); i++)
	{
		cout << binario[i];
	}
	cout << "\n";
	
	return binario;
}

vector<int> decimal_fracionario_para_binario (float numero)
{
	vector<int> binario, binarioFrac;

	int parteInteira = numero;
	cout << "Parte Inteira: " << parteInteira << endl;

	float parteFrac = numero - parteInteira;
	cout << "Parte Fracionaria: " << parteFrac << endl;
	
	binario = decimal_para_binario (parteInteira);
	
	//Parte Fracionaria
	while (parteFrac != 0)
	{
		parteInteira = parteFrac*2;
		parteFrac = parteFrac*2 - parteInteira;
		binarioFrac.push_back(parteInteira);
	}

	uint pontoPOS = binario.size();
	binario.insert(binario.end(), binarioFrac.begin(), binarioFrac.end());
	
	//Impressao
	for (uint i = 0; i < binario.size(); i++)
	{
		if (i == pontoPOS)
			cout << ".";
		cout << binario[i];
	}
	cout << "\n";
	
	
	return binario;
}

int main ()
{
    float numero;
    cin >> numero;
    
    int inteiro = numero;
    
    if (numero - inteiro != 0)
    {
		decimal_fracionario_para_binario (numero);
	}
	
	else
	{
		decimal_para_binario (inteiro);
	}

	return 0;
}