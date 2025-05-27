#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Os números inteiros ímpares contemplados entre 1 e 50 são: " << endl << endl;
	for (int num=1; num<=50; num++)
	{
		if (num%2!=0) cout << num << endl;
	}
	
	return 0;
}
