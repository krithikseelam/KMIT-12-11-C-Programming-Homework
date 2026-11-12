#include <stdio.h>

int calculateTotal(int mark1, int mark2, int mark3){
  return mark1 + mark2 + mark3;
}

float calculatePercentage(int total){
  return (total/300.0)*100;
}

char findGrade(float percentage){
  if (percentage >= 90){
    return 'A';
  }
  else if (percentage > 75){
    return 'B';
  }
  else if (percentage > 60){
    return 'C';
  }
  else if (percentage > 40){
    return 'D';
  }
  else{
    return 'F';
  }
  
}

int main(){
  int marks[3];
  printf("Enter marks:\n");
  
  for (int i = 0; i < 3; i++){
    scanf("%d",&marks[i]);
    if (marks[i] < 0 || marks[i] > 100)
    {
      printf("give valid marks\n");
      i--;
    }
  }

  int total = calculateTotal(marks[0],marks[1],marks[2]);
  float percentage = calculatePercentage(total);
  char grade = findGrade(percentage);
  printf("Total: %d\n",total);
  printf("Percentage: %.2f\n",percentage);
  printf("Grade: %c\n",grade);
  
  return 0;
}