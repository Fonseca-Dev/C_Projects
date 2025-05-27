#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float num, resultado, num_menor;
	
	cout << "Digite um número: ";
	cin >> num;
	
	
	for(int i=1; i<num; i++)
	{
		if (i==1) resultado = i*num;
		else resultado = resultado*i;
	}
	
	cout << endl << "O resultado fatorial do número informado é " << resultado;
	return 0;
}
