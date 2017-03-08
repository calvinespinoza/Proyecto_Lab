#include "Venta.h"

Venta::Venta()
{
	nombreCliente = "";
	horaFinal = "";
	nombreUsuario = "";
	subtotal = 0.0;
}

Venta::Venta(string pNombreCliente, string pHoraFinal, string pNombreUsuario, double pSubtotal)
{
	nombreCliente = pNombreCliente;
	horaFinal = pHoraFinal;
	nombreUsuario = pNombreUsuario;
	subtotal = pSubtotal;
}

void Venta::setNombreCliente(string pNombreCliente)
{
	nombreCliente = pNombreCliente;
}

void Venta::setHoraFinal(string pHoraFinal)
{
	horaFinal = pHoraFinal;
}

void Venta::setNombreUsuario(string pNombreUsuario)
{
	nombreUsuario = pNombreUsuario;
}

void Venta::setSubtotal(double pSubtotal)
{
	subtotal = pSubtotal;
}

string Venta::getNombreCliente()
{
	return nombreCliente;
}

string Venta::getHoraFinal()
{
	return horaFinal;
}

string Venta::getNombreUsuario()
{
	return nombreUsuario;
}

double Venta::getSubtotal()
{
	return subtotal;
}
