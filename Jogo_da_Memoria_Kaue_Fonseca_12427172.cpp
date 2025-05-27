#include <iostream>
#include <locale>

using namespace std;
const string v1="**", v2="**", v3="**", v4="**", v5="**", v6="**", v7="**", v8="**", v9="**", v10="**", v11="**", v12="**";
const string d1="AA", d2="AA", d3="BB", d4="BB", d5="CC", d6="CC", d7="DD", d8="DD", d9="EE", d10="EE", d11="FF", d12="FF";
string carta1="**", carta2="**", carta3="**", carta4="**", carta5="**", carta6="**", carta7="**", carta8="**", carta9="**", carta10="**", carta11="**", carta12="**";
int cv1_1=1, cv1_2=1, cv1_3=1, cv1_4=1, cv1_5=1, cv1_6=1, cv1_7=1, cv1_8=1, cv1_9=1, cv1_10=1, cv1_11=1, cv1_12=1, cv2_1=1, cv2_2=1, cv2_3=1, cv2_4=1, cv2_5=1, cv2_6=1, cv2_7=1, cv2_8=1, cv2_9=1, cv2_10=1, cv2_11=1, cv2_12=1;
int condicao1=0, condicao2=0, condicao3=0, condicao4=0, condicao5=0, condicao6=0;	



int tabuleiro() {
    
	
		cout << "  ";
	    cout << endl << "       " << "+----+----+----+" << "                       " << "+----+----+----+";
		cout << endl << "       | " << "01" << " | " << "02" << " | " << "03" << " |" << "                " << "       | " << carta1 << " | " << carta2 << " | " << carta3 << " |"  << endl;
		cout << "       " << "+----+----+----+" << "                       " << "+----+----+----+" << endl;
		cout << "       | " << "04" << " | " << "05" << " | " << "06" << " |" << "                " << "       | " << carta4 << " | " << carta5 << " | " << carta6 << " |"  << endl;
		cout << "       " << "+----+----+----+" << "                       " << "+----+----+----+" <<  endl;
		cout << "       | " << "07" << " | " << "08" << " | " << "09" << " |" << "                " << "       | " << carta7 << " | " << carta8 << " | " << carta9 << " |"  << endl;
		cout << "       " << "+----+----+----+" << "                       " << "+----+----+----+" << endl;
		cout << "       | " << "10" << " | " << "11" << " | " << "12" << " |" << "                " << "       | " << carta10 << " | " << carta11 << " | " << carta12 << " |"  << endl;
		cout << "       " << "+----+----+----+" << "                       " << "+----+----+----+" << endl;
	    cout << endl;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	char jogador, jogar;
	int jogada1, jogada2, ponto_jogador1=0, ponto_jogador2=0, soma_pontos=0, jogadacerta;	
	jogar='S';
	do
	{
	
		jogador= 'X';
		jogar='S';
			
			
			cout << "================================" << "       "  << "================================" << endl;
			cout << "======= JOGO DA MEMÓRIA ========" << "       "  << "======= JOGO DA MEMÓRIA ========" << endl;
			cout << "================================" << "       "  << "================================" << endl;
			cout << "========== POSIÇÕES ============" << "       "  << "========== TABULEIRO ===========" << endl;
			tabuleiro();		
			
			do
			{
				do
				{	
					cout << endl << "Jogador " << jogador << " escolha uma posição: ";
					cin >> jogada1;
					switch (jogada1)
					{
						
						case 1: if (carta1==v1){ carta1=d1; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_1=0; break;
						case 2: if (carta2==v2){ carta2=d2; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_2=0; break;	
						case 3: if (carta3==v3){ carta3=d3; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_3=0; break;	
						case 4: if (carta4==v4){ carta4=d4; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_4=0; break;	
						case 5: if (carta5==v5){ carta5=d5; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_5=0; break;	
						case 6: if (carta6==v6){ carta6=d6; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_6=0; break;	
						case 7: if (carta7==v7){ carta7=d7; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_7=0; break;	
						case 8: if (carta8==v8){ carta8=d8; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_8=0; break;	
						case 9: if (carta9==v9){ carta9=d9; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_9=0; break;	
						case 10: if (carta10==v10){ carta10=d10; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_10=0; break;	
						case 11: if (carta11==v11){ carta11=d11; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_11=0; break;	
						case 12: if (carta12==v12){ carta12=d12; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv1_12=0; break;
							
					}
					if (jogadacerta==1)
					{
						cout << "Jogada invalida. Escolha outra posição!" << endl;
					}
					
				
				}while (jogada1 <=0 || jogada1>12 || jogadacerta==1);
				
				do
				{
					cout << endl << "Jogador " << jogador << " escolha outra posição: ";
					cin >> jogada2;
								
					
					switch (jogada2)
					{
						case 1: if (carta1==v1){ carta1=d1; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_1=0; break;
						case 2: if (carta2==v2){ carta2=d2; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_2=0; break;	
						case 3: if (carta3==v3){ carta3=d3; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_3=0; break;	
						case 4: if (carta4==v4){ carta4=d4; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_4=0; break;	
						case 5: if (carta5==v5){ carta5=d5; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_5=0; break;	
						case 6: if (carta6==v6){ carta6=d6; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_6=0; break;	
						case 7: if (carta7==v7){ carta7=d7; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_7=0; break;	
						case 8: if (carta8==v8){ carta8=d8; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_8=0; break;	
						case 9: if (carta9==v9){ carta9=d9; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_9=0; break;	
						case 10: if (carta10==v10){ carta10=d10; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_10=0; break;	
						case 11: if (carta11==v11){ carta11=d11; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_11=0; break;	
						case 12: if (carta12==v12){ carta12=d12; jogadacerta=0;} else jogadacerta=1; tabuleiro(); cv2_12=0; break;	
						
					}
					if (jogadacerta==1)
					{
						cout << "Jogada invalida. Escolha outra posição!" << endl;
					}
					
				}while (jogada2==jogada1 || jogada2<=0 || jogada2>12 || jogadacerta==1);
				
				jogadacerta=0;
				
				if (cv1_1==0 && cv2_2==0 || cv1_2==0 && cv2_1==0)
					{
						cout << "Par encontrado! +1 Ponto para o Jogador " << jogador << endl;
						carta1=d1;
						carta2=d2;
						condicao1=1;
						if (jogador=='X') ponto_jogador1=ponto_jogador1+1;
						else ponto_jogador2=ponto_jogador2+1;
						if (jogador=='X') 
						{
							if (ponto_jogador1<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " pares!" << endl;
						}
						else 
						{
							if (ponto_jogador2<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " pares!" << endl;
						}
						
							
							
					}
					else if (cv1_3==0 && cv2_4==0 || cv1_4==0 && cv2_3==0)
					{
						cout << "Par encontrado! +1 Ponto para o Jogador " << jogador << endl;
						carta3=d3;
						carta4=d4;
						condicao2=1;
						if (jogador=='X') ponto_jogador1=ponto_jogador1+1;
						else ponto_jogador2=ponto_jogador2+1;
						if (jogador=='X') 
						{
							if (ponto_jogador1<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " pares!" << endl;
						}
						else 
						{
							if (ponto_jogador2<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " pares!" << endl;
						}
					}
					else if (cv1_5==0 && cv2_6==0 || cv1_6==0 && cv2_5==0)
					{
						cout << "Par encontrado! +1 Ponto para o Jogador " << jogador << endl;
						carta5=d5;
						carta6=d6;
						condicao3=1;
						if (jogador=='X') ponto_jogador1=ponto_jogador1+1;
						else ponto_jogador2=ponto_jogador2+1;
						if (jogador=='X') 
						{
							if (ponto_jogador1<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " pares!" << endl;
						}
						else 
						{
							if (ponto_jogador2<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " pares!" << endl;
						}
					}
					else if (cv1_7==0 && cv2_8==0 || cv1_8==0 && cv2_7==0)
					{
						cout << "Par encontrado! +1 Ponto para o Jogador " << jogador << endl;
						carta7=d7;
						carta8=d8;
						condicao4=1;
						if (jogador=='X') ponto_jogador1=ponto_jogador1+1;
						else ponto_jogador2=ponto_jogador2+1;
						if (jogador=='X') 
						{
							if (ponto_jogador1<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " pares!" << endl;
						}
						else 
						{
							if (ponto_jogador2<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " pares!" << endl;
						}
					}
					else if (cv1_9==0 && cv2_10==0 || cv1_10==0 && cv2_9==0)
					{
						cout << "Par encontrado! +1 Ponto para o Jogador " << jogador << endl;
						carta9=d9;
						carta10=d10;
						condicao5=1;
						if (jogador=='X') ponto_jogador1=ponto_jogador1+1;
						else ponto_jogador2=ponto_jogador2+1;
						if (jogador=='X') 
						{
							if (ponto_jogador1<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " pares!" << endl;
						}
						else 
						{
							if (ponto_jogador2<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " pares!" << endl;
						}
					}
					else if (cv1_11==0 && cv2_12==0 || cv1_12==0 && cv2_11==0)
					{
						cout << "Par encontrado! +1 Ponto para o Jogador " << jogador << endl;
						carta11=d11;
						carta12=d12;
						condicao6=1;
						if (jogador=='X') ponto_jogador1=ponto_jogador1+1;
						else ponto_jogador2=ponto_jogador2+1;
						if (jogador=='X') 
						{
							if (ponto_jogador1<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador1 << " pares!" << endl;
						}
						else 
						{
							if (ponto_jogador2<=1) cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " par!" << endl;
							else cout << endl << "O Jogador " << jogador << " encontrou " << ponto_jogador2 << " pares!" << endl;
						}
					}
					else
					{
						cout << "Par não encontrado!" << endl;
						if(condicao1==1) 
						{
							carta1=d1;
							carta2=d2;
						}else
						{
							carta1=v1;
							carta2=v2;
						}
						if(condicao2==1) 
						{
							carta3=d3;
							carta4=d4;
						}else
						{
							carta3=v3;
							carta4=v4;
						}
						if(condicao3==1) 
						{
							carta5=d5;
							carta6=d6;
						}else
						{
							carta5=v5;
							carta6=v6;
						}
						if(condicao4==1) 
						{
							carta7=d7;
							carta8=d8;
						}else
						{
							carta7=v7;
							carta8=v8;
						}
						if(condicao5==1) 
						{
							carta9=d9;
							carta10=d10;
						}else
						{
							carta9=v9;
							carta10=v10;
						}
						if(condicao6==1) 
						{
							carta11=d11;
							carta12=d12;
						}else
						{
							carta11=v11;
							carta12=v12;
						}
					}
					
					cv1_1=1;
					cv1_2=1;
					cv1_3=1;
					cv1_4=1;
					cv1_5=1;
					cv1_6=1;
					cv1_7=1;
					cv1_8=1;
					cv1_9=1;
					cv1_10=1;
					cv1_11=1;
					cv1_12=1;
					cv2_1=1;
					cv2_2=1;
					cv2_3=1;
					cv2_4=1;
					cv2_5=1;
					cv2_6=1;
					cv2_7=1;
					cv2_8=1;
					cv2_9=1;
					cv2_10=1;
					cv2_11=1;
					cv2_12=1;
					
				
				
				
				if (jogador=='X') jogador='O';
				else jogador = 'X';
				soma_pontos=ponto_jogador1+ponto_jogador2;
							
			}while (soma_pontos<6);
			
			cout << endl;
			cout << "================================" << endl;
			cout << "========= PLACAR FINAL =========" << endl; 
			cout << "================================" << endl;
			
			if (ponto_jogador1<=1) cout << endl << "O jogador X encontrou " << ponto_jogador1 << " par de cartas!" << endl;
			else cout << endl << "O jogador X encontrou " << ponto_jogador1 << " pares de cartas!" << endl;
			if (ponto_jogador2<=1) cout << endl << "O jogador O encontrou " << ponto_jogador2 << " par de cartas!" << endl;
			else cout << endl << "O jogador O encontrou " << ponto_jogador2 << " pares de cartas!" << endl;		
			if (ponto_jogador2>ponto_jogador1) cout << endl << "O jogador O ganhou a partida." << endl << endl << "PARABÉNS!";
			else if (ponto_jogador2<ponto_jogador1) cout << endl << "O jogador X ganhou a partida." << endl << endl << "PARABÉNS!";
			else cout << endl << "A partida terminou empatada." << endl;
			cout << endl << "Jogar novamente (  s  ) ou (  n  ) ? ";
			cin >> jogar;
			cout << endl;
			carta1="**"; carta2="**", carta3="**", carta4="**", carta5="**", carta6="**", carta7="**", carta8="**", carta9="**", carta10="**", carta11="**", carta12="**";
			ponto_jogador1=0;
			ponto_jogador2=0;
			
			
	}while(jogar=='S' || jogar=='s');
	
	
	
	return 0;
}
