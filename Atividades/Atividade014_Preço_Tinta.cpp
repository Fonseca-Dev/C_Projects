#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double area, litros, qtde_latas, preco_total;
	cout << "Digite o tamanho da �rea a ser pintada: ";
	cin >> area;
	litros = area/3;
	qtde_latas = litros/18;
	preco_total = qtde_latas * 80.00;
	
	if (qtde_latas == (int)qtde_latas) qtde_latas = qtde_latas;
	else qtde_latas = (int)qtde_latas+1;
	
	cout << endl << "Voc� precisar� comprar " << qtde_latas << " latas de tinta" << endl;
	cout << endl << "Pre�o total � igual R$ " << preco_total << endl;
	
	
	return 0;
}
