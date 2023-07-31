/*====================================================================
BSD 2-Clause License

Copyright (c) 2023, Ruler
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
====================================================================*/

#include <iostream>
#include "ab_tree.h"

int main(void)
{
    // Creates a AB-Tree containing integers.
    ab_tree<int> abt({ 7, 1, 8, 0 });
    // Prints all elements of the AB-Tree.
    std::cout << "ab-tree = { ";
    for (auto itr = abt.cbegin(); itr != abt.cend(); ++itr)
        std::cout << *itr << ", ";
    std::cout << "}; \n";

    // Subscript operation.
    abt[1] = -1;
    // Inserts tow elements.
    abt.insert(2, { 10, 16 });

    // Prints all elements of the AB-Tree.
    std::cout << "ab-tree = { ";
    for (const auto& ele : abt)
        std::cout << ele << ", ";
    std::cout << "}; \n";

    return 0;
}
