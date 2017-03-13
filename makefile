Main:	Main.o Consolas.o Videojuegos.o Microsoft.o Nintendo.o Sony.o Usuario.o Administrador.o Vendedor.o MicrosoftGames.o NintendoGames.o SonyGames.o Bandai.o Konami.o SquareEnix.o ElectronicArts.o Sega.o Ubisoft.o Venta.o
	g++ Main.o Consolas.o Videojuegos.o Microsoft.o Nintendo.o Sony.o Usuario.o Administrador.o Vendedor.o MicrosoftGames.o NintendoGames.o SonyGames.o Bandai.o Konami.o SquareEnix.o ElectronicArts.o Sega.o Ubisoft.o Venta.o -o Main

Main.o: Usuario.h Administrador.h Vendedor.h Venta.h Consolas.h Nintendo.h Microsoft.h Sony.h Videojuegos.h Main.cpp
	g++ -c Main.cpp

Consolas.o:	Consolas.cpp Consolas.h Nintendo.h Microsoft.h Sony.h
	g++ -c Consolas.cpp

Microsoft.o:	Microsoft.cpp Microsoft.h
	g++ -c Microsoft.cpp

Nintendo.o:	Nintendo.cpp Nintendo.h
	g++ -c Nintendo.cpp

Sony.o:	Sony.cpp Sony.h
	g++ -c Sony.cpp

Videojuegos.o:	Videojuegos.cpp Videojuegos.h MicrosoftGames.h NintendoGames.h SonyGames.h Bandai.h Konami.h SquareEnix.h ElectronicArts.h Sega.h Ubisoft.h
	g++ -c Videojuegos.cpp

MicrosoftGames.o: MicrosoftGames.cpp MicrosoftGames.h
	g++ -c MicrosoftGames.cpp

NintendoGames.o: NintendoGames.cpp NintendoGames.h
	g++ -c NintendoGames.cpp

SonyGames.o: SonyGames.cpp SonyGames.h
	g++ -c SonyGames.cpp

Bandai.o: Bandai.cpp Bandai.h
	g++ -c Bandai.cpp

Konami.o: Konami.cpp Konami.h
	g++ -c Konami.cpp

SquareEnix.o: SquareEnix.cpp SquareEnix.h
	g++ -c SquareEnix.cpp

ElectronicArts.o: ElectronicArts.cpp ElectronicArts.h
	g++ -c ElectronicArts.cpp

Sega.o: Sega.cpp Sega.h
	g++ -c Sega.cpp

Ubisoft.o: Ubisoft.cpp Ubisoft.h
	g++ -c Ubisoft.cpp

Usuario.o:	Usuario.cpp Usuario.h Administrador.h Vendedor.h
	g++ -c Usuario.cpp

Administrador.o: Administrador.cpp Administrador.h
	g++ -c Administrador.cpp

Vendedor.o:	Vendedor.cpp Vendedor.h
	g++ -c Vendedor.cpp

Venta.o:	Venta.cpp Venta.h Consolas.h Vendedor.h
	g++ -c Venta.cpp

VectorConsolas.o:	VectorConsolas.cpp VectorConsolas.h Consolas.h
	g++ -c VectorConsolas.cpp

VectorVideojuegos.o:	VectorVideojuegos.cpp VectorVideojuegos.h Videojuegos.h
	g++ -c VectorVideojuegos.cpp

clean:
	rm *.o Main
