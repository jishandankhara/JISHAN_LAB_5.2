//5.2 Q2 write a program to finde the maximum number from the given 4 numbers using nested if else. Also, draw a flow chart in your book.


#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d;
clrscr();
printf("Enter the value of the frist number:");
scanf("%d",&a);
printf("Enter the value of the second number:");
scanf("%d",&b);
printf("Enter the value of the third number:");
scanf("%d",&c);
printf("Enter the value of the forth number:");
scanf("%d",&d);
if(a>b){
      if(a>c){
      if(a>d){
	printf("the maximum number is:%d",a);
	 }else{
	printf("the maximum number is:%d",d);
	}}else{
	if(c>d){
	printf("the maximum number is:%d",c);
	}else{
	printf("the maximum number is:%d",d);
	}}}
else{
      if(b>c){
      if(b>d){
      printf("the maximum number is:%d",b);
      }else{
      printf("the maximum number is:%d",d);
      }}else{
      if(c>d){
      printf("the maximum number is:%d",c);
      }else{
      printf("the maximum number is:%d",d);
      }}}
      getch();
}