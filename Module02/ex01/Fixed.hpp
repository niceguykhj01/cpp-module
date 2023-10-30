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
        friend std::ostream& operator<<(std::ostream& os, const Fixed& value);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};