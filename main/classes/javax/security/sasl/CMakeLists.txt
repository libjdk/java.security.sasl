#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.security.sasl_SRCS)
file(GLOB classes.javax.security.sasl_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.security.sasl_HEADERS}) 
list(LENGTH classes.javax.security.sasl_SRCS classes.javax.security.sasl_SRCS_LENGTH)
if(classes.javax.security.sasl_SRCS_LENGTH)
	add_library(classes.javax.security.sasl OBJECT "${classes.javax.security.sasl_SRCS}" "${classes.javax.security.sasl_HEADERS}")
	jcpp_enable_bigobj(classes.javax.security.sasl)
endif()