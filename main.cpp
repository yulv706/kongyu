#include <iostream>

using namespace std;
int main()
{
    const int i=60000;
    int A[i]={0};
    int a,b,c,n;cin>>n;
    for(a=n;a>0;a--){
        cin>>b>>c;
        for(;b<=c;b++)A[b]++;
    }
    int B[n+1];int j=0;
    for(;j<n+1;j++)B[j]=0;
    for(a=0;a<=i-1;a++)if(A[a]>0){j=A[a];B[j]++;}
    for(a=1;a<=n;a++)cout<<B[a]<<" ";
}
