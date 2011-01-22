/*  Copyright (C) 2011 Cody Faust <icewield3r@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *  Maintained by:
 *      Cody Faust <icewield3r@gmail.com>
 */
 
#ifdef __APPLE__
#include "SDL/SDL.h"
#include "SDL_image/SDL_image.h"
#include <string>
#include <iostream>
#endif

#ifdef _WIN32
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <string>
#endif

#ifdef linux
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <string>
#endif


void GetSettings(int &width, int &height, std::string &filename);
bool InitializeSDL(int width, int height);
bool LoadFiles( std::string filename );
SDL_Surface *LoadImage( std::string filename );
void ApplySurface( int xCoordinate, int yCoordinate, SDL_Surface *source, SDL_Surface *destination );
void CleanUp();
