#include <iostream>
using namespace std;
class Rectangle
{
public:
Rectangle(){
    length =0;
    width =0;
}
double perimeter(){return 2*(length+width);}
double area(){return length * width ;}

double getlength() {return length ;}
double getwidth() {return width ;}

void setlength(double len){ length = len ;}
void setwidth(double wid){ width = wid ;}

void outpotDetails(){
      cout<<"Length: "<<getlength()<<endl;
    cout<<"width: "<<getwidth()<<endl;

}
private:
double length , width; 
};

int main(void){
    Rectangle obj;
    obj.outpotDetails();

    double l, w;
    cout<< "Enter the length: ";
    cin>>l;
    obj.setlength(l);
    cout<<"Enter the width: ";
    cin>>w;
    obj.setwidth(w);
    obj.outpotDetails();
    cout<<"Area: "<<obj.area()<<endl;
    cout<<"Perimeter: "<<obj.perimeter()<<endl;

    return 0;
}