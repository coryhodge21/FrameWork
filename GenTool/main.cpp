#include <iostream>
#include <filesystem>

int main() {

    std::filesystem::create_directory("../FrameWork/newDir");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
