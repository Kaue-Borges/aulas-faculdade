// converter dolar pra real
#include<iostream>
#include<iomanip> // Necessario para setprecis
using namespace std;

float dolares, reais, cotacao = 5.28;

main ()

{
	system("chcp 65001");
	cout<<"\n\n Converter dolar para real";
	cout<<"\n\n informe quantos dolares voce quer converter: \n\n";
	cin>>dolares;
	cout<<"\n\n Cotação atual do dolar: " <<cotacao;
	
	
	reais = (dolares * 5.28);
	
	cout<<"\n\n converti para você, e o seu valor em reais é: "<<reais;
	
}