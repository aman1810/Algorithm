#include<iostream>

int main()
{
    int arr[5]={3,5,67,32,90};
    int tmp;
    for(int i=0;i<5;i++)
    {
       for(int j=i+1;j<=n;j++)
       {
            if(arr[j]<arr[i])
            {
                 tmp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=tmp;
             }
       }
  }
  for(int i=0;i<5;i++)
  {
     cout<<arr[i]<<" ";
  }
  return 0;
  }
