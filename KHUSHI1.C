#include<stdio.h>
#include<conio.h>

void main(){
int i;
int N;
int ans;
clrscr();
 printf("Enter N: ");
 scanf("%d",&N);

for(i=1;i<=10;i++){
 ans=N*i;
 printf("%d*%d=%d\n",N,i,ans);
}
getch();
}