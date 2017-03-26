//
//  utils.h
//  tinyEngine
//
//  Created by lixuefeng on 2017/3/9.
//  Copyright © 2017年 sdlwlxf. All rights reserved.
//

#ifndef utils_h
#define utils_h

#include "tiny3D.h"

const char* getFilePath(const char* name, const char* type);
int generate_mipmaps(texture_t *texture, float gamma);
int make_mesh_and_material_by_obj(vertex_t **mesh, int *mesh_num, material_t **materials, int *materials_num, const char *name);
int make_texture_by_png(texture_t *texture, const char *name, bool mipmap);

#endif /* utils_h */
