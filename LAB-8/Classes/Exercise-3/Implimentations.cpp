#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include <cmath>
#include <iostream>
using namespace std;

namespace shapes {
    Square::Square() : sideLength(0.0) {}

    Square::Square(double length) : sideLength(length) {}

    double Square::getSideLength() const {
        return sideLength;
    }

    Square::~Square() {
        cout << "Square object destroyed" <<endl;
    }
}

namespace shapes {
    Triangle::Triangle() : base(0.0), height(0.0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    Triangle::~Triangle() {
        cout << "Triangle object destroyed" <<endl;
    }
}

namespace shapes {
    Circle::Circle() : radius(0.0) {}

    Circle::Circle(double r) : radius(r) {}

    double Circle::getRadius() const {
        return radius;
    }

    Circle::~Circle() {
        cout << "Circle object destroyed" <<endl;
    }
}