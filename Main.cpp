#include "Vendedor.h"
#include "Administrador.h"
#include "Venta.h"
#include "Consolas.h"
#include "Nintendo.h"
#include "Microsoft.h"
#include "Sony.h"
#include "Videojuegos.h"
#include "MicrosoftGames.h"
#include "NintendoGames.h"
#include "SonyGames.h"
#include "Bandai.h"
#include "Konami.h"
#include "SquareEnix.h"
#include "ElectronicArts.h"
#include "Sega.h"
#include "Ubisoft.h"

#include <iostream>
#include <string>
#include <typeinfo>
#include <ctime>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <string.h>

string elegirModelo(int, int);
void initial();
void imprimirConsolas(vector<Consolas*>);
void imprimirVideojuegos(vector<Videojuegos*>);
int verificarSerieJuegos(vector<Videojuegos*>, int);
int verificarSerieConsolas(vector<Consolas*>, int);
string fechaActual();
string horaActual();

using namespace std;

int main()
{
	/* code */
	cout << fechaActual() << endl;
	cout << horaActual() << endl;
/*
	stringstream ss;
	string str;
	string fuck22 = "fuck";
	ss << "shit" << fuck22 << ".log";
	str = ss.str();
	ofstream outputFile(str, ios::in | ios::out);
	outputFile.open(str);
	outputFile << "hola" << str;
	outputFile.close();*/

	int opcion1 = 0, opcion2 = 0, opcion3 = 0;
	char resp;

	vector<Consolas*> consolas;
	vector<Videojuegos*> videojuegos;
	//vector <int> series;

	do
	{
		cout << endl << "MENU"<< endl
		<< "1. Administrador"<< endl
		<< "2. Vendedor" << endl
		<< "3. Salir" << endl;
		cin >> opcion1;

		resp = 'y';
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
				cout << endl << "OPCIONES DE ADMINISTRADOR" << endl
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
								cout << endl << "1. Xbox\n2. Xbox 360\n3. Xbox One\n";
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
						serie1 = verificarSerieConsolas(consolas, serie1);
						cout << "Ingrese el precio del modelo: " << endl;
						cin >> precio1;

						if (company1 == 1)
						{
							Microsoft* console = new Microsoft(ano1, modelo, estado1, serie1, precio1);
							consolas.push_back(console);
						}
						else if (company1 == 2)
						{
							Sony* console = new Sony(ano1, modelo, estado1, serie1, precio1);
							consolas.push_back(console);
						}
						else if (company1 == 3)
						{
							Nintendo* console = new Nintendo(ano1, modelo, estado1, serie1, precio1);
							consolas.push_back(console);
						}
						else
						{
							cout << "Opcion no valida, consola no creada." << endl;
						}


				}
				else if (opcion2 == 2)
				{
					string nombre, ano2, consola, genero, estado2;
					int jugadores, serie2, company2 = 0, type2 = 0, developer = 0;
					double precio2;

					cout << "Ingrese el nombre del videojuego: " << endl;
					cin.ignore();
					getline(cin,nombre);
					cout << "Ingrese el año en que salió: " << endl;
					cin >> ano2;
					do {
						cout << "Eliga la consola del videojuego: " << endl;
						cout << endl << "Compañia:\n1. Microsoft\n2. Sony\n3. Nintendo" << endl;
						cin >> company2;
						if (company2 == 1)
						{
							cout << endl << "1. Xbox\n2. Xbox 360\n3. Xbox One\n";
						}
						else if (company2 == 2)
						{
							cout << endl << "1. PlayStation 1\n2. PlayStation 2\n3. PlayStation 3\n"
							<< "4. PlayStation 4\n5. PSP\n6. PS Vita\n";
						}
						else if (company2 == 3)
						{
							cout << endl << "1. Nintendo Entertainment System\n2. Super Nintendo Entertainment System\n3. Nintendo 64\n4. Nintendo GameCube\n5. Nintendo Wii\n6. Nintendo Wii U\n7. Nintendo Switch\n8. Gameboy\n9. Gameboy Color\n10. Gameboy Advance\n11. Nintendo DS\n12. Nintendo DSi\n13. Nintendo 3DS\n14. Nintendo New 3DS\n";
						}
						else
						{
							cout << endl << "Opcion invalida, ingreselo otra vez" << endl;
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
					serie2 = verificarSerieJuegos(videojuegos, serie2);
					cout << "Ingrese el precio del videojuego: " << endl;
					cin >> precio2;
					cout << "Eliga la compania desarrolladora del videojuego:\n1. Microsoft\n2. Sony\n3. Nintendo\n4. Bandai\n5. Konami\n6. Square Enix\n7. Electronic Arts\n8. Sega\n9. Ubisoft\n";
					cout << endl;
					cin >> developer;

					if (developer == 1)
					{
						MicrosoftGames* game = new MicrosoftGames(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 2)
					{
						SonyGames* game = new SonyGames(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 3)
					{
						NintendoGames* game = new NintendoGames(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 4)
					{
						Bandai* game = new Bandai(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 5)
					{
						Konami* game = new Konami(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 6)
					{
						SquareEnix* game = new SquareEnix(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 7)
					{
						ElectronicArts* game = new ElectronicArts(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 8)
					{
						Sega* game = new Sega(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else if (developer == 9)
					{
						Ubisoft* game = new Ubisoft(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
						videojuegos.push_back(game);
					}
					else
					{
						cout << "Opcion invalida";
					}
				}
				else if (opcion2 == 3)
				{
					int option1;
					imprimirConsolas(consolas);

					cout << endl << "Eliga su opcion: " << endl;
					cin >> option1;

					Consolas* console = consolas.at(option1-1);

					string ano1, modelo, estado1;
					int serie1, type1 = 0, company1;
					double precio1;

					cout << "Ingrese el año en que salió: " << endl;
					cin >> ano1;

					//cout << typeid(console).name();

					do {
						cout << endl << "Compañia:\n1. Microsoft\n2. Sony\n3. Nintendo" << endl;
						cin >> company1;
						if (company1 == 1)
						{
							cout << endl << "1. Xbox\n2. Xbox 360\n3. Xbox One\n";
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
							cout << endl << "Opcion invalida, ingreselo otra vez\n";
						}
					} while (company1 < 0 || company1 > 4);
					cout << "Ingrese su opcion: ";
					cin >> type1;
					modelo = elegirModelo(company1, type1);
					cout << "Ingrese el estado de la consola: " << endl;
					cin >> estado1;
					cout << "Ingrese el numero de serie: " << endl;
					cin >> serie1;
					serie1 = verificarSerieConsolas(consolas, serie1);
					cout << "Ingrese el precio del modelo: " << endl;
					cin >> precio1;

					if (company1 == 1)
					{
						console = new Microsoft(ano1, modelo, estado1, serie1, precio1);

						consolas.erase(consolas.begin()+option1-1);
						consolas.insert(consolas.begin()+option1-1, console);
					}
					else if (company1 == 2)
					{
						console = new Sony(ano1, modelo, estado1, serie1, precio1);
						consolas.erase(consolas.begin()+option1-1);
						consolas.insert(consolas.begin()+option1-1, console);
					}
					else if (company1 == 3)
					{
						console = new Nintendo(ano1, modelo, estado1, serie1, precio1);
						consolas.erase(consolas.begin()+option1-1);
						consolas.insert(consolas.begin()+option1-1, console);
					}
					else
					{
						cout << "Opcion no valida, consola no modificada." << endl;
					}

					cout << "Consola modificada exitosamente";

				}
				else if (opcion2 == 4)
				{
					int option2;
					imprimirVideojuegos(videojuegos);

					cout << endl << "Eliga su opcion: " << endl;
					cin >> option2;

					Videojuegos* game = videojuegos.at(option2-1);

					string nombre, ano2, consola, genero, estado2;
					int jugadores, serie2, company2 = 0, type2 = 0, developer = 0;
					double precio2;

					cout << "Ingrese el nombre del videojuego: " << endl;
					cin.ignore();
					getline(cin,nombre);
					cout << "Ingrese el año en que salió: " << endl;
					cin >> ano2;
					cout << "Ingrese la cantidad de jugadores: " << endl;
					cin >> jugadores;
					cout << "Ingrese el género del juego: " << endl;
					cin >> genero;
					cout << "Ingrese el estado del videojuego: " << endl;
					cin >> estado2;
					cout << "Ingrese el numero de serie: " << endl;
					cin >> serie2;
					serie2 = verificarSerieJuegos(videojuegos, serie2);
					cout << "Ingrese el precio del videojuego: " << endl;
					cin >> precio2;

					game -> setNombre(nombre);
					game -> setAno(ano2);
					game -> setJugadores(jugadores);
					game -> setGenero(genero);
					game -> setEstado(estado2);
					game -> setSerie(serie2);
					game -> setPrecio(precio2);

					cout << endl << "Videojuego modificado exitosamente" << endl;
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
			}

			else if (opcion1 == 2)
			{
				string user, horaE;
				int cantidadTotal = 0;
				double total = 0.0;

				cout << "Ingrese su nombre: " << endl;
				cin.ignore();
				getline(cin, user);
				cout << "Bienvenido " << user << "!" << endl;
				bool ask2 = true;

				horaE = horaActual();
				Vendedor* vendedor = new Vendedor();

				vendedor -> setNombre(user);
				vendedor -> setHoraEntrada(horaE);

				while (ask2) {
					cout << endl << "OPCIONES DE VENDEDOR" << endl
					<< "1. Agregar Consola" << endl
					<< "2. Agregar Videojuego" << endl
					<< "3. Vender" << endl
					<< "4. Cerrar Sesion" << endl;
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
								cout << endl << "1. Xbox\n2. Xbox 360\n3. Xbox One\n";
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
								cout << endl << "Opcion invalida, ingreselo otra vez\n";
							}
						} while (company1 < 0 || company1 > 4);
						cout << "Ingrese su opcion: ";
						cin >> type1;
						modelo = elegirModelo(company1, type1);
						cout << "Ingrese el estado de la consola: " << endl;
						cin >> estado1;
						cout << "Ingrese el numero de serie: " << endl;
						cin >> serie1;
						serie1 = verificarSerieConsolas(consolas, serie1);
						cout << "Ingrese el precio del modelo: " << endl;
						cin >> precio1;

						if (company1 == 1)
						{
							Microsoft* console = new Microsoft(ano1, modelo, estado1, serie1, precio1);
							consolas.push_back(console);
						}
						else if (company1 == 2)
						{
							Sony* console = new Sony(ano1, modelo, estado1, serie1, precio1);
							consolas.push_back(console);
						}
						else if (company1 == 3)
						{
							Nintendo* console = new Nintendo(ano1, modelo, estado1, serie1, precio1);
							consolas.push_back(console);
						}
						cout << "Consola agregada exitosamente" << endl;
					}
					else if (opcion3 == 2)
					{
						string nombre, ano2, consola, genero, estado2;
						int jugadores, serie2, company2 = 0, type2 = 0, developer = 0;
						double precio2;

						cout << "Ingrese el nombre del videojuego: " << endl;
						cin.ignore();
						getline(cin,nombre);
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
								<< "4. PlayStation 4\n5. PSP\n6. PS Vita\n";
							}
							else if (company2 == 3)
							{
								cout << endl << "1. Nintendo Entertainment System\n2. Super Nintendo Entertainment System\n3. Nintendo 64\n4. Nintendo GameCube\n5. Nintendo Wii\n6. Nintendo Wii U\n7. Nintendo Switch\n8. Gameboy\n9. Gameboy Color\n10. Gameboy Advance\n11. Nintendo DS\n12. Nintendo DSi\n13. Nintendo 3DS\n14. Nintendo New 3DS\n";
							}
							else
							{
								cout << endl << "Opcion invalida, ingreselo otra vez\n";
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
						serie2 = verificarSerieJuegos(videojuegos, serie2);
						cout << "Ingrese el precio del videojuego: " << endl;
						cin >> precio2;
						cout << "Eliga la compania desarrolladora del videojuego:\n1. Microsoft\n2. Sony\n3. Nintendo\n4. Bandai\n5. Konami\n6. Square Enix\n7. Electronic Arts\n8. Sega\n9. Ubisoft\n";
						cout << endl;
						cin >> developer;

						if (developer == 1)
						{
							MicrosoftGames* game = new MicrosoftGames(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 2)
						{
							SonyGames* game = new SonyGames(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 3)
						{
							NintendoGames* game = new NintendoGames(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 4)
						{
							Bandai* game = new Bandai(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 5)
						{
							Konami* game = new Konami(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 6)
						{
							SquareEnix* game = new SquareEnix(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 7)
						{
							ElectronicArts* game = new ElectronicArts(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 8)
						{
							Sega* game = new Sega(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}
						else if (developer == 9)
						{
							Ubisoft* game = new Ubisoft(nombre, ano2, consola, jugadores, genero, estado2, serie2, precio2);
							videojuegos.push_back(game);
						}

					}
					else if (opcion3 == 3)
					{

						cout << endl << "BIENVENIDO A LA SECCION DE VENDER\n";
						string date, usuario, cliente, horaFinal;
						int cantidad = 0;
						double subtotal = 0.0;
						char more = 'y';
						stringstream articulos;

						Venta* venta = new Venta();

						cout << "Ingrese el nombre del cliente: " << endl;
						cin.ignore();
						getline(cin,cliente);

						usuario = vendedor -> getNombre();
						venta -> setNombreCliente(cliente);
						venta -> setNombreUsuario(usuario);

						date = fechaActual();

						while (more == 'Y' || more == 'y') {
							int option3 = 0;
							cout << "Elegir tipo de articulo que desea vender\n1. Consola\n2. Videojuego" << endl;
							cin >> option3;

							if (option3 == 1)
							{


								int opc_consola = 0;
								imprimirConsolas(consolas);
								cout << "Elegir el articulo que desea vender: ";
								cin >> opc_consola;

								articulos << consolas.at(opc_consola-1) -> getModelo() << "\t\t"
								<< consolas.at(opc_consola-1) -> getPrecio() << endl;

								subtotal += consolas.at(opc_consola-1) -> getPrecio();


							}

							else if (option3 == 2)
							{
								int opc_juego = 0;
								imprimirVideojuegos(videojuegos);
								cout << "Elegir el articulo que desea vender: ";
								cin >> opc_juego;

								articulos << videojuegos.at(opc_juego-1) -> getNombre() << "\t\t"
								<< videojuegos.at(opc_juego-1) -> getPrecio() << endl;

								subtotal += videojuegos.at(opc_juego-1) -> getPrecio();

							}
							cantidad++;
							cout << "Desea agregar otro articulo[y/n]: ";
							cin >> more;
						}

						horaFinal = horaActual();
						venta -> setHoraFinal(horaFinal);
						venta -> setSubtotal(subtotal);

						stringstream info, name;
						string filename, out;

						name << "./log_ventas/" << date << "_" << horaFinal <<  ".log";
						filename = name.str();
						cout << filename;

						info << "\t\tGAMEHUB" << endl << endl
						<< "FECHA:\t" << date  << endl << "HORA:\t" << horaFinal  << endl
						<< "VENDEDOR:\t" << user << endl << "CLIENTE:\t" << cliente << endl << endl
						<< "CANTIDAD DE ARTICULOS\t" << cantidad
						<< endl << articulos.str() << endl
						<< "SUBTOTAL:\t" << subtotal << endl << "IMPUESTO: (15%)" << endl
						<< "TOTAL:\t" << subtotal + subtotal * 0.15;

						cantidadTotal += cantidad;
						total += subtotal + subtotal * 0.15;

						out = info.str();

						ofstream outputFile(filename, ios::in | ios::out);
						outputFile.open(filename);//, ios::in | ios::out);
						outputFile << out;
						outputFile.close();

					}
					else if (opcion3 == 4)
					{
						ask2 = false;
						vendedor -> setHoraSalida(horaActual());


						//file.open("myFile.txt", ios::in | ios::out);
						stringstream info, name;
						string filename, out;
						string hour = vendedor -> getHoraSalida();
						string date = fechaActual();

						name << "./usuarios_log/" << user << "_" << hour << /*"–"<< date <<*/ ".log";
						filename = name.str();
						cout << filename << endl;

						info << "\t\tGAMEHUB" << endl << endl
						<< "NOMBRE:\t" << user << endl
						<< "HORA ENTRADA:\t" << vendedor -> getHoraEntrada()  << endl
						<< "HORA SALIDA:\t" << vendedor -> getHoraSalida() << endl << endl
						<< endl << "CANTIDAD DE ARTICULOS VENDIDOS:\t" << cantidadTotal << endl
						<< "DINERO GENERADO:\t" << total << endl;

						out = info.str();

						ofstream outputFile(filename, ios::in | ios::out);
						outputFile.open(filename);//, ios::in | ios::out);
						outputFile << out;
						outputFile.close();

						cout << out;
					}

				}
			}

			else if (opcion1 == 3)
			{
				return 0;
			}

			if (ask)
			{
				cout << "Desea continuar(Y/N): " << endl;
				cin >> resp;
			}
		}

	} while (opcion1 > 0 && opcion1 < 3);
	return 0;
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

void initial()
{
	Administrador* admin = new Administrador("admin","password");
}

int verificarSerieConsolas(vector <Consolas*> vector1, int tSerie)
{
	for (int j = 0; j < vector1.size(); j++) {
                if (tSerie == vector1.at(j) -> getSerie())
		{
			while (tSerie == vector1.at(j) -> getSerie()) {
				cout << "Numero de serie ya existe." << endl << "Ingrese numero de serie: " << endl;
				cin >> tSerie;
			}
		}
        }
	return tSerie;
}

int verificarSerieJuegos(vector <Videojuegos*> vector1, int tSerie)
{
	for (int j = 0; j < vector1.size(); j++) {
                if (tSerie == vector1.at(j) -> getSerie())
		{
			while (tSerie == vector1.at(j) -> getSerie()) {
				cout << "Numero de serie ya existe." << endl << "Ingrese numero de serie: " << endl;
				cin >> tSerie;
			}
		}
        }
	return tSerie;
}


string fechaActual() {
	stringstream ss;
	time_t t = time(0);   // get time now
        struct tm * now = localtime( & t );
	if (now->tm_mon + 1 >= 10) {
	        ss <<  now->tm_mday << '-'
		<< (now->tm_mon + 1) << '-'
		<< (now->tm_year + 1900);
	} else {
		ss <<  now->tm_mday << '-'
		<< '0' << (now->tm_mon + 1) << '-'
		<< (now->tm_year + 1900);
	}
        //<< endl;

	return ss.str();
}

string horaActual() {
	stringstream ss;
	time_t t = time(0);   // get time now
        struct tm * now = localtime( & t );
	if (now->tm_min >= 10) {
		if (now->tm_sec >= 10) {
		        ss << (now->tm_hour) << ':'
		        << (now->tm_min) << ':'
		        <<  now->tm_sec;
		} else {
			ss << (now->tm_hour) << ':'
		        << (now->tm_min) << ':'
		        <<  '0' << now->tm_sec;
		}
	} else {
		if (now->tm_sec > 10) {
		        ss << (now->tm_hour) << ':'
		        << '0' << (now->tm_min) << ':'
		        <<  now->tm_sec;
		} else {
			ss << (now->tm_hour) << ':'
		        << '0' << (now->tm_min) << ':'
		        << '0' << now->tm_sec;
		}
	}
	return ss.str();
}
