#include <iostream>
#include <stdexcept>
#include <vector>

class Encoding {
protected:
  std::string signal;
  std::vector<std::string> output;
  int baseState = 0;

public:
  explicit Encoding(std::string sig) {
    for (char c : sig) {
      if (c == '1' || c == '0') {
        signal = sig;
      } else {
        throw std::invalid_argument(
            "Received invalid bit value: only 1s and 0s are accepted");
      }
    }
  }

  void printOutput() {
		int i = 0;
    std::cout << "\n";
    for (std::string out : output) {
      std::cout << signal[i] << ": " << out << "\n";
			i++;
    }

    std::cout << "\n\n";
  }

  std::string getSignal() { return this->signal; }

  void setBaseState(int state) { this->baseState = state; }
	
	int getState() {
		return this->baseState;
	}

  virtual void decode() = 0;
};
