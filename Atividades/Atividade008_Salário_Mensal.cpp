#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float valor_hora, horas_mes, salario;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o valor que voc� ganha por hora: R$ ";
	cin >> valor_hora;
	cout << endl << "Digite a quantidade de horas trabalhadas no m�s: ";
	cin >> horas_mes;
	salario = valor_hora*horas_mes;
	cout << endl << "O total do seu sal�rio do referido m�s � de R$ " << salario << endl;
	
	return 0;
}
