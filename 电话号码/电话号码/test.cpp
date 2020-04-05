#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool String(string s)
{
	for (size_t i = 0; i < s.length(); ++i)
	{
		if ((s[i] != '-') && (s[i]<'0' || s[i]>'9') && (s[i]<'A' || s[i]>'Z')) // ÅÅ³ý×Ö·ûÎ¥¹æ
			return false;
	}
	if ((count(s.begin(), s.end(), '-') == 1) && (s.length() == 8))
		return true;
	return false;
}

string String_Swap(string s)
{
	string res = "";
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (s[i] == '-')
			res += '-';
		else if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
			res += '2';
		else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
			res += '3';
		else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
			res += '4';
		else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
			res += '5';
		else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
			res += '6';
		else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
			res += '7';
		else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
			res += '8';
		else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
			res += '9';
		else if (s[i] >= '0'&&s[i] <= '9')
			res += s[i];
	}
	return res;
}

int main()
{
	int n = 0;
	while (cin >> n)
	{
		vector<string> v;
		vector<string> res;
		string s = "";
		while (n--)
		{
			cin >> s;
			v.push_back(s);
		}

		for (size_t i = 0; i < v.size(); ++i)
		{
			if (String(v[i]))
			{
				res.push_back(String_Swap(v[i]));
			}
		}
		sort(res.begin(), res.end());
		for (auto e : res)
		{
			cout << e << endl;
		}
	}
	return 0;
}