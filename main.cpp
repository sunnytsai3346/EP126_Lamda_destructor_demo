#include <cstdio>
int main()
{
    auto l = [
        i=[]{
            struct s {
                int value=5;
                s(){puts("created");};
                s(const s& ){puts("copied");};
                ~s(){puts("destroyed");};
            };
            return s{};
            }()]
    {
        return i;  // created , destroyed
    };
     auto l2 = l; // copied, destroyed
    //return l().value; // copied , destroyed
}
