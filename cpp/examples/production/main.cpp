// std
#include <iostream>

// miru
#include <miru/config/config.hpp>
#include <miru/query/query.hpp>
#include <miru/query/ros2.hpp>

int main() {
    miru::config::Config config = miru::config::Config::from_agent(
        "../schemas/led.schema.yaml"
    );

    auto params = miru::query::list_params(config);
    std::cout << params << std::endl;

    miru::query::ROS2 ros2(config);
    std::cout << "ros2 parameter: " << ros2.get_parameter("led.brightness_percent") << std::endl;
}