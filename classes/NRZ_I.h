class NRZ_I : public Encoding {

int state;

public:
  explicit NRZ_I(std::string sig) : Encoding(sig){
		state = getState() == 0 ? 1 : 0;
	};

  void decode() {
		std::string out;

    for (int i = 0; i < signal.size(); i++) {
			int bit = signal[i];

			if(bit == '1') {
				out += "(inv ";

				if(state == 0) {
					out += "pos";
				} else {
					out += "neg";
				}

				out += ") ";
				state = state ? 0 : 1;
			} else {
				out += "(noinv ";

				if(state == 1) {
					out += "pos";
				} else {
					out += "neg";
				}

				out += ") ";
			}
    }

		output.push_back(out);
  }
};