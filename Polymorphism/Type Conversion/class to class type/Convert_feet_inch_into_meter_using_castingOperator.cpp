#include<iostream>
#include<string.h>
using namespace std;
class Convert{
   double m;
    public:
        Convert(){
        }
    Convert(double c)
    {
        m=c;
    }
    void display(){
            cout<<"The Height is "<<m<<"meter"<<endl;
            }
};
class Height{
    float ft,inch;
    public:
        Height(){
        }
        Height(float a,float b){
            ft=a;
            inch=b;
        }
        void display(){
            cout<<"The Height is "<<ft<<" feet "<<inch<<" inch "<<endl;
            }
            operator Convert (){
               double c=((inch/12)+ft)/3.28084;
                return Convert(c);
            }
};
int main(){
    Convert C;
    Height H(5,7);
    H.display();
    cout<<"After oepration"<<endl;
    C=H;
    C.display();
    return 0;
}