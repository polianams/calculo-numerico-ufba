#include <iostream>

using namespace std;

int main ()
{
	double baseMaior = 0, baseMenor = 0, altura = 0;
	cout << "Entre com os valores de base maior, base menor e altura do trapezio" << endl;
	cin >> baseMaior >> baseMenor >> altura;
	
	double areaTrapezio = ((baseMaior + baseMenor) * altura)/2;
	cout << "A area do trapezio e: " << areaTrapezio << endl;
	 
	return 0;
}
