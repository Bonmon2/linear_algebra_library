#pragma once

class vec3 {
public:
    vec3(float _x, float _y, float _z);

    vec3 operator + (const vec3& vec3_2);

private:

public:
    float x;
    float y;
    float z;
};