#define _CRT_SECURE_NO_WARNINGS 1

/*

��������
����С���������� hello ���ֵ��ʷǳ�����Ȥ�����ֵ��ʿ������÷�Ϊ�ĶΣ���һ����һ������������ĸ��ɣ��ڶ�����һ������Ԫ����ĸ��ɣ���������һ������������ĸ��ɣ����Ķ���һ������Ԫ����ĸ��ɡ�
��������һ�����ʣ����ж���������Ƿ�Ҳ�����ֵ��ʣ�����������yes�����������no��
����Ԫ����ĸ���� a, e, i, o, u���������������Ϊ������ĸ��
�����ʽ
��������һ�У�����һ�����ʣ�������ֻ����СдӢ����ĸ��
�����ʽ
��������𰸣�����Ϊyes������Ϊno��
��������
lanqiao
�������
yes
��������
world
�������
no
����������ģ��Լ��
���������������������������е���ĸ����������100��

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