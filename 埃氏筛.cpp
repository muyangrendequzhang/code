////ɸѡ˭������
//#include<iostream>
//
//using namespace std;
//int n;
//int m;
//const int N = 1e5 + 10;
//bool a[N];
//int E_sieve(int k)
//{
//	int ans = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		a[i] = false;//falseΪ��������trueΪ����
//	}
//	for (int i = 2; i <= k; i++)
//	{
//		if (!a[i])
//		{
//			ans++;
//			for (int j = 2*i; j <= k;j+=i )
//			{
//				a[j] = true;
//			}
//		}
//	}
//	return ans;
//}
//int main()
//{
//	cin >> n >> m;
//	cout << E_sieve(m) - E_sieve(n-1);
//	//ɸѡ����n��m�����е�����
//	return 0;
//}