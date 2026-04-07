#include <Python.h>
#include "FASPR.h"
#define PY_SSIZE_T_CLEAN

static PyObject *
py_FASPR(PyObject *self, PyObject *args, PyObject *kwargs){
    char *input_pdb, *output_pdb, *seq_file;
    char *program_path;
    const char *kwlist[] = {"data_dir", "input_pdb", "output_pdb", "seq_file", NULL};
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, "ssss", const_cast<char**>(kwlist), &program_path, &input_pdb, &output_pdb, &seq_file)){
        return NULL;
    }
    char *args_list[] = {program_path, input_pdb, output_pdb, seq_file};
    faspr(4, args_list);
    Py_RETURN_NONE;
}

static PyMethodDef py_FASPR_methods[] = {
    {"faspr", (PyCFunction)py_FASPR, METH_VARARGS | METH_KEYWORDS, PyDoc_STR("Run FASPR with Python")},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef py_FASPRmodule = {
    PyModuleDef_HEAD_INIT,
    "py_FASPR._core",
    PyDoc_STR("FASPR package for Python"),
    0,
    py_FASPR_methods,
};

PyMODINIT_FUNC PyInit__core()
{
    return PyModuleDef_Init(&py_FASPRmodule);
}
