#pragma once

class vec3 {
public:
    vec3(float _x, float _y, float _z);

    vec3 operator + (const vec3& vec3_2);
    vec3 operator - (const vec3& vec3_2);
    float operator * (const vec3& vec3_2);
    operator char*() {return "please implement";}

private:

public:
    static float x;
    static float y;
    static float z;
};