#include <iostream>

using namespace std;
int main()
{
    int n,t,m=0;int T;cin>>T;
    for(;T>0;T--){
    cin>>n;t=n-1;int A[n];m=0;
    for(;t>=0;t--)cin>>A[t];
    for(t=1;t<n-1;t++)
        if((A[t]-A[t-1])*(A[t]-A[t+1])<=0)m++;
    if(m==0)cout<<"Yes\n";
    else cout<<"No\n";}
}
