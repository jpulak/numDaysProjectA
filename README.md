# numDaysProjectA
10.NumDays  CS1337
NumDays Class
Design a class called NumDays . The class’s purpose is to store a value that represents a number of work hours and convert it to a number of days. For example, 8 hours would be converted to 1 day, 12 hours would be converted to 1.5 days, and 18 hours would be converted to 2.25 days. The class should have a constructor that accepts a number of hours, as well as member functions for storing and retrieving the hours and days.
The class should also have the following overloaded operators:
Addition operator. When two NumDays objects are added together, the overloaded
operator should return the sum of the two objects’ hours members.
− Subtraction operator. When one NumDays object is subtracted from another, the overloaded − operator should return the difference of the two objects’ hours members.
++ Prefix and postfix increment operators. These operators should increment the
number of hours stored in the object. When incremented, the number of days should be automatically recalculated.
−− Prefix and postfix decrement operators. These operators should decrement the number of hours stored in the object. When decremented, the number of days should be automatically recalculated.
Here is the Sample input
```
25
15
```
Here is the output for the given input
```
One: 3.125
Two: 1.875
Three: 5
Four = Three++ : 5
Four = ++Three: 5.25
Four = Three-- : 5.25
Four = --Three : 5
```
