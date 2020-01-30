// lang::CWC
#pragma once

#include <stdio.h>
#include "object.h"
#include "vector.h"

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
  size_t front_;
  size_t next_back_;
  Vector* list_;

  Queue() {
    this->front_ = 0;
    this->next_back_ = 0;
    this->list_ = new Vector();
    this->list_->push_back(NULL);
  }

  ~Queue() {
    delete this->list_;
  }

  virtual size_t size() {
    return this->next_back_ - this->front_;
  }

  virtual void enqueue(Object* data) {
    size_t l_size = this->list_->size();
    if (l_size == this->next_back_) {
      if (this->size() > (l_size / 2)) {
        this->double_capacity();
      }
      size_t j = 0;
      for (size_t i = this->front_; i < this->next_back_; i++) {
        this->list_->set(j, this->list_->get(i));
        j++;
      }
      this->next_back_ = this->size();
      this->front_ = 0;
    }
    this->list_->set(this->next_back_, data);
    this->next_back_++;
  }

  virtual Object* dequeue() {
    if (this->empty()) {
      fprintf(stderr, "Attempted to dequeue from empty queue");
      exit(1);
    }
    Object* ret = this->list_->get(this->front_);
    this->front_++;
    return ret;
  }
  virtual bool empty() {
    return this->size() == 0;
  }

  virtual void print() { 
    if (this->size() == 0) {
      printf("empty\n");
      return;
    }
    for (size_t i = this->front_; i < this->next_back_; i++) {
      this->list_->get(i)->print();
      printf(", ");
    }
    printf("\n");
  }

  virtual void double_capacity() {
    size_t l_size = this->list_->size();
    for (size_t i = 0; i < l_size; i++) {
      this->list_->push_back(NULL);
    }
  }
};
