#include <stdio.h>

int isPrime(int number){
  for (int i = 2; i < number; i++){
    if (number%i == 0){
      return 0;
    }
  }
  return 1;
}

void displayPrimes(int limit){
  printf("Prime numbers up to %d\n",limit);
  for (int num = 2; num < limit; num++){
    if (isPrime(num)){
      printf("%d ",num); 
    }
  }
}

int main(){
  int number;
  printf("Enter a number:\n");
  scanf("%d",&number);

  if (isPrime(number)){
    printf("%d is a prime number\n",number);
  }
  else{
    printf("%d is not a prime number!\n",number);  
  }
  
  displayPrimes(number);

  return 0;
}