// https://ntucoder.net/Problem/Details/4489?

#include<iostream>
#include<algorithm>
#include<map>
#include <stdlib.h>

using namespace std;

int main(){
    long n,b; cin >>n; long m = 0; 
    long tmp,temp,a=1;
    for (long i = 0; i<n;i++ ) {
        if(i > 0){
            cin >> tmp;
            if(tmp == temp) a++;
            else a = 1;
            temp = tmp;
        }else{
            cin>>tmp;   
            temp = tmp; 
        }
        m = std::max(m,a);

    }

    cout <<  n - m ; 



    return 0;
}