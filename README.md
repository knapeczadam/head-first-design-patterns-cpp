# HeadFirstDesignPatternsCPP

### TODO
- raw vs. smart pointers
- rules of zero, three, five
- this vs enable_shared_from_this
- thread safety
- passing smart pointers by value/reference
- missing patterns

### Design Patterns
1. BO - <b>Strategy</b>: defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it. 
1. BO - <b>Observer</b>: defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.
1. SO - <b>Decorator</b>: attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.
1. Factory
    2. CO - <b>Abstract Factory</b>: provide an interface for creating families of related or dependent objects without specifying their concrete classes.
    2. CC - <b>Factory Method</b>: define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to the subclasses.
1. CO - <b>Singleton</b>: ensure a class only has one instance and provide a global point of access to it.
1. BO - <b>Command</b>: encapsulates a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations.
1. SC - <b>Adapter</b>: converts the interface of a class into another interface clients expect. Lets classes work together that couldn't otherwise because of incompatible interfaces.
1. SO - <b>Facade</b>: provides a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the subsystem easier to use.
1. BC - <b>Template Method</b>: define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.
1. BO - <b>Iterator</b>: provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.
1. SO - <b>Composite</b>: compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.
1. BO - <b>State</b>: allow an object to alter its behavior when its internal state changes. The object will appear to change its class.
1. SO - <b>Proxy</b>: provide a surrogate or placeholder for another object to control access to it.
1. XX - <b>Anti-Pattern</b>: tells you how to go from a problem to a BAD solution.
