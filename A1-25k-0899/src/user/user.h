#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
class User
{
private:
    string userID;
    string name;
    string phone;
    string city;
    bool isVerified;

public:
    virtual void login();
    virtual void logout();
    virtual void viewProfile();
    virtual void updateProfile();
};
#endif