#include <iostream>
#include <locale>

using namespace std;

int main()
{
	double raio, area;
	setlocale(LC_ALL, "Portuguese");
	cout << "Informe o valor do raio do círculo: ";
	cin >> raio;
	area = 3.14159*raio*raio;
	cout << endl << "A área desse círculo é igual a " << area  << " unidades²."<< endl;
	return 0;
}
