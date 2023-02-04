#include<iostream>
#include<math.h>
using namespace std;
class Polar {
    float angle,radius;
    public:
        Polar(){

        }
        Polar(float r,float a){
            radius=r;
            angle=a;
        }
        void display(){
            cout<<"the Polar co_ordiates are : "<<"("<<angle<<","<<radius<<")"<<endl;
        }
        float A(){
            return angle;
        }
        float R(){
            return radius;
        }
};
class Rectangle{
    float x_co,y_co;
    public:
        Rectangle(){
        }
        Rectangle(float x,float y)
        {
            x_co=x;
            y_co=y;
        }
        Rectangle(Polar p){
            float A=p.A();
            float R=p.R();
            x_co=R*cos(A);
            y_co=R*sin(A);
        }
        void display(){
            cout<<"The Rectangular co_ordiates are : "<<"("<<x_co<<","<<y_co<<")"<<endl;
        }
        operator Polar(){
            float r=sqrt(pow(x_co,2)+pow(y_co,2));
            float a=atan(y_co/x_co);
            return Polar(r,a);
        }
};
int main(){
    cout<<"For Rectangular to Polar"<<endl;
    Rectangle R1(7.07107,7.07107);
    Polar P1;
    R1.display();
     P1=R1;
    cout<<"After conversion"<<endl;
    P1.display();
    cout<<"For Polar to Rectangular"<<endl;
    Rectangle R2;
    Polar P2(10,0.785398);
    P2.display();
    R2=P2; 
    cout<<"After conversion"<<endl;
    R2.display();
    return 0;
}