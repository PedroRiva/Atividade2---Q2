//Atividade 2 - Questão 2 de Programação Aplicada

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;



int main ()
{
	
    
	string palavra,palavranova;
	char letra,caracter;
	int trocas=0;
	
	cout<<"Digite uma palavra!"<<endl;
	cin>>palavra;
	palavranova=palavra;
	cout<<"Digite a letra que deseja ser substituida"<<endl;
	cin>>letra;
	cout<<"Digite qual caracter quer colocar no lugar dela"<<endl;
	cin>>caracter;
	
	for (int i=0; i<=palavranova.length() ; i++)
	{
		if (palavranova[i]==letra)
		{
			palavranova[i]=caracter;
			trocas++;
		}
		cout<<palavranova[i];
	}
	cout<<endl;
	cout<<palavra<<endl;
	cout<<trocas;

return 0;
}