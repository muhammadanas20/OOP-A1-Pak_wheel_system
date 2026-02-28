#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;

class User {
protected:
    string userId;
    string name;
    string phone;
    string city;
    bool isVerified;
    const string PLATFORM_NAME; // Constant 1
public:
    User();
    User(string id, string n, string p, string c);
    User(const User& other);
    void login();
    void logout();
    void viewProfile() const;
    void updateProfile(string newCity);
};
#endif