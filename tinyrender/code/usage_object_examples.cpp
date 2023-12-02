// OBJ file
auto obj = std::make_shared<tinyrender::Mesh>("path/to/file.obj");

// Basic geometry
auto cube = std::make_shared<tinyrender::Cube>();
auto pyramid = std::make_shared<tinyrender::Pyramid>(glm::vec3 center, float height, float width);
auto triangle = std::make_shared<tinyrender::Triangle>(glm::vec3 a, glm::vec3 b, glm::vec3 c);
auto quad = std::make_shared<tinyrender::Quad>(glm::vec3 a, glm::vec3 b, glm::vec3 c, glm::vec3 d);

// Wave Simulation
auto waveSim = std::make_shared<tinyrender::WaveSim>(float height, float width);

// Voxel rendering
auto voxels = std::make_shared<tinyrender::Voxels>();