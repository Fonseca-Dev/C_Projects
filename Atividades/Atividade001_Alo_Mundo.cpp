#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Alo Mundo" << endl;
	return 0;
}
