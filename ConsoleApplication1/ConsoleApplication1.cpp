// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#define FUNC(x) 2*log(tan(x))
#define Q1(x, n) sin(x)*sin(x)*n / (n+1) 
#define Q2(x, n) cos(x)*cos(x)*n / (n+1) 

int main() {
	double x = 0.5, S1 = 0.0, S2 = 0.0, a1 = sin(x)*sin(x), a2 = cos(x)*cos(x);
	unsigned int n, N = 5;
	for (n = 1; n <= N; ++n) {
		S1 += a1;
		S2 += a2;
		a1 *= Q1(x, n);
		a2 *= Q2(x, n);
	}
	double y = FUNC(x), S=S1-S2, tol = fabs(S - y);
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
	return 0;
}


