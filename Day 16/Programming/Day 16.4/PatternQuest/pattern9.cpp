#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cout<<"Enter the value "<<endl;
    cin>>n;
    while(i<=n){
        int j = n;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
return 0;
}
