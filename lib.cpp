#define HASDOUBLE
#include "header.h"
#include <cstdio>
#include <string>

void dumpS(const S &s) {
  printf("%d %lf %s", s.f1, s.f2, s.f3);
  //printf("%d", s.f1);
  //std::cout << s.f1 << " " << s.f2 << std::endl;
}

