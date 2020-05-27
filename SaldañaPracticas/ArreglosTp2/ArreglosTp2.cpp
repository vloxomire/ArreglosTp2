/*SaldaC1a Max SebastiC!n*/
/*Practicas de Arreglos Tp2*/
/*Ejercicio #1
Crear un programa que indique si un array de enteros es capicC:a o no. Ojo: el programa  debe funcionar si el array tiene
una cantidad par o impar, probarlo para ambos casos Ejemplos:
[2][4][4][2] es capicC:a    [2][4][3][2] NO es capicC:a     [1][5][1][5][1] es capicC:a    [1][7][1][5][1] NO es capicC:a*/
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
Dados 2 arrays de enteros crear un tercero que tenga los nC:meros intercalados. Ojo:  probarlo
para arrays de diferentes tamaC1os.
Ejemplos:   Array 1: [2][4]    Array 2: [1][5]    Resultado: [2][1][4][5]
Ejemplos:    Array 1: [2][4][3][6][7]    Array 2: [1][5]    Resultado: [2][1][4][5][3][6][7]*/
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
/*Ejercicio #3*/
/*Dados 2 arrays, indicar si el primero estC! contenido dentro del segundo.    Ejemplos:*/
/*Array 1: [2][4][3][6][7]    Array 2: [4][3]    EstC! contenido*/
/*#include<iostream>
int main()
{
	const short num1 = 5;
	const short num2 = 3;
	short contador = 0;
	bool si = false;
	unsigned short array1[num1]{ 2,4,3,6,7 };
	unsigned short array2[num2]{ 4,3 ,7};
	do
	{
		for (short i = 0; i < num1; i++)
		{
			if (array1[i] == array2[contador])
			{
				std::cout << array1[i] << " Es igual " << array2[contador] << std::endl;
				contador++;
				if (contador == num2)
				{
					si = true;
				}
			}
		}
	} while (si==false);
	return 0;
}*/
/*Ejercicio #4
Dado un array de 10 nC:meros enteros random |crear otro array | que contenga esos  mismos nC:meros pero ordenados de menor
a mayor.
#include<iostream>
#include<stdio.h>
int
main ()
{
  srand (time (NULL));
  const short num = 10;
  unsigned short enteros[num];
  unsigned short alreves[num];
  short random = 0;
  //creo el array
	 for (int i = 0; i < num; i++)
		{
		 enteros[i] = rand () % (10 - 1) + 1;
		}
  //Se muestra
	std::cout << "Array Enteros:\n";
		 for (int i = 0; i < num; i++)
		{
		std::cout << enteros[i] << ",";
		}
  //pasar los valores
  std::cout << "\nArray Alreves traslado:\n";
  for (int i = 0; i < num; i++)
	{
	  alreves[i] = enteros[i];
	  std::cout << enteros[i] << ",";
	}
  //Invierto
  int menor = 0;
  for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (alreves[j] > alreves[j + 1])
			{
			menor = alreves[j];
			alreves[j] = alreves[j + 1];
			alreves[j + 1] = menor;
			}
		}
	}
		//Muestro again
	  std::cout << "\nArray de menor a mayor:\n";
		for (int i = 0; i < num; i++)
		{
			std::cout << alreves[i] << ",";
		}
}*/
/*Ejercicio #5
Dado un array de 10 nC:meros|inicializado con valores hardcodeados,| pedirle al usuario  que ingrese un nC:mero| y un C-ndice.|
El nC:mero debe insertarse en el C-ndice |y el resto de  los nC:meros deben ser desplazados hacia la derecha, eliminando al
C:ltimo. Ejemplo:
Suponiendo que el array es:    { 1, 5, 7, 3, 20 }    Ingrese nC:mero: 2    Ingrese C-ndice: 1    { 1, 2, 5, 7, 3 }*/
/*#include<iostream>
int main()
{
	//Variables
	const short num = 10;
	unsigned short enteros[num]{ 1,2,3,4,5,6,7,8,9,10 };
	unsigned short numero = 69;
	unsigned short indice = 3;
	unsigned short aux = 0;
	unsigned short pos = 0;
	//input
	std::cout << "Ingrese un numero\n";
	std::cin>>numero;
	std::cout << "Ingrese un indice\n";
	std::cin>>indice;
	//insertar el numero
	//tiene q empezar de atras de todo para no perder valores
	for (short i = 0; i <= indice; i++)
	{
		if (i == indice)
		{
			for (short j = num-2; j > indice; j--)
			{
				aux = enteros[j];
				enteros[j] = enteros[j - 1];
				enteros[j + 1] = aux;
			}
			enteros[i] = numero;
		}
	}
	//Corro los indices
	//apartir del indice elegido comienzo un for que vaya corriendo los lugares
	//Muestro
	for (short i = 0; i <= num - 1; i++)
	{
		std::cout << enteros[i] << ",";
	}
}*/
/*Ejercicio #6
Crear un programa que muestre un tablero de 5 high scores (representado por un array  de 5 enteros)||. Inicialmente todos
los puntajes arrancan en 0||. El programa debe solicitar el ingreso de un nuevo puntaje por teclado||. Una vez que el  usuario
ingresa un nC:mero, este se inserta en el tablero y el tablero se muestra en  pantalla.||    El programa debe continuar
insertando puntajes (en la ubicaciC3n que corresponda al  high score) hasta que el usuario ingresa 0.*/
/*#include<iostream>
int main() {
	//variables
	const short num = 5;
	short puntaje[num]{ 0 };
	short valor = 0;
	short cont = 0;
	short aux = 0;
	short posicion = 0;
	do
	{
		posicion = -1;
		//mostrar(recorre el array)
		for (size_t i = 0; i < num; i++)
		{
			std::cout << "[" << i << "] " << puntaje[i] << "\n";
		}
		//input
		std::cout << "Ingrese el puntaje\n";
		std::cin >> valor;
		//pregunto si el valor de la posicion i es mayor al valor ingresado
		for (short i = num - 1; i >= 0; i--)
		{
			if (valor > puntaje[i])
			{
				posicion = i;
			}
		}
		//Correr uno para atras

			if (posicion != -1)
			{
				for (short i = num - 1; i >= posicion; i--)
				{
					puntaje[i] = puntaje[i - 1];
				}
				//reemplazo el valor por de la posicion por el ingresado
				puntaje[posicion] = valor;
			}

	} while (valor != 0);
}*/
/*Ejercicio #7
Crear un juego tipo ahorcado con una palabra hardcodeada previamente*/
/*#include<iostream>
int main() {
	const short num = 7;
	char ahorcado[num] {'c','o','d','e','a','r','\0'};
	char array[num]{'\0'};
	//Ingreso las letras
		for (short i = 0; i < num-1; i++) {
			std::cout << "Ingrese una letra\n";
			std::cin >> array[i];
			if (ahorcado[i]==array[i])
			{
				std::cout << "Es correcta" << std::endl;
			}
			else
			{
				std::cout << "No es correcta ingrese un nuevo char" << std::endl;
				i -= 1;
			}
		}
	std::cout << "\n";
	//muestro
	for (short j = 0; j < num - 1; j++) {
		//std::cout <<comparador[j]<<",";
		std::cout << array[j];
	}
	std::cout << "\n";
	std::cout << "Palabra clave: "<< std::endl;
	std::cout << ahorcado<<std::endl;
	std::cout << "Respuesta: " << std::endl;
	std::cout << array << std::endl;
}*/