#ifndef SQUARE_H
#define SQUARE_H

//namespace
namespace shapes 
{
    //class name
    class Square 
    {
        //private members
        private:
            double sideLength;

        //Public members
        public:
            Square();
            Square(double length);
            double getSideLength() const;
            ~Square();
    };
}

#endif 
