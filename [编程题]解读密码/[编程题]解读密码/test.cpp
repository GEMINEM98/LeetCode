#define _CRT_SECURE_NO_WARNINGS 1

// https://www.nowcoder.com/questionTerminal/16fa68271ee5448cafd504bb4a64b482

// write your code here cpp
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s = "";
	while (getline(cin, s))
	{
		vector<int> v;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] >= '0'&&s[i] <= '9')
				v.push_back(s[i] - '0');
		}
		for (auto e : v)
		{
			cout << e;
		}
		cout << endl;
	}
	return 0;
}