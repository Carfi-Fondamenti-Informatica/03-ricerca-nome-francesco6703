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
		
		if(lista_nomi[0][0] == nome[0] && lista_nomi[0][1] == nome[1] && lista_nomi[0][2] == nome[2] && lista_nomi[0][3] == nome[3] && lista_nomi[0][4] == nome[4])
		{
			cout << "0";
		}
		
		if(lista_nomi[1][0] == nome[0] && lista_nomi[1][1] == nome[1] && lista_nomi[1][2] == nome[2] && lista_nomi[1][3] == nome[3] && lista_nomi[1][4] == nome[4])
		{
			cout << "1";
		}
		
		if(lista_nomi[2][0] == nome[0] && lista_nomi[2][1] == nome[1] && lista_nomi[2][2] == nome[2] && lista_nomi[2][3] == nome[3] && lista_nomi[2][4] == nome[4])
		{
			cout << "2";
		}
		
		cout << "";
	return 0;
}
