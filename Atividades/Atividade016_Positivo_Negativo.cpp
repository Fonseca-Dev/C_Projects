#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	cout << "Digite um n�mero: ";
	cin >> num;
	
	if (num>0) cout << endl << "O valor digitado � positivo!";
	else if (num==0) cout << endl << "O valor digitado � neutro!";
	else cout << endl << "O valor digitado � negativo!" << endl;
	
	
	return 0;
}
