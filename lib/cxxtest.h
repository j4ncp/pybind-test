#pragma once

#include "api.h"

class Foo: public FooApi
{
    public:
        ~Foo() {}

        std::string bar() override;

    protected:


};
