#include <iostream>

class Fixed {
    private:
        int fpv;
        static const int bits;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed &other);
        void operator=(const Fixed &other);
        int getRawBits( void ) const;
        void setRawBits( int const raw );

};