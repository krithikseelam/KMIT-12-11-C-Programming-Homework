#include <stdio.h>

float calculateBill(int no_units){
  if(no_units >= 200){
    return 100*2 + 100*3 + (no_units-200)*5;
  }
  else if (no_units > 100){
    return 100*2 + (no_units-100)*3;
  }
  else if(no_units > 0){
    return no_units*2;
  }
  else{
    return -1;
  }
}

int main(){
  int units;
  printf("Enter units:\n");
  scanf("%d",&units);
  
  float bill = calculateBill(units);
  if (bill != -1){
    printf("Total Electricity Bill: %.2f",bill);
  }
  else{
    printf("give a valid units consumed!\n");   
  }
  
  return 0;
}