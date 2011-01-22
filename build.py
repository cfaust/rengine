 #  Copyright (C) 2011 Cody Faust <icewield3r@gmail.com>
 #
 #  This program is free software: you can redistribute it and/or modify
 #  it under the terms of the GNU General Public License as published by
 #  the Free Software Foundation, either version 3 of the License, or
 #  (at your option) any later version.
 #
 #  This program is distributed in the hope that it will be useful,
 #  but WITHOUT ANY WARRANTY; without even the implied warranty of
 #  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 #  GNU General Public License for more details.
 #
 #  You should have received a copy of the GNU General Public License
 #  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 # 
 #  Maintained by:
 #      Cody Faust <icewield3r@gmail.com>
 #
 
import platform
import os
userOS = platform.system()
print "Remember to include needed SDL files in your source directory!\n"
print "WARNING: WINDOWS AND LINUX COMMANDS DO NOT SUPPORT SDL_image YET\n" 
print "Your OS is: ", userOS

sourceName = raw_input("Please enter the exact name of the source file: ")
if userOS == "Windows":
	compileCommand = "g++ -o rengine.exe " + sourceName + " -lmingw32 -lSDLmain -lSDL"
	os.system(compileCommand)
elif userOS == "Linux":
	compileCommand = "g++ -o rengine " + sourceName + " -lSDL"
	os.system(compileCommand)
# Darwin command has SDL_image support added, need to add this to Windows/Linux commands
elif userOS == "Darwin": 
	compileCommand = "g++ -I/Library/Frameworks/SDL.framework/Headers -I/Library/Frameworks/SDL_image.framework/Headers " + sourceName + " SDLmain.m -framework SDL -framework SDL_image -framework Cocoa -o rengine"
	os.system(compileCommand)
