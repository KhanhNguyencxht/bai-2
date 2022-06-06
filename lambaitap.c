#include<stdio.h>

void ingiatri(short tong) {
	unsigned char be = 0;
	unsigned char lon = 0;
	be = tong;
	lon = tong >> 8;
	printf("so be %x\r\n", be);
	printf("so lon %x\r\n", lon);
}

int main() {
	unsigned short tong = 0x1234;
	
	ingiatri(tong);
}
