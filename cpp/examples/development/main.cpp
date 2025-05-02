// std
#include <iostream>

// miru
#include <miru/version.hpp>
#include <miru/commit.hpp>
#include <miru/config/config.hpp>
#include <miru/query/query.hpp>
#include <miru/query/ros2.hpp>

int main() {
    std::cout << "miru version: " << MIRU_VERSION << std::endl;
    std::cout << "miru commit: " << MIRU_COMMIT << std::endl;

    miru::config::Config config = miru::config::Config::from_file(
        "../schemas/led.schema.yaml",
        "../configs/led.yaml"
    );
    miru::query::ROS2 ros2(config);

    auto params = miru::query::list_params(config);
    std::cout << params << std::endl;

    std::cout << "ros2 parameter: " << ros2.get_parameter("led.brightness_percent") << std::endl;
}