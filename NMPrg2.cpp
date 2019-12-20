//Program 2 Secant Method
#include<iostream>
#include<process.h>
#include<math.h>
using namespace std;
float fun(float a)  //Current Function being implemented is x^2 - 4, can be changed accordingly.
{
  float value;
  value=a*a-4;
  return value;
}
int main()
{
  float x_0,x_1,x_2,eps;
  int i,n;
  cout<<"Enter the value of x_0:";
  cin>>x_0;
  cout<<endl<<"Enter the value of x_1:";
  cin>>x_1;
  cout<<"Enter the value of the number of iterations n:";
  cin>>n;
  cout<<endl<<"Enter the value of eps(tolerance):";
  cin>>eps;
  cout<<"The function being evaluated is x^2 - 4";
  for(i=0;i<n;i++)
  {
    if(abs(fun(x_1)-fun(x_0))<eps)
    {
        cout<<endl<<"Secant method fails";
        exit(0);
    }
    x_2=(x_0*fun(x_1)-x_1*fun(x_0))/(fun(x_1)-fun(x_0));
    if(abs(fun(x_2))<eps)
    {
       cout<<endl<<"x_2="<<x_2<<"is the root.";
       exit(0);
    }
    x_0=x_1;
    x_1=x_2;
  }
cout<<endl<<"No solution in n iterations.";
return 0;
}
