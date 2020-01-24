// lang::CWC
#pragma once

#include <stdio.h>
#include "object.h"

// node class
class Node {
public:
  Object* data_;
  Node* next_;

  Node(Object* data);
  ~Node();
};

// queue class
class Queue {
public:
  Node* front_;
  Node* end_;

  Queue();
  ~Queue();
  virtual void enqueue(Object* data);
  virtual Object* dequeue();
  virtual bool empty();
  virtual void print();
};
