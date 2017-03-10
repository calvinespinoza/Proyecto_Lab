//using namespace std;
#include "Vendedor.h"
#include "Administrador.h"
#include "Venta.h"
#include "Consolas.h"
#include "Videojuegos.h"

#include <iostream>
#include <string>

string elegirModelo(int, int);
void imprimirConsolas(vector<Consolas*>);
void imprimirVideojuegos(vector<Videojuegos*>);

using namespace std;

int main()
{
	/* code */

	int opcion1 = 0, opcion2 = 0, opcion3 = 0;

	vector<Consolas*> consolas;
	vector<Videojuegos*> videojuegos;

	do
	{
		cout << "MENU"<< endl
		<< "1. Administrador"<< endl
		<< "2. Vendedor" << endl
		<< "3. Salir" << endl;
		cin >> opcion1;

		char resp = 'y';
		bool ask = true;

		while (resp == 'y' || resp == 'Y')
		{
			/*
			if (opcion1 == 1)
			{
				cout << "Ingrese el nombre de usuario: "
			}
			*/
			if (opcion1 == 1)
			{
				cout << "OPCIONES DE ADMINISTRADOR" << endl
				<< "1. Agregar Consola" << endl
				<< "2. Agregar Videojuego" << endl
				<< "3. Modificar Consola" << endl
				<< "4. Modificar Videojuego" << endl
				<< "5. Eliminar Consola" << endl
				<< "6. Eliminar Videojuego" << endl
				<< "7. Cerrar Sesion" << endl;
				cin >> opcion2;

				if (opcion2 == 1)
				{
						string ano1, modelo, estado1;
						int serie1, company1 = 0, type1 = 0;
						double precio1;

						cout << "Ingrese el año en que salió: " << endl;
						cin >> ano1;
						do {
							cout << endl << "Compañia:\n1. Microsoft\n2. Sony\n3. Nintendo" << endl;
							cin >> company1;
							if (company1 == 1)
							{
								cout << endl << "1. Xbox\n2.Xbox 360\n3.Xbox One\n";
							}
							else if (company1 == 2)
							{
								cout << endl << "1. PlayStation 1\n2. PlayStation 2\n3. PlayStation 3\n"
								<< "4. PlayStation 4\n5. PSP\n6. PS Vita\n";
							}
							else if (company1 == 3)
							{
								cout << endl << "1. Nintendo Entertainment System\n2. Super Nintendo Entertainment System\n3. Nintendo 64\n4. Nintendo GameCube\n5. Nintendo Wii\n6. Nintendo Wii U\n7. Nintendo Switch\n8. Gameboy\n9. Gameboy Color\n10. Gameboy Advance\n11. Nintendo DS\n12. Nintendo DSi\n13. Nintendo 3DS\n14. Nintendo New 3DS\n";
							}
				 			else
							{
								cout << endl << "Opcion invalida, ingreselo otra vez";
							}
						} while (company1 < 0 || company1 > 4);
						cout << "Ingrese su opcion: ";
						cin >> type1;
						modelo = elegirModelo(company1, type1);
						cout << "Ingrese el estado de la consola: " << endl;
						cin >> estado1;
						cout << "Ingrese el numero de serie: " << endl;
						cin >> serie1;
						cout << "Ingrese el precio del modelo: " << endl;
						cin >> precio1;
						Consolas* c = new Consolas(ano1, modelo, estado1, serie1, precio1);
						cout << "Consola agregada exitosamente" << endl;

						consolas.push_back(c);
				}
				else if (opcion2 == 2)
				{
					string nombre, ano2, consola, genero, estado2;
					int jugadores, serie2, company2 = 0, type2 = 0;
					double precio2;

					cout << "Ingrese el nombre del videojuego: " << endl;
					cin >> nombre;
					cout << "Ingrese el año en que salió: " << endl;
					cin >> ano2;
					do {
						cout << "Eliga la consola del videojuego: " << endl;
						cout << endl << "Compañia:\n1. Microsoft\n2. Sony\n3. Nintendo" << endl;
						cin >> company2;
						if (company2 == 1)
						{
							cout << endl << "1. Xbox\n2.Xbox 360\n3.Xbox One\n";
						}
						else if (company2 == 2)
						{
							cout << endl << "1. PlayStation 1\n2. PlayStation 2\n3. PlayStation 3\n"
							<< "4. PlayStation 4\n5. PSP\n6.PS Vita";
						}
						else if (company2 == 3)
						{
							cout << endl << "1. Nintendo Entertainment System\n2. Super Nintendo Entertainment System\n3. Nintendo 64\n4. Nintendo GameCube\n5. Nintendo Wii\n6. Nintendo Wii U\n7. Nintendo Switch\n8. Gameboy\n9. Gameboy Color\n10. Gameboy Advance\n11. Nintendo DS\n12. Nintendo DSi\n13. Nintendo 3DS\n14. Nintendo New 3DS";
						}
						else
						{
							cout << endl << "Opcion invalida, ingreselo otra vez";
						}
					} while (company2 < 0 || company2 > 4);
					cin >> type2;
					consola = elegirModelo(company2, type2);
					cout << "Ingrese la cantidad de jugadores: " << endl;
					cin >> jugadores;
					cout << "Ingrese el género del juego: " << endl;
					cin >> genero;
					cout << "Ingrese el estado del videojuego: " << endl;
					cin >> estado2;
					cout << "Ingrese el numero de serie: " << endl;
					cin >> serie2;
					cout << "Ingrese el precio del videojuego: " << endl;
					cin >> precio2;
					Videojuegos* v = new Videojuegos(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
					videojuegos.push_back(v);
				}
				else if (opcion2 == 3)
				{
					int option1;
					imprimirConsolas(consolas);

					cout << endl << "Eliga su opcion: " << endl;
					cin >> option1;

				}
				else if (opcion2 == 4)
				{
					imprimirVideojuegos(videojuegos);
				}
				else if (opcion2 == 5)
				{
					int option1;
					imprimirConsolas(consolas);

					cout << endl << "Eliga su opcion: " << endl;
					cin >> option1;

					consolas.erase(consolas.begin() + option1 - 1);
				}
				else if (opcion2 == 6)
				{
					int option1;
					imprimirVideojuegos(videojuegos);

					cout << endl << "Eliga su opcion: " << endl;
					cin >> option1;

					videojuegos.erase(videojuegos.begin() + option1 - 1);
				}
				else if (opcion2 == 7)
				{
					ask = false;
					resp = 'n';
				}
			if (opcion1 == 2)
			{
				string user;
				cout << "Ingrese su nombre: " << endl;
				cin >> user;
				cout << "Bienvenido " << user << "!" << endl;
				cout << "OPCIONES DE VENDEDOR" << endl
				<< "1. Agregar Consola" << endl
				<< "2. Agregar Videojuego" << endl;
				<< "3. Vender" << endl;
				cin >> opcion3;

				if (opcion3 == 1)
				{
						string ano1, modelo, estado1;
						int serie1, company1 = 0, type1 = 0;
						double precio1;

						cout << "Ingrese el año en que salió: " << endl;
						cin >> ano1;
						do {
							cout << endl << "Compañia:\n1. Microsoft\n2. Sony\n3. Nintendo" << endl;
							cin >> company1;
							if (company1 == 1)
							{
								cout << endl << "1. Xbox\n2.Xbox 360\n3.Xbox One\n";
							}
							else if (company1 == 2)
							{
								cout << endl << "1. PlayStation 1\n2. PlayStation 2\n3. PlayStation 3\n"
								<< "4. PlayStation 4\n5. PSP\n6. PS Vita\n";
							}
							else if (company1 == 3)
							{
								cout << endl << "1. Nintendo Entertainment System\n2. Super Nintendo Entertainment System\n3. Nintendo 64\n4. Nintendo GameCube\n5. Nintendo Wii\n6. Nintendo Wii U\n7. Nintendo Switch\n8. Gameboy\n9. Gameboy Color\n10. Gameboy Advance\n11. Nintendo DS\n12. Nintendo DSi\n13. Nintendo 3DS\n14. Nintendo New 3DS\n";
							}
				 			else
							{
								cout << endl << "Opcion invalida, ingreselo otra vez";
							}
						} while (company1 < 0 || company1 > 4);
						cout << "Ingrese su opcion: ";
						cin >> type1;
						modelo = elegirModelo(company1, type1);
						cout << "Ingrese el estado de la consola: " << endl;
						cin >> estado1;
						cout << "Ingrese el numero de serie: " << endl;
						cin >> serie1;
						cout << "Ingrese el precio del modelo: " << endl;
						cin >> precio1;
						Consolas* c = new Consolas(ano1, modelo, estado1, serie1, precio1);
						cout << "Consola agregada exitosamente" << endl;

						consolas.push_back(c);
				}
				else if (opcion3 == 2)
				{
					string nombre, ano2, consola, genero, estado2;
					int jugadores, serie2, company2 = 0, type2 = 0;
					double precio2;

					cout << "Ingrese el nombre del videojuego: " << endl;
					cin >> nombre;
					cout << "Ingrese el año en que salió: " << endl;
					cin >> ano2;
					do {
						cout << "Eliga la consola del videojuego: " << endl;
						cout << endl << "Compañia:\n1. Microsoft\n2. Sony\n3. Nintendo" << endl;
						cin >> company2;
						if (company2 == 1)
						{
							cout << endl << "1. Xbox\n2.Xbox 360\n3.Xbox One\n";
						}
						else if (company2 == 2)
						{
							cout << endl << "1. PlayStation 1\n2. PlayStation 2\n3. PlayStation 3\n"
							<< "4. PlayStation 4\n5. PSP\n6.PS Vita";
						}
						else if (company2 == 3)
						{
							cout << endl << "1. Nintendo Entertainment System\n2. Super Nintendo Entertainment System\n3. Nintendo 64\n4. Nintendo GameCube\n5. Nintendo Wii\n6. Nintendo Wii U\n7. Nintendo Switch\n8. Gameboy\n9. Gameboy Color\n10. Gameboy Advance\n11. Nintendo DS\n12. Nintendo DSi\n13. Nintendo 3DS\n14. Nintendo New 3DS";
						}
						else
						{
							cout << endl << "Opcion invalida, ingreselo otra vez";
						}
					} while (company2 < 0 || company2 > 4);
					cin >> type2;
					consola = elegirModelo(company2, type2);
					cout << "Ingrese la cantidad de jugadores: " << endl;
					cin >> jugadores;
					cout << "Ingrese el género del juego: " << endl;
					cin >> genero;
					cout << "Ingrese el estado del videojuego: " << endl;
					cin >> estado2;
					cout << "Ingrese el numero de serie: " << endl;
					cin >> serie2;
					cout << "Ingrese el precio del videojuego: " << endl;
					cin >> precio2;
					Videojuegos* v = new Videojuegos(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
					videojuegos.push_back(v);
				}
				else if (opcion3 == 3)
				{
					int option3 = 0;
					cout << "Elegir tipo de articulo que desea vender\n1. Consola\n2. Videojuego" << endl;
					cin >> option3;

					if (option3 == 1)
					{
						int opc_consola;
						imprimirConsolas(consolas);
						cout << "Elegir el articulo que desea vender: ";
						cin >> opc_consola;



					}
					else if (option3 == 2)
					{
						int opc_juego;
						imprimirVideojuegos(videojuegos);
						cout << "Elegir el articulo que desea vender: ";
						cin >> opc_juego;
					}
				}


			}
			if (opcion1 == 3)
			{
				return 0;
			}

			if (ask)
			{
				cout << "Desea continuar(Y/N): " << endl;
				cin >> resp;
			}
		}
	}
} while (opcion1 > 0 && opcion1 < 3);
	return 0;
	//fwrite
	//fclose
}

string elegirModelo(int company, int type)
{
	string modelo;
	if (company == 1)
	{
		if(type == 1)
		{
			modelo = "Xbox";
		}
		else if(type == 2)
		{
			modelo = "Xbox 360";
		}
		 else if(type == 3)
		{
			modelo = "Xbox One";
		}
	}
	else if (company == 2)
	{
		if(type == 1)
		{
			modelo = "PlayStation 1";
		}
		else if(type == 2)
		{
			modelo = "PlayStation 2";
		}
		 else if(type == 3)
		{
			modelo = "PlayStation 3";
		}
		else if(type == 4)
	        {
		       modelo = "PlayStation 4";
	        }
	        else if(type == 5)
	       {
		      modelo = "PSP";
	       }
	       else if(type == 6)
	      {
		     modelo = "PS Vita";
	      }
	}
	else if (company == 3)
	{
		if(type == 1)
		{
			modelo = "Nintendo Entertainment System";
		}
		else if(type == 2)
		{
			modelo = "Super Nintendo Entertainment System";
		}
		 else if(type == 3)
		{
			modelo = "Nintendo 64";
		}
		else if(type == 4)
		{
		    	modelo = "Nintendo GameCube";
		}
		else if(type == 5)
	  	{
		    	modelo = "Nintendo Wii";
	  	}
	    	else if(type == 6)
	    	{
		   	modelo = "Nintendo Wii U";
	    	}
	        else if(type == 7)
	      	{
		     	modelo = "Nintendo Switch";
	      	}
	      	else if(type == 8)
	      	{
		      	modelo = "Gameboy";
	      	}
	       	else if(type == 9)
	      	{
		      	modelo = "Gameboy Color";
	      	}
	      	else if(type == 10)
	      	{
		     	modelo = "Gameboy Advance";
	      	}
	      	else if(type == 11)
	     	{
		    	modelo = "Nintedo DS";
	     	}
	     	else if(type == 12)
	    	{
		   	modelo = "Nintedo DSi";
	    	}
	    	else if(type == 13)
	   	{
		  	modelo = "Nintendo 3DS";
	   	}
	   	else if(type == 14)
	  	{
		 	modelo = "Nintendo New 3DS";
	  	}
	}
	else
	{
		modelo = "";
	}
	return modelo;
}

void imprimirConsolas(vector <Consolas*> vector1)
{
        for (int j = 0; j < vector1.size(); j++) {
                cout << j+1 << ") " << vector1.at(j) -> getModelo() << endl;
        }
}

void imprimirVideojuegos(vector <Videojuegos*> vector1)
{
        for (int j = 0; j < vector1.size(); j++) {
                cout << j+1 << ") " << vector1.at(j) -> getNombre() << endl;
        }
}
