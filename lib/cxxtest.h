#pragma once

#include "api.h"

#include <iostream>

class Foo: public FooApi
{
    public:
        ~Foo() {
            std::cout << "Destruction!\n";
        }

        std::string bar() override;

    protected:
};
