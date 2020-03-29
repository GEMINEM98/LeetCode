#define _CRT_SECURE_NO_WARNINGS 1

/*

дһ������������ n ����쳲�������Fibonacci�����еĵ� n �쳲��������еĶ������£�
F(0) = 0,   F(1) = 1
F(N) = F(N - 1) + F(N - 2), ���� N > 1.

쳲����������� 0 �� 1 ��ʼ��֮���쳲�������������֮ǰ��������Ӷ��ó���
����Ҫȡģ 1e9+7��1000000007����������ʼ���Ϊ��1000000008���뷵�� 1��


ʾ�� 1��
���룺n = 2
�����1

ʾ�� 2��
���룺n = 5
�����5

��ʾ��
	0 <= n <= 100

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/fei-bo-na-qi-shu-lie-lcof
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Solution {
public:
	static int fib(int n) {
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		int a = 0;
		int b = 1;
		int c;
		n -= 1;
		while (n--)
		{
			c = (a + b) % 1000000007;
			a = b;
			b = c;
		}
		return c;
	}
};
int main()
{
	int n = 0;
	while (cin >> n)
	{
		cout << Solution::fib(n) << endl;
	}
	system("pause");
	return 0;
}