#include<stdio.h>
int main()
{
	printf("Programa que evalua la serie:\n");
	printf("1/a + 1/a+b + 1/a+2b + 1/a+3b + 1/a+4b + ... + 1/a+nb, con a>=1,b,n ∈ N+{0}\n\n");
	int a,b,n,contador=0;
	double resultado=0;
	printf("Ingrese el valor de a: ");
	scanf("%d",&a);
	printf("Ingrese el valor de b: ");
	scanf("%d",&b);
	printf("Ingrese el valor de n: ");
	scanf("%d",&n);

	if(a>=1){
		while(contador<=n){
			resultado += 1/(((double)a)+(n*(double)b));
			printf("%lf+",resultado);
			contador++;
		}
		printf("\n\nSolución: 1/%d+%d*%d = %lf\n", a,n,b,resultado);
	}else{
		printf("\n\nError, ¿ a >= 1 ?\n");
	}	

	return 0;
}
