boolean Anobisexto(int ano)
{
int a = ano;
if (a % 4 == 0 && a % 100 !=0 || a % 400 == 0)
  {
    return true;
  }
  else return false;
}