#include<stdio.h>
#include<conio.h>

void main(){
int i;
int N;
int sum=0;
clrscr();
 printf("Enter N: ");
 scanf("%d",&N);

for(i=1;i<=N;i++){
 sum+=i;
 printf("sum of all numbers are %d\n",sum);
}
getch();
}