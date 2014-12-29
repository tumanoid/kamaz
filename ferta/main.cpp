//	Add comments
//
//
#include "pch.h";
#include "win32/win_common.h"

void foo () {
	for (;;) {
		break;
	}
	int res = 10;
	int def = 11;

}


int main ()
{
	printf ("repo out new\n");
	printf ("repo out old\n");

	std::cout << boost::format ("%i \n %s") % 32 % "Hello boost";

	boost::format fter ("%i, %i");
	fter % 55;
	fter % 77;

	std::cout << fter << std::endl;

	fter.clear ();
	fter % 88 % 99;

	printf ("%s\n", fter.str ().c_str ());

	return 0;
}
