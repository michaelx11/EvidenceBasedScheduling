#include "Estimate.h"

Estimate::Estimate (int initial_hrs) {
  is_finalized = false;
  this->initial_hrs = initial_hrs;
}

Estimate::Estimate (int initial_hrs, std::string brief) {
  is_finalized = false;
  this->initial_hrs = initial_hrs;
  this->brief = brief;
}

void Estimate::finalize_estimate (int final_hrs) {
  is_finalized = true;
  this->final_hrs = final_hrs;
}

double Estimate::get_ratio (void) {
  if (!is_finalized) {
    return 0.0;
  }
  return (double)initial_hrs / final_hrs;
}
