#include <string.h>   //strlen()需要的头文件
#include<stdio.h>
//#include "stdafx.h"
#define n 100

void main()
{
 char a[n];
 int isnumber(char a[n]);
 printf("请输入一串字符串：\n");
 scanf("%s",a); //输入字符串，给定首地址就行，a表示字符数组首地址
 isnumber( a);  //实参，数组实参给首地址

}
int isnumber(char a[n]){
 int len = strlen(a);
 int j =0;
 for(int i =0;i<len;i++)  //遍历整个字符串4
 {
 if(a[i]<=57&&a[i]>=48)  //0~9的ASCII码是48~57
 {j++;}  //找到数字了就数量++
 }
 //数字总数和字符串长度一样，则全是数字，总数为0，则都不是数字，在0~len之间则有部分是数字
 if (j==len){
 printf("全为数字");
 }
 else if(j == 0){printf("全不为数字");}
 else{
 printf("不全为数字");
 }
}
