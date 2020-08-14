#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f(int x,int y) 
{      //comparator function for reverse sort
    return x>y;
}
int main(int argc, char* argv[])
{
    vector<int> A= {11,2,3,14};
    sort(A.begin(),A.end());//O(nlogn)
    bool present = binary_search(A.begin(),A.end(),3);//true O(logN)
    A.push_back(100);
    present = binary_search(A.begin(),A.end(),100);//true O(logN)
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //11,2,3,14,100,100,100,100,123
    vector<int>::iterator it= lower_bound(A.begin(),A.end(),100);//first occurence of 100
    vector<int>::iterator it2= upper_bound(A.begin(),A.end(),100);//next element after last occurence of 100
    cout<<*it<<endl;
    cout<<*it2<<endl;
     cout<<"------------------"<<endl;
    sort(A.begin(),A.end(),f);
    auto it3=A.begin();
    for(;it3!=A.end();it3++){
        cout<<*it3<<endl;
    }
cout<<"------------------"<<endl;
    for(int &x: A) //iterate by reference
    {
        x++;
        cout<<x<<" ";
    }

    return 0;
}