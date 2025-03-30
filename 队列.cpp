#include <iostream>
using namespace std;
#define N 10005
struct myqueue
{
	int a[10005];
	int head = 0;
	int tail = -1;
	int size()
	{
		return tail - head + 1;
	}
	void push(int data)
	{
		a[++tail] = data;
	}
	int front()
	{
		return a[head];
	}
	void pop()
	{
		head++;
	}
};
int main_queue()
{

	return 0;
}