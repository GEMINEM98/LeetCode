#define _CRT_SECURE_NO_WARNINGS 1

//  https://leetcode-cn.com/problems/fan-zhuan-dan-ci-shun-xu-lcof/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	static string reverseWords(string s) 
	{
		int k = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			while (i < s.size() && s[i] == ' ')
				++i;  //找到第一个非空格字符
			if (i == s.size())
				break;
			int j = i;
			while (j < s.size() && s[j] != ' ')
				++j;    //遍历1个非空单词
			reverse(s.begin() + i, s.begin() + j);      //反转1个单词
			if (k != 0)
				s[k++] = ' ';
			while (i < j)
				s[k++] = s[i++];      //反转后的1个单词赋给s[k]
		}
		s.erase(s.begin() + k, s.end());   //删除 k后面空格
		reverse(s.begin(), s.end());
		return s;
	}
};

int main()
{
	string s = "  hello   world! ";
	cout << Solution::reverseWords(s) << endl;
	system("pause");
	return 0;
}