#include "message.h"
Message::Message() { isRead = false; isArchived = false; }
Message::Message(string s, string r, string c) : senderId(s), receiverId(r), content(c) { isRead = false; isArchived = false; }
Message::Message(const Message& m) : senderId(m.senderId), receiverId(m.receiverId), content(m.content), isRead(m.isRead), isArchived(m.isArchived) {}
void Message::send() { cout << "Message sent to " << receiverId << endl; }
void Message::markAsRead() { isRead = true; }
void Message::display() const { cout << "Msg: " << content << endl; }
void Message::archive() { isArchived = true; }