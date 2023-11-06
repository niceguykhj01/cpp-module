#include <iostream>
#include <math.h>

class Fixed {
    private:
        int value;
        static const int fpb = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &other);
        ~Fixed();

        float toFloat() const;
        int toInt() const;

        void operator=(const Fixed &other);
        bool operator>(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;

        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);

        Fixed &operator++();
        Fixed operator++(const int);
        Fixed &operator--();
        Fixed operator--(const int);
        friend std::ostream& operator<<(std::ostream& os, const Fixed& value);

        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};