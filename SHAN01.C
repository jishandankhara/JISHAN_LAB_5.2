//5.2 Q1 write a program to finde the minimum number from the given 3 numbers using nested if else.Also, draw a flow chart in your book.
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("Enter the value of the frist number:");
scanf("%d",&a);
printf("Enter the value of the second number:");
scanf("%d",&b);
printf("Enter the value of the third number:");
scanf("%d",&c);
if(a<b){
      if(a<c){
      printf("the minimum number is:%d",a);
      }else{
      printf("the minimum number is:%d",c);}
}else{
      if(b<c){
      printf("the minimum number is:%d",b);
      }else{
      printf("the minimum number is:%d",c);}}
getch();
}