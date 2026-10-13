#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

  srand(time(NULL));
  //rock = 0, paper = 1 scissor = 2
  int rock = 0;
  int paper = 1;
  int scissor = 2;

  int cpu;
  int you;
  char answer;

  do{
    printf("Choose rock (0), paper (1) or scissor (2): ");
    scanf("%d", &you);
    cpu = rand() % 3; // number between 0-2
    if (cpu == 0 && you == 2){
      printf("Rock Vs Scissor, CPU win!\n");
    } else if (cpu == 0 && you == 1){
      printf("Rock Vs Paper, you win!\n");
    } else if (cpu == 0 && you == 0){
      printf("Rock Vs Rock, a boring draw...\n");
    } else if (cpu == 1 && you == 0){
      printf("Paper Vs Rock, CPU win!\n");
    } else if (cpu == 1 && you == 2){
      printf("Scissor Vs Paper, you win!\n");
    } else if (cpu == 1 && you == 1){
      printf("Paper Vs Paper, a boring draw...\n");
    } else if (cpu == 2 && you == 1){
      printf("Scissor Vs Paper, CPU win!\n");
    } else if (cpu == 2 && you == 0){
      printf("Scissor Vs Rock, you win!\n");
    } else if (cpu == 2 && you == 2){
      printf("Rock Vs Rock, a boring draw...\n");
    }
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &answer);
  }while(answer!='n');

/*
  if (cpu == 0 && you == 2){
    printf("Rock Vs Scissor, CPU win!\n");
  } else if (cpu == 0 && you == 1){
    printf("Rock Vs Paper, you win!\n");
  } else if (cpu == 0 && you == 0){
    printf("Rock Vs Rock, a boring draw...\n");
  } else if (cpu == 1 && you == 0){
    printf("Paper Vs Rock, CPU win!\n");
  } else if (cpu == 1 && you == 2){
    printf("Scissor Vs Paper, you win!\n");
  } else if (cpu == 1 && you == 1){
    printf("Paper Vs Paper, a boring draw...\n");
  } else if (cpu == 2 && you == 1){
    printf("Scissor Vs Paper, CPU win!\n");
  } else if (cpu == 2 && you == 0){
    printf("Scissor Vs Rock, you win!\n");
  } else if (cpu == 2 && you == 2){
    printf("Rock Vs Rock, a boring draw...\n");
  }
*/


  return 0;

}
