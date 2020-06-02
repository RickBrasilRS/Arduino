/*
Ponteiros1
Teste1 com ponteiros
 */
#include <stdio.h>
int contador = 0;

void setup() 
{
    int numero = 5;
    int *ptrnumero;       // cria o ponteiro ptrnumero
    ptrnumero = &numero;  // armazena em ptrnumero o endereço de memorio da variavel numero
    *ptrnumero = 10;      // armazena 10 na variavel numero,atraves do ponteiro ptrnumero
    Serial.begin(115200);
    Serial.print("O valor do endereço para ptrnumero eh: ");
    Serial.print((long) &ptrnumero, DEC); // mostra o endereço de memoria onde ptrnumero foi armazenado
    Serial.print(" ");
    Serial.print(" e o valor armazenado nesse local eh: ");
    Serial.print((long) ptrnumero, DEC);
    Serial.print(" ");
    Serial.print("O valor de numero eh: ");
    Serial.print((int)numero, DEC);
}

void loop() {
// put your main code here, to run repeatedly:

}
