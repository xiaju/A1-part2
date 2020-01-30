// lang::CwC

#include "myString.h"
#include "object.h"
#include "queue.h"

int main(int argc, char** argv) {
  Queue q;
  q.enqueue(new String("first"));
  q.enqueue(new String("seoncd"));
  q.enqueue(new String("third"));
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.enqueue(new String("fourth"));
  q.print();
  q.enqueue(new String("fifth"));

  q.print();
  q.enqueue(new String("sixth"));
  q.print();
  q.enqueue(new String("seventh"));
  q.print(); 
  q.enqueue(new String("eigth"));
  q.print();
  q.enqueue(new String("ninth"));
  q.print();
  q.enqueue(new String("tenth"));
  q.print();
  q.enqueue(new String("11"));
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
  q.dequeue();
  q.print();
}
