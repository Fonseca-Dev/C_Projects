#include <iostream>
#include <locale>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, dz;
	num1=101;
	num2=101;
	int resultado, restoun, modulo;
	string unidade, dezena;
	
	
	while (num1>100 || num1<0)
	{
		
		cout << "Digite o valor a receber: " << endl;
		cin >> num1;		
		
	}
	
	while (num2>100 || num2<0)
	{
		
		cout << "Digite o valor recebido: " << endl;
		cin >> num2;		
		
	}
	resultado = num1 - num2;
	
	
	
	if (resultado>=0) modulo = resultado;
	else modulo = (resultado*-1);
	dz = modulo/10;
	restoun = modulo%10;
	
	switch (dz)
		{
			case 2: dezena = "Vinte ";
			break;
			case 3: dezena = "Trinta ";
			break;
			case 4: dezena = "Quarenta ";
			break;
			case 5: dezena = "Cinquenta ";
			break;
			case 6: dezena = "Sessenta ";
			break;
			case 7: dezena = "Setenta ";
			break;
			case 8: dezena = "Oitenta ";
			break;
			case 9: dezena = "Noventa ";
			break;
		}
		
	
		
	if (modulo>20 && modulo<100)
	{
		switch (restoun)
		{
			case 1: unidade = "e Um.";
			break;
			case 2: unidade = "e Dois.";
			break;
			case 3: unidade = "e Três.";
			break;
			case 4: unidade = "e Quatro.";
			break;
			case 5: unidade = "e Cinco.";
			break;
			case 6: unidade = "e Seis.";
			break;
			case 7: unidade = "e Sete.";
			break;
			case 8: unidade = "e Oito.";
			break;
			case 9: unidade = "e Nove.";
			break;
		}
			
	}
	
	else if (modulo<10)
	{
		switch (modulo)
		{
			case 1: unidade = "Um.";
			break;
			case 2: unidade = "Dois.";
			break;
			case 3: unidade = "Três.";
			break;
			case 4: unidade = "Quatro.";
			break;
			case 5: unidade = "Cinco.";
			break;
			case 6: unidade = "Seis.";
			break;
			case 7: unidade = "Sete.";
			break;
			case 8: unidade = "Oito.";
			break;
			case 9: unidade = "Nove.";
			break;
		}
	}
	
	else if (modulo>10 && modulo<20)
	{
		switch (modulo)
		{
			case 11: unidade = "Onze.";
			break;
			case 12: unidade = "Doze.";
			break;
			case 13: unidade = "Treze.";
			break;
			case 14: unidade = "Quartoze.";
			break;
			case 15: unidade = "Quinze.";
			break;
			case 16: unidade = "Dezesseis.";
			break;
			case 17: unidade = "Dezessete.";
			break;
			case 18: unidade = "Dezoito.";
			break;
			case 19: unidade = "Dezenove.";
			break;
		}
	}
	
	else if(modulo%10 == 0)
	{
		switch (modulo)
		{
			case 10: dezena = "Dez.";
			break;
			case 20: dezena = "Vinte.";
			break;
			case 30: dezena = "Trinta.";
			break;
			case 40: dezena = "Quarenta.";
			break;
			case 50: dezena = "Cinquenta.";
			break;
			case 60: dezena = "Sessenta.";
			break;
			case 70: dezena = "Setenta.";
			break;
			case 80: dezena = "Oitenta.";
			break;
			case 90: dezena = "Noventa.";
			break;
			case 100: dezena = "Cem.";
			break;
		}
	}
	
	if (resultado >=0){
		cout << "O resultado é " << resultado << endl;
    	cout << "Valor textual: " << dezena << unidade; 
	}
	else {
		cout << "O resultado é " << resultado << endl;
    	cout << "Valor textual: Menos " << dezena << unidade;
	}
	
	return 0;
}
