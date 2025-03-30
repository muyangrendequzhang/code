#include<iostream>
using namespace std;
const int N = 5010;
int s[N];
void creatset()
{
	for (int i = 0; i < N; i++)
	{
		s[i] = i;
	}
}
int findset(int p)
{
	if (s[p] != p)
	{
		s[p]=findset(s[p]);//Â·¾¶Ñ¹Ëõ
	}
	return p;
}
void mergesetload(int x,int y)
{
	x = findset(x);
	y = findset(y);

}
int main_ya()
{
	system("pause");
	return 0;
}