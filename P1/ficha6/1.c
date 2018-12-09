#include <stdio.h>

int max(int n1, int n2, int n3)
{
  if (n1>n2 && n1>n3)
  {
    printf ("%i\n",n1);
  }
  else if (n2>n1 && n2>n3)
  {
    printf("%i\n",n2);
  }
  else
  {
    printf("%i\n", n3);
  }

}


int main()
{
  int n1, n2, n3;
  printf ("Insira o primeiro numero:");
  scanf("%d", &n1);
  //printf("%d", n1); // Just used to debug
  printf ("Insira o segundo numero:");
  scanf("%d", &n2);
  //printf("%d", n2); // Just used to debug
  printf ("Insira o terceiro numero:");
  scanf("%d", &n3);
  //printf("%d", n3); // Just used to debug
  printf ("O maior numero e:");
  printf (max (n1,n2,n3));
  return 0;
}
