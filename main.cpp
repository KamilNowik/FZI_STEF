#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    scanf ("%d", &n);
    int A[n];
    long long max_local=0, max_global=0;

    for(int i=0; i<n; i++)
    {
      scanf ("%d", &A[i]);

    }
    for(int i=0; i<n; i++)
    {
      max_local+=A[i];
      if(max_local>max_global) max_global=max_local;
      if(max_local<0) max_local=0;
    }

    cout<<max_global;


    return 0;
}
