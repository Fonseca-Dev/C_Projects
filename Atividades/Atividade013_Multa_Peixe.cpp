#include <iostream>
#include <locale>

using namespace std;

int main()
{
	double peso_peixe, excesso, multa;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o peso do(s) peixe(s): ";
	cin >> peso_peixe;
	
	if(peso_peixe>50)
	{
		excesso = peso_peixe - 50;
		multa = excesso*4;
		cout << endl << "O peso do(s) peixe(s) foi de: " << peso_peixe << " Kg" << endl;
		cout << endl << "Teve um excedente de " << excesso << " Kg" << endl;
		cout << endl << "Portanto deverá pagar multa no valor de R$ " << multa << endl;
	}
	else
	{
		cout << endl << "O peso do(s) peixe(s) foi de: " << peso_peixe << " Kg" << endl;
		cout << endl << "Portanto não precisará pagar multa!" << endl;
	}
	return 0;
}
