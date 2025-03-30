#include"my_lab.h"//¼üÓÐÐò
using namespace std;
int main_map()
{
	map<string, int>a;
	a["abc"] = 2;
	a["bcd"] = 3;
	a["cdf"] = 4;
	a.erase("abc");
	cout << a.count("bcd") << endl;
	if (a.find("abc") != a.end())
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	for (map<string, int>::iterator it = a.begin(); it != a.end(); ++it)
	{
		cout << it->first << "->" << it->second << endl;
	}
	for (auto& pr : a)
	{
		cout << pr.first << "->" << pr.second << endl;
	}
	map<string, int>mp;
	vector<string>word;
	word.push_back("awa");
	word.push_back("awa");
	word.push_back("awa");
	word.push_back("bwb");
	word.push_back("bwb");
	for (int i = 0; i < word.size(); i++)
	{
		mp[word[i]]++;
	}
	for (auto& pr1: mp)
	{
		cout << pr1.first << " " << pr1.second << endl;
	}
	system("pause");
	return 0;
}