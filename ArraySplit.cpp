/*Vasya has an array a consisting of positive integer numbers. Vasya wants to divide this array into two non-empty consecutive parts (the prefix and the suffix) so that the sum of all elements in the first part equals to the sum of elements in the second part. It is not always possible, so Vasya will move some element before dividing the array (Vasya will erase some element and insert it into an arbitrary position).

Inserting an element in the same position he was erased from is also considered moving.

Can Vasya divide the array after choosing the right element to move and its new position?

Input
The first line contains single integer n (1 ≤ n ≤ 100000) — the size of the array.

The second line contains n integers a 1, a 2... a n (1 ≤ a i ≤ 109) — the elements of the array.

Output
Print YES if Vasya can divide the array after moving one element. Otherwise print NO.*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    vector<int> A(n+5,0);
    long long S=0;

    for(int i=0;i<n;i++)
      {cin>>A[i]; S+=A[i];}

      if(S&1==0)
      {
          cout<<"NO"<<endl;
          return 0;
      }
    
    map<long long,int> first, second;
    first[A[0]]=1;
    for(int i=1;i<n;i++)
    {
        second[A[i]]++;
    }
    int sdash=0;
    for(int i=0;i<n;i++)
    {
        sdash+=A[i]; //first i numbers sum
        if(sdash==S/2)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(sdash<S/2){
            long long x= S/2 -sdash; // delete element from second half
            if(second[x]>0)
           { cout<<"YES"<<endl; return 0;}
        }
        else{
            long long y= sdash-S/2;
            if(first[y]>0)
            {cout<<"YES"<<endl; return 0;}
        }
        
        first[A[i+1]]++;
        second[A[i+1]]--;

    }
    cout<<"NO"<<endl;
    
    return 0;
}