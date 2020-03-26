#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<int> v;
		int tmp = 0;
		int m = n;
		int count = 0;

		while (m--)
		{
			cin >> tmp;
			v.push_back(tmp);
		}
		for (int i = 0; i < n - 1 - 2; ++i)
		{
			for (int j = i + 1; j < n - 1 - 1; ++j)
			{
				for (int k = j + 1; k < n - 1; ++k)
				{
					if (v[i] < v[j] && v[j] < v[k])
					{
						++count;
					}
				}
			}
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}