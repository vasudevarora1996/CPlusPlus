#include<iostream>
using namespace std;
int f(int arr[],int index){
    int sum=0;
    for(int i=0;i<index;i++){
        sum=sum+((i+1)*arr[i]);
    }
    return sum;
}
int s(int arr[],int index){
    int fsum=0;
    int arr1[index];
    for(int i=0;i<index;i++){
        arr1[i]=arr[i];
    }
    if(index>1){
        for(int i=0;i<index-1;i++){
            for(int j=i+1;j<index;j++){
                if(arr1[i]>arr1[j]){
                    int temp=arr1[j];
                    arr1[j]=arr1[i];
                    arr1[i]=temp;
                }
            }
        }
    }
    fsum=fsum+f(arr1,index);
    return fsum;
}
int main()
{
    int size=0;
    cout<<"Enter the size of array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in the Array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    long int result=0;
    for(int i=0;i<size;i++){
        result+=s(arr,i+1);
    }
    result=result%(1000000007);
    cout<<"Sum is "<<result<<"\n";
    return 0;
}