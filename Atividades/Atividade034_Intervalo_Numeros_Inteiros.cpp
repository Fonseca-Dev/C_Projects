#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << endl << "Digite o pr�ximo n�mero: ";
	cin >> num2;
	
	if (num1<num2)
	{
		cout << endl << "Os n�meros inteiros compreendidos no intervalo entre os n�meros digitados s�o: " << endl << endl;
		for (num1=num1+1; num1<num2; num1++)
		{
			cout << num1 << endl;
		}
	}
	else
	{
		cout << endl << "Os n�meros inteiros compreendidos no intervalo entre os n�meros digitados s�o: " << endl << endl;
		for (num2=num2+1; num2<num1; num2++)
		{
			cout << num2 << endl;
		}
	}
	
	return 0;
}
