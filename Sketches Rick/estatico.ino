// static
// testes com a classe de variável static
void setup()
{
 Serial.begin(115200);
}

void loop() 
{
 while (true)
 {
  Serial.print(contador1());
  Serial.print("\t");
  Serial.print(contador2());
  Serial.print("\n");
 }
}
/***
 contador1
 o contador é zerado a cada chamada da funcao
 ***/
int contador1()
{
  int contador = 0;
  return ++contador;
}
/***
 contador2
 preserva o valor de contador, o qual é passado de um escopo para outro
 Obs.: para atribuir a uma variável static um valor inicial diferente de zero, esse valor deve ser atribuído no momento da criação da veriável.
 Ex.: static int contador = 10;
 ***/
int contador2()
{
  static int contador = 0;
  return ++contador;
}
