#include <iostream>
#include <string>
#include "Header2.h"
using namespace std;

apartment::apartment()
{
	address = "";
	square = 0;
	NumbOfRooms = 0;
	cout << "constructor" << endl;
}
apartment::apartment(string address, double square, int NumbOfRooms)
{
	this->address = address;
	this->square = square;
	this->NumbOfRooms = NumbOfRooms;
	cout << "constructor" << endl;
}
apartment::apartment(apartment& buff)
{
	address = buff.address;
	square = buff.square;
	NumbOfRooms = buff.NumbOfRooms;
	cout << "constructor" << endl;
}
apartment::~apartment()
{
	cout << "destructor" << endl;
}
void apartment::cout_object()
{
	cout << "address = " << this->address << endl << "square = " << this->square << endl << "Number of rooms = " << this->NumbOfRooms << endl;
}
void apartment::set_address(string address)
{
	this->address = address;
}
void apartment::set_square(double square)
{
	this->square = square;
}
void apartment::set_NumbOfRooms(int NumbOfRooms)
{
	this->NumbOfRooms = NumbOfRooms;
}
string apartment::get_address()
{
	return this->address;
}
double apartment::get_square()
{
	return this->square;
}
int apartment::get_NumbOfRooms()
{
	return NumbOfRooms;
}
