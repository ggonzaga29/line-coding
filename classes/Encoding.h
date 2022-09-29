#include <iostream>
#include <vector>

class Encoding {
protected:
  std::string signal;
  std::vector<std::string> output;
  int baseState = 0;

public:
  explicit Encoding(std::string sig) { signal = sig; }

  void printOutput() {
    for (std::string out : output) {
      std::cout << out << " ";
    }

		std::cout << "\n";
  }

	std::string getSignal() {
		return this->signal;
	}

  virtual void decode() = 0;
};

