#include <stdio.h>
#include "math.h"

int main(int argc, char *argv[]) {
	double p1, p2, d = 300000, p = 6000, m, r = 0.01;
	p1 = log10(p / (p - d * r));
	p2 = log10(1 + r);
	m = p1 / p2;
	printf("%.2lf月能还清", m);
	return 0;
}