#include "Datastore.h"

Datastore::Datastore(void) {}

void Datastore::add_guess(int guess) {
  guesses.push_back(guess);
}

void Datastore::add_estimate(int hrs, std::string brief) {
  Estimate estimate (hrs, brief);
  estimates.push_back(estimate);
}

void Datastore::finish_estimate(int index, int final_hrs) {
  if (index < 0 || index >= estimates.size()) {
    return;
  }
  estimates.at(index).finalize_estimate(final_hrs);
}

double Datastore::get_estimate_ratio(int index) {
  if (index < 0 || index >= estimates.size()) {
    return 0.0;
  }
  return estimates.at(index).get_ratio();
}

std::vector<int> Datastore::get_guesses(void) {
  return guesses;
}
