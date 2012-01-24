#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

using namespace std;

enum LOG_TYPE {
    TYPE_INFO,
    TYPE_ERROR
};

class Logger
{
public:
    template <class T>
    static void log(T msg, LOG_TYPE type = TYPE_INFO) {
        switch(type) {
        case TYPE_INFO:
            cout<<"Info: "<< msg << endl;
            break;
        case TYPE_ERROR:
            cout<<"ERROR: "<< msg << endl;
            break;
        }
    }
};

#endif // LOGGER_H
