//vector数组，长度可变
#include "my_lab.h"
using namespace std;
int main_vector()
{
	vector<int>vec(100,1);//第一个是长度，第二个是初值
	
	vector<int>arr;
	vector<vector<int>>dp(5,vector<int>(6,10));//多维
	//成员函数
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	cout << arr.size() << endl;
	arr.pop_back();
	cout << arr.size() << endl;
	cout << arr.empty() << endl;
	arr.clear();
	cout << arr.empty() << endl;
	arr.resize(5,4);
	arr.back();//vector里面有
	for (auto& ele : arr)
	{
		cout << ele << endl;
	}
	system("pause");
	return 0;
}

