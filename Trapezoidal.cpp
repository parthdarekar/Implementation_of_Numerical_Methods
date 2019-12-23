//Program 11 Trapezoidal rule for Integration
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int i,n;
  float x0,xn,h,I,nd;
  cout<<"Enter the lower limit:";
  cin>>x0;
  cout<<endl<<"Enter the upper limit:";
  cin>>xn;
  cout<<endl<<"Enter the step size:";
  cin>>h;

  nd=((xn)/h);   //Number of intervals
  n=nd;
  cout<<endl<<"The number of nodal points are:"<<(n+1);

  float x[n+1],f[n+1];
  cout<<endl<<"Enter the value of the function at the nodal points:";
  for(i=0;i<=n;i++)
  {
    cin>>f[i];
  }
  I=0;

  for(i=0;i<=n;i++)  //Calculation of the integral
  {
    if(i==0 || i==n)
    {
        I+=f[i];
    }
    else
    {
       I+=2*f[i];
    }
  }
  I=(h/2)*I;
  cout<<endl<<"The value of the integral from "<<x0<<" to "<<xn<<" = "<<I;
  return 0;
}
