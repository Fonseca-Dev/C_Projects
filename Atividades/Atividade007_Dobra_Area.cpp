#include <iostream>
#include <locale>

using namespace std;

int main()
{
	double lado, area, dobra_area;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite o valor do lado do quadrado: ";
	cin >> lado;
	area = lado*lado;
	dobra_area = 2*area;
	cout << endl << "A área do quadrado é igual " << area << " unidades²." << endl;
	cout << endl << "O dobro da área do quadrado é igual " << dobra_area << " unidades²." << endl;
	return 0;
}
