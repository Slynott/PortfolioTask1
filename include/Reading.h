#ifndef READING_H
#define READING_H
#include <string>

using namespace std;

class Reading
{
    public:

        Reading();
        virtual ~Reading();
        string value();
        string Time();


    private:

        void getTime();
        void getName();
        NameReading();// Sensor is an instance of class Name
};

#endif // READING_H
