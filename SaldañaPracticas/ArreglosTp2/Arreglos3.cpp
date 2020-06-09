/*Ejercicio #1  
Crear un programa donde se ingrese una oración y nos indique el largo de la oración.*/
/*#include<iostream>
#include<stdio.h>
//VARIABLES
const short indice = 40;
char oracion[indice]{ '-' };
short contador = 0;
//INPUT
void Ingresar()
{
	std::cout << "Ingrese una oración" << std::endl;
	std::cin.getline(oracion, indice);
};
//METODO
void Largo()
{
	for (int i = 0; i < indice; i++)
		if (oracion[i] != '\0')
		{
			contador++;
		}
		else
		{
			i = indice;
		}
};
//OUTPUT
void Mostrar()
{
	system("CLS");
	std::cout   << oracion <<"\nEl largo de la oracion es "<<contador<< std::endl;
};
int main()
{
	Ingresar();
	Largo();
	Mostrar();
	return 0;
}*/
/*Ejercicio #2 
Similar al ejercicio anterior, solo que ahora ingresamos una letra y que nos diga cuántas  veces se repite.*/
/*#include<iostream>
//VARIABLES
const short indice =25;
char letra[indice];
short contador = 0;
char caracter = '-';
//INPUT
void Ingresar()
{
	std::cout << "Ingrese una oración" << std::endl;
	std::cin.getline(letra, indice);
	std::cout << "caracter a buscar?"<< std::endl;
	std::cin >> caracter;
};
//METODO
void CaracterRepetido()
{
	for (size_t i = 0; i < indice; i++)
	{
		if (letra[i] != '\0')
		{
			if (letra[i] == caracter)
			{
				contador++;
			}
		}
		else
		{
			i = indice;
		}
	}
};
//OUTPUT
void Mostrar()
{
	//system("CLS");
	std::cout << letra << "\nCantidad de veces que se repite el caracter " << contador << std::endl;
};
int main()
{
	Ingresar();
	CaracterRepetido();
	Mostrar();
return 0;
}*/
/*Ejercicio #3  
Crear un programa donde se ingrese una oración y nos indique la cantidad de vocales  que tiene.*/
/*#include<iostream>
//VARIABLES
const short indice = 20;
const short indiceVocales = 6;
char oracion[indice]{'-'};
char vocales[indiceVocales]{ 'a','e','i','o','u' };
short contador = 0;
short contadorVocales = 0;
//INPUT
void Ingresar()
{
	std::cout << "Ingrese una oración" << std::endl;
	std::cin.getline(oracion, indice);
};
//METODO
void CantidadVocales()
{
		for (size_t k = 0; k < indiceVocales; k++)
		{
			for (size_t i = 0; i < indice; i++)
			{
				if (oracion[i] != '\0')
				{
					if (oracion[i] == vocales[contadorVocales])
					{
						contador++;
					}
				}
				else
				{
					i = indice;
				}
			}
			contadorVocales++;
		}
};
//OUTPUT
void Mostrar()
{
	system("CLS");
	std::cout << oracion << "\nCantidad de vocales que contiene " << contador << std::endl;
};
int main()
{
	Ingresar();
	CantidadVocales();
	Mostrar();
return 0;
}*/
/*Ejercicio #4  
Crear un programa donde se ingrese una oración y se muestre como resultado las letras  invertidas.
EJ: “Hola soy un programador”  RES: “rodamargorp nu yos aloH”*/
/*#include<iostream>
	//VARIABLES
	const short indice = 40;
	char oracion[indice]{ '-' };
	short contador = 0;
	//INPUT
	void Ingresar()
	{
		std::cout << "Ingrese una oración" << std::endl;
		std::cin.getline(oracion, indice);
	};
	//METODO
	void InvertirOracion()
	{
		for (size_t i = 0; i < indice; i++)
		{
			if (oracion[i] != '\0')
			{
				contador++;
			}
			else
			{
				i = indice;
			}
		}
	};
	//OUTPUT
	void Mostrar()
	{
		for (size_t i = contador; i > 0; i--)
		{
			std::cout << oracion[i - 1];
		}
	};
	int main()
	{
		Ingresar();
		InvertirOracion();
		Mostrar();
	return 0;
	}*/
	/*Ejercicio #5  
	Similar al ejercicio anterior, solo que esta vez mostramos las palabras invertidas, no las  letras.
	EJ: “Hola soy un programador”  RES: “programador un soy Hola”*/
/*#include<iostream>
const short TAM = 40;

void Ingresar(char vec[], short);
short LimiteVector(char vec[], short);
void InvertirPalabras(char vec[], short , char vec2[], short ,short&);
void Mostrar(char vec[], short);

int main()
{
	short invIndex = 0;
	char vec[TAM]{ "Hola soy un programador" };
	char vec2[TAM];
	Ingresar(vec, TAM);
	InvertirPalabras(vec, TAM, vec2,TAM, invIndex);
	Mostrar(vec, TAM);
	return 0;
}
void Ingresar(char vec[], short tam)
{
	//std::cout << "Ingrese una oración" << std::endl;
	//std::cin.getline(vec, tam);
};
void Mostrar(char vec[], short tam)
{
	for (size_t i = 0; i < tam; i++)
	{
		std::cout << vec[i];
	}
};
short LimiteVector(char vec[], short tam)
{
	short cont = 0;
	while (vec[cont] != '\0')
	{
		cont++;
	}
	cont--;
	return cont;
}
void InvertirPalabras(char vec[], short tam, char vec2[], short tam2,short& invIndex)
{
	short inicio = 0;
	short limite = 0;
	limite = LimiteVector(vec, TAM);
	do
	{
		inicio = limite;

		while (vec[inicio] != ' ' && inicio >= 0)
		{
			inicio--;
		}

		for (size_t i = inicio+1; i <= limite; i++)
		{
			vec2[invIndex] = vec[i];
			invIndex++;
		}
		vec2[invIndex] = ' ';
		invIndex++;

		limite = inicio - 1;
	} while (inicio >= 0);
	Mostrar(vec2,invIndex);
};*/
/*Ejercicio #6  
Crear un programa donde se ingrese una oración y nos muestre una combinación de  números compuesta por la cantidad de
letras de cada palabra.
    EJ: “Hola soy un programador”  RES: “4-3-2-11”*/
	/*#include<iostream>
	//VARIABLES
	const short indice = 40;
	char oracion[indice]{ '-' };
	short duplicado[indice];
	short contar = 0;
	short posicionEspacio = 0;
	short palabra = 0;
	short x = 0;
	short limite = 0;
	//INPUT
	void Ingresar()
	{
		std::cout << "Ingrese una oración" << std::endl;
		std::cin.getline(oracion, indice);
	};
	void ContarPalabra()
	{

		for (size_t i = 0; i < indice; i++)
		{
			if (oracion[i]!='\0')
			{
				palabra++;
			}
		}
		for (size_t i = 0; i <= palabra; i++)
		{
			if (oracion[i]!=' ' && oracion[i]!='\0')
			{
				contar++;
			}
			else
			{
				std::cout << contar << ",";
				contar = 0;

			}

		}

	};
	int main()
	{
		Ingresar();
		ContarPalabra();
	return 0;
	}*/
	/*Ejercicio #7 
	Crear un programa donde se ingrese una oración y luego una palabra para verificar si
	existe en la oración.*/
	/*#include<iostream>
				//VARIABLES
	const short index = 10;
	const short indice = 40;
	char oracion[indice]{ "Hola soy un programador" };
	char palabra[index]{};
	char ayuda[index];
	bool buscar = false;
	short final = 0;
	int inicio = 0;
	short largoOracion = 0;
	int largoPalabra = 0;
	//INPUT
	void Ingresar()
	{
		//std::cout << "Ingrese una oración" << std::endl;
		//std::cin.getline(oracion, indice);
		std::cout << "Ingrese la palabra a buscar" << std::endl;
		std::cin.getline(palabra, indice);
	};
	void BuscarPalabra()
	{
		while (oracion[final] != '\0')
		{
			final++;//Recorre el array hasta el final
		}
		largoOracion = final;
		final = 0;
		while (palabra[final] != '\0')
		{
			final++;//Recorre la palabra hasta el final
		}
		largoPalabra = final;
		final = 0;
		while (inicio <= largoOracion - largoPalabra && !buscar)
		{
			buscar = true;
			final = 0;
			for (size_t i = inicio; i < inicio + largoPalabra; i++)
			{
				if (oracion[i] != palabra[final])
				{
					buscar = false;
					break;
				}
				final++;
			}
			while (oracion[inicio] != ' ' && oracion[inicio] != '\0')
			{
				inicio++;
			}
			inicio++;
		}
	};
	//OUTPUT
	void Mostrar()
	{
		if (buscar)
		{
			std::cout << palabra << "\nSe encuentra en la oracion " << oracion << std::endl;
		}
		else
		{
			std::cout << "No se encuentra" << std::endl;
		}
	};
	int main()
	{
		Ingresar();
		BuscarPalabra();
		Mostrar();
		return 0;
	}*/
	/*Ejercicio #8 
	Crear un programa donde se ingrese una oración y luego se pase cada una de sus letras  a mayúscula.*/
	/*#include<iostream>
				//VARIABLES
	const short indice = 40;

	char duplicado[indice]{};
	short conta = 0;

	//INPUT
	void Ingresar()
	{
		//std::cout << "Ingrese una oración" << std::endl;
		//std::cin.getline(oracion, indice);
	};
	void limiteArray(char oracion[indice])
	{
		while (oracion[conta] != '\0')
		{
			conta++;
		}
	};
	void Mayuscula(char oracion[indice])
	{
		limiteArray(oracion);
		for (size_t i = 0; i < conta; i++)
		{
			if (oracion[i] > 92)
			{
				oracion[i] -= 32;
				std::cout << oracion[i];
			}
			else
			{
				oracion[i];
				std::cout << oracion[i];
			}
		}
	};
	int main()
	{
		char oracion[indice]{ "Hola soy programador" };
		//Ingresar();
		Mayuscula(oracion);
		return 0;
	}*/
	/*Ejercicio #9 
	Crear un programa donde se (1)ingrese una oración y luego (2)borre todas las vocales que tenga.*/
	/*#include<iostream>
	const short TAM = 40;

	void Ingresar();
	void BorrarVocales(char vec[],short);
	void Mostrar(char vec[],short);

	int main()
	{
		char vec[TAM]{"Hola soy un programador"};
		Ingresar();
		Mostrar(vec, TAM);
		BorrarVocales(vec,TAM);

	return 0;
	}
	void Ingresar()
	{
		//std::cout << "Ingrese una oración" << std::endl;
		//std::cin.getline(oracion, indice);
	}
	void BorrarVocales(char vec[],short tam)
	{

		for (size_t i = 0; i < tam; i++)
		{
			switch (vec[i])
			{
			case 'a':

				break;
			case 'e':

				break;
			case 'i':

				break;
			case 'o':

				break;
			case 'u':

				break;
			default:
				std::cout <<vec[i];
				break;
			};
		}
	}
	void Mostrar(char vec[], short tam)
	{
		int i = 0;

		for (size_t i = 0; i < tam; i++)
		{
			std::cout<<vec[i];
		}
		std::cout << std::endl;
	};*/
	/*Ejercicio #10  
	Crear un programa donde se 1)ingrese una oración y luego se 2)cifre utilizando el método  Cesar cipher​ con un
	desplazamiento configurable*/
	/*#include<iostream>
	const short TAM = 40;

	int Ingresar(short v);
	short LimiteVector(char vec[],short);
	void Cifrar(char vec[],short,short);
	void Mostrar(char vec[], short);

	int main()
	{
		char vec[TAM]{"Hola soy un programador"};
		short desplazamiento = 3;
		short limite = 0;
		//desplazamiento = Ingresar(desplazamiento);
		Mostrar(vec,TAM);
		limite=LimiteVector(vec, TAM);
		Cifrar(vec,limite,desplazamiento);
	return 0;
	}
	int Ingresar(short v)
	{
		short valor;
		//std::cout << "Ingrese una oración" << std::endl;
		//std::cin.getline(oracion, indice);
		std::cout << "Tipo de desplazamiento" << std::endl;
		std::cin >> valor;
		return valor;
	};
	void Cifrar(char vec[],short tam,short d)
	{
		for (size_t i = 0; i < tam; i++)
		{
			if (vec[i]!=' ')
			{
				vec[i] += d;
			}
			else
			{

			}
		}
		Mostrar(vec,tam);
	};
	void Mostrar(char vec[], short tam)
	{
		int i = 0;

		for (size_t i = 0; i < tam; i++)
		{
			std::cout << vec[i];
		}
		std::cout << std::endl;
	}
	short LimiteVector(char vec[],short tam)
	{
		short cont=0;
		while (vec[cont] != '\0')
		{
			cont++;
		}
		return cont;
	};*/
