#include "Message.h"

Message::Message() {
    isRead = false;
}

Message::Message(string s, string r, string c) {
    senderId = s;
    receiverId = r;
    content = c;
    isRead = false;
}

void Message::send() {
    cout << "Message sent: " << content << endl;
}

void Message::markAsRead() {
    isRead = true;
}

void Message::display() const {
    cout << "Message: " << content << endl;
}