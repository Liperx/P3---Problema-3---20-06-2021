#ifndef tInvesitmentos_H
#define tInvesitmentos_H
#include <math.h>

using namespace std;

float Simples(float principal, float taxa, float anos)
{ 
  taxa = taxa / 100; //transformando pra usar nas contas
  float juros = principal * taxa * anos;
  float montante = principal * (1 + (taxa * anos));
   
  cout << "O total de juros a ser pago é: " << juros << "\n";
  cout << "O montante a ser pago é: " << montante << "\n\n";
  return EXIT_SUCCESS;
}
float Composto(float principal, float taxa, float anos, float principal, float anterior,float montante, float juros)
{ 
  taxa = taxa / 100; //transformando pra usar nas contas
   
  for(int i = 1; i <= meses; i++){
    montante = principal * pow((1 + taxa), i);
    juros = montante - principal - anterior;
         
    anterior += juros;
   
    cout << "Mês: " << i << " - Montante: " <<
       montante << " - Juros " << juros << "\n";
  }
  return EXIT_SUCCESS;
}

#endif