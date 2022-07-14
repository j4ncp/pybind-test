#pragma once

#include <string>
#include <memory>

class FooApi
{
    public:
        virtual ~FooApi() {}

        static FooApi* instance();

        virtual std::string bar() = 0;

    protected:
        FooApi() = default;
        FooApi(const FooApi&) = delete;
        FooApi(FooApi&&) = delete;

        static std::unique_ptr<FooApi> instance_;
};
