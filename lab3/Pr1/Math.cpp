#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <algorithm>
#include <stdarg.h>
#include <cstring>
#include <cstdlib>
#include <stdio.h>

int Math::Add(int x, int y){ return (x + y); }
int Math::Add(int x, int y, int z) { return (x + y + z);}
double Math::Add(double x, double y) { return (x + y); }
double Math::Add(double x, double y, double z) { return (x + y + z); }
int Math::Mul(int x, int y) { return (x * y); }
int Math::Mul(int x, int y, int z) { return (x * y * z); }
double Math::Mul(double x, double y) { return (x * y);  }
double Math::Mul(double x, double y, double z) { return (x * y * z); }
int Math::Add(int count, ...) {
	va_list list;
	va_start(list, count);
	int s = 0;
	for (int i = 0; i < count; i++)
	{
		s += va_arg(list, int);
	}
	va_end(list);
	return s;
}
char* Math::Add(const char* s1, const char* s2) {
	if (s1 == nullptr || s2 == nullptr)return nullptr;
	int lg = std::max(strlen(s1), strlen(s2)) + 2;
	char* rez = new char[lg];
	int n1 = atoi(s1);
	int n2 = atoi(s2);
	int nRez = n1 + n2;
	_itoa(nRez,rez,10);
	return rez;
}