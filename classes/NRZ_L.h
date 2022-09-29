class NRZ_L : public Encoding {
public:
  explicit NRZ_L(std::string sig) : Encoding(sig){};

  void decode() {
		for(char bit : signal) {
			bit == '1' ? (output).push_back("hi") : (output).push_back("lo");
		}
	}
};