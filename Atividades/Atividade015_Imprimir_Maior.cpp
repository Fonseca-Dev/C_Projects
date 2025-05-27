#include <iostream>
#include <locale>

using namespace std;

int main()
{
	double num1, num2, maior;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite um número: ";
	cin >> num1;
	cout << endl << "Digite outro número: ";
	cin >> num2;
	
	if (num1>num2) maior=num1;
	else maior=num2;
	
	cout << endl << "O maior número digitado foi " << maior << endl;
	
	return 0;
}
