#ifndef ADMIN_H
#define ADMIN_H

#include "Listing.h"

class Admin {
private:
    static int totalAdmins;

public:
    Admin();
    void approveListing(Listing&);
    static void viewStats();
};

#endif