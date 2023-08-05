#include <iostream>  //cin e cout
#include <vector>    //vector
#include <algorithm> //reverse
#include <stdio.h>   //printf

using namespace std;

int main ()
{
    float numero;
	vector<int> binario, binarioFrac;
    cout << "Digite um numero inteiro" << endl;  //printf("Digite um numero inteiro: ");
    cin >> numero;								 //scanf("%f", &numero);

	int parteInteira = numero;
	cout << "Parte Inteira: " << parteInteira << endl;

	float parteFrac = numero - parteInteira;
	cout << "Parte Fracionaria: " << parteFrac << endl;
	
	//Parte Inteira
	if (parteInteira == 0)
		binario.push_back(0);
	
	else
	{
		while (parteInteira != 1)
		{
			binario.push_back(parteInteira%2);
			parteInteira = parteInteira/2;
		}
		binario.push_back(1);
		reverse(binario.begin(), binario.end());
	}
	
	//Parte Fracionaria
	while (parteFrac != 0)
	{
		parteInteira = parteFrac*2;
		parteFrac = parteFrac*2 - parteInteira;
		binarioFrac.push_back(parteInteira);
	}

	//Impressao
	for (int i = 0; i < binario.size(); i++)
	{
		cout << binario[i];
	}
	cout << ".";
	for (int i = 0; i < binarioFrac.size(); i++)
	{
		cout << binarioFrac[i];
	}
	cout << "\n";
	
	return 0;
}