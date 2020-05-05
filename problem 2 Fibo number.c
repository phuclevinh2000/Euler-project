#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//This program is use Fibonacci numbers
//link of the contest https://www.hackerrank.com/contests/projecteuler/challenges/euler00/problem

int funk_1(int vao);
int main()
{
    int in;
    scanf("%d", &in);
    long int out[in];
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

int funk_1(vao)
{
    long long int a,b,c;
    long long int sum=0;

    a=1;
    b=2;

    while(b <= vao)
    {
        if(b%2==0)  sum+=b;
        c=a+b;
        a=b;
        b=c;
       // printf(" %d %d ", a,b);
    }
    printf("%d\n", sum);
    return 0;
}

