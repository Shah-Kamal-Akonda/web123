#include<iostream>
using namespace std;
int main()
{

int a[]={1,2,3};
int b[]={10,20,30};

int al=sizeof(a)/sizeof(a[0]);

int bl=sizeof(b)/sizeof(b[0]);


int cl=al+bl;
int c[cl];

for (int i=0; i<al; i++)
{
    c[i]=a[i];
}


for (int i=0; i<bl; i++)
{
    c[al+i]=b[i];
}



for (int i=0; i<cl; i++)
{
   cout<<c[i]<<" ";
}

    return 0;
}