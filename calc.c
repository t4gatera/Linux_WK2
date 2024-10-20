#include <Python.h>

// Function to add two integers
static PyObject* add(PyObject* self, PyObject* args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return PyLong_FromLong(a + b);
}

// Function to subtract two integers
static PyObject* subtract(PyObject* self, PyObject* args) {
    int a, b;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    return PyLong_FromLong(a - b);
}

// Define methods in the module
static PyMethodDef ArithMethods[] = {
    {"add", add, METH_VARARGS, "Add two numbers"},
    {"subtract", subtract, METH_VARARGS, "Subtract two numbers"},
    {NULL, NULL, 0, NULL}
};

// Define the module
static struct PyModuleDef arithmodule = {
    PyModuleDef_HEAD_INIT,
    "arith",
    NULL, // Optional module documentation
    -1,
    ArithMethods
};

// Module initialization function
PyMODINIT_FUNC PyInit_arith(void) {
    return PyModule_Create(&arithmodule);
}

