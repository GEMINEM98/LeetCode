#define _CRT_SECURE_NO_WARNINGS 1


/*

问题描述
　　一个正整数如果任何一个数位不大于右边相邻的数位，则称为一个数位递增的数，例如1135是一个数位递增的数，而1024不是一个数位递增的数。
　　给定正整数 n，请问在整数 1 至 n 中有多少个数位递增的数？
输入格式
　　输入的第一行包含一个整数 n。
输出格式
　　输出一行包含一个整数，表示答案。
样例输入
30
样例输出
26
评测用例规模与约定
　　对于 40% 的评测用例，1 <= n <= 1000。
　　对于 80% 的评测用例，1 <= n <= 100000。
　　对于所有评测用例，1 <= n <= 1000000。

*/


#include<iostream>
using namespace std;

bool Func(int n)
{
	int flag = 10;
	while (n)
	{
		if (n % 10 > flag)
			return false;
		else
		{
			flag = n % 10;
			n /= 10;
		}
	}
	return true;
}

int main()
{
	int n = 0;
	while (cin >> n)
	{
		int i = 0;
		int count = 0;
		for (i = 1; i <= n; ++i)
		{
			if (Func(i))
				++count;
		}
		cout << count << endl;
	}
	return 0;
}

