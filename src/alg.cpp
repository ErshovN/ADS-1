// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    // вставьте код функции
    int f = 0;
    for (int i = 2; i <= sqrt(value); i++) {
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
    int v = n + 1;
    while (true)
    {
        int f = 0;
        for (int i = 2; i <= sqrt(v); i++) {
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
    int v = 2;
    int s = 0;
    while (v < n)
    {
        int f = 0;
        for (int i = 2; i <= sqrt(v); i++) {
            if (v % i == 0) {
                f = 1;
            }
        }
        if (f == 0) {
            s += v;
        }
        v++;
    }
    return s;
}
