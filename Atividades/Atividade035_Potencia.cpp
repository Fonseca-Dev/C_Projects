#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, potencia;
	
	cout << "Digite o n�mero Base: ";
	cin >> num1;
	cout << endl << "Digite o n�mero Expoente: ";
	cin >> num2;
	
	for (int num=1; num<num2; num++)
		{
			if (num==1) potencia = num1*num1;
			else potencia = potencia*num1;
			
			 
		}
		
		
	cout << endl << "O resultado de " << num1 << " elevado a " << num2 << " �: " << potencia;
		
	return 0;
}
