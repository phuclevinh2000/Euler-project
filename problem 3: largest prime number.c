#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int smallest_prime_factor(long long int );
int main(){
 long long  int t,a0,p,i;
    scanf("%lld",&t);
    long long int *s=(long long int*) malloc(t*sizeof(long long int));
    for(a0 = 0; a0 < t; a0++){
       long long int n;
        scanf("%lld",&n);
    do{
        p = smallest_prime_factor(n);
        if(p<n)
            n=n/p;
        if (p==n)
          s[a0]=p;

        }while(p < n);
    }

 for(i=0;i<t;i++)
        printf("%lld\n",s[i]);
        return 0;
}
long long int smallest_prime_factor(long long int n){
    int i;
    for(i=2;i<=sqrt(n) +1;i++)
        if (n % i == 0)
            return i;
    return n  ;
}
