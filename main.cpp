#include <iostream>

#include "linear_algebra.hpp"

int main() {
    std::cout << "hello" << std::endl;

    vec3 my1Vec = vec3(2, 4, 5);
    vec3 my2Vec = vec3(1, 2, 3);
    vec3 sumvec = my1Vec - my2Vec;
    std::cout << my1Vec.x << std::endl;
    std::cout << sumvec.x << sumvec.y << sumvec.z;
    //std::cout << my1Vec * my2Vec;
}