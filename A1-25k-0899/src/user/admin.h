#ifndef ADMIN_H
#define ADMIN_H
#include <string>
using namespace std;
class Admin{
    private:
    string adminId;
    int approvedAds;
    int removeAds;
    public:
    void approveListing();
    void rejectListing(int );
    void removeListing();
    void viewSystemStates();
};
#endif