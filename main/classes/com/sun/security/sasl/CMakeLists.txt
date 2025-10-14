#machine generated

add_subdirectory("digest")
add_subdirectory("ntlm")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.security.sasl_SRCS)
file(GLOB classes.com.sun.security.sasl_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.security.sasl_HEADERS}) 
list(LENGTH classes.com.sun.security.sasl_SRCS classes.com.sun.security.sasl_SRCS_LENGTH)
if(classes.com.sun.security.sasl_SRCS_LENGTH)
	add_library(classes.com.sun.security.sasl OBJECT "${classes.com.sun.security.sasl_SRCS}" "${classes.com.sun.security.sasl_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.security.sasl)
endif()