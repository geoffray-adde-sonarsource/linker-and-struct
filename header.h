#ifndef GUARD
#define GUARD

struct S{
  int f1 = 666;
#ifdef HASDOUBLE
  double f2 = 3.14;
#endif
  const char *f3 = "f3";
};

#endif
