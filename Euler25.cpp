//
//  main.cpp
//  FibonacciSequenceEuler
//
//  Created by Graham Grable on 2/16/16.
//  Copyright © 2016 Graham Grable. All rights reserved.
//
// This program determines the index of the Fibonacci Sequence given a number that correlates to the number of digits found in that index.
//
//  n has d digits.
//  It can be said that 10^(d-1) <= n < 10^d
//  Using logarithms, it can be rearranged to read
//  d-1 <= log10(n) < d
//  Since we are looking for d, right at the value of n, and not above it, we can rewrite again.
//  d-1 = log10(n)
//  d = log10(n) + 1
//
//  Additonally, to calculate the value of "n", we can use Binet's formula:
//  n=((phi^k)-(-1/phi)^k)/(sqrt(5)), where phi is the golden ratio, and k is the # of terms.
//  We can take out "(-1/phi)^k/(sqrt(5))" since it will be ~ 0 with large numbers.
//
//  Thus, we have
//  d = log10((phi^k)/sqrt(5)) + 1
//  "phi^k" poses an issue for overflow, so more rewriting is necessary.
//
//  d = log10(phi^k) - log10(sqrt(5)) + 1
//  d = k*log10(phi) - log10(sqrt(5)) + 1
//  (d + log10(sqrt(5)) - 1)/log10(phi)) = k

#include <iostream>
#include <math.h>
int main()
{
    int d=1000;
    float k=0;
    float phi=(1+sqrt(5))/2;

    std::cin >> d;

    k=(d+log10(sqrt(5))-1)/log10(phi);

    std::cout << k << std::endl;
    return 0;

}
