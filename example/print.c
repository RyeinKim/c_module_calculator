#include <stdio.h>
#include "print.h"

void print(CALC_DATA *data)
{
	printf("%d %c %d = %d\n",
		data->num1,
		data->num2,
		data->symbol,
		data->result
	);
}