#include<iostream>
#include<set>
using namespace std;
int main()
{     
   set<int>s;
   s.insert(10);
   s.insert(-2);
   s.insert(5);
   s.insert(5);
   s.insert(5);
   for(int x:s)  //O(logN): best
   cout<<x<<endl;
   auto it= s.find(-2);
   if(it==s.end())
   {
       cout<<"Not present"<<endl;
   }
   else
   {
       cout<<"Present "<<*it<<endl;
   }
   auto it2= s.lower_bound(-1);
   auto it3= s.upper_bound(5);
   cout<<*it3<<" "<<*it2<<endl;
   
   





    return 0;
}