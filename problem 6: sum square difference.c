#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//this program use to solve Euler 6 and here is the link of the test
//hackerrank.com/contests/projecteuler/challenges/euler006/problem

int func(int test);
int main()
{
    long long a;
    scanf("%lld", &a);
    long out[a];
    for(int i=0; i<a;i++)
    {
        scanf("%lld", &out[i]);
    }
    for(int i=0; i<a; i++) func(out[i]);
    return 0;

}

int func(test)
{
    long long sum1=0, sum2=0;

    sum1=(test*(test+1)*(2*test+1))/6;      //use the formular (n(n+1)(2n+1))/6

    sum2=(test*(1+test))/2;                 //the second sum CT day so cong
    sum2*=sum2;                             //the second sum

    //sum1=(3*test^4 + 2*test^3 - 3*test^2 - 2*test)/12;
   // printf("%d %d\n", sum1, sum2);         //test the result

    long long diff= abs(sum1-sum2);                 //calculate the abs of the diff
    printf("%lld\n", diff);
    return 0;
}
