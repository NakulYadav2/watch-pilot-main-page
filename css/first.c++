#include <iostream>
using namespace std;

int main(){

int n;
cout<<"enter the number : ";
cin>>n;
int count  =1;
for(int i =1;i<=n;i++){
    int space =i-1;
while (space)
{
cout<<" ";
space = space -1;
}
for(int j =1;j<=(n-i+1);j++){
    cout<<count;
    count++;
}
cout<<endl;

}

    return 0;
}