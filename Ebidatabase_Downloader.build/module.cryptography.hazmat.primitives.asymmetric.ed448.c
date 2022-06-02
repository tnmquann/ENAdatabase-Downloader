/* Generated code for Python source for module 'cryptography.hazmat.primitives.asymmetric.ed448'
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

/* The _module_cryptography$hazmat$primitives$asymmetric$ed448 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$ed448;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$ed448;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_ed448_generate_key;
extern PyObject *const_str_plain_private_bytes;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain__Reasons;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_str_plain_self_str_plain_signature_str_plain_data_tuple;
static PyObject *const_str_digest_32b0177f61a43feb7385f2938a56213a;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_tuple_str_plain_backend_tuple;
static PyObject *const_str_digest_92fd737fbb7172d3646b0662cd511a64;
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
extern PyObject *const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_ed448_supported;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_Ed448PublicKey;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
extern PyObject *const_str_plain_ed448_load_private_bytes;
extern PyObject *const_str_plain_encryption_algorithm;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_UnsupportedAlgorithm;
extern PyObject *const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_backend;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_0fb9ed576b3801ea78b5ef947d109b5c;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_from_private_bytes;
extern PyObject *const_str_plain_generate;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_cls_str_plain_backend_tuple;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_verify;
extern PyObject *const_str_digest_e5da453eec06bc74f49160d873ea344d;
extern PyObject *const_str_plain_from_public_bytes;
extern PyObject *const_str_digest_b3242f9316d9ea0a70e72903875e7ac9;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain_public_bytes;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_Ed448PrivateKey;
extern PyObject *const_str_plain_ed448_load_public_bytes;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_48b0fc23d0d051ea71ca3a7288c67857;
extern PyObject *const_str_digest_1e7ea53eea340bc9447121d62227119f;
extern PyObject *const_str_digest_8cf5e95f1adffe141c6b2de430d1044d;
extern PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
extern PyObject *const_str_digest_c9d90f705d618cf09a1d9622332b1d53;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
extern PyObject *const_str_plain_ABCMeta;
extern PyObject *const_str_plain_public_key;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_32b0177f61a43feb7385f2938a56213a = UNSTREAM_STRING( &constant_bin[ 677966 ], 56, 0 );
    const_str_digest_92fd737fbb7172d3646b0662cd511a64 = UNSTREAM_STRING( &constant_bin[ 678022 ], 50, 0 );
    const_str_digest_0fb9ed576b3801ea78b5ef947d109b5c = UNSTREAM_STRING( &constant_bin[ 678072 ], 66, 0 );
    const_str_digest_48b0fc23d0d051ea71ca3a7288c67857 = UNSTREAM_STRING( &constant_bin[ 678138 ], 50, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$ed448( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b56c06fa72deb173c9ab7650c14b676d;
static PyCodeObject *codeobj_ef94f81de7e333140e858112b535c870;
static PyCodeObject *codeobj_fea65fbc94a5773025455ef6815cf481;
static PyCodeObject *codeobj_c66075e5484adc269f7d909cdaced38b;
static PyCodeObject *codeobj_cd248f14e3d63509cc34dc10df01989e;
static PyCodeObject *codeobj_c32812ab22bdae83bdb6a6c8242ee573;
static PyCodeObject *codeobj_1af117b0119607b1a07e65491485e568;
static PyCodeObject *codeobj_5bfd8f7deba2a0a5dbdcffc75d834cdd;
static PyCodeObject *codeobj_dcc6191d3a19a9bae973c62b36eb4fe6;
static PyCodeObject *codeobj_272c02bea5120d41ff18e2b9e2a8177c;
static PyCodeObject *codeobj_6a53ec9fd99c34b3c480cdda41a88111;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_48b0fc23d0d051ea71ca3a7288c67857 );
    codeobj_b56c06fa72deb173c9ab7650c14b676d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_32b0177f61a43feb7385f2938a56213a, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ef94f81de7e333140e858112b535c870 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Ed448PrivateKey, 41, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fea65fbc94a5773025455ef6815cf481 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Ed448PublicKey, 15, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c66075e5484adc269f7d909cdaced38b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_private_bytes, 52, const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd248f14e3d63509cc34dc10df01989e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_public_bytes, 16, const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c32812ab22bdae83bdb6a6c8242ee573 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate, 42, const_tuple_str_plain_cls_str_plain_backend_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1af117b0119607b1a07e65491485e568 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_private_bytes, 75, const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, 4, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5bfd8f7deba2a0a5dbdcffc75d834cdd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_bytes, 27, const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dcc6191d3a19a9bae973c62b36eb4fe6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_key, 63, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_272c02bea5120d41ff18e2b9e2a8177c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sign, 69, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6a53ec9fd99c34b3c480cdda41a88111 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify, 33, const_tuple_str_plain_self_str_plain_signature_str_plain_data_tuple, 3, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_1_from_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_2_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_3_verify(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_4_generate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_5_from_private_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_6_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_7_sign(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_8_private_bytes(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_1_from_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_backend = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_cd248f14e3d63509cc34dc10df01989e = NULL;

    struct Nuitka_FrameObject *frame_cd248f14e3d63509cc34dc10df01989e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd248f14e3d63509cc34dc10df01989e, codeobj_cd248f14e3d63509cc34dc10df01989e, module_cryptography$hazmat$primitives$asymmetric$ed448, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd248f14e3d63509cc34dc10df01989e = cache_frame_cd248f14e3d63509cc34dc10df01989e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd248f14e3d63509cc34dc10df01989e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd248f14e3d63509cc34dc10df01989e ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ed448;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_cd248f14e3d63509cc34dc10df01989e->m_frame.f_lineno = 18;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_cd248f14e3d63509cc34dc10df01989e->m_frame.f_lineno = 19;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ed448_supported );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_92fd737fbb7172d3646b0662cd511a64;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain__Reasons );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_cd248f14e3d63509cc34dc10df01989e->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 20;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = var_backend;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_3 = par_data;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_cd248f14e3d63509cc34dc10df01989e->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ed448_load_public_bytes, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd248f14e3d63509cc34dc10df01989e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd248f14e3d63509cc34dc10df01989e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd248f14e3d63509cc34dc10df01989e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd248f14e3d63509cc34dc10df01989e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd248f14e3d63509cc34dc10df01989e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd248f14e3d63509cc34dc10df01989e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd248f14e3d63509cc34dc10df01989e,
        type_description_1,
        par_cls,
        par_data,
        var_backend
    );


    // Release cached frame.
    if ( frame_cd248f14e3d63509cc34dc10df01989e == cache_frame_cd248f14e3d63509cc34dc10df01989e )
    {
        Py_DECREF( frame_cd248f14e3d63509cc34dc10df01989e );
    }
    cache_frame_cd248f14e3d63509cc34dc10df01989e = NULL;

    assertFrameObject( frame_cd248f14e3d63509cc34dc10df01989e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_1_from_public_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_1_from_public_bytes );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_2_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_2_public_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_2_public_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_3_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_3_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_3_verify );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_4_generate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *var_backend = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c32812ab22bdae83bdb6a6c8242ee573 = NULL;

    struct Nuitka_FrameObject *frame_c32812ab22bdae83bdb6a6c8242ee573;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c32812ab22bdae83bdb6a6c8242ee573, codeobj_c32812ab22bdae83bdb6a6c8242ee573, module_cryptography$hazmat$primitives$asymmetric$ed448, sizeof(void *)+sizeof(void *) );
    frame_c32812ab22bdae83bdb6a6c8242ee573 = cache_frame_c32812ab22bdae83bdb6a6c8242ee573;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c32812ab22bdae83bdb6a6c8242ee573 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c32812ab22bdae83bdb6a6c8242ee573 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ed448;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_c32812ab22bdae83bdb6a6c8242ee573->m_frame.f_lineno = 44;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_c32812ab22bdae83bdb6a6c8242ee573->m_frame.f_lineno = 45;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ed448_supported );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 46;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_92fd737fbb7172d3646b0662cd511a64;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain__Reasons );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
        exception_tb = NULL;

        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_c32812ab22bdae83bdb6a6c8242ee573->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 46;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = var_backend;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_c32812ab22bdae83bdb6a6c8242ee573->m_frame.f_lineno = 50;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_ed448_generate_key );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c32812ab22bdae83bdb6a6c8242ee573 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c32812ab22bdae83bdb6a6c8242ee573 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c32812ab22bdae83bdb6a6c8242ee573 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c32812ab22bdae83bdb6a6c8242ee573, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c32812ab22bdae83bdb6a6c8242ee573->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c32812ab22bdae83bdb6a6c8242ee573, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c32812ab22bdae83bdb6a6c8242ee573,
        type_description_1,
        par_cls,
        var_backend
    );


    // Release cached frame.
    if ( frame_c32812ab22bdae83bdb6a6c8242ee573 == cache_frame_c32812ab22bdae83bdb6a6c8242ee573 )
    {
        Py_DECREF( frame_c32812ab22bdae83bdb6a6c8242ee573 );
    }
    cache_frame_c32812ab22bdae83bdb6a6c8242ee573 = NULL;

    assertFrameObject( frame_c32812ab22bdae83bdb6a6c8242ee573 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_4_generate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_4_generate );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_5_from_private_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_backend = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c66075e5484adc269f7d909cdaced38b = NULL;

    struct Nuitka_FrameObject *frame_c66075e5484adc269f7d909cdaced38b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c66075e5484adc269f7d909cdaced38b, codeobj_c66075e5484adc269f7d909cdaced38b, module_cryptography$hazmat$primitives$asymmetric$ed448, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c66075e5484adc269f7d909cdaced38b = cache_frame_c66075e5484adc269f7d909cdaced38b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c66075e5484adc269f7d909cdaced38b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c66075e5484adc269f7d909cdaced38b ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ed448;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_c66075e5484adc269f7d909cdaced38b->m_frame.f_lineno = 54;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_c66075e5484adc269f7d909cdaced38b->m_frame.f_lineno = 55;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_ed448_supported );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 55;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedAlgorithm" );
        exception_tb = NULL;

        exception_lineno = 56;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_92fd737fbb7172d3646b0662cd511a64;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain__Reasons );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Reasons" );
        exception_tb = NULL;

        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_c66075e5484adc269f7d909cdaced38b->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 56;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = var_backend;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_3 = par_data;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_c66075e5484adc269f7d909cdaced38b->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_ed448_load_private_bytes, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c66075e5484adc269f7d909cdaced38b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c66075e5484adc269f7d909cdaced38b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c66075e5484adc269f7d909cdaced38b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c66075e5484adc269f7d909cdaced38b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c66075e5484adc269f7d909cdaced38b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c66075e5484adc269f7d909cdaced38b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c66075e5484adc269f7d909cdaced38b,
        type_description_1,
        par_cls,
        par_data,
        var_backend
    );


    // Release cached frame.
    if ( frame_c66075e5484adc269f7d909cdaced38b == cache_frame_c66075e5484adc269f7d909cdaced38b )
    {
        Py_DECREF( frame_c66075e5484adc269f7d909cdaced38b );
    }
    cache_frame_c66075e5484adc269f7d909cdaced38b = NULL;

    assertFrameObject( frame_c66075e5484adc269f7d909cdaced38b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_5_from_private_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_backend );
    Py_DECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_5_from_private_bytes );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_6_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_6_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_6_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_7_sign( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_7_sign );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_7_sign );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_8_private_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoding = python_pars[ 1 ];
    PyObject *par_format = python_pars[ 2 ];
    PyObject *par_encryption_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_8_private_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_encryption_algorithm );
    Py_DECREF( par_encryption_algorithm );
    par_encryption_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_encryption_algorithm );
    Py_DECREF( par_encryption_algorithm );
    par_encryption_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_format );
    Py_DECREF( par_format );
    par_format = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448$$$function_8_private_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_1_from_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_1_from_public_bytes,
        const_str_plain_from_public_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd248f14e3d63509cc34dc10df01989e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_2_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_2_public_bytes,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5bfd8f7deba2a0a5dbdcffc75d834cdd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        const_str_digest_1e7ea53eea340bc9447121d62227119f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_3_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_3_verify,
        const_str_plain_verify,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6a53ec9fd99c34b3c480cdda41a88111,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        const_str_digest_b3242f9316d9ea0a70e72903875e7ac9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_4_generate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_4_generate,
        const_str_plain_generate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c32812ab22bdae83bdb6a6c8242ee573,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_5_from_private_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_5_from_private_bytes,
        const_str_plain_from_private_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c66075e5484adc269f7d909cdaced38b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_6_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_6_public_key,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dcc6191d3a19a9bae973c62b36eb4fe6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        const_str_digest_0fb9ed576b3801ea78b5ef947d109b5c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_7_sign(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_7_sign,
        const_str_plain_sign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_272c02bea5120d41ff18e2b9e2a8177c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        const_str_digest_8cf5e95f1adffe141c6b2de430d1044d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_8_private_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ed448$$$function_8_private_bytes,
        const_str_plain_private_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1af117b0119607b1a07e65491485e568,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ed448,
        const_str_digest_e5da453eec06bc74f49160d873ea344d,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$asymmetric$ed448 =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.asymmetric.ed448",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$ed448 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$ed448 );
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
    puts("cryptography.hazmat.primitives.asymmetric.ed448: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.ed448: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.ed448: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$asymmetric$ed448" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$asymmetric$ed448 = Py_InitModule4(
        "cryptography.hazmat.primitives.asymmetric.ed448",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$asymmetric$ed448 = PyModule_Create( &mdef_cryptography$hazmat$primitives$asymmetric$ed448 );
#endif

    moduledict_cryptography$hazmat$primitives$asymmetric$ed448 = MODULE_DICT( module_cryptography$hazmat$primitives$asymmetric$ed448 );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$asymmetric$ed448,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ed448,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$asymmetric$ed448,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ed448,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$asymmetric$ed448 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c9d90f705d618cf09a1d9622332b1d53, module_cryptography$hazmat$primitives$asymmetric$ed448 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_classmethod_arg_1;
    PyObject *tmp_classmethod_arg_2;
    PyObject *tmp_classmethod_arg_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_fea65fbc94a5773025455ef6815cf481_2 = NULL;

    struct Nuitka_FrameObject *frame_fea65fbc94a5773025455ef6815cf481_2;

    static struct Nuitka_FrameObject *cache_frame_ef94f81de7e333140e858112b535c870_3 = NULL;

    struct Nuitka_FrameObject *frame_ef94f81de7e333140e858112b535c870_3;

    struct Nuitka_FrameObject *frame_b56c06fa72deb173c9ab7650c14b676d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    PyObject *locals_Ed448PublicKey_15 = NULL;
    PyObject *locals_Ed448PrivateKey_41 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_3 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Frame without reuse.
    frame_b56c06fa72deb173c9ab7650c14b676d = MAKE_MODULE_FRAME( codeobj_b56c06fa72deb173c9ab7650c14b676d, module_cryptography$hazmat$primitives$asymmetric$ed448 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b56c06fa72deb173c9ab7650c14b676d );
    assert( Py_REFCNT( frame_b56c06fa72deb173c9ab7650c14b676d ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_1 = const_str_plain_abc;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ed448;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ed448;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 9;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ed448;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
    tmp_level_name_3 = const_int_0;
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 11;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_UnsupportedAlgorithm );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__Reasons );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain__Reasons, tmp_assign_source_11 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_Ed448PublicKey_15 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c9d90f705d618cf09a1d9622332b1d53;
    tmp_res = PyDict_SetItem( locals_Ed448PublicKey_15, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fea65fbc94a5773025455ef6815cf481_2, codeobj_fea65fbc94a5773025455ef6815cf481, module_cryptography$hazmat$primitives$asymmetric$ed448, 0 );
    frame_fea65fbc94a5773025455ef6815cf481_2 = cache_frame_fea65fbc94a5773025455ef6815cf481_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fea65fbc94a5773025455ef6815cf481_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fea65fbc94a5773025455ef6815cf481_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_1_from_public_bytes(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PublicKey_15, const_str_plain_from_public_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 27;

        goto frame_exception_exit_2;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_2_public_bytes(  );
    frame_fea65fbc94a5773025455ef6815cf481_2->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PublicKey_15, const_str_plain_public_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_2;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto frame_exception_exit_2;
    }

    tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_3_verify(  );
    frame_fea65fbc94a5773025455ef6815cf481_2->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_2;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PublicKey_15, const_str_plain_verify, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fea65fbc94a5773025455ef6815cf481_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fea65fbc94a5773025455ef6815cf481_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fea65fbc94a5773025455ef6815cf481_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fea65fbc94a5773025455ef6815cf481_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fea65fbc94a5773025455ef6815cf481_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fea65fbc94a5773025455ef6815cf481_2,
        type_description_2
    );


    // Release cached frame.
    if ( frame_fea65fbc94a5773025455ef6815cf481_2 == cache_frame_fea65fbc94a5773025455ef6815cf481_2 )
    {
        Py_DECREF( frame_fea65fbc94a5773025455ef6815cf481_2 );
    }
    cache_frame_fea65fbc94a5773025455ef6815cf481_2 = NULL;

    assertFrameObject( frame_fea65fbc94a5773025455ef6815cf481_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = locals_Ed448PublicKey_15;
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_Ed448PublicKey_15 );
    locals_Ed448PublicKey_15 = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_Ed448PublicKey_15 );
    locals_Ed448PublicKey_15 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448 );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 15;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_12;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_13 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_13 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_13 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_13;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_3 = const_str_plain_Ed448PublicKey;
    tmp_args_element_name_4 = const_tuple_type_object_tuple;
    tmp_args_element_name_5 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_14;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 14;

        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_metaclass );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 14;

        goto try_except_handler_3;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 14;

        goto try_except_handler_3;
    }
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    tmp_args_element_name_7 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_class_creation_1__class;
        assert( old != NULL );
        tmp_class_creation_1__class = tmp_assign_source_15;
        Py_DECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_16 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_16 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_Ed448PublicKey, tmp_assign_source_16 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Tried code:
    tmp_set_locals = PyDict_New();
    locals_Ed448PrivateKey_41 = tmp_set_locals;
    tmp_dictset_value = const_str_digest_c9d90f705d618cf09a1d9622332b1d53;
    tmp_res = PyDict_SetItem( locals_Ed448PrivateKey_41, const_str_plain___module__, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef94f81de7e333140e858112b535c870_3, codeobj_ef94f81de7e333140e858112b535c870, module_cryptography$hazmat$primitives$asymmetric$ed448, 0 );
    frame_ef94f81de7e333140e858112b535c870_3 = cache_frame_ef94f81de7e333140e858112b535c870_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef94f81de7e333140e858112b535c870_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef94f81de7e333140e858112b535c870_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_classmethod_arg_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_4_generate(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_2 );
    Py_DECREF( tmp_classmethod_arg_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PrivateKey_41, const_str_plain_generate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_3;
    }
    tmp_classmethod_arg_3 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_5_from_private_bytes(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_3 );
    Py_DECREF( tmp_classmethod_arg_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PrivateKey_41, const_str_plain_from_private_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 63;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_6_public_key(  );
    frame_ef94f81de7e333140e858112b535c870_3->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PrivateKey_41, const_str_plain_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 69;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_7_sign(  );
    frame_ef94f81de7e333140e858112b535c870_3->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PrivateKey_41, const_str_plain_sign, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_3;
    }
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 75;

        goto frame_exception_exit_3;
    }

    tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ed448$$$function_8_private_bytes(  );
    frame_ef94f81de7e333140e858112b535c870_3->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto frame_exception_exit_3;
    }
    tmp_res = PyDict_SetItem( locals_Ed448PrivateKey_41, const_str_plain_private_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef94f81de7e333140e858112b535c870_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef94f81de7e333140e858112b535c870_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef94f81de7e333140e858112b535c870_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef94f81de7e333140e858112b535c870_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef94f81de7e333140e858112b535c870_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef94f81de7e333140e858112b535c870_3,
        type_description_2
    );


    // Release cached frame.
    if ( frame_ef94f81de7e333140e858112b535c870_3 == cache_frame_ef94f81de7e333140e858112b535c870_3 )
    {
        Py_DECREF( frame_ef94f81de7e333140e858112b535c870_3 );
    }
    cache_frame_ef94f81de7e333140e858112b535c870_3 = NULL;

    assertFrameObject( frame_ef94f81de7e333140e858112b535c870_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_6;
    skip_nested_handling_2:;
    tmp_outline_return_value_2 = locals_Ed448PrivateKey_41;
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_Ed448PrivateKey_41 );
    locals_Ed448PrivateKey_41 = NULL;
    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_Ed448PrivateKey_41 );
    locals_Ed448PrivateKey_41 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$ed448 );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 41;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_17 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_17;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_18 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_5;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_18 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_18 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_18;

    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_11 = const_str_plain_Ed448PrivateKey;
    tmp_args_element_name_12 = const_tuple_type_object_tuple;
    tmp_args_element_name_13 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_19;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;

        exception_lineno = 40;

        goto try_except_handler_5;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_metaclass );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_5;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;

        exception_lineno = 40;

        goto try_except_handler_5;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 40;

        goto try_except_handler_5;
    }
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_called_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_5;
    }
    tmp_args_element_name_15 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_b56c06fa72deb173c9ab7650c14b676d->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_class_creation_2__class;
        assert( old != NULL );
        tmp_class_creation_2__class = tmp_assign_source_20;
        Py_DECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b56c06fa72deb173c9ab7650c14b676d );
#endif
    popFrameStack();

    assertFrameObject( frame_b56c06fa72deb173c9ab7650c14b676d );

    goto frame_no_exception_3;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b56c06fa72deb173c9ab7650c14b676d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b56c06fa72deb173c9ab7650c14b676d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b56c06fa72deb173c9ab7650c14b676d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b56c06fa72deb173c9ab7650c14b676d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    tmp_assign_source_21 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_21 );
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$ed448, (Nuitka_StringObject *)const_str_plain_Ed448PrivateKey, tmp_assign_source_21 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;


    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$ed448 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
