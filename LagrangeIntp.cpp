//Program 10 Lagrange Interpolation
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
  int n,i,k;
  cout<<"Enter the number of nodal points:";
  cin>>n;
  float x[n],l[n],f[n],x_req,sum;
  n--;

  cout<<endl<<"The degree of the interpolating polynomial is:"<<n;

  cout<<endl<<"Enter the nodal points:";
  for(i=0;i<=n;i++)
  {
    cin>>x[i];
  }
  cout<<endl<<"Enter the value of the function at the nodal points:";
  for(i=0;i<=n;i++)
  {
    cin>>f[i];
  }
  cout<<endl<<"Enter the point at which the value of the function is required:";
  cin>>x_req;
  for(k=0;k<=n;k++) //Calculation of the Lagrange polynomials
  {
    l[k]=1;
    for(i=0;i<=n;i++)
    {
      if(i==k)
        continue;

      l[k]*=((x_req-x[i])/(x[k]-x[i]));
    }
  }
  sum=0;
  for(k=0;k<=n;k++)  //Calculation of the required function value
  {
    sum+=l[k]*f[k];
  }
  cout<<endl<<"Value of the function at "<<x_req<<" = "<<sum;
  return 0;
}

