INCLUDE(CollectSrcs)
PROJECT(common)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})
INCLUDE_DIRECTORIES($ENV{BOOST_INCLUDE})
LINK_DIRECTORIES($ENV{BOOST_LIB})
SET(common_SUBDIRS )

ADD_DEFINITIONS(-DBUILDING_COMMON)
GET_SRCS(common_SRCLISTS common_SUBDIRS)
ADD_LIBRARY(common ${common_SRCLISTS})

TARGET_LINK_LIBRARIES(common boost_filesystem)
TARGET_LINK_LIBRARIES(common boost_system)

INSTALL(TARGETS common 
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib)

INSTALL(DIRECTORY ${CMAKE_SOURCE_DIR}/common/
    DESTINATION include/common
    FILES_MATCHING PATTERN "*.h")


