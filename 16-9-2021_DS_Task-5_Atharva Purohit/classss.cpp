#include<iostream>
using namespace std;

class Rectangle{
    private:
        int l,b;

    public:
        void set0();
        void set1(int l);

 
        void set2(int l ,int b);
        int getl(int l1){
            return l;
        }
        
        int getb(int b1){
            return b;
        }
 Rectangle(){
    l=0;
    b=0;

}
Rectangle(int x){
    l=x;
    b=5;
}

Rectangle(int x, int y){
    l=x;
    b=y;
    
}
};

void Rectangle::set0(){
    l=10;
    b=2;
}
void Rectangle::set1(int x ){
    l=x;
    b=5;
}
void Rectangle::set2(int x ,int y){
    l=x;
    b=y;
}


int area(Rectangle r){
    int l,b;
    l=r.getl(l);
    b=r.getb(b);
    
    
    return l*b;

}
int main()
{
    Rectangle r1;
    int x,y,z;
    cout<<"area of rectangle in zero parameter constructor"<<area(r1) <<endl;
    cout<<"enter the lenght"<<endl;
    cin>>x;
    Rectangle r2;
    r2.set1(x);
    cout<<"area of rectangle in one parameter constructor"<<area(r2) <<endl;
    cout<<"enter the lenght"<<endl;
    cin>>x;
    cout<<"enter the breadth"<<endl;
    cin>>y;
    Rectangle r3;
    r3.set2(x,y);
    cout<<"area of rectangle in one parameter constructor"<<area(r3) <<endl;



    return 0;
}