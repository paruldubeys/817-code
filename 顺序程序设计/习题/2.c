#include <stdio.h>
#include "math.h"
#define PRICE 1000
#define YEAR 5
void planOne(){
	double p, r = 0.03;
	p = PRICE * (1 + r);
	printf("一次存5年的本息和为：%.2lf\n", p);
}
void planTow(){
	double p1, p2, r1 = 0.021, r2 = 0.0275;
	p1 = PRICE * (1 + 2 * r1);
	p2 = p1 * (1 + 3 * r2);
	printf("先存2年期，到期后将本息再存3年期的本息和为：%.2lf\n", p2);
}
void planThree(){
	double p1, p2, r1 = 0.0275, r2 = 0.021;
	p1 = PRICE * (1 + 3 * r1);
	p2 = p1 * (1 + 2 * r2);
	printf("先存3年期，到期后将本息再存2年期的本息和为：%.2lf\n", p2);
}
void planFour(){
	double p, p1, r = 0.015;
	p = 1000 * pow((1 + r), YEAR);
	printf("存1年期，到期后将本息再存一年期，连续存5次的本息和为：%.2lf\n", p);
}
void planFive(){
	double p, r = 0.0035;
	p = 1000 * pow(1 + r / 4, 4 * YEAR);
	printf("存活期存款， 活期利息每季度结算一次的本息和为：%.2lf\n", p);
}
int main(int argc, char *argv[]) {
	planOne();
	planTow();
	planThree();
	planFour();
	planFive();
	return 0;
}