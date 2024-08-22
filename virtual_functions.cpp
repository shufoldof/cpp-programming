#include <iostream>
using namespace std;
class Shapesnew
{
public:
  virtual void draw() // virtual keyword  
    {
    	cout << "Shapesnew" << endl;
    }
 
};
class Triangle :public Shapesnew
{
public:
    // Task 1: check and display output  without virtual function
    //Task 2: change this to Virtual function check and display output
     void draw()
    {
    	cout << "Draw Triangle" << endl;
    }
}; 
// create RightAngleTrianlge class derived from Triangle class
// create void draw function for RightAngled Triangle
class Circle:public Shapesnew
{
public:
    void draw()
    {
    	cout << "Draw Circle" << endl;
    }
};
class Square:public Shapesnew
{
public:
    void draw()
    {
    	cout << "Draw Square" << endl;
    }
};
 class Pentagon:public Shapesnew
 {
    	public:
        	void draw()
        	{
            	cout << "Draw Pentagon" << endl;
       	}
 };
class Line:public Shapesnew
{
public:
    void draw()
    {
    	cout << "Draw Line" << endl;
    }
};
int main()
{
    Triangle t1;
    Circle c1;
    Square s1;
    Pentagon p1;
    Line l1;
      // create object of RightAngleTriangle
 
    // create pointer of Triangle class type
  
    
    Shapesnew* ptr[5] = { &t1,&c1,&s1,&p1,&l1 }; // Pointer array
    for (int j = 0; j < 5; j++)
    	ptr[j]->draw();
    // point pointer of Triangle type to object of RightAngleTriangle
  
  
    // call draw function using above pointer
     
    return 0;
}
