#include <stdio.h>
#include <math.h>
#define PI 3.1415

struct camel { 
  float radius, height, length,weight; 
}; 
typedef struct camel Camel; 

Camel input()
{
  Camel c;
  printf("Enter radius, height. length of the camel\n");
  scanf("%f%f%f", &c.radius, &c.height, &c.length);
  return c;
}

float find_weight(Camel c)
{
  float weight;
  weight = PI * c.radius * sqrt(c.height * c.length);
  return weight;
}

void output(Camel c)
{
  printf("The weight of the camel with radius = %f, height = %f, length = %f is %f\n", c.radius, c.height, c.length, c.weight);
}

int main()
{
  Camel c;
  c = input();
  c.weight = find_weight(c);
  output(c);
  return 0;
}
