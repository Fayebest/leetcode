#include <iostream>
#include <string>
#include <map>

using namespace std;

int n,m;
string s,str;
bool key;
map<string,string> json;

string handle(string str,string s)
{
    if(s.empty())
        return str;
    for(int i=0;i<s.size(); i++)
    {
        if(s[i] == ' ')
            continue;
        else if(s[i] == '{')
            {
                json[str] = "OBJECT";
                key = true;
            }
        else if(s[i] == '}')
        {
            int i;
            for(i = str.size() -1 ;i>=0;i--)
            {
                int i;
                for(i = str.size() - 1;i>=0;i--)
                {
                    if(str[i] == '.')
                        break;
                }
                if(i<0)
                    str = "";
                else
                    str = str.substr(0,i);
            }
        }
        else if(s[i] == ":")
            key = false;
        else if(s[i] == ',')
            key = true;
        else if( s[i] == '"' )
        {
            string temp;
            for(i = i+1; i<s.size();i++)
            {
                if(s[i] == '\\')
            }
        }
    }

}

int main()
{
	cin >> n>>m;
	cin.get();
	getchar();
	while(n--)
	{
		getline(cin,s);
		str = handle(str,s);
	}


}
