/*Ejercicio #1  
Crear un programa que tenga una matriz de enteros y llenarla mostrando en cada
posición la fila a la que corresponde.
000
111
222  */
#include<iostream>
int main() 
{
//VARIABLES
	const short fila = 3;
	const short columna = 3;
	short matriz[columna][fila];
//LLENAR MATRIZ
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			matriz[i][j] = i;
		}
	}
//MOSTRAR MATRIZ
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
	return 0;
}
/*Ejercicio #2 
Crear un programa que tenga una matriz de enteros y llenarla mostrando en cada  
posición su número correspondiente.
012  
345  
678 */
/*Ejercicio #3  
Crear un programa que tenga una matriz de chars y llenarla trazando una línea
con O y  X.    
XOO  
OXO  
OOX */
/*Ejercicio #4  
Crear un programa que tenga una matriz de chars y llenarla mostrando en cada posición
una D si es divisible por 2 y una N si no es divisible por el mismo valor. */
/*Ejercicio #5  
Crear un programa que tenga una matriz de enteros y llenarla con valores random
(entre  2 constantes).    
Crear una struct POSICIÓN (x,y) e ingresar sus datos para mostrar en pantalla
que valor  hay en la posición.    Verificar que sea una posición válida.   */
/*Ejercicio #6 
Similar al ejercicio #5, solo que esta vez ingresando 2 posiciones e intercambiarlas
si son  válidas. */
/*Ejercicio #7 
Crear un programa con una matriz de ints, llenarla con valores random y mostrar cual
es  el promedio de la sumatoria de la columna indicada. */
/*Ejercicio #8 
Crear un programa con una matriz de ints, llenarla con valores random y mostrar cual
es  la posición con el valor más grande. */
/*Ejercicio #9 
Crear un programa con una matriz de un struct TILE (TIERRA, PARED) y hardcodear los
valores para “dibujar” un mapa mediante caracteres (- TIERRA / X PARED).
Mostrarlo en pantalla. */
/*Ejercicio #10 
Siguiendo el ejercicio #9, insertar un personaje en el mapa y moverlo utilizando WASD.
Se debe actualizar la posición y comprobar que el casillero sea valido.*/