#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
	string palavra;
	vector<pair<char, int> > paresVogais;
	bool existeVogal = false;
	int contVogais = 0;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Digite a palavra numero " << i+1 << endl;
		cin >> palavra;
		existeVogal = false;
		contVogais = 0;
		
		for (int j = 0; j < palavra.size(); j++)
		{	
			if (tolower(palavra[j]) == 'a' || 
				tolower(palavra[j]) == 'e' ||
				tolower(palavra[j]) == 'i' ||
				tolower(palavra[j]) == 'o' ||
				tolower(palavra[j]) == 'u')
			{
				paresVogais.push_back(make_pair(palavra[j],j+1));
				contVogais++;	
				existeVogal = true;
			}
		}
		
		if (existeVogal)
		{
			cout << palavra << "-> " << contVogais << " vogais: ";
			for (int w = 0; w < paresVogais.size(); w++)
			{
				cout << paresVogais[w].first << "- " << paresVogais[w].second << "| ";
			}
			cout << "\n\n";
			
			paresVogais.clear();
		}
		
		else 
			cout << palavra << "-> nao possui vogais\n" << endl;
	}
	 
	return 0;
}
