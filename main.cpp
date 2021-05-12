#include <iostream>

#include "linear_algebra.hpp"

int main() {
    std::cout << "hello" << std::endl;

    vec3 my1Vec = vec3(1, -7, 1);
    vec3 my2Vec = vec3(5, 2, 4);
    vec3 sumvec = my1Vec - my2Vec;
    std::cout << my1Vec.x << std::endl;
    std::cout << sumvec.x << sumvec.y << sumvec.z << std::endl;
    std::cout << vec3::dot(my1Vec, my2Vec) << std::endl;

    //std::cout << "my vec" << my1Vec << std::endl;

    vec3 crossVec = vec3::cross(my1Vec, my2Vec);
    std::cout << crossVec.x << crossVec.y << crossVec.z << std::endl;
}