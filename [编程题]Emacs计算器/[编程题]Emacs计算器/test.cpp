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
			string s = "";  // 存的是一个整数，char型存不了9以上的整数
			cin >> s;
			if (s[0] >= '0'&&s[0] <= '9')  // 这是一个数字，将这个整数入栈
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
