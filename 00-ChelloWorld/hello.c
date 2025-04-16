#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	FILE * archivo= NULL;
	
	archivo = fopen("output.txt","w");
	
	printf(" Hola ALberto Daniel Ayala Cabrera! \n");
	
	fprintf(archivo, " Hola ALberto Daniel Ayala Cabrera! \n");
	
	fclose(archivo);
	
	
	return(0);
}