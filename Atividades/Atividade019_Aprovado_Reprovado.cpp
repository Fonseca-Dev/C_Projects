#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota1=-1, nota2=-1, media;
	
	while(nota1<0 || nota1>10)
	{
		cout << "Digite a 1ª nota do aluno (de 1 a 10): ";
		cin >> nota1;
	}
	while(nota2<0 || nota2>10)
	{
	cout << endl << "Digite a 2ª nota do aluno (de 1 a 10): ";
	cin >> nota2;
	}
	media = (nota1+nota2)/2;
	
	cout << endl << "A média do aluno foi " << media << endl;
	
	if (media==10) cout << endl << "Aprovado com Distinção!";
	else if (media<7) cout << endl << "Reprovado!";
	else cout << endl << "Aprovado!";
	return 0;
}
