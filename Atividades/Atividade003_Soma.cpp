#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float num1, num2, soma;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite um número: ";
	cin >> num1;
	cout << endl << "Digite outro número: ";
	cin >> num2;
	soma = num1 + num2;
	cout << endl << "O resultado da soma destes números é igual: " << soma << endl;
	return 0;
}
