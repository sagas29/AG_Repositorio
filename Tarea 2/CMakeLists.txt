cmake_minimum_required(VERSION 2.8) #Versión mínima de cmake 
# Project Name
PROJECT(circu_OPenGL)

#########################################################
# INCLUYENDO LIBRERIA GLUT
#########################################################
find_package(GLUT REQUIRED) #buscar la libreria GlUT
include_directories(${GLUT_INCLUDE_DIRS}) # incluir los directorios 
link_directories(${GLUT_LIBRARY_DIRS}) #Linkeo de directorios 
add_definitions(${GLUT_DEFINITIONS}) #Agregar las definiciones 
#########################################################
# INCLUYENDO LIBRERIA OPENGL
#########################################################
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
#########################################################
# Incluyendo archivos 
###############0##########################################
add_executable(Example1 Ejercicio1.cpp) # Agregando nombre del script y compilado
add_executable(Example2 Ejercicio2.cpp) # Agregando nombre del script y compilado
add_executable(Example3 Ejercicio3.cpp) # Agregando nombre del script y compilado
add_executable(Example4 Ejercicio4.cpp) # Agregando nombre del script y compilado
add_executable(Example5 Ejercicio5.cpp) # Agregando nombre del script y compilado
add_executable(Example6 Ejercicio6.cpp) # Agregando nombre del script y compilado

########################################################
# Linkeo de librerías 
#########################################################
# creación del ejecutable "hello"
 target_link_libraries(Example1 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
 target_link_libraries(Example2 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
 target_link_libraries(Example3 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
 target_link_libraries(Example4 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
 target_link_libraries(Example5 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
 target_link_libraries(Example6 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )

