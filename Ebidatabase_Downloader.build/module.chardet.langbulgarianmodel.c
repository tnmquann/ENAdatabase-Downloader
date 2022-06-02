/* Generated code for Python source for module 'chardet.langbulgarianmodel'
 * created by Nuitka version 0.5.30
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_chardet$langbulgarianmodel is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$langbulgarianmodel;
PyDictObject *moduledict_chardet$langbulgarianmodel;

/* The module constants used, if any. */
static PyObject *const_dict_c738f214bf1abbe3e0b5ad88e439c6af;
static PyObject *const_str_plain_win1251BulgarianCharToOrderMap;
static PyObject *const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139;
static PyObject *const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_776d641740a02943b798702998a6246b;
extern PyObject *const_str_plain_Latin5BulgarianModel;
static PyObject *const_str_plain_Latin5_BulgarianCharToOrderMap;
static PyObject *const_str_plain_BulgarianLangModel;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
static PyObject *const_dict_4eafd9890f1d5a801f8d03ef8ea6890c;
static PyObject *const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
extern PyObject *const_str_plain_Win1251BulgarianModel;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_dict_c738f214bf1abbe3e0b5ad88e439c6af = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 242102 ], 21938 );
    const_str_plain_win1251BulgarianCharToOrderMap = UNSTREAM_STRING( &constant_bin[ 264040 ], 30, 1 );
    const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139 = UNSTREAM_STRING( &constant_bin[ 264070 ], 26, 0 );
    const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 262754 ], 1285 );
    const_str_digest_776d641740a02943b798702998a6246b = UNSTREAM_STRING( &constant_bin[ 264096 ], 29, 0 );
    const_str_plain_Latin5_BulgarianCharToOrderMap = UNSTREAM_STRING( &constant_bin[ 264125 ], 30, 1 );
    const_str_plain_BulgarianLangModel = UNSTREAM_STRING( &constant_bin[ 264155 ], 18, 1 );
    const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 264173 ], 1285 );
    const_dict_4eafd9890f1d5a801f8d03ef8ea6890c = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 265458 ], 21936 );
    const_tuple_36b7ecdab49c9829602e64b169986871_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 242222 ], 20485 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$langbulgarianmodel( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_776d641740a02943b798702998a6246b );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$langbulgarianmodel =
{
    PyModuleDef_HEAD_INIT,
    "chardet.langbulgarianmodel",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( chardet$langbulgarianmodel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$langbulgarianmodel );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("chardet.langbulgarianmodel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langbulgarianmodel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.langbulgarianmodel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$langbulgarianmodel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$langbulgarianmodel = Py_InitModule4(
        "chardet.langbulgarianmodel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_chardet$langbulgarianmodel = PyModule_Create( &mdef_chardet$langbulgarianmodel );
#endif

    moduledict_chardet$langbulgarianmodel = MODULE_DICT( module_chardet$langbulgarianmodel );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_chardet$langbulgarianmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langbulgarianmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_chardet$langbulgarianmodel,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$langbulgarianmodel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_chardet$langbulgarianmodel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d5ffc5d3d4577ce00b154e8a3a81f139, module_chardet$langbulgarianmodel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = const_tuple_33562c24091b0ac3cbee9a55801943b1_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5_BulgarianCharToOrderMap, tmp_assign_source_3 );
    tmp_assign_source_4 = const_tuple_d12d0d38133deb374cda3f2e99175f9b_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_win1251BulgarianCharToOrderMap, tmp_assign_source_4 );
    tmp_assign_source_5 = const_tuple_36b7ecdab49c9829602e64b169986871_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_BulgarianLangModel, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_Copy( const_dict_4eafd9890f1d5a801f8d03ef8ea6890c );
    UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Latin5BulgarianModel, tmp_assign_source_6 );
    tmp_assign_source_7 = PyDict_Copy( const_dict_c738f214bf1abbe3e0b5ad88e439c6af );
    UPDATE_STRING_DICT1( moduledict_chardet$langbulgarianmodel, (Nuitka_StringObject *)const_str_plain_Win1251BulgarianModel, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_chardet$langbulgarianmodel );
}
