/*
** lantern
** Guiding development with arcane standards
**
** libstdc++/limits.hpp
** C++ standard header <limits>
*/

namespace std {
    /*
    ** ========================================================================
    ** Interface to describe properties of fundamental numeric types.
    */

    template <class T>
    class numeric_limits;

    /*
    ** ========================================================================
    ** Partial specializations for fundamental type qualifiers.
    */

    template <class T>
    class numeric_limits<const T>;
    template <class T>
    class numeric_limits<volatile T>;
}
