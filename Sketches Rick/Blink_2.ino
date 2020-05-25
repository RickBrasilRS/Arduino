// Blink 22
// Colocar aqui variáveis iniciais do sistema e do sketch criado:
  const int LED1 = 10, LED2 = 11; // Atribui aos LEDs 1 e 2 as portas 10 e 11 ao usar a função pinMode
  boolean flag1 = true, flag2 = false; // cria as variáveis booleanas fla1 e flag2
  
void setup() 
{
  pinMode(LED1,OUTPUT); // porta do LED1 (10) omo saída;
  pinMode(LED2,OUTPUT);
  digitalWrite(LED1,HIGH); // acende o LED1 (poderia ser flag1 no lugar de HIGH)
  digitalWrite(LED2,LOW);  // apaga o LED2 (poderia ser flag2 no lugar de LOW)
}

void loop() 
{
   delay(400);
   flag1 = !flag1; // inverte o valor da variável (de true para false e vice-versa)
   flag2 = !flag2;
  digitalWrite(LED1,flag1);
  digitalWrite(LED2,flag2);
}