#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> A;
    A[1]=100;
    A[2]=200;
    A[3]=300;
    A[457325425]=1;

    map<char,int> count;
    string x="Sujoyyyyyyyyy";
    for(char c:x){//frequency counter
        count[c]++;
    }
    cout<<count['u']<<" "<<count['y']<<endl;

    return 0;
}