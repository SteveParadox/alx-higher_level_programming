#include <Python.h>

/**
 * main - sets value of a pointer to a char
 * @p: double pointer to a string
 * Return: Description of the returned value
 */

void print_python_list_info(PyObject *p)
{
    Py_ssize_t size = PyList_Size(p);
    Py_ssize_t allocated = ((PyListObject *)p)->allocated;
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", allocated);
    for (Py_ssize_t i = 0; i < size; i++)
    {
        PyObject *obj = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(obj)->tp_name);
    }
}
