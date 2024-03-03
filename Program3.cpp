//Demonstrate different types of inheritance in C++.
#include<iostream>
using namespace std;
/*
    simple inheritance
    multiple inheritance
    multilevel inheritance
    hybrid inheritance
    heirerichal inheritance
*/
//simple inheritance
class Calculator{
    public:
    double a,b;
    void add(double a, double b)
    {
        cout<<"a+b: "<<a+b<<endl;
    }
    void sub(double a, double b)
    {
        cout<<"a-b: "<<a-b<<endl;
    }


};
class AdvCalculator:public Calculator{
    public:
    void mul(double a, double b)
    {
        cout<<"a*b: "<<a*b<<endl;
    }
    void div(double a, double b)
    {
        cout<<"a/b: "<<a/b<<endl;
    }

};
//multiple inheritance
class Anand{
    public:
    void anandDisplay()
    {
        cout<<"hi, i'm anand"<<endl;
    }

};
class Viraj{
    public:
    void virajDisplay()
    {
        cout<<"hi, i'm Viraj"<<endl;
    }
};
class Vaishnavi:public Anand,public Viraj {
    public:
    void  vaishnaviDisplay()
    {
        cout<<"hi, i'm vaishnavi...i love \u2764 both viraj and anand"<<endl;
    }


};
//heirerical inheritance
class Rajamouli{
    public:
    void displayRajamouli()
    {
        cout<<"i'm rajamouli"<<endl;
    }
};

class Chatrapathi : Rajamouli{
    public:
    void displayChatrapathi()
    {   displayRajamouli();
        cout<<"I'm the director of Chatrapthi"<<endl;
    }

};
class Bahubali : Rajamouli{
    public:
     void displayBahubali()
    {   displayRajamouli();
        cout<<"I'm is the director of Bahubali"<<endl;
    }

};
class RRR : Rajamouli{
    public:
     void displayRRR()
    {   displayRajamouli();
        cout<<"I'm is the director of RRR"<<endl;
    }

};
//multilevel
class Egg{
    public:
   void displayEgg()
   {
     cout<<"i'm egg"<<endl;

   }
};
class Hen: public Egg{
    public:
    void displayHen()
   {
     cout<<"i'm the hen who is next version of the Egg"<<endl;

   }

};
class Chicken :public Hen{
    public:
    void displayChicken()
    {
        displayEgg();
        displayHen();
        cout<<"i'm the Chicken...my journey started with egg -->hen-->chicken"<<endl;
    }

};
//Hybrid Inheritance
class Manager{
    public:
    void displayManager()
    {
        cout<<"i'm the manager two employees works under me and i'm not involved into the project"<<endl;
    }
};
class MenEmployee : public Manager{
    public:
    void displayMaleEmployee()
    {
        cout<<"i'm the male employee under the Manager and I don't know about the female employee"<<endl;
    }

};
class FemaleEmployee: public Manager{
    public:
     void displayFemaleEmployee()
    {
        cout<<"i'm the female employee under the Manager and I don't know about the male employee"<<endl;
    }

};
class ProjectLove:public MenEmployee,public FemaleEmployee{
    public:
    void displayProjectLove()
    {   cout<<"manager is no where involved in to the project: "<<endl;
        cout<<"Female and Male employee are working the projectLove"<<endl;
    }

};

int main()
{
     AdvCalculator obj1;
     cout<<"--------------------------------------------------------------------------------->"<<endl;
    cout<<"Simple Inheritance: "<<endl;
    cout<<"enter the operands: "<<endl;
     cin>>obj1.a>>obj1.b;
     obj1.add(obj1.a,obj1.b);
     obj1.sub(obj1.a,obj1.b);
    obj1.mul(obj1.a,obj1.b);
     obj1.div(obj1.a,obj1.b);
     cout<<"----------------------------------------------------------------------------------------------------->"<<endl;
    cout<<"Multiple Inheritance: "<<endl;
    Vaishnavi obj2;
    obj2.anandDisplay();
    obj2.virajDisplay();
    obj2.vaishnaviDisplay();
     cout<<"----------------------------------------------------------------------------------------------------->"<<endl;
    cout<<"Heirerichal Inheritance: "<<endl;
    Chatrapathi obj3;
    obj3.displayChatrapathi();
    Bahubali obj4;
    obj4.displayBahubali();
    RRR obj5;
    obj5.displayRRR();
     cout<<"----------------------------------------------------------------------------------------------------->"<<endl;
    cout<<"MultiLevel Inheritance: "<<endl;
    Chicken obj6;
    obj6.displayChicken();
     cout<<"----------------------------------------------------------------------------------------------------->"<<endl;
    cout<<"Hybrid Inheritance: "<<endl;
    Manager obj8;
    obj8.displayManager();
    ProjectLove obj7;
    obj7.displayMaleEmployee();
    obj7.displayFemaleEmployee();
    obj7.displayProjectLove();
     cout<<"----------------------------------------------------------------------------------------------------->"<<endl;

    

}
