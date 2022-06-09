#include <stdio.h>

int main(int argc, char *argv[]) {
	char c1, c2, c3, c4, c5;
	c1 = 'C';
	c2 = 'h';
	c3 = 'i';
	c4 = 'n';
	c5 = 'a';
	putchar(c1 + 4);
	putchar(c2 + 4);
	putchar(c3 + 4);
	putchar(c4 + 4);
	putchar(c5 + 4);
	putchar('\n');
	printf("%c%c%c%c%c", c1 + 4, c2 + 4, c3 + 4, c4 + 4, c5 + 4);
}