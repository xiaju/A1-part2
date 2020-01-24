// lang::CwC
#pragma once

class Object {
public:
  virtual bool equals(Object *o);
  virtual const char *toString();
};
