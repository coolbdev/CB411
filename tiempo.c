#include<stdio.h>
struct Tiempo
{
	int hora;
	int minuto;
	int segundo;
};
typedef struct Tiempo tiempo;
/*Se usa typedef para utilizar la declaracion tiempo 
en lugar de struct Tiempo*/
tiempo leerTiempo();

tiempo diferenciaTiempo(tiempo, tiempo);

 int main()
{
	tiempo Ti;
	tiempo Tf;
	tiempo intervalo;
	do{
	printf("\nIngrese los tiempos en el formato de 24 horas\n");
	printf("\n*************************************\n");
	printf("Ingrese el tiempo de inicio\n");
	Ti=leerTiempo();
	
	printf("\nIngrese el tiempo de finalizacion\n");
	Tf=leerTiempo();
	
	intervalo = diferenciaTiempo(Tf, Ti);
	printf("\n*************************************\n");
	if(intervalo.hora < 0)
		{
			printf("Datos incorrectos\n"); 
			intervalo.hora=-1;
		}
		
	else
		printf("%d | %d | %d\n", intervalo.hora, intervalo.minuto, intervalo.segundo);
	}while(intervalo.hora < 0 );
	
	
	return 0;
}

//Funcion de tipo struct que devuelve una estructura
tiempo leerTiempo()
{
	tiempo x;
	
	do{
		printf("Hora:  " );
		scanf("%d",&x.hora);
	}while(x.hora>=24||x.hora<0);
	
	do{
		printf("Minuto: ");
 		scanf("%d",&x.minuto);
	}while(x.minuto<0 || x.minuto>=60);
 	do{
		printf("Segundo:");
		scanf("%d",&x.segundo);
	}while(x.segundo<0 || x.segundo>=60);
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
