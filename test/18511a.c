#include <stdio.h>
int main(){
       int n=0;
    int A,B,C;
    printf("dd\n");
    scanf("%d",&n);
    printf("you%dzu\n",n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&A,&B,&C);
       printf("Case #%d: %s\n",i+1,(A+B)>C?"true":"false");
   }
return 0;
}
