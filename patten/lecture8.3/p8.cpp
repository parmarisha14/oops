// * * * * * * * * * * 
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
#include<iostream>
using namespace std;
int main()
{
  int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            cout<<"* ";
         }
        for(k=1;k<i;k++)
         {
            cout<<"  ";
        }
        for(k=1;k<i;k++)
        {
            cout<<"  ";
        }
        for(j=6-i;j>= 1;j--)
        {
            cout<<"* ";
        }
    cout<<endl;

  }

  for (i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<"* ";
    }
    for(k=5;k>i;k--)
    {
        cout<<"  ";
    }
    for(k=5;k>i;k--)
    {
      cout<<"  ";
    }
    for(j=i ;j>=1 ;j--)
    {
      cout<<"* ";
    }
      cout<<endl;
  }
  return 0;
}