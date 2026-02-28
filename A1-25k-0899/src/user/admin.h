#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include "Listing.h"

class Admin : public User {
private:
    static int totalAdmins; // Static 1
    const double TAX_RATE;  // Constant 2
    int approvedAds;
    int removedAds;
    string adminRole;
public:
    Admin();
    Admin(const Admin& other);
    void approveListing(Listing& l);
    void viewSystemStats();
    void resetApprovalCount();
    void generateReport();
    static void viewStats(); // Static Function 1
};
#endif