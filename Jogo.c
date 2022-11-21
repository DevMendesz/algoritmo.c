#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int russo()
{
  int number;

  srand(time(0));

  number = (rand() % 6) + 1;

  printf("O numero tirado foi: %d\n", number);

  return number;
}
int main()
{
  int menu;
  int a, j1, j2;

  setlocale(LC_ALL, "portuguese");

  printf("Escolha entre as duas opções para selecionar um jogo\n1-Roleta russa\n2-Jokenpo\n");
  scanf("%d", &menu);

  switch (menu)
  {
  case 1:
    printf("\nBem vindo a roleta russa, digite de 1 a 6, um deles vai fazer você perder o jogo\n");
    scanf("%d", &a);

    russo();

    if (a != 2)
    {
      printf("Você fez a decisão certa\n");
    }
    else
    {
      printf("Você morreu, reinicie o jogo\n");
    }
    break;

  case 2:
    printf("Por favor informe as duas jogadas\n");
    printf("1-Pedra\n");
    printf("2-Papel\n");
    printf("3-Tesoura\n");
    scanf("%d %d", &j1, &j2);

    if (j1 >= 1 && j1 <= 3 && j2 >= 1 && j2 <= 3)
    {
      if (j1 != j2)
      {
        if ((j1 == 1 && j2 == 2) || (j1 == 2 && j2 == 1) || (j1 == 3 && j2 == 2))
        {
          printf("Jogador 1 venceu\n");
        }
        else
        {
          printf("Jogador 2 venceu\n");
        }
      }
      else
      {
        printf("Empate\n");
      }
    }
    else
    {
      printf("dados invalidos\n");
    }
  }
}
