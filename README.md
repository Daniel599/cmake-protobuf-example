CMake Protobuf Test Example
======================

Minimal example of using CMake to manage C++ project with multiple protobuf libraries.
This example uses the CMake protobuf function provided by protobuf's CMake.

Also, this example uses multiple libraries within the same repo, and the repo act as the main project, so don't use the outer folders layout as part of the example.

main needs my_app_protocol,

my_app_protocol needs my_protocol

Build
======================

    $ mkdir build
    $ cd build
    $ cmake ..
    $ make

Run
======================
    $ ./main
