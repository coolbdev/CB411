/*Escribir un programa que permita calcular la diferencia entre dostiempos 
t1 y t2 usando una estructura llamada Tiempo que contenga los datos de hora, 
minuto y segundo.*/
#include<stdio.h>
struct Tiempo
{
	int hora;
	int minuto;
	int segundo;
};
typedef struct Tiempo tiempo;
/*Linea 11: Se define un tipo de dato tiempo para no usar la declaracion 
struct Tiempo nombreVariable*/
tiempo leerTiempo();

tiempo diferenciaTiempo(tiempo, tiempo);

 int main()
{
	tiempo Ti;
	tiempo Tf;
	tiempo intervalo;
	printf("Ingrese el tiempo de inicio\n");
	Ti=leerTiempo();
	printf("\nIngrese el tiempo de finalizacion\n");
	Tf=leerTiempo();
	
	printf("\n*************************************\n");
	
	intervalo = diferenciaTiempo(Tf, Ti);
	printf("%d | %d | %d\n", intervalo.hora, intervalo.minuto, intervalo.segundo);
	return 0;
}

//Funcion de tipo struct que devuelve la misma estructura
tiempo leerTiempo()
{
	tiempo x;
	//printf("Ingrese los datos que se piden a continuacion:\n");
	printf("Hora:  " );
	scanf("%d",&x.hora);
	printf("Minuto: ");
 	scanf("%d",&x.minuto);
 	printf("Segundo:");
	scanf("%d",&x.segundo);
	 return x;
}

//Función que devuelve la diferencia de los tiempos en forma de estructura
tiempo diferenciaTiempo(tiempo y, tiempo z)
{
	int Tf, Ti, T;
	tiempo diferencia;
	
	Tf = y.hora*3600 + y.minuto*60 + y.segundo;
	Ti = z.hora*3600 + z.minuto*60 + z.segundo;
	T= Tf - Ti;
	diferencia.hora = T/3600;
	T = T%3600;
	diferencia.minuto = T/60;
	T = T%60;
	diferencia.segundo = T;
	return diferencia;
}
