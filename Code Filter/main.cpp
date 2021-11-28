#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

int main()
{
    FAST

    string s;
    bool ignore=0;
    while(getline(cin,s))
    {
        int spaces=0;
        for(int i=0;s[i]!='\0';i++)
            if(s[i]==' ')
                spaces++;

        if(s=="\n" || spaces == s.size())
            continue;

        auto f = s.find("//");
        if(ignore==0 && f != string::npos)
        {
            s=s.erase(f);
            if(s.empty())
                continue;
        }

        s.push_back('\n');

        bool printed=0;

        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='/'&&s[i+1]=='*')
                ignore=1;
            else if(i>0 && s[i-1]=='*'&&s[i]=='/' && ignore)
            {
                ignore=0;
                if(s[i+1]=='\n')
                    break;
            }
            else if(!ignore)
                cout<<s[i];
        }
    }

    return 0;
}
