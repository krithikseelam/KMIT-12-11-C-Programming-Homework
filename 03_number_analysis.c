#include <stdio.h>

int countDigits(int number){
  int count = 0;
  while (number > 0){
    count++;
    number /= 10;
  }
  return count;
}

int sumDigits(int number){
  int sum = 0;
  while (number > 0){
    sum += number%10;
    number /= 10;
  }
  return sum;
}

int reverseNumber(int number){
  int reverse = 0;
  while (number > 0){
    reverse = reverse*10 + number%10;
    number /= 10;
  }
  return reverse;
}

int main(){
  int number;
  printf("Number:\n");
  scanf("%d",&number);

  printf("Number of digits: %d\n",countDigits(number));
  printf("Sum of digits: %d\n",sumDigits(number));
  printf("Reverse number: %d\n",reverseNumber(number));
  
  return 0;
}