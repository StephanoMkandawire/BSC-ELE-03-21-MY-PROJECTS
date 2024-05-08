#ifndef TRIANGLE_H
#define TRIANGLE_H

//namespaces
namespace shapes 
{
    //class name
    class Triangle
        {
        //private members
        private:
            double base;
            double height;

        //public members
        public:
            Triangle();
            Triangle(double b, double h);
            double getBase() const;
            double getHeight() const;
            ~Triangle();
        };
}

#endif // TRIANGLE_H
