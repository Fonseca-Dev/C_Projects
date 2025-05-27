#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double preco1, preco2, preco3;
	
	cout << "Qual preço do produto A? ";
	cin >> preco1;
	cout << endl << "Qual o preço do produto B? ";
	cin >> preco2;
	cout << endl << "Qual o preço do produto C? ";
	cin >> preco3;
	
	if (preco1<preco2 && preco1<preco3) cout << endl << "Você deve comprar o produto A! " << endl;
	else if (preco2<preco1 && preco2<preco3) cout << endl << "Você deve comprar o produto B! " << endl;
	else cout << endl << "Você deve comprar o produto C! " << endl;
	
	return 0;
}
