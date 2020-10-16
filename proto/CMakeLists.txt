file(GLOB PROTO_LIST "*.proto")

include(FindProtobuf)
find_package(Protobuf REQUIRED)

include_directories(${PROTOBUF_INCLUDE_DIR})

protobuf_generate_cpp(PROTO_SRC PROTO_HEADER ${PROTO_LIST})

add_library(proto ${PROTO_HEADER} ${PROTO_SRC})

# copy generated source files to root of directory after building for submodule
# use
file(GLOB GENERATED_CPP ${CMAKE_BINARY_DIR}/proto/*.pb.cc
                        ${CMAKE_BINARY_DIR}/proto/*.pb.h)

foreach(GENERATED_FILE ${GENERATED_CPP})
  add_custom_command(TARGET proto POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E
                     copy ${GENERATED_FILE} ${WhispProtobuf_SOURCE_DIR}/cpp)
endforeach()
