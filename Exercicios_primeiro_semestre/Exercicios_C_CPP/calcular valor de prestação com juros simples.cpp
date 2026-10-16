//calcular o valor de uma prestaçao com juros simples
 
#include<iostream>
 
#include<iomanip> // Necessario para setprecis
 
using namespace std;
 
float valorParcela, taxa, dias, juros, valorFinal;
main()
{
		system("chcp 65001");
		cout<<"\n\n Calcular o valor de uma prestaçao com juros simples. \n\n";
		cout<<"Digite o valor da parcela: \n";
		cin>>valorParcela;
		cout<<"Digite a quantidade de dias: ";
		cin>>dias;
		 taxa = 0.10; // 10% ao dia
		 juros = valorParcela * taxa * dias;
    valorFinal = valorParcela + juros;
 
    cout << fixed << setprecision(2);
    cout << "\nValor da parcela com juros simples: R$ " << valorFinal;

}