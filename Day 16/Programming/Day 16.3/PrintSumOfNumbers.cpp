#include <iostream>
using namespace std;

int main(){
    int a= 1;
    int n;
    int sum =0;
    cout<<"Enter the value "<<endl;
    cin>>n;
    while(a <= n){
        sum += a; // sum = sum+a; both are same
        a++;
    }
    cout<<"The sum of value from 1 to "<<n<<" is "<<sum<<endl;

    
    //Same program in for loop

    int sum2=0;
    for(int i =1; i <= n; i++){
        sum2+= i;
    }
    cout<<"The sum of value from 1 to "<<n<<" is "<<sum2<<endl;

    //You can verify your result with the help of formula
    /* 
        n(n+1)/2
        = 5(5+1)/2
        = (25+5)/2
        = (30)/2
        = 15

    */

return 0;
}