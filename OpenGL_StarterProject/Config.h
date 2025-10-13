#pragma once
#include <string>
#include <filesystem>
#include "glm/glm.hpp"

//SCREEN CONFIGS
constexpr int SCREEN_WIDTH = 1000;
constexpr int SCREEN_HEIGHT = 800;
constexpr glm::vec4 BACKGROUND_COLOUR(1.0f, 1.0f, 1.0f, 1.0f);

//FRAME CONFIGS
constexpr float FPS = 60.0f;

//CAMERA CONFIGS
constexpr float CAMERA_SPEED = 5.0f;
constexpr glm::vec3 CAMERA_STARTING_POSITION(0.0, 0.0f, 3.0f);
constexpr float RENDER_DISTANCE = 0;

//LIGHT CONFIGS
constexpr glm::vec3 LIGHT_SOURCE_POSITION(0.0f, 0.0, -10.0f);
constexpr glm::vec3 LIGHT_SOURCE_COLOR(0.5f, 1.0f, 1.0f);

//MATERIAL CONFIGS
constexpr glm::vec3 AMBIENT_MATERIAL_COLOR(1.0f, 0.5f, 0.31f);
constexpr glm::vec3 DIFFUSE_MATERIAL_COLOR(1.0f, 0.5f, 0.31f);
constexpr glm::vec3 SPECULAR_MATERIAL_COLOR(0.5f, 0.5f, 0.5f);
constexpr float SPECULAR_MATERIAL_SHININESS = 8.0f;

//MODEL FILE PATHS
const std::string MODEL_PATH = std::filesystem::path{"C:/Users/Kiran.Gaurdian/Desktop/Assignments/3D and Shader Programming/OpenGL_StarterProject/OpenGL_StarterProject/3DModels/grass/grass.obj" }.string();

//VERTEX SHADER FILE PATHS
const std::string SIMPLE_OBJECT_VERTEX_SHADER_FILEPATH = std::filesystem::path{"C:/Users/Kiran.Gaurdian/Desktop/Assignments/3D and Shader Programming/OpenGL_StarterProject/OpenGL_StarterProject/shaders/simpleObject.vert"}.string();
const std::string SWAYING_OBJECT_VERTEX_SHADER_FILEPATH = std::filesystem::path{ "C:/Users/Kiran.Gaurdian/Desktop/Assignments/3D and Shader Programming/OpenGL_StarterProject/OpenGL_StarterProject/shaders/swayingObject.vert" }.string();

//FRAGMENT SHADER FILE PATHS
const std::string SIMPLE_OBJECT_FRAGMENT_SHADER_FILEPATH = std::filesystem::path{ "C:/Users/Kiran.Gaurdian/Desktop/Assignments/3D and Shader Programming/OpenGL_StarterProject/OpenGL_StarterProject/shaders/simpleObject.frag" }.string();
const std::string PHONG_LIGHTING_FRAGMENT_SHADER_FILEPATH = std::filesystem::path{ "C:/Users/Kiran.Gaurdian/Desktop/Assignments/3D and Shader Programming/OpenGL_StarterProject/OpenGL_StarterProject/shaders/phongLighting.frag" }.string();
const std::string GRASS_RENDER_FRAGMENT_SHADER_FILEPATH = std::filesystem::path{ "C:/Users/Kiran.Gaurdian/Desktop/Assignments/3D and Shader Programming/OpenGL_StarterProject/OpenGL_StarterProject/shaders/grassRender.frag" }.string();

//TEXTURE FILE PATHS
const std::string CONTAINER_TEXTURE_FILEPATH = "textures/container.png";
const std::string CONTAINER_SPECULAR_TEXTURE_FILEPATH = "textures/container_specular.png";

//GRASS CONFIGS
constexpr unsigned int NUMBER_OF_ROWS = 1000;
constexpr unsigned int NUMBER_OF_COLUMNS = 1000;
constexpr float MIN_LATERAL_RANDOM_OFFSET = 0.5f;
constexpr float MAX_LATERAL_RANDOM_OFFSET = 0.8f;
constexpr float MIN_VERTICAL_RANDOM_OFFSET = 0.0f;
constexpr float MAX_VERTICAL_RANDOM_OFFSET = 0.5f;
constexpr unsigned int NUMBER_OF_OBJECTS = NUMBER_OF_ROWS * NUMBER_OF_COLUMNS;
