//perimetro do triangulo
#include <iostream> 
#include <iomanip>
using namespace std;
 
//variáveis:
 
float l1, l2, l3, perimetro;
 
main ()
{ 
  system("chcp 65001");
  cout << "\n\n Calculador de perímetro do triângulo: ";
  cout << "\n\n Digite o comprimento do lado 1: ";
  cin >> l1;
  cout << "\n\n Digite o comprimento do lado 2: ";
  cin >> l2; 
  cout << "\n\n Digite o comprimento do lado 3: ";
  cin >> l3 ; 
  perimetro = l1 + l2 + l3;
cout << "\n\n O valor do perímetro do seu triângulo é : " <<perimetro;

  }