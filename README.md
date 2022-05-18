# Design-Pattern

In acest proiect am utilizat doua design pattern-uri(singletone si abstract factory) si o clasa template.

Singleton
Am setat constructorul clasei privat pentru a putea crea o singura data in interiorul clasei un obiect.
Am initializat instance cu 0 pentru a putea utiliza functia get_instance si a prelua obiectul.

Abstract Factory
Am creat clasa abstracta Factory pentru a putea implementa "factory uri" pentru animalele salbatice si cele domestice.
Dupa folosind metoda abstract factory i-am dat unui pointer de tip animal un pointer catre alta clasa.(upcasting)

Template
Am implementat o clasa template care are ca variabila privata un vector.
Clasa contine 3 functii publice(sorrtare crescator,descrescator si afisare).
Am testat clasa pe un vector de tip string si unul de tip int.
