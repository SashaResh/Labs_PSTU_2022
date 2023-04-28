#include "Header2.h"
using namespace std;

int main()
{
	apartment ap1;
	ap1.cout_object();
	apartment ap2("milchakova", 34.4, 2);
	ap2.cout_object();
	apartment ap3(ap2);
	ap3.cout_object();

	ap1.set_address("malysheva");
	ap1.set_square(54.8);
	ap1.set_NumbOfRooms(4);
	cout << ap1.get_address() << endl << ap1.get_square() << endl << ap1.get_NumbOfRooms() << endl;
}