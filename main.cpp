#include <iostream>
#include "my_protocol/my_protocol.pb.h"
#include "my_app_protocol/my_app_protocol.pb.h"

using namespace std;
int main(int argc, char const *argv[])
{
  my_app_protocol::AppStuff stuff;
  my_protocol::Message m;
  cout << "Hello Proto!" << endl;
  return 0;
}
