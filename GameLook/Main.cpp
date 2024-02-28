#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>


int main() {
	if (!glfwInit()) {
		std::cerr << "Failed to initialse GLFW\n";
		return -1;
	}

	GLFWwindow* window = glfwCreateWindow(640, 480, "Simple OpenGL Client", NULL, NULL);

	if (!window) {
		std::cerr << "Failed to create GLFW Window\n";
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);

		glfwPollEvents();
	}
}