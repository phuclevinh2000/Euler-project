#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//This program is use Fibonacci numbers
//link of the contest https://www.hackerrank.com/contests/projecteuler/challenges/euler05/problem

int funk_1(int vao);

int main()
{
    int in;
    scanf("%d", &in);
    int out[in];
    for(int i=0; i<in; i++)
    {
        scanf("%d", &out[i]);
        //funk_1(out[i]);
    }

    for(int i=0; i<in; i++)
    funk_1(out[i]);
    return 0;
}

int funk_1(vao)
{
    int b;
    int count=0;
    int i=1;
    b=vao;

   while (count!=b)
   {
       if(vao%i != 0)
       {
           vao+=b;
           i=1;
           count = 1;
           //printf("%d\n", vao);
       }
       else if(vao%i==0)
       {
           count++;
           i++;
       }
   }
   printf("%d\n", vao);
   return 0;
}

