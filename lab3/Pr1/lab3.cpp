#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Math.h"
int main()
{
	printf("%d\n", Math::Mul(3,5));
	printf("%d\n", Math::Add(4,2,4,6,8));
	printf("%s", Math::Add("123","346"));
	return 0;	
}