/****************************************************************************
** Meta object code from reading C++ file 'my_awesomeproject_exampleplugin_PluginActivator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/internal/my_awesomeproject_exampleplugin_PluginActivator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'my_awesomeproject_exampleplugin_PluginActivator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_my_awesomeproject_exampleplugin_PluginActivator_t {
    QByteArrayData data[1];
    char stringdata[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_my_awesomeproject_exampleplugin_PluginActivator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_my_awesomeproject_exampleplugin_PluginActivator_t qt_meta_stringdata_my_awesomeproject_exampleplugin_PluginActivator = {
    {
QT_MOC_LITERAL(0, 0, 47) // "my_awesomeproject_exampleplug..."

    },
    "my_awesomeproject_exampleplugin_PluginActivator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_my_awesomeproject_exampleplugin_PluginActivator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void my_awesomeproject_exampleplugin_PluginActivator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject my_awesomeproject_exampleplugin_PluginActivator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_my_awesomeproject_exampleplugin_PluginActivator.data,
      qt_meta_data_my_awesomeproject_exampleplugin_PluginActivator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *my_awesomeproject_exampleplugin_PluginActivator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *my_awesomeproject_exampleplugin_PluginActivator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_my_awesomeproject_exampleplugin_PluginActivator.stringdata))
        return static_cast<void*>(const_cast< my_awesomeproject_exampleplugin_PluginActivator*>(this));
    if (!strcmp(_clname, "ctkPluginActivator"))
        return static_cast< ctkPluginActivator*>(const_cast< my_awesomeproject_exampleplugin_PluginActivator*>(this));
    if (!strcmp(_clname, "org.commontk.pluginfw.pluginactivator"))
        return static_cast< ctkPluginActivator*>(const_cast< my_awesomeproject_exampleplugin_PluginActivator*>(this));
    return QObject::qt_metacast(_clname);
}

int my_awesomeproject_exampleplugin_PluginActivator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xcc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x1f, 0x00, 0x6d, 0x79, 0x5f, 0x61, 0x77, 0x65,
    0x73, 0x6f, 0x6d, 0x65, 0x70, 0x72, 0x6f, 0x6a,
    0x65, 0x63, 0x74, 0x5f, 0x65, 0x78, 0x61, 0x6d,
    0x70, 0x6c, 0x65, 0x70, 0x6c, 0x75, 0x67, 0x69,
    0x6e, 0x00, 0x00, 0x00, 0x9b, 0x09, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x2f, 0x00, 0x6d, 0x79,
    0x5f, 0x61, 0x77, 0x65, 0x73, 0x6f, 0x6d, 0x65,
    0x70, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x5f,
    0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x70,
    0x6c, 0x75, 0x67, 0x69, 0x6e, 0x5f, 0x50, 0x6c,
    0x75, 0x67, 0x69, 0x6e, 0x41, 0x63, 0x74, 0x69,
    0x76, 0x61, 0x74, 0x6f, 0x72, 0x00, 0x00, 0x00,
    0x5a, 0x80, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x95, 0x15, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0x3c, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xcc, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xb8, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x1f, 0x00, 0x6d, 0x79, 0x5f, 0x61, 0x77, 0x65,
    0x73, 0x6f, 0x6d, 0x65, 0x70, 0x72, 0x6f, 0x6a,
    0x65, 0x63, 0x74, 0x5f, 0x65, 0x78, 0x61, 0x6d,
    0x70, 0x6c, 0x65, 0x70, 0x6c, 0x75, 0x67, 0x69,
    0x6e, 0x00, 0x00, 0x00, 0x95, 0x09, 0x00, 0x00,
    0x08, 0x00, 0x4d, 0x65, 0x74, 0x61, 0x44, 0x61,
    0x74, 0x61, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0d, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x2f, 0x00, 0x6d, 0x79, 0x5f, 0x61, 0x77, 0x65,
    0x73, 0x6f, 0x6d, 0x65, 0x70, 0x72, 0x6f, 0x6a,
    0x65, 0x63, 0x74, 0x5f, 0x65, 0x78, 0x61, 0x6d,
    0x70, 0x6c, 0x65, 0x70, 0x6c, 0x75, 0x67, 0x69,
    0x6e, 0x5f, 0x50, 0x6c, 0x75, 0x67, 0x69, 0x6e,
    0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x6f,
    0x72, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x5a, 0x80, 0xa0, 0x00, 0x07, 0x00, 0x76, 0x65,
    0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
    0x58, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0xa8, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(my_awesomeproject_exampleplugin_PluginActivator, my_awesomeproject_exampleplugin_PluginActivator)

QT_END_MOC_NAMESPACE
