#include <stdio.h>
#include <math.h>

void input(int size, int array[size])
{
  printf("Enter the element of the array");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
}

float odd_average(int size, int array[size])
{
  float sum = 0;
  int count = 0;
  float average = 0;
  for (int i = 0; i < size; i++) {
      if ( array[i] %2 != 0)
            sum += array[i];
            count += 1;
  }
  if(sum)
        average = sum / count;
  return average;
}

void output(float result)
{
  printf("Average of the given array is %f", result);
}

int main() {
  int size;
  printf("Enter array length : \n");
  scanf("%d",&size);
  int array[size];
  input(size, array);
  float result = odd_average(size, array);
  output(result);
  return 0;
}
