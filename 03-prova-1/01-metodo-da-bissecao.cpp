#include <cmath>     //math.h
#include <iostream>

using namespace std;

//Funcao para calcular f(x)
double f (double x)
{
	double fx = 4*pow(x, 3) - 5*x - 1.5;
	return fx;
}

//Main
int main ()
{
	double a = 0, b = 0, eps = 0, x = 0;
	
	cout << "Digite os valores a, b e epsilon: " << endl;
	cin >> a >> b >> eps;

	while (fabs(b-a) > eps)
	{

		x = (a+b)/2;

		//Caso x seja a raiz
		if (f(a) * f(x) == 0)
		{
			cout << "O valor final de x: " << x << endl;
			cout << "|b - a|: " << fabs(b-a) << endl << endl;
			return 0;
		}

		//Se a raiz tiver no lado esquerdo
		else if (f(a) * f(x) < 0)
		{
			b = x;
		}
		
		//Se a raiz tiver no lado direito
		else 
		{
			a = x;
		}
		
		cout << "x: " << x << endl;
		cout << "|b - a|: " << fabs(b-a) << endl << endl;
	}
	
	//Quando o criterio for atingido, sai do WHILE e calcula o ponto medio final
	x = (a+b)/2;
	cout << "O valor final de x: " << x << endl;
	
	return 0;
}
