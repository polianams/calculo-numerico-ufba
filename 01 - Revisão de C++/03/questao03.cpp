#include <iostream>

using namespace std;

int main ()
{
	double notas[3] = {0}, somaNotas = 0, mediaFinal = 0;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Digite a nota " << i+1 << " do aluno" << endl; 
		cin >> notas[i];
		
		while (notas[i] < 0 || notas[i] > 10)
		{
			cout << "Nota invalida! Digite novamente" << endl;
			cin >> notas[i];
		}
		
		somaNotas = somaNotas + notas[i]; //somaNotas += notas[i]
	}
	
	mediaFinal = somaNotas/3;
	cout << "A media final e: " << mediaFinal << endl;
	
	if (mediaFinal >= 5)
	{
		cout << "Aprovado!!" << endl;
	}
	
	else
	{
		cout << "Reprovado" << endl;
	}
	 
	return 0;
}
