#include <iostream>
#include <stdio.h>
#include <sys/time.h>

#include "Datastore.h"

void printtime() {
  double sec;

  struct timeval tv;

  gettimeofday(&tv, NULL);
  sec = tv.tv_sec;
  sec += tv.tv_usec / 1000000.0;

  printf("%f\n", sec);
}

int main() {

  printtime();

//  Datastore *datastore = new Datastore();
  Datastore datastore;
  datastore.add_guess(5);
  datastore.add_guess(10);

  datastore.add_estimate(2, "do laundry");
  datastore.add_estimate(4, "Code the rest of this app.");

  datastore.finish_estimate(0, 6);
  datastore.finish_estimate(1, 8);

  printf("Ratio 1: %f\n", datastore.get_estimate_ratio(0));
  printf("Ratio 2: %f\n", datastore.get_estimate_ratio(1));

  std::cout << "Hello World!" << std::endl;
  std::cout << datastore.get_guesses().at(0) << std::endl;
  std::cout << datastore.get_guesses().at(1) << std::endl;
  return 0;
}
