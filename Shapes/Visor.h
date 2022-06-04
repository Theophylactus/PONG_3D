#pragma once

#include "Shape.h"

// Fancy name for "player
class Visor : public Shape {
private:
	void setup_vertices();
	
public:
	// Non-inherited members
	void listen_events();
	
	double view_azimuth = 0;
	double view_sin_azimuth = 0;
	double view_cos_azimuth = 1;
	double view_altitude = 0;
	double view_sin_altitude = 0;
	double view_cos_altitude = 1;
	
	bool paused = false;
	
	Visor(const Vector& v, const Vector& p, double grav_a = 0, double rad = 3, SDL_Color c = WHITE, double dens = 1)
	 : Shape(v, p, grav_a, rad, c, dens) {
		setup_vertices();
	}
};
