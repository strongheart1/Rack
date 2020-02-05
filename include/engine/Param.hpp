#pragma once
#include <jansson.h>

#include <common.hpp>
#include <math.hpp>


namespace rack {
namespace engine {


struct Param {
	/** Unstable API. Use setValue() and getValue() instead. */
	float value = 0.f;

	float getValue() {
		return value;
	}

	void setValue(float value) {
		this->value = value;
	}

	json_t* toJson();
	void fromJson(json_t* rootJ);
};


} // namespace engine
} // namespace rack
