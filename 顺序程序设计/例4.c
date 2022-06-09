#include <stdio.h>
#include <math.h>
//给出三角形的三边长，求三角形面积
int main(int argc, char *argv[]) {
	double a, b, c, s, area;			//定义各变量，均为double型
	a = 3.67;							//对边长a赋值
	b = 5.43;							//对边长b赋值
	c = 6.21;							//对边长c赋值
	s = (a + b + c) / 2;				//计算s
	area = sqrt(s*(s-a)*(s-b)*(s-c));	//计算area
	printf("area = %f\n", area);		//输出面积area的值
}