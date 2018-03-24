/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWidgets.h"

#line 26 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtWidgets/qtreewidgetitemiterator.sip"
#include <qtreewidgetitemiterator.h>
#line 29 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"

#line 26 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtWidgets/qtreewidgetitemiterator.sip"
#include <qtreewidgetitemiterator.h>
#line 33 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"


extern "C" {static long slot_QTreeWidgetItemIterator_IteratorFlags___hash__(PyObject *);}
static long slot_QTreeWidgetItemIterator_IteratorFlags___hash__(PyObject *sipSelf)
{
     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "sip/QtCore/qglobal.sip"
        sipRes = sipCpp->operator QTreeWidgetItemIterator::IteratorFlags::Int();
#line 51 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QTreeWidgetItemIterator_IteratorFlags___bool__(PyObject *);}
static int slot_QTreeWidgetItemIterator_IteratorFlags___bool__(PyObject *sipSelf)
{
     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 111 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTreeWidgetItemIterator::IteratorFlags::Int() != 0);
#line 76 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTreeWidgetItemIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTreeWidgetItemIterator_IteratorFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 106 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTreeWidgetItemIterator::IteratorFlags::Int() != a0->operator QTreeWidgetItemIterator::IteratorFlags::Int());
#line 106 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"
            sipReleaseType(const_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(a0),sipType_QTreeWidgetItemIterator_IteratorFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QTreeWidgetItemIterator_IteratorFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QTreeWidgetItemIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTreeWidgetItemIterator_IteratorFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 101 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTreeWidgetItemIterator::IteratorFlags::Int() == a0->operator QTreeWidgetItemIterator::IteratorFlags::Int());
#line 142 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"
            sipReleaseType(const_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(a0),sipType_QTreeWidgetItemIterator_IteratorFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QTreeWidgetItemIterator_IteratorFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator_IteratorFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 95 "sip/QtCore/qglobal.sip"
        *sipCpp = QTreeWidgetItemIterator::IteratorFlags(*sipCpp ^ a0);
#line 181 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTreeWidgetItemIterator::IteratorFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTreeWidgetItemIterator_IteratorFlags, &a0, &a0State, &a1))
        {
             ::QTreeWidgetItemIterator::IteratorFlags*sipRes;

            sipRes = new  ::QTreeWidgetItemIterator::IteratorFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QTreeWidgetItemIterator_IteratorFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTreeWidgetItemIterator_IteratorFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator_IteratorFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 89 "sip/QtCore/qglobal.sip"
        *sipCpp = QTreeWidgetItemIterator::IteratorFlags(*sipCpp | a0);
#line 253 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTreeWidgetItemIterator::IteratorFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTreeWidgetItemIterator_IteratorFlags, &a0, &a0State, &a1))
        {
             ::QTreeWidgetItemIterator::IteratorFlags*sipRes;

            sipRes = new  ::QTreeWidgetItemIterator::IteratorFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QTreeWidgetItemIterator_IteratorFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTreeWidgetItemIterator_IteratorFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator_IteratorFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QTreeWidgetItemIterator::IteratorFlags::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTreeWidgetItemIterator::IteratorFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTreeWidgetItemIterator_IteratorFlags, &a0, &a0State, &a1))
        {
             ::QTreeWidgetItemIterator::IteratorFlags*sipRes;

            sipRes = new  ::QTreeWidgetItemIterator::IteratorFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QTreeWidgetItemIterator_IteratorFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTreeWidgetItemIterator_IteratorFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___invert__(PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___invert__(PyObject *sipSelf)
{
     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QTreeWidgetItemIterator::IteratorFlags*sipRes;

            sipRes = new  ::QTreeWidgetItemIterator::IteratorFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTreeWidgetItemIterator_IteratorFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___int__(PyObject *);}
static PyObject *slot_QTreeWidgetItemIterator_IteratorFlags___int__(PyObject *sipSelf)
{
     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator_IteratorFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTreeWidgetItemIterator_IteratorFlags(void *, int);}
static void release_QTreeWidgetItemIterator_IteratorFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipCppV);
}


extern "C" {static void assign_QTreeWidgetItemIterator_IteratorFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QTreeWidgetItemIterator_IteratorFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(sipSrc);
}


extern "C" {static void *array_QTreeWidgetItemIterator_IteratorFlags(SIP_SSIZE_T);}
static void *array_QTreeWidgetItemIterator_IteratorFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QTreeWidgetItemIterator::IteratorFlags[sipNrElem];
}


extern "C" {static void *copy_QTreeWidgetItemIterator_IteratorFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTreeWidgetItemIterator_IteratorFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QTreeWidgetItemIterator::IteratorFlags(reinterpret_cast<const  ::QTreeWidgetItemIterator::IteratorFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTreeWidgetItemIterator_IteratorFlags(sipSimpleWrapper *);}
static void dealloc_QTreeWidgetItemIterator_IteratorFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTreeWidgetItemIterator_IteratorFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTreeWidgetItemIterator_IteratorFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTreeWidgetItemIterator_IteratorFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTreeWidgetItemIterator::IteratorFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QTreeWidgetItemIterator::IteratorFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QTreeWidgetItemIterator::IteratorFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QTreeWidgetItemIterator::IteratorFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTreeWidgetItemIterator_IteratorFlags, &a0, &a0State))
        {
            sipCpp = new  ::QTreeWidgetItemIterator::IteratorFlags(*a0);
            sipReleaseType(const_cast< ::QTreeWidgetItemIterator::IteratorFlags *>(a0),sipType_QTreeWidgetItemIterator_IteratorFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTreeWidgetItemIterator_IteratorFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTreeWidgetItemIterator_IteratorFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QTreeWidgetItemIterator::IteratorFlags **sipCppPtr = reinterpret_cast< ::QTreeWidgetItemIterator::IteratorFlags **>(sipCppPtrV);

#line 121 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTreeWidgetItemIterator::IteratorFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator_IteratorFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTreeWidgetItemIterator_IteratorFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator_IteratorFlag)))
{
    *sipCppPtr = new QTreeWidgetItemIterator::IteratorFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTreeWidgetItemIterator::IteratorFlags *>(sipConvertToType(sipPy, sipType_QTreeWidgetItemIterator_IteratorFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 521 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtWidgets/sipQtWidgetsQTreeWidgetItemIteratorIteratorFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTreeWidgetItemIterator_IteratorFlags[] = {
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___hash__, hash_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___bool__, bool_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___ne__, ne_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___eq__, eq_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___ixor__, ixor_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___xor__, xor_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___ior__, ior_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___or__, or_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___iand__, iand_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___and__, and_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___invert__, invert_slot},
    {(void *)slot_QTreeWidgetItemIterator_IteratorFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTreeWidgetItemIterator_IteratorFlags, "\1QTreeWidgetItemIterator.IteratorFlags()\n"
"QTreeWidgetItemIterator.IteratorFlags(Union[QTreeWidgetItemIterator.IteratorFlags, QTreeWidgetItemIterator.IteratorFlag])\n"
"QTreeWidgetItemIterator.IteratorFlags(QTreeWidgetItemIterator.IteratorFlags)");


static pyqt5ClassPluginDef plugin_QTreeWidgetItemIterator_IteratorFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QTreeWidgetItemIterator_IteratorFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTreeWidgetItemIterator__IteratorFlags,
        {0},
        &plugin_QTreeWidgetItemIterator_IteratorFlags
    },
    {
        sipNameNr_IteratorFlags,
        {448, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTreeWidgetItemIterator_IteratorFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTreeWidgetItemIterator_IteratorFlags,
    init_type_QTreeWidgetItemIterator_IteratorFlags,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTreeWidgetItemIterator_IteratorFlags,
    assign_QTreeWidgetItemIterator_IteratorFlags,
    array_QTreeWidgetItemIterator_IteratorFlags,
    copy_QTreeWidgetItemIterator_IteratorFlags,
    release_QTreeWidgetItemIterator_IteratorFlags,
    0,
    convertTo_QTreeWidgetItemIterator_IteratorFlags,
    0,
    0,
    0,
    0,
    0
};