#define _CRT_SECURE_NO_WARNINGS 1

/*

链接：https://www.nowcoder.com/questionTerminal/97e7a475d2a84eacb60ee545597a8407
来源：牛客网

对于一个矩阵，请设计一个算法从左上角(mat[0][0])开始，顺时针打印矩阵元素。

给定int矩阵mat,以及它的维数nxm，请返回一个数组，数组中的元素为矩阵元素的顺时针输出。
测试样例：

[[1,2],[3,4]],2,2

返回：[1,2,4,3]

*/


#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

class Printer {
public:
	static vector<int> clockwisePrint(vector<vector<int>> mat, int n, int m) {
		// write code here
		int startN = 0, startM = 0;
		int endN = n - 1, endM = m - 1;
		vector<int> res;
		while (startN <= endN && startM <= endM)
		{
			for (int i = startM; i <= endM; ++i)  // 上
			{
				res.push_back(mat[startN][i]);
			}
			for (int i = startN + 1; i < endN; ++i)  // 右
			{
				res.push_back(mat[i][endM]);
			}
			for (int i = endM; startN < endN&&i >= startM; --i)  // 下，矩阵不能只有一行
			{
				res.push_back(mat[endN][i]);
			}
			for (int i = endN - 1; startM<endM&&i>startN; --i)  // 左，矩阵不能只有一列
			{
				res.push_back(mat[i][startN]);
			}
			++startN;
			++startM;
			--endN;
			--endM;
		}
		return res;
	}
};

int main()
{
	vector<vector<int>> mat;
	int n, m;
	while (cin >> n >> m)
	{
		int tmp = 0;
		for (int i = 0; i < n; ++i)
		{
			vector<int> v;
			for (int j = 0; j < m; ++j)
			{
				cin >> tmp;
				v.push_back(tmp);
			}
			mat.push_back(v);
		}

		vector<int> res = Printer::clockwisePrint(mat, n, m);

		for (int i = 0; i < res.size(); ++i)
		{
			cout << res[i] << " ";
		}
	}
	system("pause");
	return 0;
}