#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota=-1;
	
	while (nota<0 || nota>10)
	{
		cout << "Digite uma nota de 0 a 10: ";
		cin >> nota;
		if (nota<0 || nota>10) cout << endl << "Nota Inv�lida! " << endl << endl;
	}
	
	cout << endl << "Nota v�lida!" << endl;
	
	return 0;
}
