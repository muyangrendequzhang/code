#include"my_lab.h"
using namespace std;
int main_e()
{
	vector<int>vec = { 0,1,1,1,8,9,9 };
	reverse(vec.begin(), vec.end());
	for (auto ele : vec)
	{
		cout << ele << endl;
	}
	int pos = lower_bound(vec.begin(),vec.end(),8)-vec.begin();
	int pos1 = upper_bound(vec.begin(), vec.end(), 999) - vec.begin();
	cout << pos << endl;
	cout << pos1 << endl;
	if (pos1 == vec.size())
	{
		cout << "no" << endl;
	}
	cout << min({ 1,2,3,45,4,53,1 }) << endl;
	int x = gcd(8, 12);
	int y = lcm(8, 12);
		
	system("pause");
	return 0;

}