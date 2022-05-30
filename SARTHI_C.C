#include<stdio.h>
#include<string.h>
void main()
{
char str1[12]="hello";
char str2[12]="world";
char str3[12];
int len;
strcpy(str3, str1);
strcat(str1, str2);
len = strlen(str1);
printf("strlen(str1) : %d \n",len);
}