#define _CRT_SECURE_NO_WARNINGS 1

/*

问题描述
　　小明对类似于 hello 这种单词非常感兴趣，这种单词可以正好分为四段，第一段由一个或多个辅音字母组成，第二段由一个或多个元音字母组成，第三段由一个或多个辅音字母组成，第四段由一个或多个元音字母组成。
　　给定一个单词，请判断这个单词是否也是这种单词，如果是请输出yes，否则请输出no。
　　元音字母包括 a, e, i, o, u，共五个，其他均为辅音字母。
输入格式
　　输入一行，包含一个单词，单词中只包含小写英文字母。
输出格式
　　输出答案，或者为yes，或者为no。
样例输入
lanqiao
样例输出
yes
样例输入
world
样例输出
no
评测用例规模与约定
　　对于所有评测用例，单词中的字母个数不超过100。

*/



#include<iostream>
#include<string>
using namespace std;

bool IsYuanYin(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	return false;
}

int main()
{
	string s = "";
	while (getline(cin, s))
	{
		bool res1 = false;
		bool res2 = false;
		bool res3 = false;
		bool res4 = false;
		int i = 0;
		while (i < s.size() && !IsYuanYin(s[i]))
		{
			res1 = true;
			++i;
		}
		while (i < s.size() && IsYuanYin(s[i]))
		{
			res2 = true;
			++i;
		}
		while (i < s.size() && !IsYuanYin(s[i]))
		{
			res3 = true;
			++i;
		}
		while (i < s.size() && IsYuanYin(s[i]))
		{
			res4 = true;
			++i;
		}
		if (res1&&res2&&res3&&res4)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}