#include "calc.h"

void add(CALC_DATA *data)
{
	data->symbol = '+';
	data->result = data->num1 + data->num2;
}

void sub(CALC_DATA *data)
{
	data->symbol = '-';
	data->result = data->num1 - data->num2;
}