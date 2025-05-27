#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    const int tamanho = 52;
    char parametro[tamanho] = {'A','A','A','A','2','2','2','2','3','3','3','3','4','4','4','4','5','5','5','5','6','6','6','6','7','7','7','7','8','8','8','8','9','9','9','9','0','0','0','0','Q','Q','Q','Q','J','J','J','J','K','K','K','K'};
    unsigned seed = time(0);
    srand(seed);
    char embaralhar = 'S';

	while (embaralhar=='s'||embaralhar=='S')
	{
	    for (int i = tamanho - 1; i > 0; --i) {
	        int j = rand() % (i + 1);
	        char temp = parametro[i];
	        parametro[i] = parametro[j];
	        parametro[j] = temp;
	    }
	
	    // Exibindo o vetor
	    cout << "Cartas Embaralhadas:" << endl << endl;
	    for (int i = 0; i < tamanho; ++i) {
	        cout << parametro[i] << " ";
	    }
	    cout << endl << endl << "Deseja embaralhar as cartas novamente? (S-Sim ou N-Não) ";
	    cin >> embaralhar;
	    cout << endl;
	}

    return 0;
}

