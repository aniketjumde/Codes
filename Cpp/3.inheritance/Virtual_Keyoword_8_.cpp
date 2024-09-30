/* Constructer and Destructer are also Functions 
We a cannot have virtual construction but we can have virtual destructor.
*/

#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor "<<endl;
    }
    virtual ~Base()
    {
        cout<<"Base Destructor "<<endl;
    }
};

class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Derived Constructer "<<endl;
    }
    ~Derived()
    {
        cout<<"Derived Destructer "<<endl;
    }
};

int main()
{
    Base *p=new Derived();
    delete p;                // Destructer is not call atomaticaly whwn thwn base destructer is created virtual
    

    return 0;
}

/* OUTPUT :
            Base Constructor 
            Derived Constructer
            Derived Destructer
            Base Destructor
          

*/