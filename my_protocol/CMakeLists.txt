FIND_PACKAGE(Protobuf REQUIRED)

add_library(my_protocol my_protocol/my_protocol.proto)
target_link_libraries(my_protocol protobuf::libprotobuf)
protobuf_generate(TARGET my_protocol)
target_include_directories(my_protocol PUBLIC "${CMAKE_CURRENT_BINARY_DIR}")