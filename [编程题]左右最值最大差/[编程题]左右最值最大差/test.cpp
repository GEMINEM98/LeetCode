#define _CRT_SECURE_NO_WARNINGS 1

/*

链接：https://www.nowcoder.com/questionTerminal/f5805cc389394cf69d89b29c0430ff27
来源：牛客网

给定一个长度为N(N>1)的整型数组A，可以将A划分成左右两个部分，左部分A[0..K]，右部分A[K+1..N-1]，K可以取值的范围是[0,N-2]。求这么多划分方案中，左部分中的最大值减去右部分最大值的绝对值，最大是多少？

给定整数数组A和数组的大小n，请返回题目所求的答案。
测试样例：

[2,7,3,1,1],5

返回：6

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