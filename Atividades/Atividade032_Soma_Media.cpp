#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, n5, soma, media;
	
	cout << "Digite o primeiro número: ";
	cin >> n1;
	cout << endl << "Digite o próximo número: ";
	cin >> n2;
	cout << endl << "Digite o próximo número: ";
	cin >> n3;
	cout << endl << "Digite o próximo número: ";
	cin >> n4;
	cout << endl << "Digite o próximo número: ";
	cin >> n5;
	
	soma = n1+n2+n3+n4+n5;
	media = soma/5;
	
	cout << endl << "A soma dos números digitados é: " << soma << endl;
	cout << endl << "A média dos números digitados é: " << media << endl;
	
	return 0;
}
