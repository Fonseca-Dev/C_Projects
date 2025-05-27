#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float tempf, tempc;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite a temperatura em Farenheit: ";
	cin >> tempf;
	tempc = (5*(tempf-32)/9);
	cout << endl << "A temperatura informada em graus Celsius é igual " << tempc << "ºC." << endl;
	return 0;
}
