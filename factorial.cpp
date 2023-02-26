#include<iostream>
#include<stdlib.h>
using namespace std;
int fact1(int n);
int fact2(int n);
int main(){
    int n,key,ans;
    cout<<"\n enter the value of n:"<<endl;
    cin>>n;
    system("cls");
    cout<<"\t finding the value of n!........... :"<<endl;
    cout<<"\n choose any one method to find factorial"<<endl;
    cout<<"\n 1)with recursion "<<endl;
    cout<<"\n 2)without recursion "<<endl;
    cin>>key;
    switch(key){
            case 1:
                ans=fact1(n);
                break;
            case 2:
                ans=fact2(n);
                break;
            default:
                cout<<"\t\t please choose only from given option"<<endl;
                while(key!=1 && key!=2){
                    cout<<"choose again!!"<<endl;
                    cin>>key;
                }
                if(key==1){
                    ans=fact1(n);
                }
                else if(key==2){
                    ans=fact2(n);
                }
                break;

    }
    cout<<"\n\t factorial of n :"<<ans<<endl;
    return 0;

}

int fact1(int n){
    if(n<0) return -1;
    if(n==0) return 1;

    return n*fact1(n-1);
}


int fact2(int n){
    int mul=1;
for(int i=1;i<=n;i++){
        mul=mul*i;

}
return mul;
}
