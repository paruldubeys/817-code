#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	double p, r;
	r = 0.07;
	int n = 10;
	p = pow((1 + r), n);
	printf("10年后我国国民生产总值与现在相比增长：%.2lf 个百分比\n", p);
	return 0;
}