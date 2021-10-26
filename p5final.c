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
     float prev = 1;
     float next_term;
     for(int i = 1;  i > 0.000001; i+=2) {
          next_term = prev * x/((i+1)*(i+2));
          ret = ret + next_term;
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
