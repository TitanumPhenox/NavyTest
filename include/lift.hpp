#pragma once

void set_lift(int input);
void zero_lift();
int get_lift();
int get_lift_vel();
extern int lift_port;

void set_lift_position(int target);

void lift_control();
void lift_control_manuel();
