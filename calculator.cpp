#include<iostream>
using namespace std;
class addition{
    public:
    int a,b;
    void set_values(int x,int y){
        a=x;
        b=y;
    }
    public:
    void add(int a,int b){
        cout<<""<<a<<"+"<<b<<"="<<(a+b)<<"\n";
    }
};
class substraction : public addition{
    public:
    void add(int a,int b){
        cout<<""<<a<<"-"<<b<<"="<<(a-b)<<"\n";
    }
};
class multiplication : public addition{
    public:
    void add(int a,int b){
        cout<<""<<a<<"*"<<b<<"="<<(a*b)<<"\n";
    }
};
class division : public addition{
    public:
    void add(int a,int b){
        cout<<""<<a<<"/"<<b<<"="<<(a/b)<<"\n";
    }
};
int main(){
    addition ad;
    substraction sub;
    division div;
    multiplication mul;
    int c,d,e;
    cout<<"Enter two numbers\n";
    cin>>c>>d;
    cout<<"1-add,2-sub,3-mul,4-div\n";
    cin>>e;
    switch(e){
        case 1:
        ad.add(c,d);
        break;
        case 2:
        sub.add(c,d);
        break;
        case 3:
        mul.add(c,d);
        break;
        case 4:
        div.add(c,d);
        break;
        default:
        cout<<"Enter only 1,2,3,4\n";
        break;
    }
}