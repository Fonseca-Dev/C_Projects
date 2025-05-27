#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float num;
	setlocale(LC_ALL, "Portuguese");
	cout << "Digite um número: ";
	cin >> num;
	cout << endl << "O número digitado foi: " << num << endl;
}
