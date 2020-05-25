// incremento DEcremento
// Colocar aqui variáveis iniciais do sistema e do sketch criado:
#define maxchars 10 // Define o número máximo de caracteres a ser digitado para a data
 
 boolean Anobisexto(int ano);
 int ReadLine(char palavra[]);
 void setup() 
{
 Serial.begin(115200);
}

void loop() 
{
 if (Serial.available()>0) // essa função retorna o numero de bytes que estão no buffer serial
   {
     int bufferCount;
     int year;
     char myData[maxchars +1]; // Cria um array de caracteres com um espaçoa mais que maxchars, para o null
     bufferCount = ReadLine(myData);
     year = atoi(myData); // converte a data para numero inteiro
     Serial.print("Ano: ");
     Serial.print(year);
     if (Anobisexto(year) == false)
     {
         Serial.print(" nao");
     }
     Serial.print(" eh um ano bisexto.");
     Serial.print("\n");
   }
}
/***
 Determina se o ano digitado é bisexto
 parametro:
 int ano : o ano a ser testado
 retorno:
 true, se o ano for bisexto; false, se o ano não for bisexto
 ***/
boolean Anobisexto(int ano)
{
int a = ano;
if ((a % 4 == 0) && (a % 100 !=0) || (a % 400 == 0))
  {
    return true;
  }
  else return false;
}
/***
 Le dados da porta serial até ser digitado enter
 parametro:
 char palavra[] array de caracteres tratado como null
 valor de retorno:
 int num numero de caracteres digitados
 ***/
 
int ReadLine(char palavra[])
{
char c;
int indice = 0;
while (true)
   {
    if (Serial.available() >0)
       {
        indice = Serial.readBytesUntil('\n', palavra, maxchars);
        palavra[indice] = '\0'; // recebe null
        break;
       }
   }
   return indice;
}




 
