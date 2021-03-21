/* You are given an array of 2N postive integers. There are N rounds in total.
In each round, you have to choose any two positive integers from the array and delete them.
Your score in each round will be gcd(num1, num2)*round_number, where num1 & num2 are the numbers you have chosen.
and round number is the current round. your total score will be the summation of the scores that you have obtained in every round.
*/

#include<iostream>
#include<vector>
using namespace std;
int gcd(int num1,int num2){
    int var=(num1>num2)? var=num1: var=num2;
    int temp=0;
    for(int i=2;i<=var;i++){
        if((num1%i==0) && (num2%i==0)){
            temp=i;
        }
    }
    return temp;
} // 18 51 14 70 81 27
int main(){
int n;
    cout<<"Enter the number of rounds\n";
    cin>>n;
    int arr[2*n];
    cout<<"Enter the numbers in the Array\n";
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=2*n-1;
    int totalscore=0;
    while(i<j){
        int num1=arr[i];
        int num2=arr[j];
        i++;
        j--;
        int score=gcd(num1,num2)*i;
        totalscore+=score;
        cout<<"Score for the "<<i<<"th round is "<<score<<"\n";
    }
    cout<<"Total Score is "<<totalscore<<"\n";
    return 0;
}
