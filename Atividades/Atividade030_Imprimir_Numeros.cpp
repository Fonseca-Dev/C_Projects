#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	for (int num=1; num<=20; num++) cout << num << endl;
	cout << endl;
	for (int num=1; num<=20; num++) cout << num << "  ";
	return 0;
}
