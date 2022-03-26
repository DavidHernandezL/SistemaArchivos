#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int validateParams( char *command );

int main() {
	char command[20], rute[50];
	printf("User: $");
	scanf("%s %s",command, rute);
	printf("%s\n", rute);
	validateParams( command );
	system("pause");
	
}

int validateParams( char *command) {
	char validParams[][20] = {"crearDirectorio", "abrirArchivo"};
	int i;
	int longitudDelArreglo = sizeof(validParams) / sizeof(validParams[0]);
	for(i = 0; i < 2; i++) {
		if(strcmp(command, validParams[i]) == 0) {
			return i;
		}
	}
	return -1;
}
