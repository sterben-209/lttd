// https://www.spoj.com/PTIT/problems/P151PROG/?
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n ; cin >> n; 
    int a[n],b[n],c[n],tmp;
    for(int i = 0; i< n; i++ ){
        cin >>a[i]>>b[i];
    }
    if(n%2==0){
        tmp = find(a,a+n,0)-a;
        c[1]=b[tmp];
        for(int i=3; i<n;i+=2){
            tmp=find(a,a+n,b[tmp])-a;
            c[i]=b[tmp];
        }
        tmp = find(b,b+n,0)-b;
        c[n-2] = a[tmp];
        for(int i = n-4;i>=0;i-=2){
            tmp=find(b,b+n,a[tmp])-b;
            c[i]=a[tmp];
        }
        for(int i=0;i<n;i++) cout << c[i] <<" ";
    }else{
        for(int i=0; i<n; i++){
            if (std::binary_search(b,b+n,a[i]) == false ) c[0]=a[i];
        }
        for(int i=2;i<=n;i+=2){
            tmp = find(a,a+n,c[i-2])-a;
            c[i]=b[tmp];
        }

        tmp = find(a,a+n,0)-a;
        c[1]=b[tmp];
        for(int i=3; i<n;i+=2){
            tmp=find(a,a+n,b[tmp])-a;
            c[i]=b[tmp];
        }
        for(int i=0; i<n; i++) cout << c[i] << " ";        
    }


    return 0;
}