/*
** lantern
** Guiding development with arcane standards
**
** libstdc++/internals/limits/limits.def.hpp
** C++ standard header synopsis <limits>
*/

namespace lantern::std {
    /*
    ** ========================================================================
    ** The numeric_limits class template provides a standardized mechanism to
    ** query various properties of arithmetic types, including their minimum
    ** and maximum representable values, support for infinity, and precision.
    **
    ** Requirements:
    ** - Template parameter T must be an arithmetic type.
    ** - Type T must provide requisite static functions and constants.
    */

    template <class T> class numeric_limits;
} // namespace lantern::std
