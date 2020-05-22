/*Saldaña Max Sebastián*/
/*Practicas de Arreglos Tp2*/
/*Ejercicio #1 
Crear un programa que indique si un array de enteros es capicúa o no. Ojo: el programa  debe funcionar si el array tiene
una cantidad par o impar, probarlo para ambos casos Ejemplos:   
[2][4][4][2] es capicúa    [2][4][3][2] NO es capicúa     [1][5][1][5][1] es capicúa    [1][7][1][5][1] NO es capicúa*/
/*#include<iostream>
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
}*/
/*Ejercicio #2
Dados 2 arrays de enteros crear un tercero que tenga los números intercalados. Ojo:  probarlo
para arrays de diferentes tamaños.
Ejemplos:   Array 1: [2][4]    Array 2: [1][5]    Resultado: [2][1][4][5]   
Ejemplos:    Array 1: [2][4][3][6][7]    Array 2: [1][5]    Resultado: [2][1][4][5][3][6][7]*/
/*#include<iostream>
#include<stdio.h>
#include<time.h>
int main() {
	//variables
	srand(time(NULL));
	const short num1 = 5;
	const short num2 = 3;
	unsigned short enteros1[num1];
	unsigned short enteros2[num2];
	unsigned short enteros3[num1+num2];
	short pos = 0;

	//arreglo1
	std::cout <<"Arreglo 1:\n";
	for (int i = 0; i < num1; i++)
	{
		pos = i;
		int random = rand() % (10 - 1) + 1;
		enteros1[i] = random;
		std::cout <<enteros1[i]<<",";
	}
	//arreglo2
	std::cout << "\nArreglo 2:\n";
	for (int j = 0; j < num2; j++)
	{
		pos = j;
		int random = rand() % (10 - 1) + 1;
		enteros2[j] = random;
		std::cout << enteros2[j]<< ",";
	}//esta sano array2
	//arreglo3
	std::cout << "\nArreglo 3:\n";
	pos = 0;
	for (int x = 0; x < num1 ; x++)
	{
		
		enteros3[pos] = enteros1[x];
		pos++;
		if (num2 > x) {
			pos++;
		}
	}
	pos = 0;
	for (int z = 0; z <  num2; z++)
	{
		if (num1 > z) {
			pos++;
		}
		enteros3[pos] = enteros2[z];
		pos ++;

	}
	for (int y = 0; y < num1 + num2; y++)
	{
		std::cout << enteros3[y] << ",";
	}
}*/
/*Ejercicio #3 
Dados 2 arrays, indicar si el primero está contenido dentro del segundo.    Ejemplos:   
Array 1: [2][4][3][6][7]    Array 2: [4][3]    Está contenido
#include<iostream>
int main() {
	const short num1 = 5;
	const short num2=2;
	bool si = false;
	unsigned short array1[num1]{ 2,4,3,6,7};
	unsigned short array2[num2]{ 4,3};
	
	for(short i=0;i<num1-1;i++){
		if(array2[0]==array1[i]&&array2[1]==array1[i+1]){
			si=true;
		}
	}
	if (si) {
		std::cout<< "Esta contenido\n";
	}
	else {
		std::cout << "No esta contenido\n";
	}
	return 0;
}
/*Ejercicio #4 
Dado un array de 10 números enteros random crear otro array que contenga esos  mismos números pero ordenados de menor
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
/*Ejercicio #5 
Dado un array de 10 números inicializado con valores hardcodeados, pedirle al usuario  que ingrese un número y un índice.
El número debe insertarse en el índice y el resto de  los números deben ser desplazados hacia la derecha, eliminando al
último. Ejemplo:   
Suponiendo que el array es:    { 1, 5, 7, 3, 20 }    Ingrese número: 2    Ingrese índice: 1    { 1, 2, 5, 7, 3 }
#include<iostream>
int main() {
	const short num = 5;
	unsigned short enteros[num]{ 1,2,3,4,5 };
	for (int i = 0; i < num; i++)
	{

	}
}
}*/
/*Ejercicio #6 
Crear un programa que muestre un tablero de 5 high scores (representado por un array  de 5 enteros). Inicialmente todos
los puntajes arrancan en 0. El programa debe solicitar el ingreso de un nuevo puntaje por teclado. Una vez que el  usuario
ingresa un número, este se inserta en el tablero y el tablero se muestra en  pantalla.    El programa debe continuar
insertando puntajes (en la ubicación que corresponda al  high score) hasta que el usuario ingresa 0.
#include<iostream>
int main() {
	const short num = 5;
	unsigned short puntaje[num]{ 0 };
	short valor=0;

do{}while(num!=0);
}
	short aux=-1;
for{int i=0;i<num;i++
	std::cout<<puntaje[i]<<",";	
}
std::cout<<"Ingrses el puntaje\n";
std::cin>>valor;
for(short i=puntaje-1;i>=0;i--){
	if(valor>puntaje[i]){
		aux=i;
	}
}

if(aux!=1){
for(i=aux+1;i>=index;i--){
	puntaje[i]=puntaje[i-1];
}
	puntaje[aux]=valor;
}
}*/
/*Ejercicio #7 
Crear un juego tipo ahorcado con una palabra hardcodeada previamente
#include<iostream>
int main() {
	const short num = 10;
	char array[num][num];

	do
	{
		std::cout << "Ingrese una letra\n";
		std::cin.get(array[num], num);
	}while (int i = 0; i < num; i++);
}*/

