#include <reg52.h>
#include "c52.h"

void c52_init(void)
{
	FM = 0;
	EN = 0;
	RST = 0;
}