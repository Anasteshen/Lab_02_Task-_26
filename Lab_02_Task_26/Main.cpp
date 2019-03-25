#include <iostream>
#include "Queue.h"

using namespace std;
int main()
{
	Queue *queue = new Queue();
	int j;
		for (j = 0; j<12; j++)
		{
		queue->Setqueue(j + 1, j);
		}
		cout << "number of elements = " << j << endl;
	int a;
		cout << "Add an element:\n";
		cout << "enter element value\n";
		cin >> a;
	queue->Plas(a);
	cout << "Output elements\n";
	for (int i = 0; i<13; i++)
	{
		cout << queue->Getqueue(i) << "-" << i << " element of an array\n";
	}
	cout << "input the number of element to delete it\n";
	cin >> a;
	cout << "______________" << endl;
	queue->Delete(a);
	int sum = queue->Sum();
	long int mult = queue->Mult();
	cout << "Sum of elements = " << sum << endl;
	cout << "Multiplication of elements = " << mult << endl;
	delete  queue;
	system("pause");
	return 0;
}