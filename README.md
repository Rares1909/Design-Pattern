# Design-Pattern

In this project I utilised two design patterns (singleton and abstract factory) and a template class.

Singleton
I made the constructor private so that it will create only one objects inside the class.
I initialised the instance with 0 so that I can use the get_instance function and get the object.

Abstract Factory
I created the abstract class Factory in order to implement "factories" for wild animals and domestic animals.
I gave an animal type pointer a pointer to another class(upcasting).

Template
I implemented o template class which has as attributes a vector.
The class contains 3 public member functions (sort, sorting in descending order, list).
