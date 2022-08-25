#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
#define f(x) 3*x-cos(x)-1
#define g(x) 3+sin(x)
using namespace std;
int main()
{
	float guess,error,f0,x1,x0,x,f1;
	int step=1;
	
	 cout<< setprecision(5)<< fixed;
	 
	cout<<"enter the first guess : ";
	cin>>guess;
	cout<<"enter the tolerable error : ";
	cin>>error;
	cout<<endl<<endl;
	//f0=f(guess1);
	do
	{
		x0=guess;
		f0=f(x0);
		f1=g(x0);
		x=guess-(f0/f1);
		guess=x;
		x1=x;
		cout<<endl<<"ITERATION-"<<step<<":\t\t"<<"x"<<step<<"=\t"<<x;
		step++;
	}while((fabs(x1-x0)/x1)>=error);
	getch();
	return 0;
}


