//Button class definition
#ifndef BUTTON_H
#define BUTTON_H


class Button
{
    public:
        Button();//constructor
        virtual ~Button();

        void pressButton(); // press button
        void pressresetButton(); // reset button

    private:
        Button pressed();
};

#endif // BUTTON_H
