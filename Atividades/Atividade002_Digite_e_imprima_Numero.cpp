#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float num;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite um n�mero: ";
	cin >> num;
	cout << endl << "O n�mero digitado foi: " << num << endl;
}
