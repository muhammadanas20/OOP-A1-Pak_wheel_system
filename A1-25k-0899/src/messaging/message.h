#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
using namespace std;

class Message {
private:
    string senderId;
    string receiverId;
    string content;
    bool isRead;
    bool isArchived;
public:
    Message();
    Message(string s, string r, string c);
    Message(const Message& m);
    void send();
    void markAsRead();
    void display() const;
    void archive();
};
#endif