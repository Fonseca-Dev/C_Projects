#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    int numero, maior;
    
    cout << "Digite o primeiro n�mero: ";
    cin >> maior;

    for (int i = 1; i < 5; ++i) {
        cout << endl;
		cout << "Digite o pr�ximo n�mero: ";
        cin >> numero;
        if (numero > maior) {
            maior = numero;
        }
    }

    // Exibe o maior n�mero inserido
    cout << endl << "O maior n�mero inserido �: " << maior << endl;

    return 0;
}
