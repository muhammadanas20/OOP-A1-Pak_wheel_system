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

public:
    Message();
    Message(string, string, string);

    void send();
    void markAsRead();
    void display() const;
};

#endif