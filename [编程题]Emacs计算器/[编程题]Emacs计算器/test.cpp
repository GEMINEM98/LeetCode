#define _CRT_SECURE_NO_WARNINGS 1
// write your code here cpp

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		stack<int> st;
		while (n--)
		{
			string s = "";  // �����һ��������char�ʹ治��9���ϵ�����
			cin >> s;
			if (s[0] >= '0'&&s[0] <= '9')  // ����һ�����֣������������ջ
			{
				int num = 0;
				for (int i = 0; i < s.size(); ++i)
				{
					num = num * 10 + (s[i] - '0');
				}
				st.push(num);
			}
			else
			{
				int a = st.top();
				st.pop();
				int b = st.top();
				st.pop();
				if (s[0] == '+')
					st.push(b + a);
				else if (s[0] == '-')
					st.push(b - a);
				else if (s[0] == '*')
					st.push(b*a);
				else if (s[0] == '/')
					st.push(b / a);
			}
		}
		cout << st.top() << endl;
	}
	return 0;
}
