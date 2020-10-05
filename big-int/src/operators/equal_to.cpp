/**
 * Boost Software License - Version 1.0 - August 17th, 2003
 * Permission is hereby granted, free of charge, to any person
 * or organization obtaining a copy of the software and
 * accompanying documentation covered by this license
 * (the "Software") to use, reproduce, display, distribute,
 * execute, and transmit the Software, and to prepare derivative
 * works of the Software, and to permit third-parties to whom the
 * Software is furnished to do so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement,
 * including the above license grant, this restriction and the following
 * disclaimer, must be included in all copies of the Software, in whole or
 * in part, and all derivative works of the Software, unless such copies
 * or derivative works are solely in the form of machine-executable
 * object code generated by a source language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, TITLE AND
 * NON-INFRINGEMENT. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR ANYONE
 * DISTRIBUTING THE SOFTWARE BE LIABLE FOR ANY DAMAGES OR OTHER LIABILITY,
 * WHETHER IN CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#include <istream>
#include <ostream>

#include "../bigint.hpp"

namespace libbig
{
bool largeInt::operator==(const largeInt &z)
{
    if (this->sign != z.sign)
    {
        return false;
    }
    if (this->number.length() != z.number.length())
    {
        return false;
    }
    for (int i = 0; i < this->number.length(); i++)
    {
        // iterates through all digits of both inputs
        // if two digits are not the same, returns false
        if (this->number[i] != z.number[i])
        {
            return false;
        }
    }
    return true;
}

bool largeInt::operator==(int z)
{
    // checks if both inputs have the same sign (positive or negative)
    if (this->sign != (z >= 0))
    {
        return false;
    }
    // checks if inputs have a different number of digits
    // by converting the absolume value of z to a string
    std::string zStr = std::to_string(abs(z));
    if (this->number.length() != zStr.length())
    {
        return false;
    }
    for (int i = 0; i < this->number.length(); i++)
    {
        // iterates through all digits of both inputs
        // if two digits are not the same, returns false
        if (this->number[i] != zStr[i])
        {
            return false;
        }
    }
    return true;
}

bool largeInt::operator==(long long int z)
{
    // checks if both inputs have the same sign (positive or negative)
    if (this->sign != (z >= 0))
    {
        return false;
    }
    // checks if inputs have a different number of digits
    // by converting the absolume value of z to a string
    std::string zStr = std::to_string(abs(z));
    if (this->number.length() != zStr.length())
    {
        return false;
    }
    for (int i = 0; i < this->number.length(); i++)
    {
        // iterates through all digits of both inputs
        // if two digits are not the same, returns false
        if (this->number[i] != zStr[i])
        {
            return false;
        }
    }
    return true;
}

} // namespace libbig