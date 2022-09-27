#include <stdio.h>

int fibonacci ( int n)
{	
	int i, fib, p1, p2;
	
	if(n==1 || n==2)
	{
		return 1; //fib = 1;
	}
	else
	{
		return (fibonacci(n-1) + fibonacci(n-2));
		
	}
}

int main()
{
	int n, fib, p1, p2;
	printf("Digite um Numero: ");
	scanf("%d", &n);
	fib = fibonacci(n);
	printf("Resultado FIBONACCI : %d", fib);
	
}


