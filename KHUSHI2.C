#include<stdio.h>
#include<conio.h>

void main(){
int i;
int N;
int sum=1;
clrscr();
 printf("Enter N: ");
 scanf("%d",&N);

for(i=1;i<=N;i++){
 sum=sum*i;
printf("factorial number is %d\n",sum);
}
getch();
}