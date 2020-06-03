/*
Ponteiros1
Teste1 com ponteiros
 */
#include <stdio.h>
int contador = 0;

void setup() 
{
    int *ptrnumero1;       // cria o ponteiro ptrnumero1
    int numero2;
    ptrnumero1 = &numero1;  // armazena em ptrnumero o endereço de memória da variável numero1
    *ptrnumero1 = 10;      // armazena 10 na variavel numero1,atraves do ponteiro ptrnumero1
    numero2 = *ptrnumero1; // a variável numero 2 recebe o conteudo da variável para a qual ptrnumero1 está apontando, que, no caso, é o valor da variável numero1, o qual é 10
    Serial.begin(115200);
    Serial.print("O valor do endereço para ptrnumero1 eh: ");
    Serial.print((long) &ptrnumero1, DEC); // mostra o endereço de memoria onde ptrnumero foi armazenado
    Serial.print(" ");
    Serial.print(" e o valor armazenado nesse local eh: ");
    Serial.print((long) ptrnumero1, DEC);
    Serial.print(" ");
    Serial.print("O valor de numero1 eh: ");
    Serial.print((int)numero1, DEC);
    Serial.print("\n");
    Serial.print("O endereço da variavel numero2 eh: ");
    Serial.print((long)&numero2, DEC);
    Serial.print(" O valor da variavel numero2 eh: ");
    Serial.print((int)numero2, DEC);
}

void loop() {
// put your main code here, to run repeatedly:

}
