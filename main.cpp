#include <iostream>
using namespace std;
int main(){
	int i, j, z;
    char lista_nomi[3][5];
    char nome[5];
    cin >> lista_nomi[0];
    cin >> lista_nomi[1];
    cin >> lista_nomi[2];
    cout << endl;
    cout << endl;
    cin >> nome;
	
	
		for(i=0; lista_nomi[0][i]==nome[i]; i++)
		{
			if(i=5){
			cout << "0";
		}
		}
		
		for(j=0; lista_nomi[1][j]==nome[j]; j++)
		{
			if(j=5){
			cout << "1";
		}
		}
		
		for(z=0; lista_nomi[2][z]==nome[z]; z++)
		{
			if(z=5){
			cout << "2";
		}
		}
		
		cout << "";
	return 0;
}
