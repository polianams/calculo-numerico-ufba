#include <iostream>

using namespace std;

int main ()
{
	int x = 0, y = 0;
	
	cout << "Digite os valores de x e y" << endl;
	cin >> x >> y;
	
	int soma = x + y;
	cout << "Soma: " << soma << endl;
	
	int subtracao = x - y;
	cout << "Subtracao: " << subtracao << endl;
	
	int multiplicacao = x * y;
	cout << "Multiplicacao: " << multiplicacao << endl;
	
	int divisao = (float)x/y;
	cout << "Divisao: " << divisao << endl;
	
	return 0;
}
