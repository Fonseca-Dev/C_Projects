#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << endl << "Digite o próximo número: ";
	cin >> num2;
	
	if (num1<num2)
	{
		cout << endl << "Os números inteiros compreendidos no intervalo entre os números digitados são: " << endl << endl;
		for (num1=num1+1; num1<num2; num1++)
		{
			cout << num1 << endl;
		}
	}
	else
	{
		cout << endl << "Os números inteiros compreendidos no intervalo entre os números digitados são: " << endl << endl;
		for (num2=num2+1; num2<num1; num2++)
		{
			cout << num2 << endl;
		}
	}
	
	return 0;
}
