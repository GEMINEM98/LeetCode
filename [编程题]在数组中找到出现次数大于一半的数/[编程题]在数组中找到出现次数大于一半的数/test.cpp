#define _CRT_SECURE_NO_WARNINGS 1

// https://www.nowcoder.com/questionTerminal/6a406a24b2a14954956a2168e7f42f9d

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		unordered_map<int, int> um;
		int num = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> num;
			um[num]++;
		}
		for (auto& e : um)
		{
			if (e.second > (n / 2))
			{
				cout << e.first << endl;
				return 0;
			}
		}
		cout << -1 << endl;
	}
	return 0;
}