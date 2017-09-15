
#include <iostream>
using namespace std;
void perfect(int m,int n)
{
	int b,i,j;
	cout<<"the Perfect numbers between "<<m<<" and "<<n<<" are:\n";
	for(i=m;i<=n;i++)
	{
		b=0;
		for(j=1;j<i;j++)
    	{
    		if(i%j==0)
    		b=b+j;
    	}
    	if(b==i)
    	cout<<b<<endl;
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
	perfect(m,n);
	return 0;
}

