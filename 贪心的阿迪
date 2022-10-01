#include <iostream>

using namespace std;


int main()
{
    int n,k,M,D,x,da;
    cin>>n>>k>>M>>D;
    int A[k];
    for(int t=0;t<k;t++)A[t]=0;
    for(x=n/(k*D)+1;x<=M;x++){
        if(n%x!=0)continue;
        if(((n/x)-1)%k!=0)continue;
        A[0]=((((n/x)-1)/k)+1)*x;
    }
    cout<<A[0];

}
