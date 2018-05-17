#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);
int main(){
	int numero,i;
	
	printf("digite el numero de elementos:");
	scanf("%i",&numero);
	
	for(i=1;i<=numero;i++){
		printf("%i,",fibonacci(i));
	}
	
	system("pause");
	return 0;
}

int fibonacci(int n){
if(n==0 || n==1){
	return n;
}
else{
	return (fibonacci(n-1)+fibonacci(n-2));
}	
	
}
