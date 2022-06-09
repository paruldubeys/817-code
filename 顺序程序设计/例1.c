#include <stdio.h>
//有人用温度计测量出用华氏法表示的温度，今要求把它转换为以摄氏度表示的温度。
int main(){
	float f, c;				//定义f和c为单精度浮点型变量
	scanf("%f", &f);		//指定f的值
	c = 5.0/9 * (f-32);		//利用公式计算c的值
	printf("%f",c);			//输出c的值
	return 0;
}