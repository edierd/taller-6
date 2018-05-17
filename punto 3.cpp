#include<stdio.h>
#include<stdlib.h>

FILE *fd;

int main(){
	char direccion[] = "C:\\Users\\Alvaro\\Desktop\\taller 6\\manejo archivo.txt";
	fd = fopen(direccion,"r");
	int n,i;
	printf("Digite el total de elementos del arreglo: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d. Numero: %d\n",i,direccion);
	}
	
	system("pause");
	return 0;
}
