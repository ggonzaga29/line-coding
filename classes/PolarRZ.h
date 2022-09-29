class PolarRZ : public Encoding {
public:
  explicit PolarRZ(std::string sig) : Encoding(sig){};

  void decode() {
		for(char bit : signal) {
			bit == '1' ? (output).push_back("pos RZ") : (output).push_back("neg RZ");
		}
	}
};