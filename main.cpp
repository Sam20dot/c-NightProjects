#include "account.h"
#include <iostream>
#include <string>



int main () {
    Account account1;
    std:: string name;
    std:: string locations;
    int balance;

    
    std:: cout <<" enter the name you want to be called on the bank:";
    std:: cin >> name;

    account1.setName(name);


    std:: cout << "\n enter the location where you live ";
    std:: cin >>locations;
    account1.setLocation(locations);


    // and then we have to tell the user to put thier maney 
    std:: cout <<" enter the amount of money you want to store :";
    std:: cin>> balance;
    if (balance<0) {
        std::cout << "\n the amount of money you have entered are low zero";
    }
    else if  (balance>0) {
        account1.setBalance(balance);
        std::cout << "\n the money has been stored corectly ";

        // to get the balance 
       int  amount = account1.getBalance();
       std:: string names= account1.getName();
       std:: string location= account1.getLocation();



    } 
    std:: cout << " \nyou have entered the following things \n"
               << " the balance is \n ";
    std:: cout <<account1.getBalance();
    std:: cout<<" \nthe name are ";

    std:: cout << account1.getName();
    std:: cout << " \nthe location where you are is this ";

    std:: cout << account1.getLocation();
    std::cout <<" thank you !!!! we real hope to see you again";



}

