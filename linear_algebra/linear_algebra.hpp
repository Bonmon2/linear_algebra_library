#pragma once

class vec3 {
public:
    vec3(float _x, float _y, float _z);

    vec3 operator + (const vec3& vec3_2);
    vec3 operator - (const vec3& vec3_2);
    static float      dot(const vec3& vec3_1, const vec3& vec3_2);
    static vec3     cross(const vec3& vec3_1, const vec3& vec3_2);
    operator char*();

private:

public:
    float x;
    float y;
    float z;
};