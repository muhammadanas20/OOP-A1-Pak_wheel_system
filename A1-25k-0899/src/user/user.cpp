#include "user.h"
User::User() : PLATFORM_NAME("PakWheels")
{
    userId = "0";
    name = "Guest";
    phone = "0000";
    city = "Unknown";
    isVerified = false;
}
User::User(string id, string n, string p, string c) : PLATFORM_NAME("PakWheels")
{
    userId = id;
    name = n;
    phone = p;
    city = c;
    isVerified = true;
}
User::User(const User &other) : PLATFORM_NAME("PakWheels")
{
    userId = other.userId;
    name = other.name;
    phone = other.phone;
    city = other.city;
    isVerified = other.isVerified;
}
void User::viewProfile() const { cout << "User: " << name << " | City: " << city << endl; }
void User::updateProfile(string newCity)
{
    city = newCity;
    cout << "Profile Updated." << endl;
}