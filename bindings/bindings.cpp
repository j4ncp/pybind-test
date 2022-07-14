#include <api.h>

#include <pybind11/pybind11.h>

namespace py = pybind11;


PYBIND11_MODULE(cxxtestpy, mod) {
    mod.doc() = "cxxtestpy module";

    py::class_<FooApi>(mod, "Foo")
        .def("bar", &FooApi::bar);

    mod.def("handle", &FooApi::instance);
}

