// calcular o consumo médio de combustivel
#include<iostream>
#include<iomanip> // Necessario para setprecision
using namespace std;

// variaveis

float km, litro, consumo;

main()

{
	system("chcp 65001");
	cout<<"\n\n Calcular consumo médio de combustível (km/l)";
	cout<<"\n\n informe quantos km voce andou: \n\n";
	cin>>km;
	cout<<"\n\n quantos litros foram gastos: \n\n";
	cin>>litro;
	
	consumo = km / litro;
	
	cout<<fixed << setprecision(2); // para 2 casas decimais
	cout<<"\n\n sua média km por litro é:"<<consumo;
}
