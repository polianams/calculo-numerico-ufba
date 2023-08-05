#include <iostream>  //cin e cout
#include <vector>    //vector
#include <algorithm> //reverse
#include <stdio.h>   //printf

using namespace std;

int main ()
{
    int numero;
	vector<int> binario;

    cout << "Digite um numero inteiro" << endl; //printf("Digite um numero inteiro: "); 
    cin >> numero; //scanf("%d", &numero);
	
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
	
	for (int i = 0; i < binario.size(); i++)
	{
		cout << binario[i];
	}
	cout << "\n";
	
	return 0;
}
