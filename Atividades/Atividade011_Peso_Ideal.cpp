#include <iostream>
#include <locale>

using namespace std;

int main()
{
	double altura, peso_ideal;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite sua altura: ";
	cin >> altura;
	peso_ideal = (72.7*altura)-58;
	cout << endl << "Em relação a sua altura, o peso ideal seria " << peso_ideal << " Kg." << endl;
	return 0;
}
