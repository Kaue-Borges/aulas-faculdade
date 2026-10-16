
//calcular o perimetro de um circulo
#include <iostream> 
#include <iomanip>
using namespace std;
 
 
//variáveis
 
float pi, diametro, perimetro;
 
main ()
{ 
  system("chcp 65001");
  cout << "\n\n Calculador de perímetro de Círculos: ";
  cout << "\n\n Digite o diâmetro do círculo:";
  cin >> diametro; 
  perimetro = (diametro * 3.14);
  cout << "\n\n O perímetro do seu círculo é: " << perimetro;
 
}