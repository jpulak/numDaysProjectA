// class definition file

#ifndef NUMDAYS_H
#define NUMDAYS_H

class numDays{

  //priv vars

  private:
  double hrs;
  double convertDays() ;

  // public funcs

  public:
  numDays(double h = 0); //default
  void setHrs(double h); //setter
  double getHrs(); //getter
  double getDays(); //getter
  numDays operator+(numDays& added); //add
  numDays operator-(numDays& sub); //sub
  numDays& operator++(); // ++prefix 
  numDays operator++(int); // postfix ++
  numDays& operator--(); // --prefix
  numDays operator--(int); //postfix++
};

#endif
