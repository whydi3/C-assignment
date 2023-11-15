#include <iostream> //assingment lect 10 q1
using namespace std;
int main (){
    int sum=0;
    int ans=0;
    int power=1;
    for(int n=1;n<=5;n++){
    sum+=n;   
    }
    cout<<sum<<endl;
    cout<<"in binary form"<<endl;
    while(sum>0){
        int ld= sum%2;
        ans+= ld*power;
        power*=10;
        sum/=2;
    }
    cout<<ans;

    return 0; 
}