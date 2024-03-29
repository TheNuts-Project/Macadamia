#ifndef STRING_HH
#define STRING_HH


#include "Expression.hh"
#include <ostream>
#include <string>


struct String : Expression
{
  std::string value;
  
  void print(std::ostream& os);
  std::string codegen();

  String();
  String(std::string value);
};

String* add(String &a, String &b);


std::ostream& operator<<(std::ostream& os, String& str);

#endif // STRING_HH
