/*
Strings Write a program to find if the name of the camel is a nice name. 
Camels name is nice if it has at least 2 vowels and 2 consonants in it. with four functions - 5 marks.
*/
#include <stdio.h>

void input(char name[])
{
    printf("Enter the name of a Camel \n");
    scanf("%s", name);
}

/*
  0 - Nice
  1 - Not nice
*/

int is_nice_name(char name[], int length)
{
    int i,vowels=0,consonants=0;
	for(i=0;name[i];i++)  
    {
    	if((name[i]>=65 && name[i]<=90)|| (name[i]>=97 && name[i]<=122))
    	{
            if(name[i]=='a'|| name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O' ||name[i]=='U')
		      vowels++;
            else
             consonants++;
        }
    }
    if (vowels >= 2 && consonants >= 2) return 0
    else return 1
}

void output(int code)
{
    if(code == 0) {
        printf("The Camel have nice name");
    } 
    else if (code == 1) {
        printf("The Camel does not have nice name");
    }
}

int main()
{
    int length;
    printf("Enter String Length; \n");
    scanf("%d", &length);
    char name[length];
    input(name);
    int code = is_nice_name(name, length);
    output(code);
    return 0;
}
