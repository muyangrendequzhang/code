#include"my_lab.h"//ÓĞĞòĞÔ
using namespace std;
int main_set()
{
	set<int>st;
	st.insert(1);
	st.insert(2);
	st.insert(3);
	st.insert(3);
	st.erase(3);
	if (st.count(1))
	{
		cout << "yes" << endl;
	}
	cout << st.size() << endl;
	st.clear();
	
	for (auto& ele : st)
		cout << ele << endl;
	system("pause");
	return 0;
}