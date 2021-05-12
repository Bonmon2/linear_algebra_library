#include "linear_algebra.hpp"
#include <iostream>
#include <string.h>

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

float vec3::dot(const vec3& vec3_1, const vec3& vec3_2) {
    return vec3_1.x * vec3_2.x + vec3_1.y * vec3_2.y + vec3_1.z * vec3_2.z;
}

vec3 vec3::cross(const vec3& vec3_1, const vec3& vec3_2) {
    vec3 tempVec3(0, 0, 0);

    tempVec3.x = vec3_1.y * vec3_2.z - vec3_1.z * vec3_2.y;
    tempVec3.y = vec3_1.z * vec3_2.x - vec3_1.x * vec3_2.z;
    tempVec3.z = vec3_1.x * vec3_2.y - vec3_1.y * vec3_2.x;

    return tempVec3;
}

/*vec3::operator char*() {
    char* tempStr = "[";
    char* x;
    char* y;
    char* z;
    strcat(tempStr, (char *)sprintf(x,"0.3f",vec3::x));
    strcat(tempStr, (char *)",");
    strcat(tempStr, (char *)sprintf(y, "0.3f",vec3::y));
    strcat(tempStr, (char *)",");
    strcat(tempStr, (char *)sprintf(z, "0.3f",vec3::z));
    strcat(tempStr, (char *)"]");

    std::cout << "working" << std::endl;

    return tempStr;
}*/