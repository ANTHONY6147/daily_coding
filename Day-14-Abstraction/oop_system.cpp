#include <iostream>
using namespace std;

class Notification
{
public:

    virtual void send(string message) = 0;

    virtual ~Notification() = default;
};

class EmailNotification : public Notification
{
public:

    void send(string message) override
    {
        cout << "Email: " << message << endl;
    }
};

class SMSNotification : public Notification
{
public:

    void send(string message) override
    {
        cout << "SMS: " << message << endl;
    }
};

class PushNotification : public Notification
{
public:

    void send(string message) override
    {
        cout << "Push Notification: "
             << message
             << endl;
    }
};

int main()
{
    Notification* notifications[3];

    notifications[0] = new EmailNotification();
    notifications[1] = new SMSNotification();
    notifications[2] = new PushNotification();

    for(int i = 0; i < 3; i++)
    {
        notifications[i]->send("Welcome to the system!");
    }

    for(int i = 0; i < 3; i++)
    {
        delete notifications[i];
    }

    return 0;
}