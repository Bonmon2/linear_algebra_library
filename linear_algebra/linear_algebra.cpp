#include "linear_algebra.hpp"
#include <iostream>

vec3::vec3(float _x, float _y, float _z) {
    vec3::x = _x;
    vec3::y = _y;
    vec3::z = _z;
}

vec3 vec3::operator + (const vec3& vec3_2) {
    vec3 vec3_1(0, 0, 0);

    vec3_1.x = vec3::x + vec3_2.x;
    vec3_1.y = vec3::y + vec3_2.y;
    vec3_1.z = vec3::z +vec3_2.z;

    return vec3_1;
}

vec3 vec3::operator - (const vec3& vec3_2) {
    vec3 vec3_1(0, 0, 0);

    vec3_1.x = vec3::x - vec3_2.x;
    vec3_1.y = vec3::y - vec3_2.y;
    vec3_1.z = vec3::z - vec3_2.z;

    return vec3_1;
}

float vec3::operator * (const vec3& vec3_2) {
    return vec3::x * vec3_2.x + vec3::y * vec3_2.y + vec3::z * vec3_2.z;
}

/*vec3::operator char*() {
    //float x = vec3::x;
    char* tempx;
    sprintf(tempx, "%.3f", vec3::x);
    char* temp = "[" + (char*)vec3::x + "," + vec3::y << "," << vec3::z << "]";
    //return 
}*/