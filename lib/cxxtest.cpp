#include "cxxtest.h"

// ----------------------------------------------------
std::string Foo::bar()
{
    return "bardy bar";
}

// ----------------------------------------------------
FooApi* FooApi::instance()
{
    if (!instance_)
    {
        // create instance
        instance_ = std::make_unique<Foo>();
    }

    return instance_.get();
}

std::unique_ptr<FooApi> FooApi::instance_ {};
