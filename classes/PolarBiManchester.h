class PolarBiManchester : public Encoding {
public:
  explicit PolarBiManchester(std::string sig) : Encoding(sig){};

  void decode() {
		for(char bit : signal) {
			bit == '1' ? (output).push_back("nTp") : (output).push_back("pTn");
		}
	}
};