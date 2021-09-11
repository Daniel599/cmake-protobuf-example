FIND_PACKAGE(Protobuf REQUIRED)

add_subdirectory("../my_protocol" my_protocol)
add_library(my_app_protocol my_app_protocol/my_app_protocol.proto)
target_link_libraries(my_app_protocol my_protocol protobuf::libprotobuf)
target_include_directories(my_app_protocol PUBLIC "${CMAKE_CURRENT_BINARY_DIR}")
protobuf_generate(TARGET my_app_protocol IMPORT_DIRS "../my_protocol/")