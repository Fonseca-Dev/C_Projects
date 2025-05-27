#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num=-1, unidade, dezena, centena, dezena_cem;
	string un, dz, ctn, df, un_resto, ml;
		
		while (num<0 || num>1000)
		{
			cout << "Digite um número de 0 a 1000: ";
			cin >> num;
			
		}
		
		dezena = num/10;
		unidade = num%10;
		centena = num/100;
		dezena_cem = num%100;
			
			if (num<10)
			{
			
				switch(num)
				{
					case 0: un = "0 Unidade"; break;
					case 1: un = "1 Unidade"; break;
					case 2: un = "2 Unidades"; break;
					case 3: un = "3 Unidades"; break;
					case 4: un = "4 Unidades"; break;
					case 5: un = "5 Unidades"; break;
					case 6: un = "6 Unidades"; break;
					case 7: un = "7 Unidades"; break;
					case 8: un = "8 Unidades"; break;
					case 9: un = "9 Unidades"; break;
				}
			}
			
			else if (num>9 && num<100)
			{
				switch(unidade)
				{
					case 1: un = " e 1 Unidade"; break;
					case 2: un = " e 2 Unidades"; break;
					case 3: un = " e 3 Unidades"; break;
					case 4: un = " e 4 Unidades"; break;
					case 5: un = " e 5 Unidades"; break;
					case 6: un = " e 6 Unidades"; break;
					case 7: un = " e 7 Unidades"; break;
					case 8: un = " e 8 Unidades"; break;
					case 9: un = " e 9 Unidades"; break;
				}
				switch(dezena)
				{
					case 1: dz = "1 Dezena"; break;
					case 2: dz = "2 Dezenas"; break;
					case 3: dz = "3 Dezenas"; break;
					case 4: dz = "4 Dezenas"; break;
					case 5: dz = "5 Dezenas"; break;
					case 6: dz = "6 Dezenas"; break;
					case 7: dz = "7 Dezenas"; break;
					case 8: dz = "8 Dezenas"; break;
					case 9: dz = "9 Dezenas"; break;
				}
			}
			
			else if (num>=100 && num<=1000)
			{
				switch(unidade)
				{
					case 1: un = " e 1 Unidade"; break;
					case 2: un = " e 2 Unidades"; break;
					case 3: un = " e 3 Unidades"; break;
					case 4: un = " e 4 Unidades"; break;
					case 5: un = " e 5 Unidades"; break;
					case 6: un = " e 6 Unidades"; break;
					case 7: un = " e 7 Unidades"; break;
					case 8: un = " e 8 Unidades"; break;
					case 9: un = " e 9 Unidades"; break;
				}
				
				if(dezena_cem>=10 && dezena_cem<=19) dz = " e 1 Dezena";
				else if (dezena_cem>=20 && dezena_cem<=29) dz = " e 2 Dezenas";
				else if (dezena_cem>=30 && dezena_cem<=39) dz = " e 2 Dezenas";
				else if (dezena_cem>=40 && dezena_cem<=49) dz = " e 2 Dezenas";
				else if (dezena_cem>=50 && dezena_cem<=59) dz = " e 2 Dezenas";
				else if (dezena_cem>=60 && dezena_cem<=69) dz = " e 2 Dezenas";
				else if (dezena_cem>=70 && dezena_cem<=79) dz = " e 2 Dezenas";
				else if (dezena_cem>=80 && dezena_cem<=89) dz = " e 2 Dezenas";
				else if (dezena_cem>=90 && dezena_cem<=99) dz = " e 2 Dezenas";
				
				switch(centena)
				{
					case 1: ctn = "1 Centena"; break;
					case 2: ctn = "2 Centenas"; break;
					case 3: ctn = "3 Centenas"; break;
					case 4: ctn = "4 Centenas"; break;
					case 5: ctn = "5 Centenas"; break;
					case 6: ctn = "6 Centenas"; break;
					case 7: ctn = "7 Centenas"; break;
					case 8: ctn = "8 Centenas"; break;
					case 9: ctn = "9 Centenas"; break;
					case 100: ml = "1 Milhar"; break;
				}
			}
		
		cout << endl << ml << ctn << dz << un << endl;
		
	
	return 0;
}
