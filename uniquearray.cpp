#include<iostream>
using namespace std;

int main()
{
    int size=0;
    int count=0;
 cout<<"Enter the size of array\n";
    cin>>size;
    int arr[100];
 cout<<"Enter the elements of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size;j++){
            if(i==j);
            else{
            if(arr[i]==arr[j]){ 
                arr[j]=0;
                count+=1;
        }
        }
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=0) cout<<arr[i]<<" ";
    }
    return 0;
}

