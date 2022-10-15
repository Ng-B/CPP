#include "vector.hh"

Vector::Vector() : data{0} {}

Vector::Vector(std::initializer_list<value> vals) {
    size_t i = 0;
    for(const value& val : vals)
    {
        data[i++] = val;
    }
}

Vector &Vector::operator+=(const Vector& rhs) {
    for (size_t i = 0; i < NDIM; i++)
        data[i] += rhs[i];
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs) {
    for (size_t i = 0; i < NDIM; i++)
        data[i] -= rhs[i];
    return *this;
}

Vector operator*(const Vector& vect_1, const value& vect_2) {
    Vector res;
    for (size_t i = 0; i < NDIM; i++)
        res[i] = vect_1[i] * vect_2;
    return res;
}

Vector operator*(const value& vect_1, const Vector& vect_2) {
    return vect_2 * vect_1;
}

Vector& Vector::operator+=(const value& rhs) {
    for (size_t i = 0; i < NDIM; i++)
        data[i] += rhs;
    return *this;
}

Vector& Vector::operator*=(const value& rhs) {
    for (size_t i = 0; i < NDIM; i++)
        data[i] *= rhs;
    return *this;
}

Vector operator+(const Vector& vect_1, const Vector& vect_2) {
    Vector res;
    for (size_t i = 0; i < NDIM; i++)
        res[i] = vect_1[i] + vect_2[i];
    return res;
}


value operator*(const Vector& vect_1, const Vector& vect_2) {
    value res = (value)0;
    for (size_t i = 0; i < NDIM; i++)
        res += vect_1[i] * vect_2[i];
    return res;
}

std::ostream& operator<<(std::ostream &stream, const Vector &vec) {
    stream << '{';
    for (size_t i = 0; i < NDIM; i++) {
        stream << vec[i];
        if (i < NDIM - 1)
            stream << ',';
    }
    return stream << '}';
}