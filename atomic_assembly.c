// *************************************************************************
//
// Copyright (C) 2021  yaofei zheng
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#include <stdio.h>
#include <stdatomic.h>
atomic_int a;
int b;
void aa(void)
{
    atomic_store(&a, 1);
}

void bb(void)
{
    b = 1;
}

int main()
{
    aa();
    bb();
    return 0;
}