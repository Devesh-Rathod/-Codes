# include <iostream>
# include <string>
using namespace std;
struct Array{
    string name;
    int age;
    double salary;
};
struct Pointer{
    string first_name;
    int birth_date;
    double income;
};
int main(){
    Array arr[2];
    cout<<"Enter persor details as name , age and salary"<<endl;
    for(int i=0; i<2; i++){
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].salary;
    }
    for (int i = 0; i < 2; i++)
    {
        cout<<arr[i].name<<endl;
        cout<<arr[i].age<<endl;
        cout<<arr[i].salary<<endl;
    }
    Pointer p1;
    Pointer *ptr = &p1;
     cout<<"Enter persor details as name , age and salary"<<endl;
    
        cin>>ptr->first_name;
        cin>>ptr->birth_date;
        cin>>ptr->income;
    
    
        cout<<ptr->first_name<<endl;
        cout<<ptr->birth_date<<endl;
        cout<<ptr->income<<endl;
    
    return 0;
}