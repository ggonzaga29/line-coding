#include <iostream>

#include "classes/Encoding.h"
#include "classes/UnipolarNRZ.h"
#include "classes/NRZ_L.h"

int main() {

	UnipolarNRZ signal("101010");
	signal.decode();
	signal.printOutput();

	return 0;
}