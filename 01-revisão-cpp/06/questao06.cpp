#include <iostream>

using namespace std;

int main ()
{
	double matrix1[3][3] = {0}, matrix2[3] = {0}, resultado[3] = {0};
	 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "matrix1" <<  endl;
			cin >> matrix1[i][j];
		}
		
		cout << "matrix2" << endl;
		cin >> matrix2[i];
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			resultado[i] += matrix1[i][j]*matrix2[j];
			cout << matrix1[i][j] << " " << matrix2[j] << endl;
 		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << "resultado[ " << i << "]: " << resultado[i] << endl;
	}
	 
	return 0;
}
