#ifndef _ESTIMATE_H_
#define _ESTIMATE_H_

#include <string>

class Estimate {

  bool is_finalized;
  int initial_hrs;
  int final_hrs;
  std::string brief;

  public:
    Estimate (int initial_hrs);
    Estimate (int initial_hrs, std::string brief);
    void finalize_estimate(int final_hrs);
    double get_ratio(void);
};

#endif
