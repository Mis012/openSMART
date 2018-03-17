#include <stdio.h>

int main() {
	
	int i;
	unsigned char XOR;
	unsigned char c;
	unsigned char *string = "\xd2\x07\xff\x00";
	int lenght = 4;

	for (XOR = 0, i = 0; i < lenght; i++) {
		c = (unsigned char)string[i];
		XOR ^= c;
	}
	printf("%#02x\n", XOR); //0x2a
}
