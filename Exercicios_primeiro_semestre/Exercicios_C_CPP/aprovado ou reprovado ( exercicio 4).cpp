#include <iostream>
using namespace std;
 
// declaração de variáveis
 
float nota1, nota2;
 
main ()
{ 
    system ("chcp 65001");
 
	cout << "\n\n Bem Vindo ao calculador de médias!";
	cout << "\n\n Digite a nota da sua primeira prova:  ";
	while (! (cin >> nota2 ))
	{
		cout << "\n\n Digite apenas números: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	cout << "\n\n Digite a nota da sua segunda prova:  ";
	while (! (cin >> nota2 ))
	{
		cout << "\n\n Resposta inválida, digite apenas números: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if ((nota1 + nota2)/2 > 7) {
		cout << "\n\n Você foi aprovado!";
	}
	else if ((nota1 + nota2)/2 == 7) {
		cout << "\n\n Você foi aprovado, mas passou raspando.";
	}
	else {
		cout << "\n\n Reprovou, burrão"; 
	}
}