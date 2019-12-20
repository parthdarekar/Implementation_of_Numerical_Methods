//Program 4 Newton Raphson Method
#include<iostream>
#include<process.h>
#include<cmath>
using namespace std;
float fun(float a) //Current Function being implemented is x^2 - 4, can be changed accordingly.
{
  float value;
  value=a*a-4;
  return value;
}

float deri(float a) //Derivative of the function considered, is calculated by hand.
{
  float value;
  value=2*a;
  return value;
}

int main()
{
  float x_0,x_1,x_2,eps;
  int i,n;
  cout<<"Enter the value of x_0:";
  cin>>x_0;
  cout<<"Enter the value of the number of iterations n:";
  cin>>n;
  cout<<endl<<"Enter the value of eps(tolerance):";
  cin>>eps;
  cout<<"The function being evaluated is x^2 - 4";
  for(i=1;i<n;i++)
  {
    if(abs(deri(x_0))<0)
    {
        cout<<endl<<"The method fails";
        exit(0);
    }
    x_1=x_0-(fun(x_0)/deri(x_0));
    if(abs(fun(x_1))<eps)
    {
        cout<<endl<<"x_1="<<x_1<<" is the root";
        exit(0);
    }
    x_0=x_1;
  }
cout<<endl<<"No solution in n steps.";
return 0;
}
