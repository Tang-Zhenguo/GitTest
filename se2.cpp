#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s[3], str, flag = ""; // flagΪ�ж�ʡ���Ƿ����; 
	
	int cnt = 0;  
	while(getline(cin, str))
	{
		int k = 0;
		str += "\t";
		for (int i = 0; i < str.size(); i ++)
		{
			if(str[i] == '\t') k ++;
			else s[k] += str[i];
		}
		if(s[0] != flag)
		{
			if(cnt > 0) cout << endl << endl; //�ж��ǲ��ǵ�һ�������ʡ�ݣ����������������� 
			cout << s[0];
			flag = s[0]; // ����ʡ�� 
			cnt ++;
		}
		if(s[2]!= "0") // �жϴ����Ƿ���ڡ�����ȷ������ 
		{
			cout << endl; 
			cout << s[1] << '\t' << s[2];
		} 
		for (int i = 0; i < 3; i ++) s[i] = ""; // ��ʼ���ַ��� 
	}
	
	return 0;
 } 
