#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;
#define MAX 7 
int oarray[MAX];
int random;
void af() {
	random = rand() % 49 + 1;
	for (int i = 0; i < MAX; i++)
	{
		if (random == oarray[i])
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
		oarray[i] = random;
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