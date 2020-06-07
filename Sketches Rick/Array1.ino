/*
<<<<<<< HEAD
Programa para mostrar 6 formas de imprimir no monitor serial um conjunto de caracteres
=======
<<<<<<< Updated upstream
Programa para mostrar 4 formas de imprimir no monitor serial um conjunto de caracteres
=======
Programa para mostrar 5 formas de imprimir no monitor serial um conjunto de caracteres
>>>>>>> Stashed changes
>>>>>>> caa16ce242884eff210318ceedb8f9c7f4378118
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
<<<<<<< HEAD
=======
<<<<<<< Updated upstream
=======
>>>>>>> caa16ce242884eff210318ceedb8f9c7f4378118

Serial.print ("\n");
ponteiro = palavra; // o ponteiro deve ser inicializado novamente antes de ser usado na sequencia
while (*ponteiro) // O loop continua até que seja encontrado o valor null (\0) no array.
    {
      Serial.print(*ponteiro++); /* A função Serial.print impreme o conteúdo para o qual o ponteiro aponta, e que é atualizado a cada loop
                                                */
<<<<<<< HEAD
   }

      Serial.print ("\n");
      Serial.print (palavra);  /* A função Serial.print trata o array como sendo dados do tipo string. Por isso imprime todo o array no monitor serial.
                                  Imprime a sequencia de caracteres encontrada até achar o valor null ("\0") no array.
                               */
      
=======
   }   
>>>>>>> Stashed changes
>>>>>>> caa16ce242884eff210318ceedb8f9c7f4378118
}

void loop()
{
  
}
