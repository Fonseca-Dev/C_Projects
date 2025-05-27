#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	cout << "Digite uma letra: ";
	cin >> letra;
	
	if (letra=='A'||letra=='a'||letra=='E'||letra=='e'||letra=='I'||letra=='i'||letra=='O'||letra=='o'||letra=='U'||letra=='u')
	cout << endl << "A letra escolhida é uma vogal!";
	else cout << endl << "A letra escolhida é uma consoante";
	return 0;
}
