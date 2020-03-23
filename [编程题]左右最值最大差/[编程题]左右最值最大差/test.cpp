#define _CRT_SECURE_NO_WARNINGS 1

/*

���ӣ�https://www.nowcoder.com/questionTerminal/f5805cc389394cf69d89b29c0430ff27
��Դ��ţ����

����һ������ΪN(N>1)����������A�����Խ�A���ֳ������������֣��󲿷�A[0..K]���Ҳ���A[K+1..N-1]��K����ȡֵ�ķ�Χ��[0,N-2]������ô�໮�ַ����У��󲿷��е����ֵ��ȥ�Ҳ������ֵ�ľ���ֵ������Ƕ��٣�

������������A������Ĵ�Сn���뷵����Ŀ����Ĵ𰸡�
����������

[2,7,3,1,1],5

���أ�6

*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<stdlib.h>
using namespace std;

class MaxGap {
public:
	static int findMaxGap(vector<int> A, int n) {
		// write code here
		int max = 0;
		for (int k = 0; k <= A.size() - 2; ++k)
		{
			int lmax = 0;
			int rmax = 0;
			for (int i = 0; i <= k; ++i)
			{
				if (lmax < A[i])
					lmax = A[i];
			}
			for (int i = k + 1; i <= A.size() - 1; ++i)
			{
				if (rmax < A[i])
					rmax = A[i];
			}
			if (abs(lmax - rmax) > max)
				max = abs(lmax - rmax);
		}
		return max;
	}
};

int main()
{
	vector<int> A = { 2,7,3,1,1 };
	int n = 5;
	cout << MaxGap::findMaxGap(A, n) << endl;

	system("pause");
	return 0;
}