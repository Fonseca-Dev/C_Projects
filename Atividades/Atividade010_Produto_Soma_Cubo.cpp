#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	float num_real, produto, soma, cubo;
	cout << "Digite um n�mero inteiro: ";
	cin >> num1;
	cout << endl << "Digite outro n�mero inteiro: ";
	cin >> num2;
	cout << endl << "Digite um n�mero real: ";
	cin >> num_real;
	produto = (2*num1)*(num2/2);
	soma = (3*num1)+ num_real;
	cubo = num_real*num_real*num_real;
	cout << endl << "O produto do dobro do primeiro com metade do segundo � igual " << produto << endl;
	cout << endl << "A soma do triplo do primeiro com o terceiro � igual " << soma << endl;
	cout << endl << "O n�mero real ao cubo � igual " << cubo << endl;
	return 0;
}
