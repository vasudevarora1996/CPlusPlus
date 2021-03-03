#include<iostream>
using namespace std;

int main()
{
    int num=0;
    int rotate=0;
cout<<"Array Left Rotation\n";
int arr[100];
    cout<<"\nEnter the number of items in Array\n";
    cin>>num;
    cout<<"Enter the values for the Array\n";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    cout<<"\nDisplaying Array\n";
    for(int i=0;i<num;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    cout<<"Enter the number by which you want to rotate\n";
    cin>>rotate;
    if(rotate>=0){
    cout<<"Performing Rotation on the Array\n";
    if(rotate<num){
        for(int i=rotate;i<num;i++){
            cout<<arr[i]<<"\t";
        }
        for(int i=0;i<rotate;i++){
            cout<<arr[i]<<"\t";
        }
    }
    else{
        int z=rotate-num;
        for(int i=z;i<num;i++){
            cout<<arr[i]<<"\t";
        }
        for(int i=0;i<z;i++){
            cout<<arr[i]<<"\t";
        }
    }
    }
    else cout<<"Invalid Input\n";
    return 0;
}
