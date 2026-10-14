#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void show_result(int cwc, int cwy){
  printf("|||||||||||||||||||||\n");
  printf("|| CPU: %d - YOU: %d ||\n", cwc, cwy);
  printf("|||||||||||||||||||||\n");
}

void check_answer(char *c){
  bool flag = true;
  do{
    if(*c=='Y' || *c=='y' || *c=='N' || *c=='n'){
      flag = false;
    } else{
      printf("Please, insert a correct value (y/n): ");
      scanf(" %c", &c);
    }
  }while(flag);
}

int main(){

  srand(time(NULL));

  int rock = 0;
  int paper = 1;
  int scissor = 2;

  int cpu;
  int you;
  char answer;

  int counter_win_cpu = 0;
  int counter_win_you = 0;

  do{
    printf("Choose rock (0), paper (1) or scissor (2): ");
    scanf("%d", &you);
    cpu = rand() % 3; // number between 0-2
    if (cpu == 0 && you == 2){
      printf("Rock Vs Scissor, CPU win!\n");
      counter_win_cpu++;
    } else if (cpu == 0 && you == 1){
      printf("Rock Vs Paper, you win!\n");
      counter_win_you++;
    } else if (cpu == 0 && you == 0){
      printf("Rock Vs Rock, a boring draw...\n");
    } else if (cpu == 1 && you == 0){
      printf("Paper Vs Rock, CPU win!\n");
      counter_win_cpu++;
    } else if (cpu == 1 && you == 2){
      printf("Scissor Vs Paper, you win!\n");
      counter_win_you++;
    } else if (cpu == 1 && you == 1){
      printf("Paper Vs Paper, a boring draw...\n");
    } else if (cpu == 2 && you == 1){
      printf("Scissor Vs Paper, CPU win!\n");
      counter_win_cpu++;
    } else if (cpu == 2 && you == 0){
      printf("Scissor Vs Rock, you win!\n");
      counter_win_you++;
    } else if (cpu == 2 && you == 2){
      printf("Rock Vs Rock, a boring draw...\n");
    }
    show_result(counter_win_cpu, counter_win_you);
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &answer);
    check_answer(&answer);
    //se la risposta è diversa da y/Y/n/N deve inserire una risposta valida
  }while(answer!='n');

  printf("FINISH -- TOTAL SCORE\n");
  show_result(counter_win_cpu, counter_win_you); 

  printf("See you next time \U0001F44B!\n");

  return 0;

}
