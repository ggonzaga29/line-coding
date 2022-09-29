class BipolarAMI : public Encoding {
  // 0 for neg 1 for pos
  int currentAxis;

public:
  explicit BipolarAMI(std::string sig) : Encoding(sig) {
    currentAxis = getState() == 1 ? 0 : 1;
  };

  void decode() {
    for (char bit : signal) {
      if (bit == '1') {
        currentAxis == 1 ? output.push_back("pos") : output.push_back("neg");
        currentAxis = (currentAxis + 1) % 2;
      } else {
        output.push_back("zero");
      }
    }
  }
};