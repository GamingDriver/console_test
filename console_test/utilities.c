#include "utilities.h"






uint16_t mysum(uint16_t n) 
{
	uint16_t s = 0;

	for(uint16_t i = 0; i<= n; i++)
	{
		s += i;
	}
	return s;
}
