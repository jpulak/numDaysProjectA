// func definitions of class funcs

#include "numDays.h"

//constructor

numDays::numDays(double h)
{
  hrs = h;
}

//convert hrs to days

double numDays::convertDays()
{
  return hrs / 8.0;
}

//set and get funcs

void numDays::setHrs(double h)
{
  hrs = h;
}
double numDays::getHrs()
{
  return hrs;
}
double numDays::getDays()
{
  return convertDays();
}

//addition

numDays numDays::operator+(numDays& added)
{
  return numDays(hrs + added.hrs);
}

// subtraction

numDays numDays::operator-(numDays& sub)
{
  return numDays(hrs - sub.hrs);
}

//++prefix 

numDays& numDays::operator++()
{
  ++hrs;
  return *this; //modify then execute
}

//postfix++

numDays numDays::operator++(int)
{
  numDays temp = *this; //execute then modify
  hrs++;
  return temp;
}

//--prefix

numDays& numDays::operator--()
{
  --hrs;
  return *this; //modify then execute
}

// postfix--

numDays numDays::operator--(int)
{
  numDays temp = *this; //execute then modify
  hrs--;
  return temp;
}
