#include <iostream>
#include <locale>

using namespace std;

int main()
{
	double raio, area;
	setlocale(LC_ALL, "Portuguese");
	cout << "Informe o valor do raio do c�rculo: ";
	cin >> raio;
	area = 3.14159*raio*raio;
	cout << endl << "A �rea desse c�rculo � igual a " << area  << " unidades�."<< endl;
	return 0;
}
