#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, n5, soma, media;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> n1;
	cout << endl << "Digite o pr�ximo n�mero: ";
	cin >> n2;
	cout << endl << "Digite o pr�ximo n�mero: ";
	cin >> n3;
	cout << endl << "Digite o pr�ximo n�mero: ";
	cin >> n4;
	cout << endl << "Digite o pr�ximo n�mero: ";
	cin >> n5;
	
	soma = n1+n2+n3+n4+n5;
	media = soma/5;
	
	cout << endl << "A soma dos n�meros digitados �: " << soma << endl;
	cout << endl << "A m�dia dos n�meros digitados �: " << media << endl;
	
	return 0;
}
