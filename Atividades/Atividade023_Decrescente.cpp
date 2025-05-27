#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3;
	
	cout << "Digite o 1º número: ";
	cin >> num1;
	cout << endl << "Digite o 2º número: ";
	cin >> num2;
	cout << endl << "Digite o 3º número: ";
	cin >> num3;
	
	if (num1<num2 && num1<num3)
	{
		if (num2<num3)
		cout << endl << "Os números digitados em ordem decrescente é " << num3 << " , " << num2 << " , " << num1;
		else cout << endl << "Os números digitados em ordem decrescente é " << num2 << " , " << num3 << " , " << num1;
	}
	else if (num2<num1 && num2<num3)
	{
		if (num1<num3)
		cout << endl << "Os números digitados em ordem decrescente é " << num3 << " , " << num1 << " , " << num2;
		else cout << endl << "Os números digitados em ordem decrescente é " << num1 << " , " << num3 << " , " << num2;
	}
	else if (num3<num2 && num3<num1)
	{
		if (num1<num2)
		cout << endl << "Os números digitados em ordem decrescente é " << num2 << " , " << num1 << " , " << num3;
		else cout << endl << "Os números digitados em ordem decrescente é " << num1 << " , " << num2 << " , " << num3;
	}
	
	return 0;
}
