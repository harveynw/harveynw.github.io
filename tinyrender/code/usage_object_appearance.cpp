// Adding a solid color
object->setColor(glm::vec3(1.0, 0.5, 0.3));

// Adding an image texture
auto texture = std::make_shared<engine::Texture2D::common::BasicImgRepeatingTexture>(engine->getContext().get(), "path/to/image.png");
object->setTexture(texture);