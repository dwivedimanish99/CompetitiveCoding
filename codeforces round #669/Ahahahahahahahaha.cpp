#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
#define rfo(i,a,b) for(int i=a;i>=b;i--)
#define mod 1e9+7
#define ll long long
#define ump unordered_map
#define vi vector<int>
using namespace std;

void solve();
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),res;
    fo(i,n)cin>>a[i];
    bool op=true;
    for(int i=0;i<n;)
    {
        if( (a[i]-a[i+1])-(a[i+2]-a[i+3]) == 0 )
        {
            res.push_back(a[i]);
            res.push_back(a[i+1]);
            res.push_back(a[i+2]);
            res.push_back(a[i+3]);
            i+=4;
        }
        else if(a[i]-a[i+1]==0)
        {
            res.push_back(a[i]);
            res.push_back(a[i+1]);
            i+=2;
        }
        else if(a[i+2]-a[i+3]==0)
        {
            res.push_back(a[i+2]);
            res.push_back(a[i+3]);    
        }
    }
}