#include <iostream>

using namespace std;

int main(){

int a, b, c;
cin >> a;
cin >> b;
cin >> c;

if (a<b && a<c && b<c){
    cout << a << b << c;
}

if(a<b && a>c && c<b){
    cout << c << a << b;
}
if(a<b && a<c && c<b){
    cout << a << c << b;
 }

if(a>b && b>c){
    cout << c << b << a;
}

if(b<c && a>c){
    cout << b << " "<< c << " "<< a;
}
if(a>b && c>a && c>b){
    cout << b << a << c;
 }

    return 0;
}