compile: debug
	
debug: src/cpp/*.cpp src/headers/*.hpp
	g++ -I include/glm -I include/Vulkan -I include/GLFW -I src/headers -o bin/debug/output.exe src/cpp/*.cpp -L lib -lglfw3 -lvulkan-1 -lgdi32 && start bin/debug/output.exe $(info DEBUG MODE)
# use -mwindows to not show window

release: src/cpp/*.cpp src/headers/*.hpp
	g++ -I include/glm -I include/Vulkan -I include/GLFW -I src/headers -o bin/release/output.exe src/cpp/*.cpp -L lib -lglfw3 -lvulkan-1 -lgdi32 -lshell32 -luser32 -mwindows && start bin/release/output.exe $(info RELEASE MODE)
# use -mwindows to not show window