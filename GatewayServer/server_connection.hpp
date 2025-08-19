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

#ifndef __GATEWAY_SERVER_CONNECTION_HPP__
#define __GATEWAY_SERVER_CONNECTION_HPP__

/// SRNL INCLUDES
#include <server_connection_interface.hpp>

class Server;

namespace srv
{

enum CONNECTION_STATES
{
	STATE_HANDSHAKE,
	STATE_VERSION,
	STATE_LOGIN,
};

class Connection : public srv::IConnection
{
public:

    Connection (const uint32_t ID, boost::asio::io_service &io_service, Server *srv);

    virtual ~Connection ();
};

}

#endif //__GATEWAY_SERVER_CONNECTION_HPP__
