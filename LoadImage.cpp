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

SDL_Surface *LoadImage( std::string filename )
{
    // Temporary pointer to store the image
    SDL_Surface *loadedImage = NULL;
    
    // This is the optimized image that we want to use
    SDL_Surface *optimizedImage = NULL;
    
    // Now we want to actually load the image
    // We can do this with the IMG_Load function
    loadedImage = IMG_Load( filename.c_str() );
    
    // Next we make sure the image was loaded correctly
    // If it was we want to optimized it for efficiency's sake
    if ( loadedImage != NULL )
    {
        // Create the actual optimized image
        optimizedImage = SDL_DisplayFormat( loadedImage );
        
        // Get rid of the unoptimized image from memory
        SDL_FreeSurface( loadedImage );
        
        // Return the optimized image
        return optimizedImage;
    }
}