#include <iostream>
using namespace std;

int a,b;

int main(int argc, char const *argv[])
{
	int tamanio;

	cout<<"Ingrese un numero: ";
	cin>>tamanio;
	a=b=tamanio;
	
	int matriz[a][b];
	
		for (int i = 0; i < a; ++i)
		{
		for (int j = 0; j < b; ++j)
		{
			if (i==0 || i==tamanio-1 || j==0 || j==tamanio-1)
			{
				matriz[i][j]=1;
			}else  matriz[i][j]=0;
		}
		
		}
		
		for (int i = 0; i < a; ++i)
			{
		for (int j = 0; j < b; ++j)
			{

			cout<<" "<<	matriz[i][j];
			}
		cout<<" "<<endl;
			}
	return 0;
}