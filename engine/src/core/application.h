#pragma once

#include "defines.h"

typedef struct application_config {
    // window starting x pos
    i16 start_pos_x;

    // window starting y pos
    i16 start_pos_y;
    
    // window starting width
    i16 start_width;

    // window starting height
    i16 start_height;
    
    // application name
    char* name;
} application_config;

KAPI b8 application_create(application_config* config);

KAPI b8 application_run();