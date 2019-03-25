#include "Queue.h"
#include <iostream>

using namespace std;


Queue::Queue()
{
	queue = new int[13];
}
Queue::~Queue()
{
	delete[]queue;
}
void Queue::Setqueue(int x, int i)
{
	queue[i] = x;
}
int Queue::Getqueue(int i)
{
	return queue[i];
}
void Queue::Plas(int a)
{
	
	queue[12] = a;

}

void Queue::Delete(int a)
{
	int n[12];
	int j = 0;
	if (a>0 || a<12)
	{
		for (int i = 0; i<13; i++)
		{
			if (i == a) continue;
			n[j] = queue[i];
			j++;
		}
	}


	for (int i = 0; i<12; i++)
	{
		cout << n[i] << "\n";
	}
}
int Queue::Sum()
{
	int sum = 0;
	for (int i = 0; i < 13; i++)
	{
		sum += queue[i];
	}
		return sum;
}
long long int  Queue::Mult()
{
	long long  int mult = 1;
	for (int i = 0; i < 13; i++)
	{

		mult *= queue[i];
	}
			return mult;
		
}
