/*
 * Copyright 2010 Alexey Michurin
 *
 * This file is part of FairSeaBattle.
 *
 * FairSeaBattle is free software: you can redistribute
 * it and/or modify it under the terms of the
 * GNU General Public License as published by
 * the Free Software Foundation, either version 3
 * of the License, or (at your option) any later version.
 *
 * FairSeaBattle is distributed in the hope that
 * it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the
 * GNU General Public License along with FairSeaBattle.
 * If not, see <http://www.gnu.org/licenses/>.
 */
#include "map_io.h"

#include <iostream>
#include <iomanip>

std::ostream & operator<< (std::ostream& os, const BSMap<BSFlags> & m) {
    os << "BSMap<BSFlags>()";
    for(BSRect::iter p(m.get_rect()); p(); ++p) {
        if ((*p).x() == 0) {
            os << std::endl;
        }
        os << *m[*p]; // << " ";
    }
    os << std::endl;
    return os;
}

std::ostream & operator<< (std::ostream& os, const BSMap<int> & m) {
    os << "BSMap<int>()";
    for(BSRect::iter p(m.get_rect()); p(); ++p) {
        if ((*p).x() == 0) {
            os << std::endl;
        }
        os << std::setw(2) << *m[*p]; // << " ";
    }
    os << std::endl;
    return os;
}
