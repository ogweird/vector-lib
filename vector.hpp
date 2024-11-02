/*
	Made for C++ 17 and newer
	Free to use anywhere
	No need to credit
	#FreeTheSource
*/

#pragma once

#include <cmath>
#include <algorithm>

class Vector2 {
public:
	float x = 0.0f;
	float y = 0.0f;

	Vector2() : x(0.0f), y(0.0f) {};
	Vector2(float x, float y) : x(x), y(y) {};

public:
	bool operator == (Vector2& a) {
		return x == a.x && y == a.y;
	}

	bool operator != (Vector2& a) {
		return x != a.x && y != a.y;
	}

	Vector2 operator + (Vector2& a) {
		return { x + a.x, y + a.y };
	}

	Vector2 operator - (Vector2& a) {
		return { x - a.x, y - a.y };
	}

	Vector2 operator * (float a) {
		return { x * a, y * a };
	}

	Vector2 operator / (float a) {
		return { x / a, y / a };
	}

	Vector2 operator += (Vector2& a) {
		x += a.x;
		y += a.y;

		return *this;
	}

	Vector2 operator += (float a) {
		x += a;
		y += a;

		return *this;
	}

	Vector2 operator -= (Vector2& a) {
		x -= a.x;
		y -= a.y;

		return *this;
	}

	Vector2 operator -= (float a) {
		x -= a;
		y -= a;

		return *this;
	}

	Vector2 operator *= (Vector2& a) {
		x *= a.x;
		y *= a.y;

		return *this;
	}

	Vector2 operator *= (float a) {
		x *= a;
		y *= a;

		return *this;
	}

	Vector2 operator /= (Vector2& a) {
		x /= a.x;
		y /= a.y;

		return *this;
	}

	Vector2 operator /= (float a) {
		x /= a;
		y /= a;

		return *this;
	}

public:
	float distance_to(Vector2& a) {
		return std::sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
	}

	float length() {
		return std::sqrt(x * x + y * y);
	}

	void normalize() {
		float a = 1.0f / length();

		x *= a;
		y *= a;
	}

	Vector2 normalized() {
		Vector2 a = *this;
		a.normalize();
		return a;
	}

	float sum() {
		return x + y;
	}

	float dot(Vector2& a) {
		return x * a.x + y * a.y;
	}

	void clamp(float min, float max) {
		x = std::clamp(x, min, max);
		y = std::clamp(y, min, max);;
	}

	Vector2 clamped(float min, float max) {
		Vector2 a = *this;
		a.clamp(min, max);
		return a;
	}
};

class Vector3 {
public:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;

	Vector3() : x(0.0f), y(0.0f), z(0.0f) {};
	Vector3(float x, float y, float z) : x(x), y(y), z(z) {};

public:
	bool operator == (Vector3& a) {
		return x == a.x && y == a.y && z == a.z;
	}

	bool operator != (Vector3& a) {
		return x != a.x && y != a.y && z == a.z;
	}

	Vector3 operator + (Vector3& a) {
		return { x + a.x, y + a.y, z + a.z };
	}

	Vector3 operator - (Vector3& a) {
		return { x - a.x, y - a.y, z - a.z };
	}

	Vector3 operator * (float a) {
		return { x * a, y * a, z * a };
	}

	Vector3 operator / (float a) {
		return { x / a, y / a, z / a };
	}

	Vector3 operator += (Vector3& a) {
		x += a.x;
		y += a.y;
		z += a.z;

		return *this;
	}

	Vector3 operator += (float a) {
		x += a;
		y += a;
		z += a;

		return *this;
	}

	Vector3 operator -= (Vector3& a) {
		x -= a.x;
		y -= a.y;
		z -= a.z;

		return *this;
	}

	Vector3 operator -= (float a) {
		x -= a;
		y -= a;
		z -= a;

		return *this;
	}

	Vector3 operator *= (Vector3& a) {
		x *= a.x;
		y *= a.y;
		z *= a.z;

		return *this;
	}

	Vector3 operator *= (float a) {
		x *= a;
		y *= a;
		z *= a;

		return *this;
	}

	Vector3 operator /= (Vector3& a) {
		x /= a.x;
		y /= a.y;
		z /= a.z;

		return *this;
	}

	Vector3 operator /= (float a) {
		x /= a;
		y /= a;
		z /= a;

		return *this;
	}

public:
	float distance_to(Vector3& a) {
		return std::sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y) + (z - a.z) * (z - a.z));
	}

	float length() {
		return std::sqrt(x * x + y * y + z * z);
	}

	float length_2d() {
		return std::sqrt(x * x + y * y);
	}

	void normalize() {
		float a = 1.0f / length();

		x *= a;
		y *= a;
		z *= a;
	}

	Vector3 normalized() {
		Vector3 a = *this;
		a.normalize();
		return a;
	}

	float dot(Vector3& a) {
		return x * a.x + y * a.y + z * a.z;
	}

	Vector3 cross(Vector3& a) {
		return {
			y * a.z - z * a.y,
			z * a.x - x * a.z,
			x * a.y - y * a.x
		};
	}

	void clamp(float min, float max) {
		x = std::clamp(x, min, max);
		y = std::clamp(y, min, max);
		z = std::clamp(z, min, max);
	}

	Vector3 clamped(float min, float max) {
		Vector3 a = *this;
		a.clamp(min, max);
		return a;
	}
};