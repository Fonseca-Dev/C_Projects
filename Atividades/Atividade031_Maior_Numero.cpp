#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    int numero, maior;
    
    cout << "Digite o primeiro número: ";
    cin >> maior;

    for (int i = 1; i < 5; ++i) {
        cout << endl;
		cout << "Digite o próximo número: ";
        cin >> numero;
        if (numero > maior) {
            maior = numero;
        }
    }

    // Exibe o maior número inserido
    cout << endl << "O maior número inserido é: " << maior << endl;

    return 0;
}
