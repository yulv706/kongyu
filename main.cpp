#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long double sinx=0;
    long double x,n,m=1,t=1,t0=1,a=(-1);cin>>x;
    const long double pi=3.1415926535;
    while(x>2*pi)x=x-2*pi;
    while(x<0)x=x+2*pi;
    while(t0>=0.00000000000005){n=m;m=m+2;a=a*(-1);t=1;
        for(;n>0;n--)t=t*(x/n);t0=t;
        t=t*a;sinx=sinx+t;
    }
    cout<<fixed<<setprecision(13)<<sinx;
}




