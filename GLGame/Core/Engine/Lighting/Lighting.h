#pragma once

#include <thread>
#include <GL/glew.h>

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Core\OpenGL Classes\GLDebug\GLDebug.h"

namespace GLGame
{
	class Light
	{
	public : 

		void DrawLight();

		glm::vec3 position;
		glm::vec4 color;
		float radius;

	};
}