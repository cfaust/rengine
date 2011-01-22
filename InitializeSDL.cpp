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
extern SDL_Surface *screen;
extern int SCREEN_BPP;

bool InitializeSDL(int width, int height)
{
    // Check if SDL initialized correctly, if it didn't it will return a -1
    if ( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return false;
    }
    
    // This sets up a window with the correct width, height, color depth
    screen = SDL_SetVideoMode( width, height, SCREEN_BPP, SDL_SWSURFACE );
    
    // This checks that the screen was successfully created
    if ( screen == NULL )
    {
        return false;
    }
    
    // We need to check the users OS for the window caption
    std::string userSystem = "undefined";
    
    // Check the users OS
    // TODO: FIND A BETTER WAY TO DO THIS
    #ifdef __APPLE__
    	userSystem = "rEngine MAC OSX";
    #endif
    #ifdef _WIN32
    	userSystem = "rEngine WINDOWS";
    #endif
    #ifdef linux
    	userSystem = "rEngine LINUX";
    #endif
    
    // Set the window caption using the information from the preprocessor
    SDL_WM_SetCaption( userSystem.c_str(), NULL );
    
    // If we reach here everything was successfull, therefore return true
    return true;
}