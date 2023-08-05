#include <iostream>
#include <cmath>

using namespace std;

//Funcao para verificar x0 (só precisa imprimir mensagem na tela)
void verificaX0 (int x0)
{
	double derivada = 1/(3*pow(x0+1,2/3.0));
	if (fabs(derivada) <= 1)
	{
		cout << "Converge" << endl;
	}
	
	else
	{
		cout << "Nao converge" << endl;
	}
}

//Calculo de f(x)
double fx (double x)
{
	return pow(x,3) - x - 1;
}

//Calculo de phi(x)
double phi (double x)
{
	return pow((x+1), 1/3.0);
}

//Criterio de parada - retorna true ou false
bool criterio_parada (double x_ant, double x_prox, double eps)
{
	if (fabs(x_prox - x_ant) < eps) return true;
	else return false;
}

//Main
int main ()
{
	double a, b, eps, x_ant, x_prox;
	cin >> a >> b >> eps;
	
	//Verifica se x0 = 1 eh valido -> chamando a funcao implementada
	verificaX0 (1.0);
	x_ant = 0;
	x_prox = 1.0; //atribuindo para entrar no loop
	
	cout << "x: " << x_ant << endl; //primeira raiz aproximada
	while (criterio_parada (x_ant, x_prox, eps) == false)
	{
		x_ant = x_prox;
		x_prox = phi(x_ant);
		cout << "x: " << x_prox << endl;
	}
	cout << "A raiz final eh: " << x_prox << endl;
	
	return 0;
}