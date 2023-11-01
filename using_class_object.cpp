#include<iostream>
using namespace std;

class analysis{
    private:
    int id;
    int result;
    
    public:
    void set_data(int s_id,int s_res){
        id = s_id;
        result = s_res;
    }
    void display(){
        cout<<"\t"<<id<<"\t"<<result<<"\n";
    }
};

int main(){
    analysis a[10];
    int i,s_id,s_res,pass=0,fail=0;
    
    for(i=0;i<10;i++){
        cout<<"Enter Student ID : "<<endl;
        cin>>s_id;
        cout<<"Enter the result(1 for Pass and 2 for Fail : "<<endl;
        cin>>s_res;
        
        if(s_res==1)
        pass++;
        else
        fail++;
        a[i].set_data(s_id,s_res);
    }
    cout<<"\t id"<<"\t result";
    for(i=0;i<10;i++){
        a[i].display();
    }
    cout<<"Number of students Passed = "<<pass<<endl;
    cout<<"Number of students Failed = "<<fail<<endl;
    
    if(pass>8){
        cout<<"**** Raise Tuition! **** \n";
    }
    return 0;
}
