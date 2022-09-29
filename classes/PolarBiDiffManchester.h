class PolarBiDiffManchester : public Encoding {

  int state;

public:
  explicit PolarBiDiffManchester(std::string sig) : Encoding(sig) {
    state = getState();
  };

  void decode() {
    std::string out;
    std::string current = "pTn";

    for (int i = 0; i < signal.size(); i++) {
      std::cout << signal[i];
      if (signal[i + 1] == '1') {
        current = current == "pTn" ? "nTp" : "pTn";
      }

      out = current + " ";

      if (i < signal.size() - 1) {
        if (signal[i + 1] == '0') {
          // inv
          out += "inv";
        } else {
          out += "no inv";
        }
      }

      output.push_back(out);
    }
  }
};