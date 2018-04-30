#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "led.h"
#include "protocol.h"

using namespace std;

void pipe_io( string pipe_name )
{
	using LED::LED;

	LED& led = LED::getInstance();

	return;
}

int main()
{
	using Protocol::Protocol;

	ifstream proto_fstream("ivi_proto");
	stringstream buffer;
	buffer << proto_fstream.rdbuf();

  Protocol& proto = Protocol::getInstance();
  proto.Init( buffer );








  return 0;
}
