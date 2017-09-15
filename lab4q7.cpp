#include <iostream>
using namespace std;
void strong(int m,int n)
{
	int a,b,c,d,i,j;
	cout<<"the Strong numbers between "<<m<<" and "<<n<<" are:\n";
	for(i=m;i<=n;i++)
	{
		a=i;
		d=0;
		while(a!=0)
    	{
    		b=a%10;
    		a=a/10;
    		c=1;
    		for(j=1;j<=b;j++)
    		c=c*j;
    		d=d+c;
    	}
    	if(d==i)
    	cout<<d<<endl;
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
	strong(m,n);
	return 0;
}
