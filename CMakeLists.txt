cmake_minimum_required (VERSION 3.15)

set(PROJECT_NAME Raytracing)
set(CMAKE_CXX_STANDARD 20)
add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "") # works (in creating the compile_commands.json file)
project(${PROJECT_NAME})


# Finding opengl, glfw, glew, glut, and possibly freetype and even freeglut
find_package(glfw3 3.4 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(GLUT REQUIRED)
find_package(glm REQUIRED)


add_executable(
	${PROJECT_NAME}
	Application.cpp
	Renderer.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    "-framework Cocoa"
    "-framework OpenGL"
    "-framework IOKit"
    glfw
    ${OPENGL_gl_LIBRARY}
    GLEW::GLEW
)
