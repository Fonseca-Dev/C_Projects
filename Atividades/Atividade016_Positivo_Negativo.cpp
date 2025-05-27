#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	cout << "Digite um número: ";
	cin >> num;
	
	if (num>0) cout << endl << "O valor digitado é positivo!";
	else if (num==0) cout << endl << "O valor digitado é neutro!";
	else cout << endl << "O valor digitado é negativo!" << endl;
	
	
	return 0;
}
