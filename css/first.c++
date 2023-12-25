#include <iostream>
using namespace std;

int main(){

int n;
cout<<"enter the number : ";
cin>>n;

int i =1;
while (i<=n)
{
    
    
    int j=1;
    while (j<=(n-i+1))
    {
       cout<<j;
       j++;
    }
    int space = i-1;
    while (space)
    {
        cout<<"*";
        space--;
    }



// int space2 = i-1;
// while(space2)
//     {
//         cout<<"*";
//         space2--;
//     }
 int k=(i-1)*2;
    while(k>0){ //stars
      cout<<"*";
      k--;
    }
    int l=n-i+1;
    int num=n-i+1;
    while(l>0){
      cout<<num;
      num--;
      l--;
    }
    
    cout<<endl;
    i++;
}


    return 0;
}















