//langoj1110题 小王子的单链表
#include<iostream>
#include<list>
using namespace std;
int main_list1()
{
	list<int>toy = { 1,2,3,4,5,6,7,8,9,10 };
	int num;
	cin >> num;
	while (num--)
	{
		int x;
		cin >> x;
		toy.remove(x);
		toy.push_front(x);
		for (auto i : toy)cout << i << " ";
		cout << endl;

	}
	return 0;
}