#include <iostream>;
using namespace std;
 
// declaração de variáveis
 
float salario, bonus, salariofinal;
 
main ()
{
	system ("chcp 65001");
	cout << "\n\n Bem vindo ao consultor de bônus salarial: ";
	cout << "\n\n Digite o valor do seu salário: ";
	while (!(cin >>  salario))
	{
		 cout << "\n Você recebe em sopa de letrinhas? Apenas Números! ";
		 cout << "\n Digite o valor do seu salário: ";
		 cin.clear (); //este comando vai limpar o erro
		 cin.ignore(1000, '\n'); //descartar a entrada inválida 
	}
	if (salario < 2000){
	cout << "\n\n Você ganhou um bônus de R$200,00!";
	salariofinal = salario + 200;
	cout << "\n\n Seu salário final é: " << salariofinal; 
}
    else 
    cout << "\n\n Seu salário final é: " << salario; 
}