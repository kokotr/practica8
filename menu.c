
#include<stdio.h>
#include<stdlib.h>

void print(float n,float n2,int op){

switch(op){

case 1:
printf("the result is : %g",n+n2);
op=0;
break;


case 2:

printf("the result is :%g",n-n2);
op=0;
break;

case 3:

printf("the result is:%g",n*n2);
op=0;
break;

case 4:

printf("the result is: %g",n/n2);
op=0;
break;

}

}


void date(int c){



float number1,number2;
printf("give the first number?:");

scanf("%g",&number1);

printf("give the second number?:");

scanf("%g",&number2);

print(number1,number2,c);

}




void selection(int option){

int c;


switch(option){

case '1':
system("clear");
printf("***ADD***\n");

c=1;
date(c);
option=' ';

break;


case '2':

system("clear");
printf("***REST***\n");

c=2;
date(c);
break;


case '3':
system("clear");
printf("***MULT***\n");

c=3;
date(c);

break;


case '4':
system("clear");
printf("***DIV***\n");
c=4;
date(c);
break;



case '5':

printf("BYE :)\n");



break;




default:printf("invalid option :(");

}





}



void menu(){

system("clear");
printf(" *********MENU*********\n");
printf("|1.-ADD         2.-REST|\n");
printf("|3.-MULTI       4.-DIV |\n");
printf(" **********************\n");

}



int main(){

char option;

menu();

scanf("%c",&option);

selection(option);



}










