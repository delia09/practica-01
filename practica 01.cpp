#include<stdio.h>
#include<stdlib.h>
int main() {
	float a,b,c;
	int opt;
	printf("\n1.-Suma\n2.-Resta\3.-Multiplicacion\n4.-Divison\n");
	printf("Seleccione UNA opcion");
	scanf("%d",&opt);
	printf("ingrese el primer operando:  ");
	scanf("%f",&a);
	printf("ingrese el segundo operando:  ");
	scanf("%f",&b);
	if(opt==1) {
		c=a+b;
	}
	else if (opt==2) {
		c=a-b;
	}
	else if (opt==3) {
		c=a*b;
	}
	else if (opt==4) {
		while(b==0) {
			printf("ERROR b, debe ser distinto de 0\n");
			printf("introduce el segundo operando:  ");
			scanf("%f",&b);
		}
		c=a/b;
	}
	else
	 {
	 	printf("opcion invalida");
	 	c=0;
	 }
	 printf("el resultado es %f", c);
	 
}
