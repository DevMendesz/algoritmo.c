#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int recursiva(int n)
{
  int fvat;
  if (n <= 1)
    return (1);
  else
  {
    fvat = n * recursiva(n - 1);
    return (fvat);
  }
}

int main(void)
{
  setlocale(LC_ALL, "portuguese");
  int menu;
  int n, f, n1, n2, n3, p, k, a, b, c, d;
  int multi, div, sub;

  printf("Escolha o tipo de operação que deseja realizar: \n\t1-Permutação Simples\n\t2-Permutação com repetição\n\t3-Combinação\n\t4-Arranjo\n");
  scanf("%d", &menu);

  switch (menu)
  {
  case 1:
    printf("Digite o valor de sua permutação\n");
    scanf("%d", &n);

    f = recursiva(n);

    printf("Esse será o valor do resultado: %d", f);
    return f;
    return 0;
    break;

  case 2:

    printf("Digite quantas permutações há no seu problema\n");
    scanf("%d", &p);
    printf("Agora digite quantas repetição ocorre nessa permutação\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    a = recursiva(p);
    b = recursiva(n1);
    c = recursiva(n2);
    d = recursiva(n3);

    multi = b * c * d;
    div = a / multi;

    printf("Esse será o valor do resultado: %d", div);

    return div;

    break;
  case 3:

    printf("Digite sua constante na combinação\n");
    scanf("%d", &k);
    printf("Agora Digite números de elementos há no seu problema\n");
    scanf("%d", &n);

    sub = n - k;

    a = recursiva(n);
    b = recursiva(k);
    sub = recursiva(sub);
    multi = a / b * sub;

    printf("Esse será o valor do resultado: %d", multi);

    return multi;

    break;
  case 4:

    printf("Digite quantidade de elementos que podem ser escolhidos no seu problema\n");
    scanf("%d", &n);
    printf("Digite a quantidade de elementos por agrupamento\n");
    scanf("%d", &k);

    sub = n - k;

    a = recursiva(n);
    sub = recursiva(sub);

    multi = a / sub;

    printf("Esse será o valor do resultado: %d", multi);

    return multi;

    break;
  }
}