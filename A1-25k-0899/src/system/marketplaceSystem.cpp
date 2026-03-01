#include "marketplaceSystem.h"
MarketplaceSystem::MarketplaceSystem() : MAX_CAPACITY(20)
{
    count = 0;
    region = "Pakistan";
    isOpen = true;
}
void MarketplaceSystem::addListing(Listing *l)
{
    if (count < MAX_CAPACITY)
        allListings[count++] = l;
}
void MarketplaceSystem::removeListing(int id)
{
    int removeIndex = -1;
    for (int i = 0; i < count; i++)
    {
        if (allListings[i]->getId() == id)
        {
            removeIndex = i;
            break;
        }
    }

    if (removeIndex == -1)
    {
        cout << "Listing not found.\n";
        return;
    }

    for (int i = removeIndex; i < count - 1; i++)
        allListings[i] = allListings[i + 1];
    count--;
}
void MarketplaceSystem::showListings()
{
    for (int i = 0; i < count; i++)
        allListings[i]->display();
}
void MarketplaceSystem::searchByCity(string c)
{
    bool found = false;
    cout << "Searching " << c << "..." << endl;

    for (int i = 0; i < count; i++)
    {
        if (allListings[i]->getCity() == c)
        {
            allListings[i]->display();
            found = true;
        }
    }

    if (!found)
        cout << "No listings found in " << c << ".\n";
}