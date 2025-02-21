/*
** lantern
** Guiding development with arcane standards
**
** libstdc++/internals/limits/exception.def.hpp
** C++ standard header synopsis <exception>
*/

namespace lantern::std {
    /*
    ** ========================================================================
    ** The exception class provides a standardized mechanism to handle
    ** exceptions in C++ programs. It is the base class for all exceptions
    ** and several derived base classes for specific types of exceptions.
    */

    class exception;

    /*
    ** ========================================================================
    ** The bad_exception class is used to handle exceptions that do not match
    ** any catch block.
    */

    class bad_exception;

    /*
    ** ========================================================================
    ** The nested_exception class is used to nest exceptions within other
    ** exceptions.
    */

    class nested_exception;

    /*
    ** ========================================================================
    ** A terminate_handler is a pointer to a function that takes no arguments
    ** and returns void. It is used to handle termination of the program.
    */

    using terminate_handler = void (*)();

    /*
    ** ========================================================================
    ** get_terminate returns the current terminate_handler.
    **
    ** Requirements:
    ** - noexcept mandates this function itself cannot throw an exception.
    */

    terminate_handler get_terminate() noexcept;

    /*
    ** ========================================================================
    ** set_terminate sets a new terminate_handler and returns the old one.
    **
    ** Requirements:
    ** - noexcept mandates this function itself cannot throw an exception.
    */

    terminate_handler set_terminate(terminate_handler f) noexcept;

    /*
    ** ========================================================================
    ** terminate calls the current terminate_handler.
    **
    ** Requirements:
    ** - noexcept mandates this function itself cannot throw an exception.
    ** - The function does not return to the caller.
    */

    [[noreturn]] void terminate() noexcept;

    /*
    ** ========================================================================
    ** uncaught_exceptions returns the number of exceptions that have been
    ** thrown but not yet caught.
    **
    ** Requirements:
    ** - noexcept mandates this function itself cannot throw an exception.
    */

    int uncaught_exceptions() noexcept;

    /*
    ** ========================================================================
    ** exception_ptr is an opaque pointer type that can hold and manage
    ** exceptions.
    */

    using exception_ptr = /* unspecified */;

    /*
    ** ========================================================================
    ** current_exception captures the current exception and returns an
    ** exception_ptr to it.
    **
    ** Requirements:
    ** - noexcept mandates this function itself cannot throw an exception.
    */

    exception_ptr current_exception() noexcept;

    /*
    ** ========================================================================
    ** rethrow_exception rethrows the exception pointed to by the given
    ** exception_ptr.
    **
    ** Requirements:
    ** - The function does not return to the caller.
    */

    [[noreturn]] void rethrow_exception(exception_ptr p);

    /*
    ** ========================================================================
    ** make_exception_ptr creates an exception_ptr that holds the given
    ** exception.
    **
    ** Requirements:
    ** - noexcept mandates this function itself cannot throw an exception.
    */

    template <class E> exception_ptr make_exception_ptr(E e) noexcept;

    /*
    ** ========================================================================
    ** throw_with_nested throws the given exception and nests the current
    ** exception within it.
    **
    ** Requirements:
    ** - This function does not return.
    */

    template <class T> [[noreturn]] void throw_with_nested(T &&t);

    /*
    ** ========================================================================
    ** rethrow_if_nested rethrows the nested exception if there is one.
    **
    ** Requirements:
    ** - None
    */

    template <class E> void rethrow_if_nested(const E &e);

    /*
    ** ========================================================================
    ** unexpected calls the current unexpected_handler.
    **
    ** Requirements:
    ** - The function does not return to the caller.
    */

    [[noreturn]] void unexpected();
} // namespace lantern::std
