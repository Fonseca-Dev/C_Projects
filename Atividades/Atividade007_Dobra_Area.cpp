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
	cout << endl << "A �rea do quadrado � igual " << area << " unidades�." << endl;
	cout << endl << "O dobro da �rea do quadrado � igual " << dobra_area << " unidades�." << endl;
	return 0;
}
