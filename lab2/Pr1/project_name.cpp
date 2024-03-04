#include "NumberList.h"
#include <stdio.h>


int main()
{
    NumberList list;
    list.Init();
    list.Add(420);
    list.Add(42069);
    list.Add(12);
    list.Add(69);
    list.Add(3);

    list.Print();
    printf("\n");
    list.Sort();
    list.Print();
    return 0;
}