/*create class1 and class2 with each of having 1 private member. Add member fuction to set a value (say setvalue()) on each class .Add one more function max() 
that is friendly to both classes .max() fucntion should compare private members of 2 classes and show maximum among them .Create one-one objcet of both classes 
then set a vlaue on them.Display maximum among them */
#include<iostream>
using namespace std;
class class2;
class class1{
        int a;
        public:
        void setvalue(){
            cout<<"Enter the value of a"<<endl;
            cin>>a;
        }
        friend void max(class1,class2);
};

class class2{
    int b;
    public:
         void setvalue(){
            cout<<"Enter the value of b"<<endl;
            cin>>b;
        }
        friend void max(class1,class2);
};
void max(class1 c1,class2 c2){
    if(c1.a>c2.b)
        cout<<c1.a<<" is maximum"<<endl;
    else    
        cout<<c2.b<<" is maximum"<<endl;
}
int main(){
    class1 c1;
    class2 c2;
    c1.setvalue();
    c2.setvalue();
    max(c1,c2);
    return 0;
}