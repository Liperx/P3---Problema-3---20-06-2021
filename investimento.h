#ifndef tInvesitmentos_H
#define tInvesitmentos_H
#include <math.h>

using namespace std;

float simples(float principal, float taxa, float anos)
{ 
  taxa = taxa / 100; //transformando pra usar nas contas
  float juros = principal * taxa * anos;
  float montante = principal * (1 + (taxa * anos));
   
  cout << "O total de juros a ser pago é: " << juros << "\n";
  cout << "O montante a ser pago é: " << montante << "\n\n";
  return EXIT_SUCCESS;
}
float composto(float principal, float taxa, float anos)
{ 
  taxa = taxa / 100; //transformando pra usar nas contas
  float juros = principal * taxa * anos;
  float montante = principal * (1 + (taxa * anos));
   
  cout << "O total de juros a ser pago é: " << juros << "\n";
  cout << "O montante a ser pago é: " << montante << "\n\n";
  return EXIT_SUCCESS;
}

#endif