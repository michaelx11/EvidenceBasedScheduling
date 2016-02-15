#ifndef _DATASTORE_H_
#define _DATASTORE_H_

#include <vector>
#include <string>

#include "Estimate.h"

class Datastore {
  std::vector<int> guesses;
  std::vector<Estimate> estimates;

  public:
    Datastore (void);
    void add_guess (int guess);
    void add_estimate (int hrs, std::string brief);
    void finish_estimate (int index, int final_hrs);
    double get_estimate_ratio (int index);
    std::vector<int> get_guesses (void);
};

#endif
