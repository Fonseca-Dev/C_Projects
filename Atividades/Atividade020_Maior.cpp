#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double num1, num2, num3;
	
	cout << "Digite o 1� n�mero: ";
	cin >> num1;
	cout << endl << "Digite o 2� n�mero: ";
	cin >> num2;
	cout << endl << "Digite o 3� n�mero: ";
	cin >> num3;
	
	if (num1>num2 && num1>num3) cout << endl << "O maior n�mero digitado foi " << num1 << endl;
	else if (num2>num1 && num2>num3) cout << endl << "O maior n�mero digitado foi " << num2 << endl;
	else cout << endl << "O maior n�mero digitado foi " << num3 << endl;
	return 0;
}
