#include "Admin.h"
#include <iostream>
using namespace std;

int Admin::totalAdmins = 0;

Admin::Admin(){
    totalAdmins++;
}

void Admin::approveListing(Listing& l){
    l.publish();
}

void Admin::viewStats(){
    cout<<"Total Admins: "<<totalAdmins<<endl;
}