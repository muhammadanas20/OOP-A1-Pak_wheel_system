#include "message.h"
#include <ctime>

Message::Message()
{
    timeStamp = "N/A";
}

Message::Message(string s, string r, string c) : senderId(s), receiverId(r), content(c)
{
    time_t now = time(nullptr);
    timeStamp = ctime(&now);
    if (!timeStamp.empty() && timeStamp[timeStamp.length() - 1] == '\n')
    {
        timeStamp.erase(timeStamp.length() - 1);
    }
}

Message::Message(const Message &m)
    : senderId(m.senderId), receiverId(m.receiverId), content(m.content), timeStamp(m.timeStamp) {}

void Message::send() { cout << "Message sent to " << receiverId << " at " << timeStamp << endl; }
void Message::markAsRead() { cout << "Message marked as read\n"; }
void Message::display() const { cout << "Msg: " << content << " | Time: " << timeStamp << endl; }
void Message::archive() { cout << "Message archived\n"; }