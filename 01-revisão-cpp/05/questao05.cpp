#include <iostream>

using namespace std;

int main ()
{
	double matrix[4][4] = {0}, maiorValor = 0;
	 
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Digite o numero " << endl;
			cin >> matrix[i][j];
		}
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (matrix[i][j] > maiorValor)
			{
				maiorValor = matrix[i][j];
			}
 		}
	}
	
	cout << "O maior valor digitado foi: " << maiorValor << endl;
	 
	return 0;
}
