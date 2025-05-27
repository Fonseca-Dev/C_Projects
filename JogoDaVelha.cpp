#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char espaco1, espaco2, espaco3, espaco4, espaco5, espaco6, espaco7, espaco8, espaco9, jogador, jogar;
	int jogadacerta, jogada;
	
	
	do
	{
		jogador= 'X';
		espaco1 = '1';
		espaco2 = '2';
		espaco3 = '3';
		espaco4 = '4';
		espaco5 = '5';
		espaco6 = '6';
		espaco7 = '7';
		espaco8 = '8';
		espaco9 = '9';
		jogar='S';
		
		cout << "================================" << endl;
		cout << "====== JOGO DA VELHA ===========" << endl;
		cout << "================================" << endl;
		cout << "======== TABULEIRO =============" << endl;
		
		
		do
		{
			cout << endl << "         " <<espaco1 << " | " << espaco2 << " | " << espaco3 << endl;
			cout << "        -----------" << endl;
			cout << "         " << espaco4 << " | " << espaco5 << " | " << espaco6 << endl;
			cout << "        -----------" << endl;
			cout << "         " << espaco7 << " | " << espaco8 << " | " << espaco9 << endl;
			
			do
			{
			
				cout << endl << "Jogador " << jogador << " escolha uma posição: ";
				cin >> jogada;
				cout << endl;
				jogadacerta = 0;
				switch (jogada)
				{
					case 1: if (espaco1 == '1') espaco1 = jogador; else jogadacerta=1; break;
					case 2: if (espaco2 == '2') espaco2 = jogador; else jogadacerta=1; break;
					case 3: if (espaco3 == '3') espaco3 = jogador; else jogadacerta=1; break;
					case 4: if (espaco4 == '4') espaco4 = jogador; else jogadacerta=1; break;
					case 5: if (espaco5 == '5') espaco5 = jogador; else jogadacerta=1; break;
					case 6: if (espaco6 == '6') espaco6 = jogador; else jogadacerta=1; break;
					case 7: if (espaco7 == '7') espaco7 = jogador; else jogadacerta=1; break;
					case 8: if (espaco8 == '8') espaco8 = jogador; else jogadacerta=1; break;
					case 9: if (espaco9 == '9') espaco9 = jogador; else jogadacerta=1; break;
					
				}
				if (jogadacerta==1)
				{
					cout << "Jogada invalida!" << endl;
				}
				
			} while(jogadacerta==1);
			
			if (jogador == 'X') jogador = 'O';
			else jogador = 'X';
			if((espaco1 == 'X' && espaco2 == 'X' && espaco3 == 'X') || (espaco4 == 'X' && espaco5 == 'X' && espaco6 == 'X') ||
	            (espaco7 == 'X' && espaco8 == 'X' && espaco9 == 'X') || (espaco1 == 'X' && espaco5 == 'X' && espaco9 == 'X') ||
	            (espaco3 == 'X' && espaco5 == 'X' && espaco7 == 'X') || (espaco1 == 'X' && espaco4 == 'X' && espaco7 == 'X') ||
	            (espaco2 == 'X' && espaco5 == 'X' && espaco8 == 'X') || (espaco3 == 'X' && espaco6 == 'X' && espaco9 == 'X'))
			{
	            cout << endl << "         " <<espaco1 << " | " << espaco2 << " | " << espaco3 << endl;
				cout << "        -----------" << endl;
				cout << "         " << espaco4 << " | " << espaco5 << " | " << espaco6 << endl;
				cout << "        -----------" << endl;
				cout << "         " << espaco7 << " | " << espaco8 << " | " << espaco9 << endl;
				cout << endl << "===========================" << endl;
				cout << "     JOGADOR X VENCEU! " << endl;
				cout << "===========================" << endl;
	            jogada = 0;
	        }
	        else if ((espaco1 == 'O' && espaco2 == 'O' && espaco3 == 'O') || (espaco4 == 'O' && espaco5 == 'O' && espaco6 == 'O') ||
	            (espaco7 == 'O' && espaco8 == 'O' && espaco9 == 'O') || (espaco1 == 'O' && espaco5 == 'O' && espaco9 == 'O') ||
	            (espaco3 == 'O' && espaco5 == 'O' && espaco7 == 'O') || (espaco1 == 'O' && espaco4 == 'O' && espaco7 == 'O') ||
	            (espaco2 == 'O' && espaco5 == 'O' && espaco8 == 'O') || (espaco3 == 'O' && espaco6 == 'O' && espaco9 == 'O'))
	        {
	            cout << endl << "         " <<espaco1 << " | " << espaco2 << " | " << espaco3 << endl;
				cout << "        -----------" << endl;
				cout << "         " << espaco4 << " | " << espaco5 << " | " << espaco6 << endl;
				cout << "        -----------" << endl;
				cout << "         " << espaco7 << " | " << espaco8 << " | " << espaco9 << endl;
				cout << endl << "===========================" << endl;
				cout << "     JOGADOR O VENCEU! " << endl;
				cout << "===========================" << endl;
	            jogada=0;
			}
		} while (jogada !=0 && jogada<10);
		
		cout << endl << "Jogar novamente (  s  ) ou (  n  ) ? " ;
		cin >> jogar;
		
	} while(jogar=='S' || jogar=='s');
	
	cout << endl << "Obrigado pela participação. Voltem logo!" << endl;
	
	return 0;
}

