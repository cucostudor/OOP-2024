#define _CRT_SECURE_NO_WARNINGS
#include "Compare.h"
#include "Student.h"
#include <cstdio>

int main()
{
    static Student s1, s2;
    s1.setName("Herobrine", 7);
    s2.setName("Kiryu", 5);
    s1.setEnglish(10);
    s1.setMath(7);
    s1.setHistory(9);
    s2.setEnglish(8);
    s2.setMath(4);
    s2.setHistory(10);

    printf("name: %d\n",CompName(&s1, &s2));
    printf("english: %d\n", CompEnglish(&s1, &s2));
    printf("math: %d\n", CompMath(&s1, &s2));
    printf("history: %d\n", CompHistory(&s1, &s2));
    printf("average grade: %d", CompAvg(&s1, &s2));
    return 0;
}