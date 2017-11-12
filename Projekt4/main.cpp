#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;
#define MAX 7 
int oarray[MAX];

void af() {
	for (int i = 0; i < MAX; i++)
	{
		if (rand() % 49 + 1 == oarray[i])
		{
			af();
		}
	}
}
int main()
{
	srand(time(0));
	for (int i = 0; i < MAX; i++)
	{
		af();
		oarray[i] = rand() % 49 + 1;
	}
	std::sort(oarray, oarray + MAX);
	std::swap(oarray[0], oarray[6]);
	for (int i = 0; i < MAX; i++)
	{
		cout << oarray[i] << " ";
	}
	cin.get();
	return 0;
}
