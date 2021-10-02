#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s[3], str, flag = ""; // flag为判断省份是否更新; 
	
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
			if(cnt > 0) cout << endl << endl; //判断是不是第一个输出的省份，如果不是则输出空行 
			cout << s[0];
			flag = s[0]; // 更新省份 
			cnt ++;
		}
		if(s[2]!= "0") // 判断此行是否存在“待明确地区” 
		{
			cout << endl; 
			cout << s[1] << '\t' << s[2];
		} 
		for (int i = 0; i < 3; i ++) s[i] = ""; // 初始化字符串 
	}
	
	return 0;
 } 
