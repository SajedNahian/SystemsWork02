#include <stdio.h>

int main () {
	unsigned int number = 3100000000;
	char * numberPointer = &number;

	printf("Number in hex: %x \n", number);

	for (int i = 0; i < sizeof(number); i++) {
		printf("Byte %d of Number: %hhx \n", i, *numberPointer++);
	}

	numberPointer = &number;

	for (int i = 0; i < sizeof(number); i++) {
		(*numberPointer)++;
		numberPointer++;
		printf("Number in hex: %x Number in decimal: %d\n", number, number);
	}

	numberPointer = &number;
	for (int i = 0; i < sizeof(number); i++) {
		(*numberPointer) += 16;
		numberPointer++;
		printf("Number in hex: %x Number in decimal: %d\n", number, number);
	}
}