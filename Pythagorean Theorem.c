#include <stdio.h>
#include <math.h>

int main(void) {
  int vao, a[100],b[100],c[100], check[100];
  scanf("%d", &vao);

  for(int i=0; i<vao; i++)      //de luon cho tinh can ra so nguyen nen khong can de dang kia
  {
    scanf("%d %d %d", &a[i], &b[i], &c[i]);
   // printf("\n");
    
  }
  for(int i=0; i<vao; i++)
  {
    check[i]=sqrt(a[i]*a[i]+b[i]*b[i]);         //neu can a^2+b^2 > c thi la goc nhon, neu nho hon thi la goc tu, neu bang nhau thi la goc vuong
    if(check[i]==c[i]) printf("R "); 
    else if(check[i] >c[i]) printf("A ");
    else printf("O ");
  }
  return 0;
}
