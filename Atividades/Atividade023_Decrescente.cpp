#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3;
	
	cout << "Digite o 1� n�mero: ";
	cin >> num1;
	cout << endl << "Digite o 2� n�mero: ";
	cin >> num2;
	cout << endl << "Digite o 3� n�mero: ";
	cin >> num3;
	
	if (num1<num2 && num1<num3)
	{
		if (num2<num3)
		cout << endl << "Os n�meros digitados em ordem decrescente � " << num3 << " , " << num2 << " , " << num1;
		else cout << endl << "Os n�meros digitados em ordem decrescente � " << num2 << " , " << num3 << " , " << num1;
	}
	else if (num2<num1 && num2<num3)
	{
		if (num1<num3)
		cout << endl << "Os n�meros digitados em ordem decrescente � " << num3 << " , " << num1 << " , " << num2;
		else cout << endl << "Os n�meros digitados em ordem decrescente � " << num1 << " , " << num3 << " , " << num2;
	}
	else if (num3<num2 && num3<num1)
	{
		if (num1<num2)
		cout << endl << "Os n�meros digitados em ordem decrescente � " << num2 << " , " << num1 << " , " << num3;
		else cout << endl << "Os n�meros digitados em ordem decrescente � " << num1 << " , " << num2 << " , " << num3;
	}
	
	return 0;
}
