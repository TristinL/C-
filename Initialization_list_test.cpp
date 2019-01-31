// This program highlights class creation and member variable initialization inline.

#include<iostream>

class Something
{
private:                                                    // Declare member variables
    
    int m_value1;
    
    double m_value2;
    
    char m_value3;
 
public:
    Something() : m_value1(1), m_value2(2.2), m_value3('c') // directly initialize our member variables inline.
    {}                                                      // using this syntax we can avoid the need for a function body
    // No need for assignment here
    
 
    void print()                                            //simple print function to print member variables of Something class
    {                                                       
         std::cout << "Something(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
};
 
int main()
{
    Something something;                                    //Create obj of type Something, Default Ctor is called implicitly
    
    something.print();                                      //print member variables
    
    return 0;
}
