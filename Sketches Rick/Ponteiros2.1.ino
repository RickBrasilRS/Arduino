/*
Encontra os valores mínimo e máximo num array de temperaturas
*/

#include <stdio.h> // inclui a biblioteca stdio.h
#define LEITURASPORDIA 24 // Define como 24 o número de leituras de temperatura de um sensor por dia (leituras de hora em hora
#define ALTATEMPERATURA 76
#define BAIXATEMPERATURA 63

int leiturasdia[] = {62, 64, 65, 68, 70, 70, 71, 72, 74, 75, 76, 78, 79, 79, 78, 73, 70, 69, 68, 64, 63, 61, 59, 58};

void setup() 
{
    void CalcMinMax(int leiturasdia[], int *tempmin, int *tempmax); // protótipo da função
    int lowtemp;
    int hitemp;
        
    Serial.begin(115200);
    Serial.print("=== Antes da chamada da funçao: ");
    Serial.print("\n");
    Serial.print("O valor do endereço da alta temperatura na memória eh: ");
    Serial.print((long)&hitemp, DEC);
    Serial.print(", e o valor da alta temperatura eh: ");
    Serial.print((long)hitemp, DEC);
    Serial.print("\n");
    Serial.print("O valor do endereço da baixa temperatura na memória eh: ");
    Serial.print((long)&lowtemp, DEC);
    Serial.print(", e o valor da baixa temperatura eh: ");
    Serial.print((long)lowtemp, DEC);
    Serial.print ("\n");
    
    CalcMinMax(leiturasdia, &lowtemp, &hitemp);  /* Referenciar arrays sem [], no caso, o array temperaturas[], significa referenciar o seu endereço inicial.
                                                                Da mesma forma, passando o endereço de variáveis (com o operador &), faz com que seus vaores possam ser modificados
                                                                à vontade na função, pois se trata de passagem por referência (pass-by-reference) e não passagem por valor (pass-by-value)
                                                                O efeito é fazer com que as variáveis da função CalcMinMax se comportem como ponteiros
                                                               */  

    Serial.print("=== Depois da chamada da funçao: ");
    Serial.print("\n");
    Serial.print("O valor do endereço da alta temperatura na memória eh: ");
    Serial.print((long)&hitemp, DEC);
    Serial.print(", e o valor da alta temperatura eh: ");
    Serial.print((long)hitemp, DEC);
    Serial.print("\n");
    Serial.print("O valor do endereço da baixa temperatura na memória eh: ");
    Serial.print((long)&lowtemp, DEC);
    Serial.print(", e o valor da baixa temperatura eh: ");
    Serial.print((long)lowtemp, DEC);
    Serial.print("\n");
          
    }

void loop() {
// put your main code here, to run repeatedly:



}

void CalcMinMax(int leiturasdia[], int *tempmin, int *tempmax) //calcula as temperaturas mínima e máxima, lendo TEMPERATURAS POR DIA
{
   *tempmin = BAIXATEMPERATURA; // ver #define: recebe o valor de 63
  *tempmax = ALTATEMPERATURA;  // ver #define: recebe o valor de 76
  for (int j=0; j<LEITURASPORDIA;j++)
  {
    if (leiturasdia[j] >= *tempmax)
    {
      *tempmax = leiturasdia[j];
    }
    if (leiturasdia[j] <= *tempmin)
    {
      *tempmin = leiturasdia[j];
    }
   }
}
