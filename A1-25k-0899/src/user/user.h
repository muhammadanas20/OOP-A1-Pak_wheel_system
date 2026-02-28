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
    const string USER_TYPE;
    bool isVerified;

public:
    User();
    User(string, string, string, string);

    virtual void login() = 0;
    virtual void logout() = 0;
    virtual void viewProfile() const;
    virtual void updateProfile(string);
};

#endif