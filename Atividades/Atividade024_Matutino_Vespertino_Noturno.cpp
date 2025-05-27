#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char turno;
	
	cout << "Em que turno você estuda?" << endl;
	cout << endl << "Digite [M] se você estuda no Matutino." << endl;
	cout << endl << "Digite [V] se você estuda no Vespertino." << endl;
	cout << endl << "Digite [N] se você estuda no Noturno." << endl;
	cout << endl;
	cin >> turno;
	
	if (turno == 'M' || turno == 'm') cout << endl << "Bom Dia!" << endl;
	else if (turno == 'V' || turno == 'v') cout << endl << "Boa Tarde!" << endl;
	else if (turno == 'N' || turno == 'n') cout << endl << "Boa Noite!" << endl;
	else cout << endl << "Valor Inválido!" << endl;
	
	return 0;
}
