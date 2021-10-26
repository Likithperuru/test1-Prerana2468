/*
When a camel is
a) sick its stomach_radius is less than height and less than length. b) happy its height is less than length and less than stomach_radius. c) tense its length is less than height and stomach_radius.
Write a program to find whether a camel is sick, happy, or tense. With functions and structure - 5 marks.
*/

#include <stdio.h>

struct camel { 
  float radius, height, length,weight; 
}; 
typedef struct camel Camel; 


Camel input()
{
  Camel c;
  printf("Enter radius, height, length of a camel\n");
  scanf("%f%f%f",&c.radius, &c.height, &c.length);
  return c;
 }

 /* 0 - means sick
    1 - means happy.
    2 - tense.
 */

 int check_mood(Camel c)
 {
    if( c.radius < c.height && c.radius < c.length
    {
      return 0;
    }
    else if ( c.height < c.length && c.height < c.radius )
    {
      return 1;
    }
    else if ( c.length < c.height && c.length < c.radius) 
    {
      return 2;
    }
    else {
      return 3;
    }
  }
 
 
 void output(Camel c, int mood) 
 {
      if ( mood == 0 ) {
          print("Camel is sick\n");
      }
      else if ( mood == 1 ) {
          printf("Camel is happy\n");
      }
      else if (mood == 2 ) {
          printf("Camel is tensed\n");
      }
      else {
          printf("Camel is in an uknown mood\n");
      }
 }
  
 int main()
 {
    Camel c
    int mood;
    c=input();
    mood = check_mood(c);
    output(c,mood);
    return 0;
 }
