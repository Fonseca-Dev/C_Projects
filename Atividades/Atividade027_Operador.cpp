#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double num1, num2, resultado;
	char operador;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> num1;
	cout << endl << "Digite outro n�mero inteiro: ";
	cin >> num2;
	cout << endl << "Qual opera��o gostaria de realizar entre esses dois n�meros?" << endl;
	cout << endl << "Digite [+] para Somar!" << endl;
	cout << endl << "Digite [-] para Subtrair!" << endl;
	cout << endl << "Digite [x] para Multiplicar!" << endl;
	cout << endl << "Digite [/] para Dividir!" << endl << endl;
	cin >> operador;
	
	cout << endl << "Operador digitado: " << operador << endl;
	
	if (operador=='+') resultado = num1+num2;
	else if (operador=='-') resultado = num1-num2;
	else if (operador=='x' || operador=='X' || operador=='*') resultado = num1*num2;
	else if (operador=='/') 
	{
		if (num2 !=0) resultado = num1/num2;
	}
	
	
	cout << endl << "O resultado desta opera��o �: " << resultado << endl;
	if (((int) resultado)%2==0 || ((int) resultado)%2==0.0) cout << endl << "O valor do resultado � Par!" << endl << endl;
	else cout << endl << "O valor do resultado � �mpar!" << endl << endl;
	if (resultado>0) cout << "O valor do resultado � Positivo!" << endl;
	else cout << "O valor do resultado � Negativo!" << endl;
	if ( resultado == (int)resultado) cout << endl << "O valor do resultado � Inteiro!" << endl;
	else cout << endl << "O valor do resultado � Decimal!" << endl;
	
	return 0;
}
