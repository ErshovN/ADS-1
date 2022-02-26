// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  // вставьте код функции
  int f = 0;
  for (int i = 2; i * i <= value; i++) {
      if (value % i == 0) {
          f = 1;
      }
  }
  if (f == 0) {
      return true;
  }
  else {
      return false;
  }
}

uint64_t nPrime(uint64_t n) {
  // вставьте код функции
  uint64_t a = 1;
  if (a == n) {
      return 2;
  }
  else {
      while (true)
      {
          for (uint64_t i = 3; ; i++) {
              uint64_t f = 1;
              for (uint64_t j = 2; j * j <= i; j++) {
                  if ((i % j) == 0) {
                      f = 0;
                      break;
                  }
              }
              if (f == 1) {
                  a++;
                  if (a == n) {
                      return i;
                  }
              }
          }
      }

  }
}

uint64_t nextPrime(uint64_t value) {
  // вставьте код функции
  uint64_t v = value + 1;
  while (true)
  {
      uint64_t f = 0;
      for (uint64_t i = 2; i * i <= v; i++) {
          if (v % i == 0) {
              f = 1;
          }
      }
      if (f == 0) {
          return v;
      }
      else {
          v++;
      }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  // вставьте код функции
  uint64_t v = 0;
  uint64_t s = 0;
  while (v < hbound)
  {
      int f = 0;
      for (int i = 2; i * i <= v; i++) {
          if (v % i == 0) {
              f = 1;
          }
      }
      if (v == 1) {
          f = 1;
      }
      if (f == 0) {
          s += v;
      }
      v++;
  }
  return s;
}
