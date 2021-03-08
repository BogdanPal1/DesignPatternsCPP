#ifndef SINGLETON_H
#define SINGLESTON_H

#include <iostream>

class Singleton
{
public:
    /**
     * @brief Get the Instance object
     * @return Singleton*
     */
    static Singleton* getInstance();

    /**
     * @brief Destroy the Singleton object
     */
    ~Singleton();

private:
    /**
     * @brief Construct a new Singleton object
     */
    Singleton();

private:
    static Singleton* instance; ///< Instance of Singleton class
};

#endif // SINGLETON_H