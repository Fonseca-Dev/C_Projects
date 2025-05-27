#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, numero_impar=0, numero_par=0;
	
		cout << "Digite o primeiro numero inteiro: ";
		cin >> n1;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n2;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n3;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n4;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n5;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n6;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n7;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n8;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n9;
		cout << endl << "Digite o próximo número inteiro: ";
		cin >> n10;
	
	if (n1%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n2%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n3%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n4%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n5%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n6%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n7%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n8%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n9%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	if (n10%2==0) numero_par = numero_par+1;
	else numero_impar = numero_impar+1;
	
	cout << endl << "Foram digitados " << numero_par << " números pares!" << endl;
	cout << endl << "Foram digitados " << numero_impar << " números ímpares!" << endl;	
	
	return 0;
}
