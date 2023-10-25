#include <iostream>
#include <map>

class Karen {
    private:
        static void debug();
        static void info();
        static void warning();
        static void error();
        typedef void (*FnPtr)();

    public:
        void complain(std::string level);
        Karen();
        ~Karen();
};