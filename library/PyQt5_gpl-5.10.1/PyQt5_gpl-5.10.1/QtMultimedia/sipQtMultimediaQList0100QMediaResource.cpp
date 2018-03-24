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

#include "sipAPIQtMultimedia.h"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"

#line 26 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/sip/QtMultimedia/qmediaresource.sip"
#include <qmediaresource.h>
#line 33 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"


extern "C" {static void assign_QList_0100QMediaResource(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QMediaResource(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QMediaResource> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QMediaResource> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QMediaResource(SIP_SSIZE_T);}
static void *array_QList_0100QMediaResource(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QMediaResource>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QMediaResource(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QMediaResource(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QMediaResource>(reinterpret_cast<const QList< ::QMediaResource> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QMediaResource(void *, int);}
static void release_QList_0100QMediaResource(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QMediaResource> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QMediaResource(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QMediaResource(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QMediaResource> **sipCppPtr = reinterpret_cast<QList< ::QMediaResource> **>(sipCppPtrV);

#line 68 "sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        PyErr_Clear();
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QMediaResource> *ql = new QList<QMediaResource>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QMediaResource *t = reinterpret_cast<QMediaResource *>(
                sipForceConvertToType(itm, sipType_QMediaResource, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QMediaResource' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QMediaResource, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 143 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QMediaResource(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QMediaResource(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QMediaResource> *sipCpp = reinterpret_cast<QList< ::QMediaResource> *>(sipCppV);

#line 42 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QMediaResource *t = new QMediaResource(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QMediaResource,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, tobj);
    }

    return l;
#line 176 "/Users/GYUNAM/Documents/PyProM/library/PyQt5_gpl-5.10.1/PyQt5_gpl-5.10.1/QtMultimedia/sipQtMultimediaQList0100QMediaResource.cpp"
}


sipMappedTypeDef sipTypeDef_QtMultimedia_QList_0100QMediaResource = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_2920,     /* QList<QMediaResource> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QMediaResource,
    array_QList_0100QMediaResource,
    copy_QList_0100QMediaResource,
    release_QList_0100QMediaResource,
    convertTo_QList_0100QMediaResource,
    convertFrom_QList_0100QMediaResource
};