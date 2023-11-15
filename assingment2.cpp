#include <iostream> //assingment lect 10 q3
using namespace std;
int main (){
    int n;
    int m;
    cin>>n>>m;
    int a=0;
    int b=0;
    int p=1;
    int q=1;
    while(n>0){
        int ld= n%10;
        a+=ld*p;
        p*=2;
        n/=10;
    }
    cout<<a<<endl;
    while(m>0){
        int ld= m%10;
        b+=ld*q;
        q*=2;
        m/=10;
    }
    cout<<b<<endl;
    if(a>b){
        cout<<a;
    }
    else{
        cout<<b;
    }
    return 0; 
}