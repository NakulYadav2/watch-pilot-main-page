#include <iostream>
using namespace std;

int main(){

int n;
cout<<"enter the number : ";
cin>>n;
char count = 'A';
char ch ;
for(int i =1;i<=n;i++){
    ch = 'A'+n-i;
for(int j =1;i>=j;j++){
    cout<<ch<<" ";
ch++;
}
cout<<endl;
}

    return 0;
}