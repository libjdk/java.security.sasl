#machine generated

add_subdirectory("sasl")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.security_SRCS)
file(GLOB classes.com.sun.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.security_HEADERS}) 
list(LENGTH classes.com.sun.security_SRCS classes.com.sun.security_SRCS_LENGTH)
if(classes.com.sun.security_SRCS_LENGTH)
	add_library(classes.com.sun.security OBJECT "${classes.com.sun.security_SRCS}" "${classes.com.sun.security_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.security)
endif()