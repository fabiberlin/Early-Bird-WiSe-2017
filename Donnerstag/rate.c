#include <stdio.h>

int main(){
  
  int money;
  int anticipatedMoney;
  float rate = 0.03;
  int years = 0;

  printf("How much money do you have on your account? ");
  scanf("%i", &money);
  printf("How much money do you want to have? ");
  scanf("%i", &anticipatedMoney);

  while (money <= anticipatedMoney) {
    years++;
    money += money * rate;
  }

  printf("No big deal - you just have to wait %i years.\n", years );
  return 0;
}
