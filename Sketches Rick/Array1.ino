/*
Programa para mostrar 4 formas de imprimir no monitor serial um conjunto de caracteres
*/

void setup() 
{
    char palavra[11] = {'O', 'l', 'a', ' ', 'M', 'u', 'n', 'd', 'o', '!', '\0'};
    char *ponteiro;  // cria a variável ponteiro; do tipo ponteiro que aponta para uma variável do tipo char
    ponteiro = palavra; // inicializa o ponteiro com o conjunto (Array) palavra, que é do tipo char
    int i;
    Serial.begin(115200);        
    for (i = 0;i<11;i++)
    {
      Serial.print(palavra[i]);
    }

Serial.print ("\n");

    for (i = 0;i<11;i++)
    {
      Serial.print(*(palavra + i*1)); /* usar um nome de array por ele mesmo significa usar o endereço de memória desse array
                                                     Assim, essa linha de comando está mandando imprimir no monitor serial o conteúdo do
                                                     array palavra no endereço inicial desse array somado ao valor do contador multiplicado
                                                     por 1: endereço 0 + 0*1; endereço 0 + 1*1;
                                                     endereço 0 +2*1; ... ; endereço 0 + 10*1
                                                  */
    }

Serial.print ("\n");

for (i = 0;i<11;i++)
    {
      Serial.print(*(palavra + i *sizeof(char))); /* usar um nome de array por ele mesmo significa usar o endereço de memória desse array
                                                     Assim, essa linha de comando está mandando imprimir no monitor serial o conteúdo do
                                                     array palavra no endereço inicial desse array somado ao valor do contador multiplicado
                                                     pelo tamanho em bytes do dado tipo char, no caso, 1: endereço 0 + 0*1; endereço 0 + 1*1;
                                                     endereço 0 +2*1; ... ; endereço 0 + 10*1
                                                  */
   }

Serial.print ("\n");

for (i = 0;i<11;i++)
    {
      Serial.print(*ponteiro++); /* A função Serial.print impreme o conteúdo para o qual o ponteiro aponta, e que é atualizado a cada loop
                                                  */
   }   
}

void loop()
{
  
}
