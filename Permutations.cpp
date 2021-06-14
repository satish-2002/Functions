//cpp Program to Print all Permutations of a string
#include<bits/stdc++.h>
using namespace std;
string s="123";
void Permutations(string ss,int vis[])
{
    if(ss.size()==s.size())
    {
        cout<<ss<<"\n";
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            Permutations(ss+s[i],vis);
            vis[i]=0;
        }
    }
}
int main()
{
    string ss="";
    int ans[s.size()]={};
    Permutations(ss,ans);
} 
