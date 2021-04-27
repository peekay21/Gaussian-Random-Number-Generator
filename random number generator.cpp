#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define pi 3.14159262
int main()
{	
	float n,x,y, mu, st, a, U1, U2;
	cout<<"Enter number of random number to generate: ";
	cin>>n;
	cout<<"Mean: ";
	cin>>mu;
	cout<<"Standard deviation: ";
	cin>>st;
	a = 1.0;
	vector<float> xaxis;
	vector<float> yaxis;
	
	for(int i=0;i<n;i++)
	{
		U1 = ((float) rand() / (RAND_MAX));
		U2 = ((float) rand() / (RAND_MAX));
		x = sqrt((-2) * log(U1)) * cos(2 * pi * U2);
		y = a * exp( -(pow((x-mu),2)/ (2 * pow(st,2))));
		xaxis.push_back(x);
		yaxis.push_back(y);	
		
	}
	
    for(int i=0;i<xaxis.size();i++)
    {
    	cout<<xaxis[i]<<"\t"<<yaxis[i]<<endl;
	}
	
	return 0;
}
