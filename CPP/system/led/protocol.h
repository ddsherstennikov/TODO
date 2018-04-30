#pragma once

#define __PROTO_VERSION_SUPPORTED__ 1

#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <cstddef>

namespace Protocol
{
  using std::list;
  using std::string;
  using std::stringstream;

  enum VALUETYPE { BOOL, ENUM, INT };
  enum CMDTYPE { GET, SET };

  class Command;
  class Range;

  class Protocol
  {
  public:
    static Protocol& getInstance()
    {
      static Protocol instance;
      return instance;
    }

    void Init( stringstream const& input ) { Parse(input); }

  private:

    void Parse( stringstream const& input );

    list<Command> commands_;

    Protocol() {};
    Protocol(Protocol const &)        = delete;
    void operator=(Protocol const &)  = delete;
  };

  class Command
  {
    string name;
    VALUETYPE valtype;
    Range* argument_range;
    CMDTYPE cmdtype;
  };

  class Range
  {


  };

  class BoolRange : public Range
  {

  };

  class EnumRange : public Range
  {

  };

  class IntRange : public Range
  {

  };

}
