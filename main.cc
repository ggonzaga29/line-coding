#include <iostream>

#include "classes/Encoding.h"
#include "classes/UnipolarNRZ.h"

int main() {

	UnipolarNRZ signal("101010");
	std::cout << signal.getSignal();

	return 0;
}