#pragma once
class Queue
{
	private:
		int *queue;

	public:
		Queue();
		~Queue();
		void Setqueue(int x, int i);
		int Getqueue(int i);
		void Plas(int a);
		void Delete(int a);
		int Sum();
		long long int  Mult();
		
};

