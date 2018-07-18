/*2018.5.12
PAT乙级真题 数字分类 (20)

题目描述
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：



A1 = 能被5整除的数字中所有偶数的和；

A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；

A3 = 被5除后余2的数字的个数；

A4 = 被5除后余3的数字的平均数，精确到小数点后1位；

A5 = 被5除后余4的数字中最大数字。

输入描述:
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。


输出描述:
对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。

输入例子:
13 1 2 3 4 5 6 7 8 9 10 20 16 18

输出例子:
30 11 2 9.7 9*/
#include<stdio.h>
int main() {
  int num[1000];
  int flag = 0;
  int N = 0;
  int  A4num = 0;
  int A5max = 0 ;
  int a51max =0;
  int A1 = 0, A2= 0,A3= 0,A4= 0,A5 = 0;
  scanf("%d",&N );
  for(int i = 1; i < N; i++)
     scanf("%d\n",&num[i] );
  for ( int i = 0;i <N ;i++) {
    if(num[i]%5==0&&num[i]%2==0)
     {
       A1 = A1+num[i];
     }

     if(num[i]%5==1)
     {
       if(flag ==0)
       {
         A2 = A2+num[i];
         flag = 1;
       }else
       {
         A2 = A2 -num[i];
         flag = 0;
       }
     }

      if(num[i]%5==2){
        A3++;
      }

      if(num[i]%5==3){
        A4 = A4+num[i];
        A4num ++;
      }
      if(num[i]%5==4){

        if(num[i]>A5max)
        A5max = num[i];

      }

  }


  float ac ;
  char a1,a2,a3,av,a5;
  if(A1==0){
    printf("N ");
  }
  else printf("%d ",A1);
  if(A2==0){
    printf("N " );
  }
  else{
    printf("%d ",A2 );
  }
  if(A3==0){
    printf("N " );
  }
  else {
    printf("%d ",A3);
  }
  if(A4num ==0){
    printf("N " );
  }else{
    ac = (float)A4 /A4num;
    printf("%.1f ", ac);
  }
  if(A5max ==0){
    printf("N" );
  }else{
    printf("%d",A5max );
  }



  return 0;
}
