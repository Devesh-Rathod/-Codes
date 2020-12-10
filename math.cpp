# include<iostream>
using namespace std;
const int d = 7;
int main(){
    int n,k,count = 0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            int temp = arr[i] + arr[j+1+i];
            if(temp % k == 0){
                  count++;
            }
        }
    }
    cout<<count<<endl;
    cout<<d;
    return 0;
}