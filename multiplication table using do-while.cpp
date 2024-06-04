#include<iostream>
using namespace std;
int main()
{
	int i,j=1;
	cout<<"mutiplication table of:";
	cin>>i;
	
	do{
		cout<<i<<" x "<<j<<"="<<i*j<<endl;
		j++;
	}
while(j<=10);

	return 0;
}
