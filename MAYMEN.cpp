/*Este juego consiste en adivinar un n�mero que est� entre 1 y 999 denominado n�mero secreto, y que elige
el programa autom�ticamente y en forma aleatoria al comienzo de la partida. El jugador, en cada intento
ingresa un n�mero, y el programa debe indicar si el valor ingresado es mayor, menor o igual al n�mero
secreto.
Si el valor ingresado es mayor � menor al n�mero secreto, se indica la situaci�n mostrando el rango
acotado en el que se encuentra el n�mero secreto, y se vuelve a dar la posibilidad al jugador que ingrese un
nuevo n�mero y se repita la evaluaci�n.
Si el valor ingresado es igual al n�mero secreto, entonces el jugador gana la partida. El jugador tendr� 10
intentos, y si no lo descubre se le muestra un mensaje indicando cu�l era el n�mero secreto.
Puntaje: El puntaje obtenido depende de la cantidad de intentos: si lo adivine en el primer intento, obtiene
10 puntos, si lo acierta en el segundo obtiene 9 puntos, y as� sucesivamente. Si luego de transcurridos los 10
intentos no acierta, saca 0 puntos y se informa cu�l era el n�mero para adivinar.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int NumeroGenerado(int Num);

main(){	
	int n, P, Punt=10, y;	
		y= NumeroGenerado(P);
		printf("\n %d", y);
		 for (int X=1; X<=10; X++){
	 		printf("\n\tAdivine un numero entre el 1 y 999:");
			printf("\n Intento N� %d: ",X);
			scanf("%d", &n);
			while(n<1 || n>999){
				printf("\nTiene que ingresar un numero entre 1 y 999: ");
				printf("\n Intente nuevamente");
				printf("\n Intento N� %d: ",X);
				scanf("%d", &n);
			}
				if (n==y){
					printf("\n El numero ingresado es correcto");
					X=10;
				}
					if (n>y){
						printf("\n El numero a adivinar es mas pequeno entre %d y %d", n-1, y-20);
						Punt=Punt-1;
					}
						if (n<y){
							printf("\n El numero a adivinar es mas grande entre %d y %d", n+1, y+20);
							Punt=Punt-1;
						}
		}
	printf("\n Su puntaje es: %d", Punt);
}

/*(){	
	int n, P, Punt=10;	
		NumeroGenerado(P);
		printf("\n %d", P);
		 for (int X=1; X<=10; X++){
	 		printf("\n\tAdivine un numero entre el 1 y 999:");
			printf("\n Intento N� %d: ",X);
			scanf("%d", &n);
			while(n<1 || n>999){
				printf("\nTiene que ingresar un numero entre 1 y 999: ");
				printf("\n Intente nuevamente");
				printf("\n Intento N� %d: ",X);
				scanf("%d", &n);
			}
				if (n==P){
					printf("\n El numero ingresado es correcto");
					X=10;
				}
					if (n>P){
						printf("\n El numero a adivinar es mas pequeno");
						Punt=Punt-1;
					}
						if (n<P){
							printf("\n El numero a adivinar es mas grande");
							Punt=Punt-1;
						}
		}
	printf("\n Su puntaje es: %d", Punt);
}*/

int NumeroGenerado(int Num){
	srand(time(NULL));
	Num= 1 + rand()%(999+1 - 1);
}
