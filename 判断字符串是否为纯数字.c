#include <string.h>   //strlen()��Ҫ��ͷ�ļ�
#include<stdio.h>
//#include "stdafx.h"
#define n 100

void main()
{
 char a[n];
 int isnumber(char a[n]);
 printf("������һ���ַ�����\n");
 scanf("%s",a); //�����ַ����������׵�ַ���У�a��ʾ�ַ������׵�ַ
 isnumber( a);  //ʵ�Σ�����ʵ�θ��׵�ַ

}
int isnumber(char a[n]){
 int len = strlen(a);
 int j =0;
 for(int i =0;i<len;i++)  //���������ַ���4
 {
 if(a[i]<=57&&a[i]>=48)  //0~9��ASCII����48~57
 {j++;}  //�ҵ������˾�����++
 }
 //�����������ַ�������һ������ȫ�����֣�����Ϊ0���򶼲������֣���0~len֮�����в���������
 if (j==len){
 printf("ȫΪ����");
 }
 else if(j == 0){printf("ȫ��Ϊ����");}
 else{
 printf("��ȫΪ����");
 }
}
