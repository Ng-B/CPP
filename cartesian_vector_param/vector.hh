#pragma once

#include <ostream>
#include <initializer_list>
#include <cassert>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<value>);

    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);



// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);

    Vector& operator+=(const value& rhs);
    Vector& operator*=(const value& rhs);

private:
    value data[NDIM];
};


std::ostream& operator<<(std::ostream &stream, const Vector& vec);

Vector operator+(const Vector& vect_1, const Vector& vect_2);

Vector operator*(const Vector& vect_1, const value& vect_2);
Vector operator*(const value& vect_1, const Vector& vect_2);

// Nonmember function operators go here
value operator*(const Vector& vect_1, const Vector& vect_2);