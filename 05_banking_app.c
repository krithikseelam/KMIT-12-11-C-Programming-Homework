#include <stdio.h>

void displayMenu(){
  printf("Deposit Money (1)\n");
  printf("Withdraw Money (2)\n");
  printf("Check Balance (3)\n\n");
}

int deposit(int balance, int amount){
  balance += amount;
  return balance;
}

int withdraw(int balance, int amount){
  balance -= amount;
  return balance;
}

void displayBalance(int balance){
  printf("Current Balance: ₹ %d\n",balance);
}

int takeAmount(){
  int amount;
  printf("Enter amount: \n");
  scanf("%d",&amount);
  return amount;
}



int main(){
  int balance = 5000;
  int choice = 1;
  int amount;
  displayMenu();
  while (choice != 4){
    printf("Enter a choice\n");
    scanf("%d",&choice);
    
    if (choice > 4 || choice <= 0){
      printf("Give a valid choice\n");
      continue;
    }

    if (choice == 1){
      amount = takeAmount();
      if (amount > 0){
        balance = deposit(balance,amount);
        printf("Deposit successful\n");
      }
      else{
        printf("enter a valid amount\n");
        amount = takeAmount();
        continue;
      }
    }
    else if (choice == 2){
      amount = takeAmount();
      if (amount < balance && amount > 0){
        balance = withdraw(balance,amount);
        printf("Withdraw successful\n");
        
      }else{
        printf("enter a valid amount\n");
        continue;
      }
    }
    else if (choice == 3){
      displayBalance(balance);
    }
  }
  printf("Thank You for visiting!\n");
  
  return 0;
}