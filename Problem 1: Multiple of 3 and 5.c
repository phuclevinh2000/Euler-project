#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//This program is use to multiples of 3 and 5
//link of the contest https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem

int funk_1(int a);
int main()
{
    int gg;
    int in;
    scanf("%d", &in);
    int out[in];
    for(int i=0; i<in; i++)
    {
        scanf("%d", &out[i]);
        //funk_1(out[i]);
        out[i]=out[i]-1;
    }

    for(int i=0; i<in; i++)
    funk_1(out[i]);
    return 0;
}

int funk_1(a)
{
    double sum1,sum2,sum3;
    double phu1=0;
    double phu2=0;
    double phu3=0;
    int b,c;

    b=a;
    c=a;
    phu1= (a-3)/3+1;

    phu2= (a-5)/5+1;
    if(a<15) phu3=0;
    else
    {
        phu3= (a-15)/15+1;
        phu3 = floor(phu3);
    }
    phu1 = floor(phu1);
    phu2 = floor(phu2);

  // printf("%f %f %f\n", phu1, phu2, phu3);
    for(int i=0; i<15; i++)
    {
        if(c%15==i)
        {
            c=c-i;
        }
    }
        for(int i=0; i<5; i++)
    {
        if(b%5==i)
        {
            b=b-i;
        }
    }
        for(int i=0; i<3; i++)
    {
        if(a%3==i)
        {
            a=a-i;
        }
    }
  //printf("%d %d %d\n",a,b,c);
    sum1=((3+a)*phu1)/2;
   sum2=((5+b)*phu2)/2;
    if(phu3==0) sum3=0;
    else sum3=(((15+c)*phu3)/2);
  //printf("%f %f %f\n", sum1, sum2, sum3);
    printf("%.0f\n", (sum1+sum2-sum3));
    return 0;
}
