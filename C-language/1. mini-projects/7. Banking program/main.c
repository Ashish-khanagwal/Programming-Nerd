#include <stdio.h>
#include <stdbool.h>

void checkBalance(float balance);
void deposit(float *balance);
void withdraw(float *balance);

int main() {

  bool isExit = false;
  int user_choice = 0;
  float balance = 15000.00f;

  printf("=== Welcome To The Bank ===\n");

  while (!isExit) {
    printf("\nSelect an option: \n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n\n");
    
    printf("Enter your choice: ");
    scanf("%d", &user_choice);

    if (user_choice == 1){
      checkBalance(balance);
    } else if (user_choice == 2) {
      deposit(&balance);
    } else if (user_choice == 3) {
      withdraw(&balance);
    } else if (user_choice ==4) {
      isExit = true;
    } else {
      printf("Wrong choice!\n");
    }
  } 

  return 0;
}

void checkBalance(float balance) {
  printf("Your account balance is: $%.2f\n", balance);
}

void deposit(float *balance) {
  float money;
  printf("Enter the amount of money you want to deposit: ");
  scanf("%f", &money);

  *balance += money;
  printf("$%.2f is deposited in your account, Current balance in your account is: $%.2f\n", money, *balance);

}

void withdraw(float *balance) {
  float money;
  printf("Enter amount you want to withdraw: ");
  scanf("%f", &money);

  if (*balance < money) {
    printf("Insufficient funds! Your balance is $%.2f\n", *balance);
  } else {
    *balance -= money;
    printf("$%.2f withdrawned from account. Available balance is: $%.2f\n", money, *balance);
  }

}
