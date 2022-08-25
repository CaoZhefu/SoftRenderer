#include <iostream>

#ifndef STB_IMAGE_WRITE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#endif

#ifndef STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#endif

#include "renderer.h"
#include "mesh.h"

int main()
{
    renderer render(300, 200);

    render.drawTriangle(vec2(180, 50), vec2(150, 1), vec2(70, 180), vec3(255, 255, 0));
    render.filpFrameBuffer();
    render.saveToBmp("out.bmp");

#if defined(WIN32) || defined(_WIN32)
	system("mspaint out.bmp");
#endif

    return 0;
}