/* Check whether given set of strings is Palindrome or not. */

#include<iostream>
using namespace std;
void palindrome(string str){
    int length;
    bool result=false;
    length=str.length();
    if(length==1){
        result=true;
    }
    else{
    int i=0;
    int j=length-1;
    while(i!=length-1 && j!=0){
        if(str[i]==str[j]){
            i++;
            j--;
            result=true;
        }
        else{
            result=false;
            break;
        }
    }
    }
    if(result==true) cout<<"Yes\n";
    else cout<<"No\n";
}
int main(){
int t;
cin>>t;
string str;
for(int i=0;i<t;i++){
	cin>>str;
	palindrome(str);
}
return 0;
}
