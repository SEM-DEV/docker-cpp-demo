#include <iostream>
#include <thread>

int main() {
    std::cout << "Hello!" << std::endl;

    std::cout << "Number of CPU cores: "
              << std::thread::hardware_concurrency()
              << std::endl;

    return 0;
}
