#define _CRT_SECURE_NO_WARNINGS 1

// https://www.nowcoder.com/questionTerminal/bb4f1a23dbb84fd7b77be1fbe9eaaf32

// write your code here cpp
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	string sa;
	string sb;
	while (cin >> sa >> sb)
	{
		map<char, int> ma;
		map<char, int> mb;

		for (int i = 0; i < sa.length(); ++i)
		{
			ma[sa[i]]++;
		}
		for (int i = 0; i < sb.length(); ++i)
		{
			mb[sb[i]]++;
		}

		string s = "";
		for (int i = 0; i < mb.size(); ++i)
		{
			if (mb[i] > ma[i])
			{
				s = "No";
			}
		}
		if (s == "")
			s = "Yes";
		cout << s << endl;
	}
	return 0;
}
