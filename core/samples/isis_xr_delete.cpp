/*  ----------------------------------------------------------------
 Copyright 2016 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/
#include <iostream>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>

#include "ydk/types.hpp"
#include "ydk/netconf_provider.hpp"
#include "ydk/crud_service.hpp"

#include "ydk_cisco_ios_xr/Cisco_IOS_XR_clns_isis_cfg.hpp"

#include "args_parser.h"

using namespace ydk;
using namespace ydk::Cisco_IOS_XR_clns_isis_cfg;
using namespace std;

int main(int argc, char* argv[])
{
	vector<string> args = parse_args(argc, argv);
	if(args.empty()) return 1;
	string host, username, password;
	int port;

	username = args[0]; password = args[1]; host = args[2]; port = stoi(args[3]);

	bool verbose=(args[4]=="--verbose");
	if(verbose)
	{
		boost::log::core::get()->set_filter( boost::log::trivial::severity >= boost::log::trivial::debug );
	}
	else
	{
		boost::log::core::get()->set_filter( boost::log::trivial::severity >= boost::log::trivial::error );
	}

	try
	{
		NetconfServiceProvider provider{host, username, password, port};
		CrudService crud{};

		auto isis = make_unique<Isis>();
		bool reply = crud.delete_(provider, *isis);
		if(reply) cout << "Delete operation success" << endl << endl; else cout << "Operation failed" << endl << endl;
	}
	catch(YCPPError & e)
	{
		cerr << "Error details: "<<boost::diagnostic_information(e)<<endl;
	}
}
