#pragma once

#include <list>
#include <cstddef>

#include "protocol.h"

namespace LED
{
	using std::list;
	using Protocol::Protocol;

  class LED
  {
  public:

    static LED& getInstance()
    {
      static LED instance;
      return instance;
    }

  private:

    LED() {};
    LED(LED const &)        			= delete;
    void operator=(LED const &)  	= delete;
  };

}
