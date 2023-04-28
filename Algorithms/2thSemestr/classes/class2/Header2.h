#pragma once
#include <iostream>
#include <string>
using namespace std;

class apartment
{
private:
	string address;
	double square;
	int NumbOfRooms;
public:
	apartment();
	apartment(string address, double square, int NumbOfRooms);
	apartment(apartment& buff);
	~apartment();
	void cout_object();
	void set_address(string address);
	void set_square(double square);
	void set_NumbOfRooms(int NumbOfRooms);
	string get_address();
	double get_square();
	int get_NumbOfRooms();

};
