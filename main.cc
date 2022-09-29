#include <iostream>

#include "classes/classes.h"
#include "utils/clearScreen.h"
#include "utils/getState.h"
#include "utils/menu.h"

int main() {
  std::string input;
  std::string encodings[] = {"Unipolar NRZ",
                             "Polar NRZ-L",
                             "Polar NRZ-I",
                             "Polar RZ",
                             "Polar Biphase Manchester",
                             "Polar Biphase Differential Manchester",
                             "Bipolar AMI",
                             "Bipolar Pseudoternary"};
  int signalType;

  menu();

  std::cout << "Enter choice: ";
  std::cin >> signalType;

  /*
          xTODO: POLAR NRZ-I
          xTODO: Polar Biphase Manchester
          TODO: Polar Biphase Differential Manchester
  */

  clearScreen();

	std::cout << "Selected: " << encodings[signalType] << "\n\n";
  std::cout << "Enter signal: ";
  std::cin >> input;

  // UnipolarNRZ
  if (signalType == 0) {
    UnipolarNRZ encoding(input);
    encoding.decode();
    encoding.printOutput();
  }

  // NRZ_L
  else if (signalType == 1) {
    NRZ_L encoding(input);
    encoding.decode();
    encoding.printOutput();
  }

  // NRZ_I
  else if (signalType == 2) {
    NRZ_I encoding(input);
    encoding.setBaseState(getState());
    encoding.decode();
    encoding.printOutput();
  }

  // PolarRZ
  else if (signalType == 3) {
    PolarRZ encoding(input);
    encoding.decode();
    encoding.printOutput();
  }

  // Polar Biphase Manchester
  else if (signalType == 4) {
    PolarBiManchester encoding(input);
    encoding.decode();
    encoding.printOutput();
  }

  // Polar Biphase Differential Manchester
	else if (signalType == 5) {
    PolarBiDiffManchester encoding(input);
    encoding.setBaseState(getState());
    encoding.decode();
    encoding.printOutput();
  }

  // BipolarAMI
  else if (signalType == 6) {
    BipolarAMI encoding(input);
    encoding.setBaseState(getState());
    encoding.decode();
    encoding.printOutput();
  }

  // BipolarPseudo
  else if (signalType == 7) {
    BipolarPseudo encoding(input);
    encoding.setBaseState(getState());
    encoding.decode();
    encoding.printOutput();
  }

  return 0;
}