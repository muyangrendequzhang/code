#include"my_lab.h"
using namespace std;

int main_al()
{
	int a = 1, b = 2;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	vector<int>vec = { 1,7,42,4,5,312,4,6,4,35, };
	sort(vec.begin(), vec.end(),greater<int>());//第三个传入的参数决定了从大到小，删去就是从小到大
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	system("pause");
	return 0;
}