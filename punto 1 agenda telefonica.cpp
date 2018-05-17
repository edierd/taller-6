#include<stdio.h>
#include<stdlib.h>
#include <string.h>

FILE *fd;
 int l=1;
struct datosPersonales{
	char nombre[20];
	char apellidos[20];
	char celular[10];
}datos;

void crear(){
	char direccion[] = "C:\\Users\\Alvaro\\Desktop\\taller 6\\agenda telefonica.txt";
	char rpt;
	fd = fopen(direccion,"wt"); 
	
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		
		exit (l);
	}
	
	printf("\n\t.:Crear agenda telefonica:.\n");
	fprintf(fd,"\t.:agenda telefonica\n");
	
	do{
		fflush(stdin);
		printf("\nNombre: ");
		gets(datos.nombre);
		printf("Apellidos: ");
		gets(datos.apellidos);
		printf("Celular: ");
		gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd);
		fprintf(fd,"\nCelular: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&rpt);
	}while(rpt == 's');
}

void agregar(){
	char direccion[] = "C:\\Users\\Alvaro\\Desktop\\taller 6\\agenda telefonica.txt";
	char rpt;
	fd = fopen(direccion,"at"); 
	
	if(fd==NULL){
		printf("Error al tratar de crear el archivo");
		exit (l);
	}
	
	printf("\n\t.:Agregando contactos:.\n");
	
	do{
		fflush(stdin);
		printf("\nNombre: ");
		gets(datos.nombre);
		printf("Apellidos: ");
		gets(datos.apellidos);
		printf("Celular: ");
		gets(datos.celular);
		
		fprintf(fd,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),fd);
		fprintf(fd,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),fd); 
		fprintf(fd,"\nCelular: ");
		fwrite(datos.celular,1,strlen(datos.celular),fd);
		printf("Desea agregar mas contactos(s): ");
		scanf("%c",&rpt);
	}while(rpt == 's');
	
}

void visualizar(){
	int c;
	char direccion[] = "C:\\Users\\Alvaro\\Desktop\\taller 6\\agenda telefonica.txt";
	
	fd = fopen(direccion,"r");
	
	if(fd == NULL){
		printf("Error al tratar de leer el archivo");
		exit (1);
	}
	 
	while((c=fgetc(fd))!=EOF){
		if(c=='\n'){
			printf("\n");
		}
		else{
			putchar(c);
		}
	}
}

int main(){
	int opc;
	
	do{
		printf("\n\t.:MENU:.\n");
		printf("\n1. Crear");
		printf("\n2. Agregar mas contactos");
		printf("\n3. Visualizar contactos existentes");
		printf("\n4. Salir");
		printf("\nOpcion: ");
		scanf("%i",&opc);
		
		switch(opc){
			case 1: crear();break;
			case 2: agregar();break;
			case 3: visualizar();break;
		}
		
		
	}while(opc != 4);

	return 0;
}

