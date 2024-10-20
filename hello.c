#include <Python.h>

// C function that returns a "Hello, World!" message
static PyObject* hello_world(PyObject* self, PyObject* args) {
    return Py_BuildValue("s", "Hello, World!");
}

// Method definitions for the module
static PyMethodDef HelloMethods[] = {
    {"say_hello", hello_world, METH_VARARGS, "Returns Hello World string."},
    {NULL, NULL, 0, NULL}
};

// Module definition
static struct PyModuleDef hellomodule = {
    PyModuleDef_HEAD_INIT,
    "hello",   // name of the module
    NULL,      // module documentation, may be NULL
    -1,        // size of per-interpreter state of the module, or -1 if the module keeps state in global variables.
    HelloMethods
};

// Module initialization
PyMODINIT_FUNC PyInit_hello(void) {
    return PyModule_Create(&hellomodule);
}

