#include <iostream>

using namespace std;

int main ()
{
	int valores[10] = {0}, maiorValor = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Digita o valor " << i+1 << " :" << endl;
		cin >> valores[i];
	} 
	
	for (int i = 0; i < 10; i++)
	{
		if (valores[i] > maiorValor)
		{
			maiorValor = valores[i];
		}
	}
	cout << "O maior valor do vetor e: " << maiorValor << endl;
	 
	return 0;
}
