#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float nota1, nota2, nota3, nota4, media;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite a Nota 1: ";
	cin >> nota1;
	cout << endl << "Digite a Nota 2: ";
	cin >> nota2;
	cout << endl << "Digite a Nota 3: ";
	cin >> nota3;
	cout << endl << "Digite a Nota 4: ";
	cin >> nota4;
	media = (nota1+nota2+nota3+nota4)/4;
	cout << endl << "A média das notas digitadas é igual: " << media << endl;
	return 0;
}
