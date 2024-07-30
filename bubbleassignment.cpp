#include<iostream>
using namespace std;

void Bubblesort(int arr[],int n)
{ int count=0;

    for(int i=n;i>0;i--)
    {
        cout<<"pass"<<7-i<<"\t";
        for(int j=n-1;j>0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count++;

            }

        }
        for(int k=n;k>0;k--)
    {
        cout<<arr[k]<<" ";

    }
    cout<<endl;
    }

cout<<"number of swaps:"<<count<<endl;

}

int main()
{
    int arr[6]={5,2,9,1,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    Bubblesort(arr,size);

}
