// This file contains all the macros required by the ENGINE. 

#define GLGAME_APPLICATION
#define GLGAME 
#define GLGAME_DEBUG
#define GLGAME_VERSION "0.0.1"

#define GLGAME_DEFAULT_BGSHADER_VERTEX		"Core\\Shaders\\Engine\\DefaultVertexShader.glsl"
#define GLGAME_DEFAULT_BGSHADER_FRAGMENT	"Core\\Shaders\\Engine\\DefaultFragmentShader.glsl"
#define GLGAME_DEFAULT_SE_VERTEX			"Core\\Shaders\\Engine\\DefaultVertexShader.glsl"
#define GLGAME_DEFAULT_SE_FRAGMENT			"Core\\Shaders\\Engine\\DefaultFragmentShader.glsl"
#define GLGAME_DEFAULT_OBJECT_VERTEX		"Core\\Shaders\\Engine\\DefaultVertexShader.glsl"
#define GLGAME_DEFAULT_OBJECT_FRAGMENT		"Core\\Shaders\\Engine\\DefaultFragmentShader.glsl"
#define GLGAME_DEFAULT_BATCH_VERTEX			"Core\\Shaders\\Engine\\DefaultBatchVertexShader.glsl"
#define GLGAME_DEFAULT_BATCH_FRAGMENT		"Core\\Shaders\\Engine\\DefaultBatchFragShader.glsl"
#define GLGAME_DEFAULT_LIGHT_VERTEX			"Core\\Shaders\\Engine\\DefaultLightingVertexShader.glsl"
#define GLGAME_DEFAULT_LIGHT_FRAGMENT		"Core\\Shaders\\Engine\\DefaultLightingFragShader.glsl"
#define GLGAME_DEFAULT_PARTICLE_VERTEX		"Core\\Shaders\\Engine\\DefaultParticleVertexShader.glsl"
#define GLGAME_DEFAULT_PARTICLE_FRAGMENT	"Core\\Shaders\\Engine\\DefaultParticleFragmentShader.glsl"

#define GLGAME_RESIZABLE	true

// Not really used in the game. The amount of layers you can use are unlimited. (I used an std::map)
#define GLGAME_MAX_LAYERS	9

#define GLGAME_INT_GLFW_KEY_COUNT 1024

// OpenGL Version 
#define GLGAME_OPENGL_VERSION_MAJOR 3
#define GLGAME_OPENGL_VERSION_MINOR 2

#define GLGAME_DEFAULT_WINDOW_SIZE_W 800
#define GLGAME_DEFAULT_WINDOW_SIZE_H 600

#define GLGAME_SCENE_FILE_HEADER "%GLGAME_SCENE_FILE_V01%"