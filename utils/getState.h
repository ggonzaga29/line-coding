int getState() {
  int state;

  std::cout << "Enter initial state (0 OR 1): ";
  std::cin >> state;

  if (state == 0 || state == 1) {
    return state;
  } else {
    throw std::invalid_argument(
        "Received invalid bit value: only 1s and 0s are accepted");
  }
}