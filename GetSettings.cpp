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

void GetSettings(int &width, int &height, std::string &filename)
{
    std::cout << "Please enter the width of your screen in pixels." << std::endl;
    std::cin >> width;
    std::cout << "Please enter the height of your screen in pixels." << std::endl;
    std::cin >> height;
    std::cout << "Please enter the filename of the image you would like to display." << std::endl;
    std::cin >> filename;
}