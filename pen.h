#include <iostream>
#include <string>
using namespace std;

class pen
{
  public:
  pen()  //null constructor
  {
    this->brand="PICASSO";
    this->width=3.11;
    this->colour="BLACK";
    };

pen(string name,float size,string color )  //parameterised constructor
{
  this->brand=name;
  this->width=size;
  this->colour=color;

};

pen(pen& clone)  //copy constructor
{
  this->brand=clone.brand;
  this->width=clone.width;
  this->colour=clone.colour;

};

//GETTERS

string getbrand()
{
  return this->brand;
}

float getwidth()
{
  return this->width;
}

string getcolour()
{
  return this->colour;
}

//setters

void setbrand(string brand)
{
  this->brand=brand;
}

void setwidth(float width)
{
  this->width=width;
}

void setcolour(string colour)
{
  this->colour=colour;
}

//DISPLAY FUNCTION

void display()
{
  cout<<"BRAND NAME = "<<getbrand()<<endl;
  cout<<"WIDTH = "<<getwidth()<<endl;
  cout<<"COLOUR = "<<getcolour()<<endl;
}

string autograph(string a)
{ 
  if(a=="black")
  { string b;
  cout<<"WRITE YOUR AUTOGRAPH HERE BY USING BLACK PEN ONLY"<<endl;
    cin>>b;
  return a;
  }
  if(mystring.size()==0)
  {
    cin>>b;
  }
  else
  {

  }
  else 
  {
    cout<<"YOU ARE NOT USING BLACK PEN"<<endl;
  };
};






private:
string brand;
float width;
string colour;

};

