#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int o;
char op;
float a;
float b;
float c;
do{
	printf("Elige una opcion \n");
	printf("1.-Suma\n");
	printf("2.-Resta\n");
	printf("3.-Multiplicacion\n");
	printf("4.-Division\n");
   scanf("%d",&o);
   printf("Introduce el primer valor:"); scanf("%d",&a);
   printf("Introduce el segundo valor:"); scanf("%d",&b);
	switch (o){
		
		case 1:
		c=a+b;
printf ("El resultado es: %d \n",c);
		break;
		
		case 2:
		c=a-b;
printf ("El resultado es: %d \n",c);
		break;
		
		case 3:
		c=a*b;
printf ("El resultado es: %d \n",c);
		break;
		
		case 4:
		while(b==0){
			printf ("El segundo valor debe de ser diferente a cero \n"); 
			scanf("%d",&b);
			}
		c=a/b;
printf ("El resultado es: %d \n",c);
		break;
		
		default:
		printf ("Opcion no valida\n");
	}
	printf("Quieres hacer otra operacion?\n");
	printf("(S) Si \n");
	printf("(N) No\n");
	scanf("%c",&op);
	op=getch();
}
while(op=='S' || op=='s');
return 0;
}