#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(void){
printf("1.-suma\n");
printf("2.-resta\n");
printf("3.-multiplicacion\n");
printf("4.-division\n");
printf("introduce 1 para la suma");
int opt;
scanf("%d",&opt);
int a;
int b;
printf("introduce la primera cantidad:");
scanf("%d",&a);
printf("introduce la segunda cantida;");
scanf("%d",&b);
int c;
if(opt==1)
c=a+b;
else {
if(opt==2){
c=a-b;
}
else{
c=a*b;
}
if(opt==4){

if(b==0){

printf("no existe");

}
else
c=a/b;
}
}
printf("el resultado es %d",c);
}
