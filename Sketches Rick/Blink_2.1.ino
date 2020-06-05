/*
Versão do programa blink_2 usando umponteiro e uma função
*/

#define LED1 10
#define LED2 11
boolean *estado; // cria o ponteiro estado para uma variável do tipo boolean
void setup() 
{
  void trocaestado();
  boolean flag = true;    // cria a variável flag do tipo boolean e atribui o valor true
  
  estado = &flag;        //inicializa o ponteiro estado, fazendo-o apontar para a variável flag
 pinMode(LED1, OUTPUT); // atribui como saída os pinos digitais 10 e 11
 pinMode(LED2, OUTPUT);
digitalWrite(LED1,*estado); // faz o LED1 ligar e o LED2 desligar
digitalWrite(LED2,!(*estado));
}

void loop() 
{
trocaestado();  
digitalWrite(LED1,*estado);
digitalWrite(LED2,!(*estado));  // os parênteses são necessários para primeiro chamar o valor de flag através do ponteiro e depois negar esse valor
}

void trocaestado()          // função que faz a variável flag trocar de estado (true para false e false para true) a cada chamada da função, usando o ponteiro
{
  *estado = !(*estado);    // os parênteses são necessários para primeiro chamar o valor de flag através do ponteiro e depois negar esse valor
  delay(400);        // gera um delay de 400 milissegundos
}
