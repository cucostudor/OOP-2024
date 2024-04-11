#include "NumberList.h"
#include <stdio.h>

void NumberList::Init() { NumberList::count = 0; }
bool NumberList::Add(int x) {
	NumberList::count++;
	NumberList::numbers[count] = x;
	if (count >= 10)return false;
	return true;
}
void NumberList::Sort() {
	for(int i=1;i<NumberList::count;i++)
		for(int j=i+1;j<=NumberList::count;j++)
			if (NumberList::numbers[i] > NumberList::numbers[j])
			{
				int aux = NumberList::numbers[i];
				NumberList::numbers[i] = NumberList::numbers[j];
				NumberList::numbers[j] = aux;
			}
}
void NumberList::Print() {
	for (int i = 1; i <= NumberList::count; i++)
		printf("%d ", NumberList::numbers[i]);
}