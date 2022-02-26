#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int win = 0;

 int Game();

int main()
{ 
    int awnser = 0;
    printf("----- Pedra - Papel - Tesoura  ----- Vamos jogar?\n");
    while (1)
    {
        win = 0;

    Game();

    if(win == 0)
    {
        printf("Você perdeu... Quer jogar novamente?\n");

    }else if (win == 1)
    {
        printf("Você venceu!! Quer jogar novamente?\n");
    
    }else
    {
        printf("O jogo empatou! Quer jogar novamente?\n");
    }

    printf("Digite 1  para sim, ou 2 para não\n");
    scanf("%d", &awnser);
    if(awnser == 1)
    {
    awnser = 0;
    continue;
    }else
    {
      printf("Obrigado por jogar!\n");
      break;
    }

    }
    

  return 0;
}

int Game()
   {

    printf("--- Escolha sua jogada:\n 1 - Pedra   2 - Papel   3 - Tesoura\n");
    int playerChoose;
    int play = 0;
    scanf("%d", &playerChoose);
    while (play == 0)
    {
        switch (playerChoose)
       {
    case 1:
    printf("Você escolheu: Pedra\n");
     play = 1;
        break;
    case 2:
    printf("Você escolheu: Papel\n");
     play = 2;
        break;
    case 3:
    printf("Você escolheu: Tesoura\n");
     play = 3;
        break;        
    default:
    printf("Valor invalido, por favor selecione 1 ou 2 apenas\n");
    play = 0;
        break;
       }

    }

        srand(time(0));

        int enemy = rand();
        
         do
         {
            enemy = rand() % 3;
         } while (enemy == 0 || enemy >3);
          
         
           switch (enemy)
           {
            case 1:
           printf("Eu escolhi: Pedra\n");
               break;
            case 2:
            printf("Eu escolhi: Papel\n");
               break;
            case 3:
            printf("Eu escolhi: Tesoura\n");
               break;
           
           default:
           printf("Algo deu errado\n");
               break;
           }
    
      if(play == enemy)
      {
        win = 2; // giri
      }
      else if(play == 1  && enemy == 2 || play == 2 && enemy == 3 || play == 3  && enemy == 1)
      {
        win = 0; // perdeu
      }
      else
      {
        win = 1; // ganhou
      }
   
   }



    






  

