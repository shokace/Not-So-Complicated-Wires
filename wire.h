#ifndef WIRE_H
#define WIRE_H
#include <QtCore/QObject>

class wire
{

public:

  bool star, is_red, is_white, is_blue, led, has_batteries, is_even, has_port = false;

  bool cut = false;

};

#endif // WIRE_H
