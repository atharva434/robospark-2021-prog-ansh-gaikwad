#include <iostream>
using namespace std;

class box
{
    double length,width,height;
    double volume;

    public:
       
        
    box(double a,double b,double c)
    {
        length=a;
        width=b;
        height=c;
        volume=length*width*height;
    }

    int print(){
    cout<<"\nDimensions of Box are :: \n";
    cout<<"\nLength of Box :: "<<length<<"\n";
    cout<<"\nWidth of Box :: "<<width<<"\n";
    cout<<"\nHeight of Box :: "<<height<<"\n";
    }
int vol()
{

    cout<<"\nVolume of Box :: "<<volume<<"\n";
    return volume;
}

    int operator >(box temp){
        if (volume>temp.volume){
            return 1;
        }
        else {
            return 0;
        }
    }

    int operator < (box temp){
        if (volume < temp.volume){
            return 1;
        }
        else {
            return 0;
        }
    } 
    int operator >=(box temp){
        if (volume>=temp.volume){
            return 1;
        }
        else {
            return 0;
        }
    }  

    int operator <=(box temp){
        if (volume<=temp.volume){
            return 1;
        }
        else {
            return 0;
        }
    } 
    int operator ==(box temp){
        if (volume==temp.volume){
            return 1;
        }
        else {
            return 0;
        }
    }            
};

int main()
{   

    double length,width,height;
    cout<<"\nDimensions of Box 1 are :: \n";
    cout<<"\nLength of Box :: ";
    cin>>length;
    cout<<"\nWidth of Box :: ";
    cin>>width;
    cout<<"\nHeight of Box :: ";
    cin>>height;
    double length2,width2,height2;
    cout<<"\nDimensions of Box 2 are :: \n";
    cout<<"\nLength of Box :: ";
    cin>>length2;
    cout<<"\nWidth of Box :: ";
    cin>>width2;
    cout<<"\nHeight of Box :: ";
    cin>>height2;
    box x(length,width,height),y(length2,width2,height2);
    x.print();
    
    x.vol();
    y.print();
    y.vol();
    if (x>y ){
        cout<<"volume of x is greater than y";
    }
    if(x==y){
        cout<<"equal area";
    }
    if(x<y){
        cout<<"volume of y is greater than x";
    }
    return 0;
}