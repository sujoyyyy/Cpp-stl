#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{   //add(key,value): O(1)
    //erase(key): O(1)
    //has a hash table internally
    unordered_map<char,int> U;
    string s="Sujoyyyy";
    for(char x: s)//frequency counter O(N)
    {
        U[x]++;
    }

    return 0;
}