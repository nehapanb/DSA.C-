#include<iostream>
using namespace std;
void show(int a[],int s)
{
    int tmp;
    for(int i = 0; i<s; i++)
    {
for(int j=0; j<s-i-1; j++)
{
    if (a[j]>a[j+1])
    {
 tmp=a[j+1];

 a[j+1]=a[j];

 a[j]=tmp;
    }
}
    }
    for(int i=0; i<s; i++)
    {
        cout<<a[i]<<"/t";
    }

    }
    int main()
    {
        
            int arr[] = {11,99,23,88,7};
            int S=sizeof(arr)/sizeof(arr[0]);
            show (arr,S);
        
    }

    

    
