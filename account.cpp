#include "account.h"



//  we start with the datatype and then we add the class name and then 
// and then we add the function name and then with the parametes and the 
// and its imprementation
void Account::setBalance(int balance) {
    b_balance=balance;
}

void Account :: setLocation(std:: string location) {
    l_location=location;

}
void Account :: setName(std:: string name) {
    m_name=name;

}

// the getter functions where we are going to find them and print all the things we have done 
std::string Account::getName() const {
    return m_name;
}

std:: string Account::getLocation() const {
    return l_location;

}
int Account::getBalance() const {
    return b_balance;
}