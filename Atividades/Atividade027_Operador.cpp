#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double num1, num2, resultado;
	char operador;
	
	cout << "Digite o primeiro número: ";
	cin >> num1;
	cout << endl << "Digite outro número inteiro: ";
	cin >> num2;
	cout << endl << "Qual operação gostaria de realizar entre esses dois números?" << endl;
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
	
	
	cout << endl << "O resultado desta operação é: " << resultado << endl;
	if (((int) resultado)%2==0 || ((int) resultado)%2==0.0) cout << endl << "O valor do resultado é Par!" << endl << endl;
	else cout << endl << "O valor do resultado é Ímpar!" << endl << endl;
	if (resultado>0) cout << "O valor do resultado é Positivo!" << endl;
	else cout << "O valor do resultado é Negativo!" << endl;
	if ( resultado == (int)resultado) cout << endl << "O valor do resultado é Inteiro!" << endl;
	else cout << endl << "O valor do resultado é Decimal!" << endl;
	
	return 0;
}
