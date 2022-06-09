#include <stdio.h>
//从键盘输入BOY3个字符，然后把他们输出到屏幕
int main(int argc, char *argv[]) {
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}