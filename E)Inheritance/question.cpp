/* WAP to input two vectors coordinate from base class name "Base" . Class "Derived" inherits all the properties of class base .Class "Derived" must contain a fucntion
 named add_vector() that adds vectors input from the base class and then finally display the result using function display() that is friend to base class*/
 #include<iostream>
 using namespace std;
 class Base {
    protected:
    int a,b;
    public: 
        Base(){
            a=6;
            b=6;
        }
        friend void display(Base);
 };
 class Derived:public Base{
        public:
         Derived add_vector(Derived a1,Derived a2) {
                Derived d;
                d.a=a1.a+a2.a;
                d.b=a1.b+a2.b;
                return d;
           }
 };
 void display(Base b1){
    cout<<"The vector is "<<"("<<b1.a<<","<<b1.b<<")"<<endl;
 }
 int main(){
    Derived D1,D2,D3;
    display(D1);
    display(D2);
    D3=D1.add_vector(D1,D2);
    cout<<"After addition"<<endl;
    display(D3);
    return 0;
 }