#include <iostream>
#include <locale>

using namespace std;

int tabuada(int n) 
{
	
	if (n>=0 && n<=100)
	{

	  cout << "+------------------+" << endl;
	  cout << "   TABUADA DO " << n << endl;
	  cout << "+------------------+" << endl;
	  for(int i = 1; i <= 10; i++) 
	  {
	    cout << "| " << n << " x " << i << " = ";
	    
	    if(n*i < 10)
		{
			if (n<10)
			{
				if (i<10) cout << "       "; // Adiciona um espaço extra para alinhamento
				else cout << "      "; // Adiciona um espaço extra para alinhamento
			}
			
		}
		if (n*i >=10 && n*i <=99)
		{
			if (n<10)
			{
				if (i<10) cout << "      "; // Adiciona um espaço extra para alinhamento
				if (i==10) cout << "     "; // Adiciona um espaço extra para alinhamento
			}
			else cout << "     "; // Adiciona um espaço extra para alinhamento
					
		}
		if (n*i >=100 && n*i <=999)
		{
			if(i<10)
			{
				if (n>=100) cout << "   "; // Adiciona um espaço extra para alinhamento
				else cout << "    "; // Adiciona um espaço extra para alinhamento
			}
			
			else cout << "   "; // Adiciona um espaço extra para alinhamento
		}
		if(n*i==1000) cout << " "; // Adiciona um espaço extra para alinhamento
		
	    cout << n*i << " |" << endl;
	  }
	  cout << "+------------------+" << endl;
	}
	else
	
	return 0;
}



int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num=1;
	
	
		while (num >=0 && num<=100)
		{
			cout << "Digite um número (de 0 a 100) para obter sua tabuada: ";
			cin >> num;
			tabuada(num);
		} 
		
		cout << endl << "Número incorreto!" << endl;
		cout << endl << "Reinicie o programa!";
		
	return 0;

}
