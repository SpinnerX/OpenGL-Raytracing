#include <iostream>
#include <GLFW/glfw3.h>

int main(){
	if(!glfwInit()){
		printf("GLFWInit() is not initialized\n");
		return -1;
	}

	GLFWwindow* window = glfwCreateWindow(600, 480, "Test Window", nullptr, nullptr);

	if(!window){
		printf("GLFWwindow* window errored out!");
		return -1;
	}

	while(!glfwWindowShouldClose(window)){
		glfwPollEvents();
		glfwSwapBuffers(window);
	}


	return 0;
}
