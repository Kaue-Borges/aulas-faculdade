// converter metro para centimetros e milimetros
#include<iostream>
#include<iomanip> // Necessario para setprecision
using namespace std;

// variaveis

float metros, centimetros, milimetros;
char opcao;
main()
{
	system("chcp 65001");
	cout<<"\n\n Você chegou no melhor convertedor de metros para centimetros e milimetros";
	cout<< "\n\n Digite quantos metros deseja converter: ";
    cin>> metros;
	cout<< "\n\n Digite 1 para mm ou 2 para cm: ";
    cin>> opcao;
 
   
 if (opcao == '1')
{

    milimetros = metros * 1000;
    cout << "\n\n Resultado: " << milimetros << " mm";
}
   else if (opcao == '2')
{

    centimetros = metros * 100;
    cout << "\n\n Resultado: " << centimetros << " cm";
}

}