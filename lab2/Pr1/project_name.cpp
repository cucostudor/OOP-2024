#define _CRT_SECURE_NO_WARNINGS
#include "NumberList.h"
#include <iostream>
using namespace std;

int main()
{
    NumberList list;
    list.Init();
    list.Add(3);
    list.Add(15);
    list.Add(12);
    list.Add(69);
    list.Add(2);
    list.Sort();
    list.Print();
    return 0;
}