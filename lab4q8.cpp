#include <iostream>
using namespace std;
void armstrong(int m,int n)
{
	int a,b,c,i;
	cout<<"the Armstrong numbers between "<<m<<" and "<<n<<" are:\n";
	for(i=m;i<=n;i++)
	{
		a=i;
		c=0;
		while(a!=0)
    	{
    		b=a%10;
    		c=c+(b*b*b);
    		a=a/10;
    	}
    	if(c==i)
    	cout<<c<<endl;
	}
}
int main()
{
	int m,n;
	cout<<"enter the upper and lower limits\n";
	cin>>m>>n;
	if(n<0 || m<0)
	cout<<"incorrect input";
	else
	armstrong(m,n);
	return 0;
}
