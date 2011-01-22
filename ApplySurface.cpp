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
 
#include "headers.h"

void ApplySurface( int xCoordinate, int yCoordinate, SDL_Surface *source, SDL_Surface *destination )
{
    // Create a temporary rectangle to hold the offsets
    SDL_Rect offset;
    
    // Give the offsets to the rectangle
    offset.x = xCoordinate;
    offset.y = yCoordinate;
    
    // Blit the surface
    SDL_BlitSurface( source, NULL, destination, &offset );
}