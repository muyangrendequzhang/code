//langoj1110题 小王子的单链表
#include<iostream>
using namespace std;
struct list
{
	int node;
	int next;
}n[20];
static void print()
{
	int i = 0;
	for (int j = 0; j < 10; j++)
	{
		i = n[i].next;
		cout << n[i].node << " ";
	}
	cout << endl;
}
static void exchange(int k)
{
	int p=0;
	while (1)
	{
		if (n[p].next == k)break;
		p = n[p].next;
	}
	int now = n[p].next;
	n[p].next = n[now].next;
	n[now].next = n[0].next;
	n[0].next = now;
}
int main_prince()
{
	for (int i = 0; i <= 11; i++)
	{
		n[i].node = i;
		n[i].next = i + 1;
	}
	int num;
	cin >> num;
	int s;
	while (num--)
	{
		cin >> s;
		exchange(s);
		print();
	}
	
	return 0;
}