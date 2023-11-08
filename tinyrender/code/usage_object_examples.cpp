// OBJ file
auto obj = std::make_shared<engine::Mesh>("path/to/file.obj");

// Basic geometry
auto cube = std::make_shared<engine::Cube>();
auto pyramid = std::make_shared<engine::Pyramid>(glm::vec3 center, float height, float width);
auto triangle = std::make_shared<engine::Triangle>(glm::vec3 a, glm::vec3 b, glm::vec3 c);
auto quad = std::make_shared<engine::Quad>(glm::vec3 a, glm::vec3 b, glm::vec3 c, glm::vec3 d);

// Wave Simulation
auto waveSim = std::make_shared<engine::WaveSim>(float height, float width);

// Voxel rendering
auto voxels = std::make_shared<engine::Voxels>();