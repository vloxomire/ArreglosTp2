/*Salda�a Max Sebasti�n*/
/*Practicas de Arreglos Tp2*/
/*Ejercicio #1�
Crear un programa que indique si un array de enteros es capic�a o no. Ojo: el programa� debe funcionar si el array tiene
una cantidad par o impar, probarlo para ambos casos Ejemplos:� �
[2][4][4][2] es capic�a� � [2][4][3][2] NO es capic�a�� � [1][5][1][5][1] es capic�a� � [1][7][1][5][1] NO es capic�a*/
#include<iostream>
int main() {
	//variables
	const int num = 5;
	short entero[5];

	//input
	for (int i = 0; i < num; i++)
	{
		std::cout << "Ingrese valores para el array"<<std::endl;
		std::cin >> entero[i];
	}
	for (int h = 0; h < 5; h++)
	{
		std::cout << entero[h] << ",";
	}
		short capicua1 = entero[0];
		short capicua2 = entero[0+1];
		short capicua3 = entero[5 - 2];
		short capicua4 = entero[5 - 1];
		std::cout << "\n";
		
		//output
		if (capicua1==capicua4)
		{
			if (capicua2==capicua3)
			{
				std::cout << " capicua\n";
			}
			else {
				std::cout << "\n No capicua\n";
			}
		}
		else {
			std::cout << "\n No capicua\n";
		}
	return 0;
}
/*Ejercicio #2
Dados 2 arrays de enteros crear un tercero que tenga los n�meros intercalados. Ojo:� probarlo para arrays de diferentes
tama�os.� � Ejemplos:� �
Array 1: [2][4]� � Array 2: [1][5]� � Resultado: [2][1][4][5]� �
Ejemplos:� � Array 1: [2][4][3][6][7]� � Array 2: [1][5]� � Resultado: [2][1][4][5][3][6][7]
#include<iostream>
int main() {
	const short num = 5;
	unsigned short enteros[num]{ 1,2,3,4,5 };
	for (int i = 0; i < num; i++)
	{

	}
}
}*/
/*Ejercicio #3�
Dados 2 arrays, indicar si el primero est� contenido dentro del segundo.� � Ejemplos:� �
Array 1: [2][4][3][6][7]� � Array 2: [4][3]� � Est� contenido
#include<iostream>
int main() {
	const short num = 5;
	unsigned short enteros[num]{ 1,2,3,4,5 };
	for (int i = 0; i < num; i++)
	{

	}
}
}*/
/*Ejercicio #4�
Dado un array de 10 n�meros enteros random crear otro array que contenga esos� mismos n�meros pero ordenados de menor
a mayor.
#include<iostream>
int main() {
	const short num = 5;
	unsigned short enteros[num]{ 1,2,3,4,5 };
	for (int i = 0; i < num; i++)
	{

	}
}
}*/
/*Ejercicio #5�
Dado un array de 10 n�meros inicializado con valores hardcodeados, pedirle al usuario� que ingrese un n�mero y un �ndice.
El n�mero debe insertarse en el �ndice y el resto de� los n�meros deben ser desplazados hacia la derecha, eliminando al
�ltimo. Ejemplo:� �
Suponiendo que el array es:� � { 1, 5, 7, 3, 20 }� � Ingrese n�mero: 2� � Ingrese �ndice: 1� � { 1, 2, 5, 7, 3 }
#include<iostream>
int main() {
	const short num = 5;
	unsigned short enteros[num]{ 1,2,3,4,5 };
	for (int i = 0; i < num; i++)
	{

	}
}
}*/
/*Ejercicio #6�
Crear un programa que muestre un tablero de 5 high scores (representado por un array� de 5 enteros). Inicialmente todos
los puntajes arrancan en 0. El programa debe solicitar el ingreso de un nuevo puntaje por teclado. Una vez que el� usuario
ingresa un n�mero, este se inserta en el tablero y el tablero se muestra en� pantalla.� � El programa debe continuar
insertando puntajes (en la ubicaci�n que corresponda al� high score) hasta que el usuario ingresa 0.
#include<iostream>
int main() {
	const short num = 5;
	unsigned short enteros[num]{ 1,2,3,4,5 };
	for (int i = 0; i < num; i++)
	{

	}
}
}*/
/*Ejercicio #7�
Crear un juego tipo ahorcado con una palabra hardcodeada previamente
#include<iostream>
int main() {
	const short num = 5;
	unsigned short enteros[num]{ 1,2,3,4,5 };
	for (int i = 0; i < num; i++)
	{

	}
}
}*/