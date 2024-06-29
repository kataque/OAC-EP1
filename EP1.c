#include "driverEP1.h"
#include "stdbool.h"

unsigned short int getOpcode(unsigned short int * word){
	unsigned short int mask = 0b1111;
	return (*word & mask);
}

unsigned short int getAddress(unsigned short int * word){
	unsigned short int mask = 0b0000111111111111;
	return (*word & mask);
}

int processa(short int *M, int memSize){
	unsigned short int opCode, ri, pc, a, b, c, d, r, psw;
	bool jump;
	do {
		if (!jump)
			ri = M[pc];
		if (!jump)
			ri = M[]
		opCode = getOpcode(ri);

		printf("Ensine-me a fazer algo com %hx\n", ri);
		switch(ri){
			case 0b0000:
				break;
			case 0b0001:
				a = M[getAddress(ri)];
				break;
			case 0b0010:
				M[getAddress(ri)] = a;
				break;
			case 0b0011:
				r = pc + 1;

		}
		pc++;
		if (pc >= memSize)
			pc = 0;
	} while ((ri & 0xF000) != 0xF000);
}