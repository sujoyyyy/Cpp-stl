/* This program depicts the power of STL. We have to search for an interval of ordered pair which includes a particular point*/

#include<iostream>
#include<bits/stdc++.h> 
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{  
//find an interval [x,y] which contains 'n'
//{a,b} < {c,d} if(a<b) or (a==b and c<d). This is how elements are stored. 
    set<pair<int,int>> s;
    s.insert({2,3});
    s.insert({10,20});
    s.insert({30,400});
    s.insert({401,450});

    int point=50;//Looking for this point.

    auto it= s.upper_bound({point,INT_MAX});
    if(it==s.begin())
    {
        cout<<"Not found."<<endl;
        return 0;
    }
    it--;
    pair<int,int> current=*it;
    if(current.first<=point && current.second>=point)
    cout<<"Present in range "<<current.first<<" "<<current.second<<endl;
    else
    {
        cout<<"Not present"<<endl;
    }
    

    return 0;
}