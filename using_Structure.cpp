#include<iostream>
#include<string>
#define SIZE 10
using namespace std;

struct student{
    string name;
    int status;
};

int main(){
    student arr[SIZE];
    int pass=0,fail=0,i,temp;
    string name;
    
    for(i=0;i<SIZE;i++){
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Status(1 for pass and 2 for fail) : ";
        cin>>temp;
        
        arr[i].name=name;
        arr[i].status=temp;
        if(temp==1) 
        pass++;
    }
    for(i=0;i<SIZE;i++){
        cout<<"\n Name = "<<arr[i].name<<" ";
        if(arr[i].status==1)cout<<"Pass";
        else cout<<"Fail";
    }
    if(pass>8)
    cout<<"\n **** Raise Tuition! ****";
    return 0;
}
