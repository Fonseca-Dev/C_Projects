#include <iostream>
#include <locale>

using namespace std;

int main()
{
	double altura, peso_ideal;
	char genero;
	setlocale(LC_ALL, "Portuguese");
	cout << "Informe seu sexo!" << endl;
	cout << endl << "Digite (H) se for Homem ou (M) se for Mulher: ";
	cin >> genero;
	cout << endl << "Digite sua altura: ";
	cin >> altura;
	
	if (genero == 'H') peso_ideal = (72.7* altura)-58;
	else peso_ideal = (62.1*altura)-44.7;
	
	cout << endl << "Em relação a sua altura, o peso ideal seria " << peso_ideal << " Kg." << endl;
	return 0;
}
