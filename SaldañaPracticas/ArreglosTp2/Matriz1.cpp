/*Ejercicio #1  
Crear un programa que tenga una matriz de enteros y llenarla mostrando en cada
posición la fila a la que corresponde.
000
111
222  */
/*#include<iostream>
//VARIABLES
const short fila = 3;
const short columna = 3;
short matriz[columna][fila];
void LlenarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			matriz[i][j] = i;
		}
	}
};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
};
int main()
{
	LlenarMatriz();
	MostrarMatriz();
	return 0;
}*/
/*Ejercicio #2 
Crear un programa que tenga una matriz de enteros y llenarla mostrando en cada 
posición su número correspondiente.
012 
345 
678 */
/*#include<iostream>
//VARIABLES
const short fila = 3;
const short columna = 3;
short matriz[columna][fila];
void LlenarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			matriz[i][j] = i*columna+j;
		}
	}
};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
};
int main()
{
	LlenarMatriz();
	MostrarMatriz();
	return 0;
}*/
/*Ejercicio #3  
Crear un programa que tenga una matriz de chars y llenarla trazando una línea
con O y  X.   
XOO 
OXO 
OOX */
/*#include<iostream>
//VARIABLES
const short fila = 3;
const short columna = 3;
char matriz[columna][fila]{'-'};
void LlenarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			if (i==j)
			{
				matriz[i][j] = 'X';
			}
			else
			{
				matriz[i][j] = '0';
			}
		}
	}
};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
};
int main()
{
	LlenarMatriz();
	MostrarMatriz();
	return 0;
}*/
/*Ejercicio #4  
Crear un programa que tenga una matriz de chars y llenarla mostrando en cada posición
una D si es divisible por 2 y una N si no es divisible por el mismo valor. */
/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//VARIABLES
const short fila = 4;
const short columna = 4;
short matriz[columna][fila]{0};

void LlenarMatriz()
{
	srand(time(NULL));
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
				matriz[i][j] = rand() % 10;
		}
	}
};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
};
void MostrarDoN()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			if (matriz[i][j]%2==0)
			{
				std::cout << "D";
			}
			else
			{
				std::cout << "N";
			}
		}
		std::cout << std::endl;
	}
};
int main()
{
	LlenarMatriz();
	MostrarMatriz();
	MostrarDoN();
	return 0;
}*/
/*Ejercicio #5  
Crear un programa que tenga una matriz de enteros y llenarla con valores random
(entre  2 constantes).   
Crear una struct POSICIÓN (x,y) e ingresar sus datos para mostrar en pantalla
que valor  hay en la posición.    Verificar que sea una posición válida.   */
/*#include<iostream>
#include<stdio.h>
#include<time.h>
//VARIABLES
struct Posicion
{
	short x=0;
	short y=0;
}pos;
const short fila = 4;
const short columna = 4;
short matriz[columna][fila]{ 0 };

void LlenarMatriz()
{
	srand(time(NULL));
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			matriz[i][j] = rand() % 2+1;
		}
	}
};
void IngresarPosicion()
{
	do
	{
		std::cout << "Ingrese la posicion X" << std::endl;
		std::cin >> pos.x;
	} while (pos.x>fila||||pos.x <0);
	do
	{
		std::cout << "Ingrese la posicion Y" << std::endl;
		std::cin >> pos.y;
	} while (pos.y>columna||||pos.y <0);

};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
};
void MostrarPosicion()
{
	std::cout << matriz[pos.y][pos.x];
};
int main()
{
	LlenarMatriz();
	IngresarPosicion();
	MostrarMatriz();
	MostrarPosicion();
	return 0;
}*/
/*Ejercicio #6 
Similar al ejercicio #5, solo que esta vez ingresando 2 posiciones e intercambiarlas
si son  válidas. */
/*#include<iostream>
#include<stdio.h>
#include<time.h>
//VARIABLES
struct Posicion
{
	short x = 0;
	short y = 0;
}pos,pos2;
const short fila = 4;
const short columna = 4;
short matriz[columna][fila]{ 0 };

void LlenarMatriz()
{
	srand(time(NULL));
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			matriz[i][j] = rand() % 2 + 1;
		}
	}
};
void IngresarPosicion1()
{
	std::cout << "Posicion 1" << std::endl;
	do
	{
		std::cout << "Ingrese la posicion X" << std::endl;
		std::cin >> pos.x;
	} while (pos.x > fila||pos.x <0);
	do
	{
		std::cout << "Ingrese la posicion Y" << std::endl;
		std::cin >> pos.y;
	} while (pos.y > columna||pos.y <0);
	std::cout << "Valor en la posicion "<<matriz[pos.x][pos.y]<<std::endl;
};
void IngresarPosicion2()
{
	std::cout << "Posicion 2" << std::endl;
	do
	{
		std::cout << "Ingrese la posicion X" << std::endl;
		std::cin >> pos2.x;
	} while (pos2.x > fila||pos2.x <0);
	do
	{
		std::cout << "Ingrese la posicion Y" << std::endl;
		std::cin >> pos2.y;
	} while (pos2.y > columna||pos2.y< 0);
	std::cout << "Valor en la posicion " << matriz[pos2.x][pos2.y] << std::endl;
};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
};
void CambiarPosicion()
{
	short aux = 0;
	aux = matriz[pos.x][pos.y];
	matriz[pos.x][pos.y]= matriz[pos2.x][pos2.y];
	matriz[pos2.x][pos2.y] = aux;
};
int main()
{
	LlenarMatriz();
	MostrarMatriz();
	IngresarPosicion1();
	IngresarPosicion2();
	CambiarPosicion();
	MostrarMatriz();
	return 0;
}*/
/*Ejercicio #7 
Crear un programa con una matriz de ints, llenarla con valores random y mostrar cual
es  el promedio de la sumatoria de la columna indicada. */
/*#include<iostream>
#include<stdio.h>
#include<time.h>
//VARIABLES
const short fila = 4;
const short columna = 4;
short matriz[columna][fila]{ 0 };
short elegir = 0;
short promedio=0;

void LlenarMatriz()
{
	srand(time(NULL));
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			matriz[i][j] = rand() % 10;
		}
	}
};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
};
void IndicarColumna()
{
	do
	{
		std::cout << "Indique la columna" << std::endl;
		std::cin >> elegir;
	} while (promedio>columna);
};
void MostrarPromedio()
{
	short suma = 0;
	while (promedio < columna)
	{
		std::cout << matriz[promedio][elegir] << std::endl;
		suma = suma + matriz[promedio][elegir];
		promedio++;
	}
	promedio=suma / columna;
	std::cout << "Promedio "<<promedio << std::endl;
};
int main()
{
	LlenarMatriz();
	MostrarMatriz();
	IndicarColumna();
	MostrarPromedio();
	return 0;
}*/
/*Ejercicio #8 
Crear un programa con una matriz de ints, llenarla con valores random y mostrar cual
es  la posición con el valor más grande. */
/*#include<iostream>
#include<stdio.h>
#include<time.h>
//VARIABLES
const short fila = 4;
const short columna = 4;
short matriz[columna][fila]{ 0 };
short grande = 0;
short x, y;

void LlenarMatriz()
{
	srand(time(NULL));
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			matriz[i][j] = rand() % 10;
		}
	}
};
void MostrarMatriz()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
};
void MasGrande()
{
	grande = matriz[0][0];
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t	f = 0; f < fila; f++)
		{
			if (matriz[i][f] > grande)
			{
				grande = matriz[i][f];
				x = i;
				y = f;
			}
		}
	}
	std::cout<<"Es el valor mas grande "<<grande <<" y esta en la posicion "<<"x-fila "<<x<<"/"<< "Y-columna "<<y<< std::endl;
};
int main()
{
	LlenarMatriz();
	MostrarMatriz();
	MasGrande();
	return 0;
}*/
/*Ejercicio #9 
Crear un programa con una matriz de un enum TILE (TIERRA, PARED) y hardcodear los
valores para “dibujar” un mapa mediante caracteres (- TIERRA / X PARED).
Mostrarlo en pantalla. (2:35:00)*/
/*#include<iostream>
//VARIABLES
const short fila = 3;
const short columna = 3;
enum class TILE { TIERRA, PARED };
TILE matriz[columna][fila]{ {TILE::PARED,TILE::TIERRA,TILE::PARED},
							{TILE::TIERRA,TILE::TIERRA,TILE::TIERRA},
							{TILE::PARED,TILE::TIERRA,TILE::PARED} };

void Mostrar()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			if (matriz[i][j] == TILE::TIERRA)
			{
				std::cout << "-";
			}
			else
			{
				std::cout << "X";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
};
int main()
{
Mostrar();
return 0;
}*/
/*Ejercicio #10 
Siguiendo el ejercicio #9, insertar un personaje en el mapa y moverlo utilizando WASD.
Se debe actualizar la posición y comprobar que el casillero sea valido.*/
/*#include<iostream>
//VARIABLES
const short fila = 4;
const short columna = 4;
enum class TILE { TIERRA, PARED, PJ };
TILE matriz[columna][fila]{ {TILE::PARED,TILE::TIERRA,TILE::PARED,TILE::PARED},
							{TILE::TIERRA,TILE::TIERRA,TILE::TIERRA,TILE::PARED},
							{TILE::PARED,TILE::TIERRA,TILE::PARED,TILE::PARED},
							{TILE::PARED,TILE::TIERRA,TILE::PARED,TILE::PARED} };
TILE pj=TILE::PJ;
TILE auxiliar2=TILE::PARED;
short x = 0;
short y = 0;
bool posicion = false;
void Mostrar();
void UbicacionActual()
{
	for (size_t f = 0; f < fila; f++)
	{
		for (size_t c = 0; c < columna; c++)
		{
			if (matriz[f][c] == TILE::PJ)
			{
				std::cout << "Posicion " << "fila[" << f << "]columna[" << c << "]" << std::endl;
			}
		}
	}
};
void
Limite()
{
	if (y >= columna || y < 0)
	{
		std::cout << "Se paso del limite de Y" << std::endl;
		if (y >= columna)
		{
			std::cout << "Conviritiendo" << std::endl;
			auxiliar2 = matriz[y - 1][x];	//la aux tomo el valor del siguiente
			matriz[y - 1][x] = pj;	//pj se inserta en la siguiente
			Mostrar();
			y--;
		}
		else
		{
			std::cout << "Conviritiendo" << std::endl;
			auxiliar2 = matriz[y + 1][x];	//la aux tomo el valor del siguiente
			matriz[y + 1][x] = pj;	//pj se inserta en la siguiente
			Mostrar();
			y++;
		}
	}
	if (x >= fila || x < 0)
	{
		std::cout << "Se paso del limite de X" << std::endl;
		if (x >= fila)
		{
			std::cout << "Conviritiendo" << std::endl;
			auxiliar2 = matriz[y][x - 1];	//la aux tomo el valor del siguiente
			matriz[y][x - 1] = pj;	//pj se inserta en la siguiente
			Mostrar();
			x--;
		}
		else
		{
			std::cout << "Conviritiendo" << std::endl;
			auxiliar2 = matriz[y][x + 1];	//la aux tomo el valor del siguiente
			matriz[y][x + 1] = pj;	//pj se inserta en la siguiente
			Mostrar();
			x++;
		}
	}
}
void Mostrar()
{
	for (size_t i = 0; i < columna; i++)
	{
		for (size_t j = 0; j < fila; j++)
		{
			if (matriz[i][j] == TILE::TIERRA)
			{
				if (matriz[i][j] == TILE::PJ) 
				{
					std::cout << "H"; 
				}
				else
				{
					std::cout << "-";
				}
			}
			else
			{
				if (matriz[i][j] == TILE::PJ)
				{
					std::cout << "H"; 
				}
				else
				{
					std::cout << "X";
				}
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
};
void InsertarPj()
{
	auxiliar2 = matriz[x][y];//toma pared
	matriz[x][y]=pj;//inserta pj
}
void MovimientoPj()
{
	char tecla;
	do
	{
		TILE aux2;
		std::cin >> tecla;
		switch (tecla)
		{
		case 'w':
			for (size_t i = 0; i < columna; i++)//ojo q i es fila, toma el primer valor como fila
			{
				if (matriz[i][x] == TILE::PJ)
				{
					posicion = true;
					
				}
			}
			if (posicion)
			{
				matriz[y][x] = auxiliar2;//donde estaba pj, le devolvemos el valor anterior
				if (y == 0) 
				{
					y = 1;
				}
				auxiliar2 = matriz[y - 1][x];//la aux tomo el valor del siguiente
				matriz[y - 1][x] = pj;//pj se inserta en la siguiente
				Mostrar();
				y--;
				std::cout << "\n";
				UbicacionActual();
				Limite();
			}
			break;
		case 's':
			
			for (size_t i = 0; i < columna; i++)
			{
				if (matriz[i][x] == TILE::PJ)
				{
					posicion = true;
				}
			}
			if (posicion)
			{
				matriz[y][x] = auxiliar2;//donde estaba pj, le devolvemos el valor anterior
				auxiliar2 = matriz[y + 1][x];//la aux tomo el valor del siguiente
				matriz[y + 1][x]=pj;//pj se inserta en la siguiente
				Mostrar();
				y++;
				std::cout << "\n";
				UbicacionActual();
				Limite();
			}
			break;
		case 'a':
			for (size_t i = 0; i < fila; i++)
			{
				if (matriz[y][i] == TILE::PJ)
				{
					posicion = true;
				}	
			}
			if (posicion)
			{
				matriz[y][x] = auxiliar2;//donde estaba pj, le devolvemos el valor anterior
				if (x == 0)
				{
					x = 1;
				}
				auxiliar2 = matriz[y][x-1];//la aux tomo el valor del siguiente
				matriz[y][x-1] = pj;//pj se inserta en la siguiente
				Mostrar();
				x--;
				std::cout << "\n";
				UbicacionActual();
				Limite();
			}
			break;
		case 'd':
			for (size_t i = 0; i < fila; i++)
			{
				if (matriz[y][i] == TILE::PJ)
				{
					posicion = true;
				}
			}
			if (posicion)
			{
				matriz[y][x] = auxiliar2;//donde estaba pj, le devolvemos el valor anterior
				if (x == fila-1)
				{
					x = 2;
				}
				auxiliar2 = matriz[y][x + 1];//la aux tomo el valor del siguiente
				matriz[y][x + 1] = pj;//pj se inserta en la siguiente
				Mostrar();
				x++;
				std::cout << "\n";
				UbicacionActual();
				Limite();
			}
			break;
		default:
			break;
		}
		posicion=false;
	} while (tecla != 0);
};
int main()
{
	InsertarPj();
	Mostrar();
	MovimientoPj();
	return 0;
}*/