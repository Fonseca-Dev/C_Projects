#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	
	cout << "Informe o sexo!" << endl;
	cout << endl << "Digite (M) se for Masculino ou (F) se for Feminino: ";
	cin >> sexo;
	
	if (sexo=='M' || sexo=='m') cout << endl << "Masculino";
	else if (sexo=='F' || sexo=='f') cout << endl << "Feminino";
	else cout << endl << "Sexo Inválido";
	
	return 0;
}
