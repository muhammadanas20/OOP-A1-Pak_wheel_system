#include "admin.h"
int Admin::totalAdmins = 0;
Admin::Admin() : TAX_RATE(0.05)
{
    totalAdmins++;
    approvedAds = 0;
    removedAds = 0;
    adminRole = "Moderator";
}
Admin::Admin(const Admin &other) : TAX_RATE(0.05)
{
    approvedAds = other.approvedAds;
    removedAds = other.removedAds;
    adminRole = other.adminRole;
}
void Admin::login() { cout << "Admin logged in as " << adminRole << endl; }
void Admin::logout() { cout << "Admin logged out\n"; }
void Admin::approveListing(Listing &l)
{
    l.publish();
    approvedAds++;
}
void Admin::viewSystemStats() { cout << "Admins Active: " << totalAdmins << " | Ads Approved: " << approvedAds << endl; }
void Admin::resetApprovalCount() { approvedAds = 0; }
void Admin::generateReport() { cout << "Generating Admin Activity Report..." << endl; }
void Admin::viewStats() { cout << "Total Admins in System: " << totalAdmins << endl; }