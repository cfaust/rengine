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

int SCREEN_BPP = 32;

// The surfaces
SDL_Surface *image = NULL;
SDL_Surface *screen = NULL;

// Create a new event
SDL_Event event;

int main( int argc, char* args[] )
{   
    // We need variables to hold the screen resolution
    int width  			 = 800;
    int height 			 = 600;
    std::string filename = "blank.txt";
    
    // Call the GetSettings function which will ask the user to input a resolution
    GetSettings(width, height, filename);
    
    // Debugging statements: Check to make sure the GetSettings function returns its value
    std::cout << "Your screen resolution is: " << width << "x" << height << std::endl;
    std::cout << "The file you wish to load is: " << filename << std::endl;
    
    // Initialize SDL and return 1 to the Operating System if it fails
    if (InitializeSDL( width, height ) == false)
    {
        return 1;
    }
    
    // Load image and return 1 to the Operating System if it fails
    if ( LoadFiles( filename ) == false )
    {
        return 1;
    }
    
    // Stick (bit) the surface onto the screen
    ApplySurface( 0, 0 , image, screen);
    
    // Update the screen to display our changes
    if ( SDL_Flip( screen ) == -1 )
    {
        return 1;
    }
    
    // This is to determine if the user wants to quit, if its true they clicked the close button
    bool bQuit = false;
    
    while ( bQuit == false )
    {
        while( SDL_PollEvent( &event ) )
        {
            // This is what actually checks if the user has closed out of the window
            if ( event.type == SDL_QUIT )
            {
                // Quit the program now
                bQuit = true;
            }
        }
    }
    
    CleanUp();
    
    return 0;
}
