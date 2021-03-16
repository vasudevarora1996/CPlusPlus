// Find the length of the longest alternating even-odd subarray 
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr;
    int num=0;
    cout<<"Enter the Elements in the Array\n";
    for(int i=0;i<5;i++){
        cin>>num;
        arr.push_back(num);
    }
    int size=arr.size();
    int count=0;
    for(auto i=arr.begin();i!=arr.end()-1;i++){
        if((*i + *(i+1))%2==1) count++;
        else count=0;
    }
     if(count>0) cout<<"Length of longest alternating even odd subarray is "<<count+1<<"\n";
    else cout<<"Length of longest alternating even odd subarray is "<<0<<"\n";
    return 0;
}
