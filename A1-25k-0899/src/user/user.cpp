#include "User.h"

User::User() {
    userId = "0";
    name = "Guest";
    phone = "0000";
    city = "Unknown";
    isVerified = false;
}

User::User(string id, string n, string p, string c) {
    userId = id;
    name = n;
    phone = p;
    city = c;
    isVerified = true;
}

void User::viewProfile() const {
    cout << name << " (" << city << ")" << endl;
}

void User::updateProfile(string c) {
    city = c;
}