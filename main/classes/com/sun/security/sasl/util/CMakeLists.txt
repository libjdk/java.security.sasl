#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.security.sas_2_SRCS)
file(GLOB classes.com.sun.security.sas_2_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.security.sas_2_HEADERS}) 
list(LENGTH classes.com.sun.security.sas_2_SRCS classes.com.sun.security.sas_2_SRCS_LENGTH)
if(classes.com.sun.security.sas_2_SRCS_LENGTH)
	add_library(classes.com.sun.security.sas_2 OBJECT "${classes.com.sun.security.sas_2_SRCS}" "${classes.com.sun.security.sas_2_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.security.sas_2)
endif()