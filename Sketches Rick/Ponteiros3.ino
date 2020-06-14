

void setup() 
{
 Serial.begin(115200);
 int numero = 10;
 Serial.print("Endereço da variável numero: ");
 Serial.print((int)&numero);
 Serial.print("   Valor da variável numero: ");
 Serial.print(numero);
 Serial.println();
 RaizQuad1(numero); // passagem por valor: numero e temp são variáveis totalmente diferentes, pois têm endereços diferentes
 Serial.print("Depois da chamada da funcao, valor da variável numero eh: "); 
 Serial.print(numero);
 Serial.println();
 RaizQuad2(&numero); // passagem por referência: numero e temp são variáveis totalmente diferentes, pois têm endereços diferentes
 Serial.print("Depois da chamada da funcao, valor da variável numero eh: "); 
 Serial.print(numero);
 Serial.println();
 }

void loop() 
{
  // put your main code here, to run repeatedly:

}

void RaizQuad1(int temp)  // a variável temp recebe uma cópia da variável numero quando a função é chamada

{
  Serial.println();
  Serial.print("Em RaizQuad1(), o endereço de temp eh: ");
  Serial.print((int)&temp);
  Serial.print("    e o valor de temp eh: ");
  Serial.print(temp);
  Serial.println();
  temp*=temp;  // multiplica o valor da variável por ele mesmo
  Serial.print("O novo valor para temp eh: ");
  Serial.print(temp);
  Serial.println(); 
}
void RaizQuad2(int *temp)  // a variável *temp recebe o conteúdo da variável numero por referência quando a função é chamada
                           // É enviado ao ponteiro temp da função o endereço da variável número (&numero)
                           // não é enviada uma cópia do valor da variavel numero

{
  Serial.println();
  Serial.print("Em RaizQuad2(), o endereço de temp eh: ");
  Serial.print((int)&temp);
  Serial.print("    e o valor de temp eh: ");
  Serial.print(*temp);
  Serial.println();
  *temp = *temp * *temp;  // multiplica o valor da variável por ele mesmo e envia para o local apontado pelo ponteiro temp, isto é, a variável numero
  Serial.print("O novo valor para temp eh: ");
  Serial.print(*temp);
  Serial.println(); 
}
