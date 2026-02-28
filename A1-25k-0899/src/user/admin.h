#ifndef ADMIN_H
#define ADMIN_H

#include "Listing.h"

class Admin {
private:
    string adminId;
    int approvedAds;
    int removedAds;
    string role;
    static int totalAdmins;

public:
    Admin();
    void approveListing(Listing&);
    void rejectListing();
    void removeListing();
    static void viewStats();
};

#endif