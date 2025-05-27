#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char resposta='f', resposta1, resposta2, resposta3, resposta4, resposta5;
	int  resposta_positiva=0;
	
	while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n')
	{
		cout << endl << "Digite [S] para resposta Positiva e [N] para resposta Negativa!" << endl;
		while (resposta1 != 'S' && resposta1 != 's' && resposta1 != 'N' && resposta1 != 'n')
		{
			cout << endl << "Telefonou para a vítima? ";
			cin >> resposta1;
			if (resposta1=='S' || resposta1=='s') resposta_positiva=resposta_positiva+1;
			else if (resposta1=='N' || resposta1=='n') resposta_positiva=resposta_positiva;
		}
		while (resposta2 != 'S' && resposta2 != 's' && resposta2 != 'N' && resposta2 != 'n')
		{
			cout << endl << "Esteve no local do crime? ";
			cin >> resposta2;
			if (resposta2=='S' || resposta2=='s') resposta_positiva=resposta_positiva+1;
			else if (resposta2=='N' || resposta2=='n') resposta_positiva=resposta_positiva;
		}
		while (resposta3 != 'S' && resposta3 != 's' && resposta3 != 'N' && resposta3 != 'n')
		{
			cout << endl << "Mora perto da vítima? ";
			cin >> resposta3;
			if (resposta3=='S' || resposta3=='s') resposta_positiva=resposta_positiva+1;
			else if (resposta3=='N' || resposta3=='n') resposta_positiva=resposta_positiva;
		}
		while (resposta4 != 'S' && resposta4 != 's' && resposta4 != 'N' && resposta4 != 'n')
		{
			cout << endl << "Devia para a vítima? ";
			cin >> resposta4;
			if (resposta4=='S' || resposta4=='s') resposta_positiva=resposta_positiva+1;
			else if (resposta4=='N' || resposta4=='n') resposta_positiva=resposta_positiva;
		}
		while (resposta5 != 'S' && resposta5 != 's' && resposta5 != 'N' && resposta5 != 'n')
		{
			cout << endl << "Já trabalhou com a vítima? ";
			cin >> resposta5;
			if (resposta5=='S' || resposta5=='s') resposta_positiva=resposta_positiva+1;
			else if (resposta5=='N' || resposta5=='n') resposta_positiva=resposta_positiva;
		}
		resposta = 'S';
	}
	
	if (resposta_positiva==2) cout << endl << "Suspeita!";
	else if (resposta_positiva==3 || resposta_positiva==4) cout << endl << "Cúmplice!";
	else if (resposta_positiva==5) cout << endl << "Assassino!";
	else cout << endl << "Inocente!";
	return 0;
}
