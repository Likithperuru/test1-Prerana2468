/*
Write a program to find borga^x given x. The formula for finding borga^x
1 + x/3! + x^2/5! + x^3/7! .....
stop when the next term is less 0.000001, With four functions
*/
#include <stdio.h>
#include <math.h>

float input_x()
{
    float x;
    printf("Enter the value of x\n");
    scanf("%f",&x);
    return x;
}

float compute_borgax(float x)
{
     float ret = 1;
     prev = 1;
     for(int i = 1; term > 0.000001; i+=2 {
          next_term = prev * x/((i+1)*(i+2)
          ret = ret + next;
          prev = next_term;
      }
      return ret;
 }
 
void output(float x, float result)
{
    printf("borga(%f) is %f\n",x,result);
}

int main()
{
    float x,result;
    x = input_x();
    result = compute_borgax(x);
    output(x,result);
    return 0;
 }
