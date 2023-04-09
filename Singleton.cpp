#include "Singleton.h"

Singleton* Singleton::obj = nullptr;

Singleton* Singleton::getInstance()
{
    if (!obj)
    {
        obj = new Singleton();
    }

    return obj;
}

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}
