
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_112.hpp"
#include "Cisco_IOS_XE_native_113.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::Distance::~Distance()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Default_::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::Itr::~Itr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Service::Ipv4::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Service::Ipv4::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv4::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Service::Ipv4::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv4::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::Etr::~Etr()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Service::Ipv4::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Service::Ipv4::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Service::Ipv4::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Service::Ipv4::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::Distance::~Distance()
{
}

bool Native::Router::Lisp::Service::Ipv4::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv4::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Service::Ipv4::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Service::Ipv4::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Service::Ipv4::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Service::Ipv4::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Service::Ipv4::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Service::Ipv4::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv4::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Service::Ipv4::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv4";
}

Native::Router::Lisp::Service::Ipv4::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv4::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Service::Ipv4::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv4::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv4::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Ipv6()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_>())
	,distance(std::make_shared<Native::Router::Lisp::Service::Ipv6::Distance>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,proxy_itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Service::Ipv6::RouteExport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ipv6::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ipv6::SolicitMapRequest>())
{
    database_mapping->parent = this;

    default_->parent = this;

    distance->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ipv6"; yang_parent_name = "service";
}

Native::Router::Lisp::Service::Ipv6::~Ipv6()
{
}

bool Native::Router::Lisp::Service::Ipv6::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Service::Ipv6::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Service::Ipv6::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ipv6::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ipv6::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Default_()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    map_request_source{YType::str, "map-request-source"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping>())
	,distance(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Distance>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable>())
	,map_cache(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCache>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit>())
	,map_cache_persistent(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,proxy_itr(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr>())
	,route_export(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::RouteExport>())
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest>())
{
    database_mapping->parent = this;

    distance->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache->parent = this;

    map_cache_limit->parent = this;

    map_cache_persistent->parent = this;

    proxy_itr->parent = this;

    route_export->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::Default_::~Default_()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::has_data() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| map_request_source.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::has_operation() const
{
    for (std::size_t index=0; index<use_petr.size(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(encapsulation.operation)
	|| is_set(map_request_source.operation)
	|| is_set(proxy_etr.operation)
	|| is_set(sgt.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.operation)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "use-petr")
    {
        for(auto const & c : use_petr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::UsePetr>();
        c->parent = this;
        use_petr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache != nullptr)
    {
        children["map-cache"] = map_cache;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_cache_persistent != nullptr)
    {
        children["map-cache-persistent"] = map_cache_persistent;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(proxy_itr != nullptr)
    {
        children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        children["route-export"] = route_export;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    for (auto const & c : use_petr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::Itr::~Itr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::~Etr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::Distance::~Distance()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Default_::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Service::Ipv6::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ipv6::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::Itr::~Itr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Service::Ipv6::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv6::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Service::Ipv6::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::Etr::~Etr()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

Native::Router::Lisp::Service::Ipv6::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "map-cache-limit"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapCacheLimit::has_data() const
{
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::MapCacheLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_map_cache_entries.operation)
	|| is_set(reserve_list.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapCacheLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.operation)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.operation)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapCacheLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::has_data() const
{
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::has_operation() const
{
    return is_set(operation)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_request != nullptr)
    {
        children["map-request"] = map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapResolver::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver";
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-resolver/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request";
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-resolver/map-request/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List>())
	,registered(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;

    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::has_data() const
{
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-resolver/map-request/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(registered != nullptr)
    {
        children["registered"] = registered;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source";
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(operation)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-resolver/map-request/validate/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "list"; yang_parent_name = "registered";
}

Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Router::Lisp::Service::Ipv6::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::has_data() const
{
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::has_operation() const
{
    return is_set(operation)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_register != nullptr)
    {
        children["map-register"] = map_register;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapServer::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::has_data() const
{
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::has_operation() const
{
    return is_set(operation)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register";
}

Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-server/map-register/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{
    yang_name = "source"; yang_parent_name = "validate";
}

Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::has_data() const
{
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allowed_locator.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-server/map-register/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.operation)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
    }
}

Native::Router::Lisp::Service::Ipv6::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "site-registration"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Service::Ipv6::SiteRegistration::has_data() const
{
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::SiteRegistration::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::SiteRegistration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::SiteRegistration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{
    yang_name = "solicit-map-request"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::has_data() const
{
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation)
	|| is_set(max_per_entry.operation)
	|| is_set(suppression_time.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.operation)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.operation)) leaf_name_data.push_back(suppression_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::SolicitMapRequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
    }
}

Native::Router::Lisp::Service::Ipv6::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{
    yang_name = "distance"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::Distance::~Distance()
{
}

bool Native::Router::Lisp::Service::Ipv6::Distance::has_data() const
{
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::Distance::has_operation() const
{
    return is_set(operation)
	|| is_set(alt.operation)
	|| is_set(away.operation)
	|| is_set(dyn_eid.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.operation)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.operation)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.operation)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alt")
    {
        alt = value;
    }
    if(value_path == "away")
    {
        away = value;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv6::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
    	,
    away_eids(std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapCache::has_data() const
{
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::MapCache::has_operation() const
{
    return is_set(operation)
	|| is_set(site_registration.operation)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.operation)) leaf_name_data.push_back(site_registration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(away_eids != nullptr)
    {
        children["away-eids"] = away_eids;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
    }
}

Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{
    yang_name = "away-eids"; yang_parent_name = "map-cache";
}

Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::has_data() const
{
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::has_operation() const
{
    return is_set(operation)
	|| is_set(send_map_request.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/map-cache/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.operation)) leaf_name_data.push_back(send_map_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapCache::AwayEids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
    }
}

Native::Router::Lisp::Service::Ipv6::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "map-cache-persistent"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Service::Ipv6::MapCachePersistent::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::MapCachePersistent::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::MapCachePersistent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::MapCachePersistent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Router::Lisp::Service::Ipv6::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "proxy-itr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Service::Ipv6::ProxyItr::has_data() const
{
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::ProxyItr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv6_addr.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::ProxyItr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::ProxyItr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

Native::Router::Lisp::Service::Ipv6::RouteExport::RouteExport()
    :
    away_eids{YType::empty, "away-eids"},
    site_registrations{YType::empty, "site-registrations"}
{
    yang_name = "route-export"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Service::Ipv6::RouteExport::has_data() const
{
    return away_eids.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::RouteExport::has_operation() const
{
    return is_set(operation)
	|| is_set(away_eids.operation)
	|| is_set(site_registrations.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::RouteExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (away_eids.is_set || is_set(away_eids.operation)) leaf_name_data.push_back(away_eids.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.operation)) leaf_name_data.push_back(site_registrations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::RouteExport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "away-eids")
    {
        away_eids = value;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
    }
}

Native::Router::Lisp::Service::Ipv6::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
    	,
    priority(std::make_shared<Native::Router::Lisp::Service::Ipv6::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "ipv6";
}

Native::Router::Lisp::Service::Ipv6::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Service::Ipv6::UsePetr::has_data() const
{
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Service::Ipv6::UsePetr::has_operation() const
{
    return is_set(operation)
	|| is_set(locator_address.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Service::Ipv6::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr" <<"[locator-address='" <<locator_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::UsePetr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.operation)) leaf_name_data.push_back(locator_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Service::Ipv6::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Lisp::Service::Ipv6::UsePetr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
    }
}

Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{
    yang_name = "priority"; yang_parent_name = "use-petr";
}

Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::has_data() const
{
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::has_operation() const
{
    return is_set(operation)
	|| is_set(priority_value.operation)
	|| is_set(weight.operation);
}

std::string Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.operation)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ipv6::UsePetr::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Ethernet()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Service::Ethernet::DatabaseMapping>())
	,default_(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_>())
	,encapsulation(std::make_shared<Native::Router::Lisp::Service::Ethernet::Encapsulation>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ethernet::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ethernet::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ethernet::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ethernet::ItrEnable>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ethernet::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ethernet::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ethernet::SolicitMapRequest>())
{
    database_mapping->parent = this;

    default_->parent = this;

    encapsulation->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "ethernet"; yang_parent_name = "service";
}

Native::Router::Lisp::Service::Ethernet::~Ethernet()
{
}

bool Native::Router::Lisp::Service::Ethernet::has_data() const
{
    return map_request_source.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Service::Ethernet::has_operation() const
{
    return is_set(operation)
	|| is_set(map_request_source.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ethernet::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Service::Ethernet::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ethernet::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ethernet::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ethernet::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ethernet::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ethernet::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ethernet::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ethernet::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ethernet::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ethernet::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ethernet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Default_()
    :
    map_request_source{YType::str, "map-request-source"}
    	,
    database_mapping(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping>())
	,encapsulation(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation>())
	,etr(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr>())
	,etr_enable(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable>())
	,itr(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Itr>())
	,itr_enable(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable>())
	,map_cache_limit(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::MapCacheLimit>())
	,map_resolver(nullptr) // presence node
	,map_server(nullptr) // presence node
	,site_registration(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::SiteRegistration>())
	,solicit_map_request(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::SolicitMapRequest>())
{
    database_mapping->parent = this;

    encapsulation->parent = this;

    etr->parent = this;

    etr_enable->parent = this;

    itr->parent = this;

    itr_enable->parent = this;

    map_cache_limit->parent = this;

    site_registration->parent = this;

    solicit_map_request->parent = this;

    yang_name = "default"; yang_parent_name = "ethernet";
}

Native::Router::Lisp::Service::Ethernet::Default_::~Default_()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::has_data() const
{
    return map_request_source.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data());
}

bool Native::Router::Lisp::Service::Ethernet::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(map_request_source.operation)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation());
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_request_source.is_set || is_set(map_request_source.operation)) leaf_name_data.push_back(map_request_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_mapping != nullptr)
    {
        children["database-mapping"] = database_mapping;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(etr != nullptr)
    {
        children["etr"] = etr;
    }

    if(etr_enable != nullptr)
    {
        children["etr-enable"] = etr_enable;
    }

    if(itr != nullptr)
    {
        children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        children["itr-enable"] = itr_enable;
    }

    if(map_cache_limit != nullptr)
    {
        children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        children["solicit-map-request"] = solicit_map_request;
    }

    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-request-source")
    {
        map_request_source = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::Encapsulation()
    :
    vxlan{YType::empty, "vxlan"}
{
    yang_name = "encapsulation"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::~Encapsulation()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::has_data() const
{
    return vxlan.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(vxlan.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlan.is_set || is_set(vxlan.operation)) leaf_name_data.push_back(vxlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vxlan")
    {
        vxlan = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::has_operation() const
{
    return is_set(operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{
    yang_name = "limit"; yang_parent_name = "database-mapping";
}

Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::has_data() const
{
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(warning_threshold.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/database-mapping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.operation)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::DatabaseMapping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Itr::Itr()
{
    yang_name = "itr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ethernet::Default_::Itr::~Itr()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Itr::has_data() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.size(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Itr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        for(auto const & c : map_resolver)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver>();
        c->parent = this;
        map_resolver.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : map_resolver)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Itr::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "map-resolver"; yang_parent_name = "itr";
}

Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::has_data() const
{
    return ip_addr.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/itr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Itr::MapResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{
    yang_name = "itr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::has_data() const
{
    return itr.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(itr.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.operation)) leaf_name_data.push_back(itr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::ItrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "itr")
    {
        itr = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{
    yang_name = "etr-enable"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::has_data() const
{
    return etr.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::has_operation() const
{
    return is_set(operation)
	|| is_set(etr.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.operation)) leaf_name_data.push_back(etr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::EtrEnable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etr")
    {
        etr = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
    	,
    accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::~Etr()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::has_data() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.size(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(map_cache_ttl.operation)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.operation)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    if(child_yang_name == "map-server")
    {
        for(auto const & c : map_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer>();
        c->parent = this;
        map_server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_map_request_mapping != nullptr)
    {
        children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    for (auto const & c : map_server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
    	,
    key(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::has_data() const
{
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(proxy_reply.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server" <<"[ip-addr='" <<ip_addr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.operation)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key()
    :
    key_0(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>())
	,key_6(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>())
	,key_7(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>())
	,key_pwd(std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>())
{
    key_0->parent = this;

    key_6->parent = this;

    key_7->parent = this;

    key_pwd->parent = this;

    yang_name = "key"; yang_parent_name = "map-server";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::has_data() const
{
    return (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data())
	|| (key_pwd !=  nullptr && key_pwd->has_data());
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::has_operation() const
{
    return is_set(operation)
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation())
	|| (key_pwd !=  nullptr && key_pwd->has_operation());
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_0 != nullptr)
    {
        children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        children["key-7"] = key_7;
    }

    if(key_pwd != nullptr)
    {
        children["key-pwd"] = key_pwd;
    }

    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    hash_function{YType::enumeration, "hash-function"},
    unc_pwd{YType::str, "unc-pwd"}
{
    yang_name = "key-pwd"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_data() const
{
    return hash_function.is_set
	|| unc_pwd.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_function.operation)
	|| is_set(unc_pwd.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyPwd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (unc_pwd.is_set || is_set(unc_pwd.operation)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-0"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_data() const
{
    return ak_0.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_0.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.operation)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-6"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_data() const
{
    return ak_6.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_6.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.operation)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"}
{
    yang_name = "key-7"; yang_parent_name = "key";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_data() const
{
    return ak_7.is_set
	|| hash_function.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(operation)
	|| is_set(ak_7.operation)
	|| is_set(hash_function.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key7' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.operation)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.operation)) leaf_name_data.push_back(hash_function.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
    }
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{
    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr";
}

Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_mappping.operation)
	|| is_set(verify.operation);
}

std::string Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";

    return path_buffer.str();

}

const EntityPath Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/service/ethernet/default/etr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.operation)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.operation)) leaf_name_data.push_back(verify.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Lisp::Service::Ethernet::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
    }
    if(value_path == "verify")
    {
        verify = value;
    }
}

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::EncapsulationEnum::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::EncapsulationEnum::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::EncapsulationEnum::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::EncapsulationEnum::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Default_::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ipv6::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::KeyPwd::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key0::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key6::HashFunctionEnum::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunctionEnum::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Service::Ethernet::Default_::Etr::MapServer::Key::Key7::HashFunctionEnum::sha2 {1, "sha2"};


}
}
