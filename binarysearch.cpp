#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

int a[]={1,2,4,5,67,89,100};

int item=89;

int left,right,middle;
left=0;
right =6;

while(left<=right)
{

middle=(left+right)/2;
if(a[middle]==item)
{
    cout<<"item found at index :  " <<middle;
    return 0;
}




else if(a[middle]<item)
    {
        left=middle+1;
    }

    else{
        right=middle-1;
    }
    
}


cout<<"item not found"<<endl;






    return 0;
}