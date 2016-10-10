/****************************************************************************
** Meta object code from reading C++ file 'LeptonThread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LeptonThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LeptonThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LeptonThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   33,   33,   33, 0x05,
      34,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   33,   33,   33, 0x0a,
      66,   33,   33,   33, 0x0a,
      79,   33,   33,   33, 0x0a,
      95,   33,   33,   33, 0x0a,
     111,   33,   33,   33, 0x0a,
     125,   33,   33,   33, 0x0a,
     137,   33,   33,   33, 0x0a,
     149,   33,   33,   33, 0x0a,
     162,   33,   33,   33, 0x0a,
     176,   33,   33,   33, 0x0a,
     191,   33,  203,   33, 0x0a,
     226,   33,  238,   33, 0x0a,
     256,   33,  269,   33, 0x0a,
     275,   33,  269,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LeptonThread[] = {
    "LeptonThread\0updateText(QString)\0\0"
    "updateImage(QImage)\0saveImage()\0"
    "performFFC()\0whiteHotVideo()\0"
    "blackHotVideo()\0freezeVideo()\0liveVideo()\0"
    "enableAGC()\0disableAGC()\0enableSBNUC()\0"
    "disableSBNUC()\0getflirSN()\0"
    "unsigned long long int\0getUptime()\0"
    "unsigned long int\0getAuxTemp()\0float\0"
    "getFPATemp()\0"
};

void LeptonThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LeptonThread *_t = static_cast<LeptonThread *>(_o);
        switch (_id) {
        case 0: _t->updateText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->saveImage(); break;
        case 3: _t->performFFC(); break;
        case 4: _t->whiteHotVideo(); break;
        case 5: _t->blackHotVideo(); break;
        case 6: _t->freezeVideo(); break;
        case 7: _t->liveVideo(); break;
        case 8: _t->enableAGC(); break;
        case 9: _t->disableAGC(); break;
        case 10: _t->enableSBNUC(); break;
        case 11: _t->disableSBNUC(); break;
        case 12: { unsigned long long int _r = _t->getflirSN();
            if (_a[0]) *reinterpret_cast< unsigned long long int*>(_a[0]) = _r; }  break;
        case 13: { unsigned long int _r = _t->getUptime();
            if (_a[0]) *reinterpret_cast< unsigned long int*>(_a[0]) = _r; }  break;
        case 14: { float _r = _t->getAuxTemp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: { float _r = _t->getFPATemp();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LeptonThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LeptonThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_LeptonThread,
      qt_meta_data_LeptonThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LeptonThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LeptonThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LeptonThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LeptonThread))
        return static_cast<void*>(const_cast< LeptonThread*>(this));
    return QThread::qt_metacast(_clname);
}

int LeptonThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void LeptonThread::updateText(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LeptonThread::updateImage(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
