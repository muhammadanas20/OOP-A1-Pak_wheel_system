#ifndef BUYER_H
#define BUYER_H

#include "User.h"
#include "Listing.h"
#include "Message.h"

class Buyer : public User {
private:
    Listing* favorites[10];
    int favCount;

public:
    Buyer(string, string, string, string);
    void login();
    void logout();
    void saveToFavorites(Listing*);
    void viewFavorites();
};

#endif