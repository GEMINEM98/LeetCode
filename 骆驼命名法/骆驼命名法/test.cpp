#define _CRT_SECURE_NO_WARNINGS 1

// https://www.nowcoder.com/questionTerminal/aed1c7bbc2604e7c9661a2348b0541b8

// write your code here cpp
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "";
	while (cin >> s)
	{
		for (size_t i = 0; i < s.length(); ++i)
		{
			if (s[i] == '_')
			{
				s.erase(i, 1);
				s[i] -= 32;
			}
		}
		cout << s << endl;
	}
	return 0;
}