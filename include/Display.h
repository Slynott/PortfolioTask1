//Display class definition
#ifndef DISPLAY_H
#define DISPLAY_H


class Display
{
    public:
        Display();
        virtual ~Display();
        //Allows system to retrieve current display text
        getDisplay();
        //Allows system to set characters on display
        setDisplay();
        removeDisplay();


    private:
        NameDisplay();// Sensor is an instance of class Name
};

#endif // DISPLAY_H


