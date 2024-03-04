#include "NumberList.h"
#include <cstdio>

void NumberList::Init() { NumberList::count = 0; }


bool NumberList::Add(int x) {
    if (NumberList::count >= 10)
        return false;
    NumberList::numbers[NumberList::count] = x;
    NumberList::count++;
    return true;
}

void NumberList::Sort() {
    for (int i = 0; i < NumberList::count - 1; i++)
        for (int j = i + 1; j < NumberList::count; j++)
            if (NumberList::numbers[i] > NumberList::numbers[j])
            {
                int k;
                k = NumberList::numbers[i];
                NumberList::numbers[i] = NumberList::numbers[j];
                NumberList::numbers[j] = k;
            }
}

void NumberList::Print() {
    for (int i = 0; i < NumberList::count; i++) {
        printf("%d", NumberList::numbers[i]);
        printf(" ");
    }
}