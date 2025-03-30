#include"my_lab.h"
using namespace std;
int main_string()
{
	string s(100,'0');
	
	cout << s << endl;
	s = "awa";
	s[0] = 'b';
	string s1 = "123";
	string s2 = "123";
	cout << s1 + s2 << endl;
	string s3 = s1 + s2;
	cout << s3.substr(3,2) << endl;//第二个参数为子串长度
	if (s1 == s2)
	{
		cout << "yes" << endl;
	}
	cout << s3.find("312") << endl;
	if (s1.find("312") == string::npos)
	{
		cout << "no" << endl;
	}
	string s4 = "1231234";
	double x = stod(s4);
	cout << x << endl;
	int y = 3123;
	string s5 = to_string(y);
	//尾加用+=,这样才能保证速度
	system("pause");
	return 0;
}