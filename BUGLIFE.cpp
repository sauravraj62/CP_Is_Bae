#include "bits/stdc++.h"
#define ll long long
using namespace std;
vector< vector<ll> > v(2005);
ll visit[2005];
ll val[2005];
bool dfs(ll node,ll value)
{
    if(visit[node])
    {
        return  (val[node] == value);
    }
    visit[node] = 1;
    val[node] = value;

    bool ans = true;

    for(ll i=0;i<v[node].size();i++)
    {
        ans &= dfs(v[node][i], !value);
    }

    return ans;
}
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("oo.txt","w",stdout);
    ll i,j,k,t,l,n,m,p,a,b,flag;
    cin>>t;
    l = 0;
    while(t--)
    {
        cout<<"Scenario #"<<(++l)<<":"<<endl;
        cin>>n>>m;
        for(i=0;i<2005;i++)
        {
            v[i].clear();
        }
        memset(visit,0,sizeof(visit));
        memset(val,-1,sizeof(val));
        while(m--)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        bool ans = true;

        for(i=1;i<=n;i++)
        {
            if(!visit[i])
            {
                ans &= dfs(i,0);
            }
        }



        if(ans)
        {
            cout<<"No suspicious bugs found!"<<endl;
        }
        else
        {
            cout<<"Suspicious bugs found!"<<endl;
        }
    }
    return 0;
}