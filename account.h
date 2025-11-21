#include <string>
#include <iostream>

class Account {
    private:
    std::string m_name;
    int b_balance;
    std:: string l_location;
    public :
    void setName(std::string name);
    void setBalance(int balance);
    void setLocation(std::string locations);
    // get the function for getting the numbers from the parts of the world 
    std:: string getName() const ;
    int getBalance() const ;
    std:: string getLocation() const ;


    
       
};
