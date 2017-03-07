Main:	Main.o Consolas.o Videojuegos.o Microsoft.o Nintendo.o Sony.o Usuario.o Administrador.o Vendedor.o
	g++ Main.o Consolas.o Videojuegos.o Microsoft.o Nintendo.o Sony.o Usuario.o Administrador.o Vendedor.o -o Main

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

Videojuegos.o:	Videojuegos.cpp Videojuegos.h
	g++ -c Videojuegos.cpp

Usuario.o:	Usuario.cpp Usuario.h Administrador.h Vendedor.h
	g++ -c Usuario.cpp

Administrador.o: Administrador.cpp Administrador.h
	g++ -c Administrador.cpp

Vendedor.o:	Vendedor.cpp Vendedor.h
	g++ -c Vendedor.cpp

clean:
	rm *.o Main
