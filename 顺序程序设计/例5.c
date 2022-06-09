#include <stdio.h>
#include <math.h>
//求ax平方+bx+c=0方程的根。a,b,c由键盘输入，设b平方-4ac>0
int main(int argc, char *argv[]) {
	double a, b, c, p, q, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);		//输入双精度型变量的值要用格式声明”%lf“
	p = -b / 2*a;
	q = sqrt(b * b - 4 * a * c) / 2 * a;
	x1 = p + q;								//求出方程的两个根
	x2 = p - q;								//输出方程的两个根
	printf("x1 = %.2f\n", x1);
	printf("x2 = %.2f\n", x2);
