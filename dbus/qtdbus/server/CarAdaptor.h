/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c CarAdaptor -a CarAdaptor.h:CarAdaptor.cpp ../car.xml -i ../CustomType.h
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef CARADAPTOR_H_1291951803
#define CARADAPTOR_H_1291951803

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "../CustomType.h"
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.soulxu.dbus.qt.car
 */
class CarAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.soulxu.dbus.qt.car")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.soulxu.dbus.qt.car\">\n"
"    <method name=\"startup\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"isok\"/>\n"
"    </method>\n"
"    <method name=\"stop\"/>\n"
"    <method name=\"speed\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"ini\"/>\n"
"      <arg direction=\"out\" type=\"a(ss)\" name=\"outp\"/>\n"
"      <annotation value=\"StringMapList\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"test\">\n"
"      <arg direction=\"out\" type=\"(ii)\" name=\"dii\"/>\n"
"      <annotation value=\"DoubleInt\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"test1\">\n"
"      <arg direction=\"out\" type=\"a(ii)\" name=\"adii\"/>\n"
"      <annotation value=\"DoubleIntList\" name=\"com.trolltech.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <signal name=\"stoped\">\n"
"      <arg directon=\"in\" type=\"a(ii)\" name=\"adii\"/>\n"
"      <annotation value=\"DoubleIntList\" name=\"com.trolltech.QtDBus.QtTypeName.In0\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    CarAdaptor(QObject *parent);
    virtual ~CarAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    StringMapList speed(int ini);
    int startup();
    void stop();
    DoubleInt test();
    DoubleIntList test1();
Q_SIGNALS: // SIGNALS
    void stoped(DoubleIntList adii);
};

#endif