// Hash Mapping
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    // Insertion of element in Unodered Mapping
    m["Mango"] = 100;
    m.insert(make_pair("Apple",200));
    // Searching of element's
    if(m.count("Apple") == 1){
        cout<<m["Apple"]<<endl;
    }
    auto f = m.find("Mango");
    if(f != m.end())
         cout<<"Element is present"<<endl;
    // Deletion
    m.erase("Mango");
    // Lets search it
    if(f != m.end())
        cout<<"Element not found"<<endl;
    else 
        cout<<"Element found"<<f->second;
    return 0;
}