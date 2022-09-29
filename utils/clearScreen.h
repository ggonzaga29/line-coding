#include <cstdlib>

void clearScreen() {
	#ifdef WINDOWS
		std::system("cls");
	#else
		// Assume POSIX
		std::system("clear");
	#endif
}
