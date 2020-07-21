#include <iostream>




using namespace std;



string to base(int number,int base){

    sring bases ="0123456789ABCDEF";
    string result="";

    while(number>0){
    result=bases[number%base]+result;
    number/=base;
    }
    return result;
}

int main(){

    int n,b;
    cin>>n>>b;
    cout<<to_base(n,b)<<endl;
    return 0;
}


