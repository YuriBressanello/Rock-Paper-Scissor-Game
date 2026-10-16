#include <stdio.h>
#include <time.h>
#include <stdbool.h>
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
      printf("Please, insert a valid input (y/n): ");
      scanf(" %c", c);
    }
  }while(flag);
}

void check_choice(int *choice){
  while(*choice<0 || *choice>2){
    printf("Please, insert a valid input (rock = 0, paper = 1, scissor = 2): ");
    scanf("%d", choice);
  }
}

int main(){

  srand(time(NULL));

  int rock = 0;
  int paper = 1;
  int scissor = 2;

  int cpu, you, res, mod;
  char answer;

  int counter_win_cpu = 0;
  int counter_win_you = 0;

  const char *names [] = {"Rock", "Paper", "Scissor"};

  // rock 0, paper 1, scissor 2

  do{
    printf("Choose rock (0), paper (1) or scissor (2): ");
    scanf("%d", &you);
    check_choice(&you);
    cpu = rand() % 3; // number between 0-2

    //FORMULA: you win if res = (you-cpu + 3), res%mod==1
    res = you - cpu + 3;
    mod = res%3;
    if (mod==1) {
      counter_win_you++;
      printf("%s Vs %s, you win!\n", names[you], names[cpu]);
    } else if (mod == 0){
      printf("%s Vs %s, a boring draw...\n", names[you], names[cpu]);
    } else {
      counter_win_cpu++;
      printf("%s Vs %s, you lose =(\n", names[cpu], names[you]);
    }

    show_result(counter_win_cpu, counter_win_you);
    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &answer);
    check_answer(&answer);
  }while(answer!='n' && answer!='N');

  printf("FINISH -- TOTAL SCORE\n");
  show_result(counter_win_cpu, counter_win_you); 

  printf("See you next time \U0001F44B!\n");

  return 0;

}
