#include "Header.h"

int fibbonachi(int a, int b, int n)
{
	if (n - 1 != 0)return fibbonachi(b, a + b, --n);
	return a + b;
}