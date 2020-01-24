We chose to implement queue for the API design, which is the data structure that follows the First in First out rule. 

The object class has two methods so far, a virtual method equals that checks if two objects are equal, and a virtual method 
toString that returns the manipulated string value. 

In queue.h, we implemented two classes called node and queue. Node class has two fields which are data_ and next_ along with a 
destructor method. We then implemented our queue class which has two node pointers, one pointing to the beginning of the queue 
and the other pointing to the end of the queue. These values are represented as front_ and end_. The class also has methods to 
enqueue an item to the end of the queue, dequeue an item from the beginning of the queue, check if the queue is empty, and print
the items in the queue. We placed these methods in the class since these are foundational functionalities that are frequently used
and desired for in a queue. 

We also designed a helper class to handle Strings since the queue class should be able to consist of both Object and String. This helper class
was modified from Jan Vitek's helper String class and we placed what we believe are essential functionalities to be found in a String. These basic methods 
include constructor, copy constructors, destructor, concat, hash, and the virtual methods that can be found in object.h.

Our testing program calls the functions enqueue and dequeue to operate on the queue, which prints out the results to verify its accuracy. We tested
with String since the queue class has the field data_ which is of type Object*. 
