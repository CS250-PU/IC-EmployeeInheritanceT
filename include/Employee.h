#include <iostream>
#include <string>

class Employee {
  public:
    Employee (const std::string &rcName = "", const std::string &rcID = "");
    std::string getName () const;
    std::string getID () const;
    friend std::ostream &operator<< (std::ostream &rcOut, 
                                     const Employee &rcEmployee);
    friend std::istream &operator>> (std::istream &rcIn,
                                     Employee &rcEmployee);
  private:
    std::string mcName;
    std::string mcID;

};