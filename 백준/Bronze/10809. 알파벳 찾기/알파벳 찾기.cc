#include <iostream>
using namespace std;

string str;

int main()
{
	cin >> str;
	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j < str.length(); j++)
		{
			if (i == str[j])
			{
				cout << j << " ";
				break;
			}
			else if (j == str.length() - 1)
				cout << "-1 ";
		}
	}
	return 0;
}