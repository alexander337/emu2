/*********************************************************************************
 *
 * This file is part of eSRO.
 *
 * eSRO is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * eSRO is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright ⓒ 2013  Rafael Dominguez (npcdoom)
 *
 *********************************************************************************/

#ifndef __SRDL_HOTKEYS_QUERY_HPP__
#define __SRDL_HOTKEYS_QUERY_HPP__

#include <hotkey.hpp>
#include <mysql++/mysql++.h>

namespace DB {
namespace HOTKEY {

class Insert
{
public:

    void operator() (mysqlpp::Connection &conn, const uint32_t CharID, const Hotkey& hotkey);
};

class Remove
{
public:

    void operator () (mysqlpp::Connection &conn, const uint32_t CharID);

    void operator () (mysqlpp::Connection &conn, const uint32_t CharID, const uint8_t pos);
};

class Select
{
public:

    std::vector<Hotkey> operator() (mysqlpp::Connection& conn, const uint32_t CharID);
};

}   }

#endif //__SRDL_HOTKEYS_QUERY_HPP__
