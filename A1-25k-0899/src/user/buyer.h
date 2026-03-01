#ifndef BUYER_H
#define BUYER_H

#include "user.h"
#include "../listing/listing.h"
#include "../messaging/message.h"

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