#include <stdio.h>
#include "math.h"
#define PI 3.1415926

int main(int argc, char *argv[]) {
	double r, h, a, b, c, d, e;
	printf("请输入圆的半径：");
	scanf("%lf", &r);
	a = 2 * PI * r;
	printf("圆的周长为：%.2lf\n", a);
	b = PI * r * r;
	printf("圆的面积为：%.2lf\n", b);
	c = 4 * PI * r * r;
	printf("球的表面积为：%.2lf\n", c);
	d = 4.0 / 3.0 * PI * r * r * r;
	printf("球的体积为：%.2lf\n", d);
	printf("请输入圆柱的高：");
	scanf("%lf", &h);
	e = b * h;
	printf("圆柱体积为：%.2lf\n", e);
	return 0;
}