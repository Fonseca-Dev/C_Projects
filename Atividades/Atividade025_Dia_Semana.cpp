#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	num=0;
	
	cout << "Digite um n�mero de 1 a 7: ";
	cin >> num;
	
	switch(num)
	{
		case 1: cout << endl << "1-Domingo"; break;
		case 2: cout << endl << "2-Segunda"; break;
		case 3: cout << endl << "3-Ter�a-Feira"; break;
		case 4: cout << endl << "4-Quarta-Feira"; break;
		case 5: cout << endl << "5-Quinta-Feira"; break;
		case 6: cout << endl << "6-Sexta-Feira"; break;
		case 7: cout << endl << "7-S�bado"; break;
		default: cout << endl << "Valor inv�lido"; break;
	}
	
	
	return 0;
}
