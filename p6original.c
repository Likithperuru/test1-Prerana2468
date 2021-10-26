/*
Array processing With functions - 5 marks. 
print all the elements of the array and then the average
use following function prototypes. void input(int n, int a[n]) 
float odd_average(int n, int a[n]); void output(int n, int a[n]); 
 and main.
*/  

#include <stdio.h>
#include <math.h>

int input(int size)
{

  int array[size];
  printf("Enter the element of the array");
  for (int i = 0; i < size; i++) {
    scanf("%f", &ara[i]);
  }
  return array;
}

float odd_average(int array, int size)
{
  float sum = 0;
  for (int i = 0; i < size; i++) {
      sum += array[i];
  }
  float average = sum / size;
  return average
}

void output(float result)
{
  printf("Average of the given array is %f", result)
}

int main() {
  int size;
  printf("Enter array length : \n");
  scanf("%f",&size);
  int array = input(size);
  float result = odd_average(array, size);
  output(result);
  return 0;
}
