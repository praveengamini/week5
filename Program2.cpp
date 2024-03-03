/*
1. Private Inheritance
2. Protected Inheritance
3. Public Inheritance
*/
#include<iostream>
using namespace std;
class ParentClass{
    public:
    int a=10;
    protected:
    int b=20;
    private:
    int c=30;

};
class PublicClass: public ParentClass{
    public:
    void showPublic()
    {
        cout<<a<<" "<<b<<endl;
        //cout<<c<<endl; private variables aren't accesible in PublicInheritance
    }

};
class ProtectedClass: protected ParentClass{
    public:
    void showProtected()
    {
        cout<<a<<" "<<b<<endl;
         //cout<<c<<endl; private variables aren't accesible ProtectedInheritance
        
    }

};
class PrivateClass: private ParentClass{
    public:
     void showPrivate()
    {
        cout<<a<<" "<<b<<endl;
         //cout<<c<<endl; private variables aren't accesible PrivateInheritance
        
    }

};
int main()
{
   PublicClass obj1;
   obj1.showPublic();
   cout<<obj1.a<<endl;
  // cout<<obj1.b<<endl;
 //  cout<<obj1.c<<endl;
   ProtectedClass obj2;
   obj2.showProtected();
  // cout<<obj2.a<<endl;
  // cout<<obj2.b<<endl;
  // cout<<obj2.c<<endl;
   PrivateClass obj3;
   obj3.showPrivate();
  // cout<<obj3.a<<endl;
  // cout<<obj3.b<<endl;
  // cout<<obj3.c<<endl;

}
