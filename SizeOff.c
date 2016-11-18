/*
Escriba un programa que usa el operador sizeof para determinar 
el tamaño en bytes de los diversos tipos de datos en su sistema 
de computadora. Escriba los resultados al archivo “datos.txt” 
usando el formato: tipo de dato - tamaño en bytes.
*/
#include<stdio.h>

int main()
{
	printf("%d",5/2);
	
	
	/*FILE* fichero;
	
	fichero = fopen("datos.txt","w");//abre el fichero para escribir en el
	fprintf(fichero, "Tipo de dato    | Tamanio en bytes");
	fprintf(fichero, "\n_______________________________ ");
	fprintf(fichero,"\nInt             |  %d", sizeof(int));
	fprintf(fichero,"\nfloat           |  %d", sizeof(float));
	fprintf(fichero,"\ndouble          |  %d", sizeof(double));
	fprintf(fichero,"\nchar            |  %d", sizeof(char));
	fprintf(fichero,"\nlong            |  %d", sizeof(long));

	fclose(fichero);//cierra el fichero para su posterior uso
	*/
	return 0;
}
