#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float metros, centimetros;
	setlocale(LC_ALL, "Portuguese");
	
	for (metros=0; metros <=10; metros++)
	{
		centimetros = metros*100;
		cout << metros << " metros(m) é igual a " << centimetros << " centímetros(cm)." << endl;
		
	}
	
	return 0;
}
