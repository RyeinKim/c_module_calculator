#ifndef CALC_DATA_H
#define CALC_DATA_H

typedef struct _CALC_DATA { 
	int num1;
	int num2;
	char symbol;
	int result;
} CALC_DATA;

#endif

void add(CALC_DATA *data);
void sub(CALC_DATA *data); 
void print(CALC_DATA *data);