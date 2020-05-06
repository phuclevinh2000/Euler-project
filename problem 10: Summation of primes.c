#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
        //out[i]=out[i];
    }

    for(int i=0; i<in; i++)
    funk_1(out[i]);
    return 0;
}

int funk_1(vao)
{
    int sum=0;
    //printf("%d\n", vao);
    int i=2;
    while(i<=vao)
    {
        int j;
        int count = 0;
        int dem;

        for(j=2; j<= sqrt(i); j++)
        {
            if(i%j==0)  count++;
        }
        //if(count == 0)  //thi la so nguyen to
        if(count == 0){
           // printf("%d la so nguyen to\n", i);
           sum+=i;
        }
        else {
           // printf("%d ko phai so nguyen to\n", i);
        }
        i++;
        count =0;
       // printf("%d %d\n", i, vao);
    }

    printf("%d\n", sum);
    return 0;
}
