
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_47.hpp"
#include "Cisco_IOS_XE_native_48.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc";
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AesCbc128' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-cbc-128";
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc";
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes192' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-192";
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc";
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes256' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-256";
}

Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flood-reduction"; yang_parent_name = "ospf";
}

Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodReduction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::FloodReduction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mtu-ignore"; yang_parent_name = "ospf";
}

Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuIgnore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::MtuIgnore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospf";
}

Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "ospf";
}

Native::Interface::PortChannel::Ipv6::Ospf::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(manet.operation)
	|| is_set(non_broadcast.operation)
	|| is_set(point_to_point.operation)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.operation)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "manet")
    {
        manet = value;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(non_broadcast.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Network::PointToMultipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
}

Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "shutdown"; yang_parent_name = "ospf";
}

Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Ospf::Shutdown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Ipv6::Rip::Rip()
    :
    id{YType::str, "id"},
    enable{YType::empty, "enable"}
    	,
    default_information(std::make_shared<Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation>())
{
    default_information->parent = this;

    yang_name = "rip"; yang_parent_name = "ipv6";
}

Native::Interface::PortChannel::Ipv6::Rip::~Rip()
{
}

bool Native::Interface::PortChannel::Ipv6::Rip::has_data() const
{
    return id.is_set
	|| enable.is_set
	|| (default_information !=  nullptr && default_information->has_data());
}

bool Native::Interface::PortChannel::Ipv6::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(enable.operation)
	|| (default_information !=  nullptr && default_information->has_operation());
}

std::string Native::Interface::PortChannel::Ipv6::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation>();
        }
        return default_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    return children;
}

void Native::Interface::PortChannel::Ipv6::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::DefaultInformation()
    :
    metric{YType::uint8, "metric"},
    route{YType::enumeration, "route"}
{
    yang_name = "default-information"; yang_parent_name = "rip";
}

Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::~DefaultInformation()
{
}

bool Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::has_data() const
{
    return metric.is_set
	|| route.is_set;
}

bool Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route.operation);
}

std::string Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route")
    {
        route = value;
    }
}

Native::Interface::PortChannel::Logging::Logging()
    :
    event(std::make_shared<Native::Interface::PortChannel::Logging::Event>())
{
    event->parent = this;

    yang_name = "logging"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Logging::~Logging()
{
}

bool Native::Interface::PortChannel::Logging::has_data() const
{
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::PortChannel::Logging::has_operation() const
{
    return is_set(operation)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::PortChannel::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::PortChannel::Logging::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Interface::PortChannel::Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Logging::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"},
    trunk_status{YType::empty, "trunk-status"}
    	,
    spanning_tree(nullptr) // presence node
	,subif_link_status(nullptr) // presence node
{
    yang_name = "event"; yang_parent_name = "logging";
}

Native::Interface::PortChannel::Logging::Event::~Event()
{
}

bool Native::Interface::PortChannel::Logging::Event::has_data() const
{
    return bundle_status.is_set
	|| link_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| trunk_status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::PortChannel::Logging::Event::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(link_status.operation)
	|| is_set(nfas_status.operation)
	|| is_set(power_inline_status.operation)
	|| is_set(status.operation)
	|| is_set(trunk_status.operation)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::PortChannel::Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Logging::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.operation)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.operation)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.operation)) leaf_name_data.push_back(trunk_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::PortChannel::Logging::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::PortChannel::Logging::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        children["subif-link-status"] = subif_link_status;
    }

    return children;
}

void Native::Interface::PortChannel::Logging::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "link-status")
    {
        link_status = value;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
    }
}

Native::Interface::PortChannel::Logging::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{
    yang_name = "spanning-tree"; yang_parent_name = "event";
}

Native::Interface::PortChannel::Logging::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::PortChannel::Logging::Event::SpanningTree::has_data() const
{
    return status.is_set;
}

bool Native::Interface::PortChannel::Logging::Event::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation);
}

std::string Native::Interface::PortChannel::Logging::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Logging::Event::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanningTree' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Logging::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Logging::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Logging::Event::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{
    yang_name = "subif-link-status"; yang_parent_name = "event";
}

Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::has_data() const
{
    return ignore_bulk.is_set;
}

bool Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore_bulk.operation);
}

std::string Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubifLinkStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.operation)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Logging::Event::SubifLinkStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
    }
}

Native::Interface::PortChannel::Mdix::Mdix()
    :
    auto_{YType::boolean, "auto"}
{
    yang_name = "mdix"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Mdix::~Mdix()
{
}

bool Native::Interface::PortChannel::Mdix::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::PortChannel::Mdix::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::PortChannel::Mdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdix";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Mdix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mdix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mdix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mdix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
}

Native::Interface::PortChannel::Mop::Mop()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "mop"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Mop::~Mop()
{
}

bool Native::Interface::PortChannel::Mop::has_data() const
{
    return enabled.is_set;
}

bool Native::Interface::PortChannel::Mop::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Native::Interface::PortChannel::Mop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mop";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Mop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Mop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Mop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Mop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Native::Interface::PortChannel::Interface_Qos::Interface_Qos()
    :
    trust(std::make_shared<Native::Interface::PortChannel::Interface_Qos::Trust>())
{
    trust->parent = this;

    yang_name = "interface_qos"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Interface_Qos::~Interface_Qos()
{
}

bool Native::Interface::PortChannel::Interface_Qos::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::PortChannel::Interface_Qos::has_operation() const
{
    return is_set(operation)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::PortChannel::Interface_Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_qos";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Interface_Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Interface_Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::PortChannel::Interface_Qos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Interface_Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::Interface::PortChannel::Interface_Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Interface_Qos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{
    yang_name = "trust"; yang_parent_name = "interface_qos";
}

Native::Interface::PortChannel::Interface_Qos::Trust::~Trust()
{
}

bool Native::Interface::PortChannel::Interface_Qos::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::PortChannel::Interface_Qos::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(device.operation);
}

std::string Native::Interface::PortChannel::Interface_Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Interface_Qos::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.operation)) leaf_name_data.push_back(device.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Interface_Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Interface_Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Interface_Qos::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device")
    {
        device = value;
    }
}

Native::Interface::PortChannel::Standby::Standby()
    :
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"},
    version{YType::enumeration, "version"}
    	,
    delay(std::make_shared<Native::Interface::PortChannel::Standby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "standby"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Standby::~Standby()
{
}

bool Native::Interface::PortChannel::Standby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return bfd.is_set
	|| mac_refresh.is_set
	|| version.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::PortChannel::Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bfd.operation)
	|| is_set(mac_refresh.operation)
	|| is_set(version.operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::PortChannel::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Standby' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.operation)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::PortChannel::Standby::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "standby-list")
    {
        for(auto const & c : standby_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::PortChannel::Standby::UseBia>();
        }
        return use_bia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Interface::PortChannel::Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{
    yang_name = "delay"; yang_parent_name = "standby";
}

Native::Interface::PortChannel::Standby::Delay::~Delay()
{
}

bool Native::Interface::PortChannel::Standby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::PortChannel::Standby::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation)
	|| is_set(reload.operation);
}

std::string Native::Interface::PortChannel::Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "reload")
    {
        reload = value;
    }
}

Native::Interface::PortChannel::Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::PortChannel::Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "standby";
}

Native::Interface::PortChannel::Standby::UseBia::~UseBia()
{
}

bool Native::Interface::PortChannel::Standby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::PortChannel::Standby::UseBia::has_operation() const
{
    return is_set(operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::PortChannel::Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::UseBia::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UseBia' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::PortChannel::Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::UseBia::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{
    yang_name = "scope"; yang_parent_name = "use-bia";
}

Native::Interface::PortChannel::Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::PortChannel::Standby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::PortChannel::Standby::UseBia::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Interface::PortChannel::Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::UseBia::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Scope' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::UseBia::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Timers>())
{
    authentication->parent = this;

    redirect->parent = this;

    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "standby";
}

Native::Interface::PortChannel::Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return group_number.is_set
	|| follow.is_set
	|| ipv6.is_set
	|| mac_address.is_set
	|| name.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(follow.operation)
	|| is_set(ipv6.operation)
	|| is_set(mac_address.operation)
	|| is_set(name.operation)
	|| is_set(priority.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandbyList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.operation)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "follow")
    {
        follow = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list";
}

Native::Interface::PortChannel::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(text.operation)
	|| is_set(word.operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "text")
    {
        text = value;
    }
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication";
}

Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "ip"; yang_parent_name = "standby-list";
}

Native::Interface::PortChannel::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(secondary.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list";
}

Native::Interface::PortChannel::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Preempt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Preempt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Preempt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{
    yang_name = "delay"; yang_parent_name = "preempt";
}

Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation)
	|| is_set(reload.operation)
	|| is_set(sync.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.operation)) leaf_name_data.push_back(sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "reload")
    {
        reload = value;
    }
    if(value_path == "sync")
    {
        sync = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;

    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list";
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(unknown.operation)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.operation)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement != nullptr)
    {
        children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unknown")
    {
        unknown = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect";
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(operation)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertisement' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement";
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication";
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{
    yang_name = "timers"; yang_parent_name = "redirect";
}

Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(advertisement.operation)
	|| is_set(holddown.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.operation)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.operation)) leaf_name_data.push_back(holddown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
    }
    if(value_path == "holddown")
    {
        holddown = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;

    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list";
}

Native::Interface::PortChannel::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::PortChannel::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(operation)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hello-interval"; yang_parent_name = "timers";
}

Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hold-time"; yang_parent_name = "timers";
}

Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::PortChannel::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "track"; yang_parent_name = "standby-list";
}

Native::Interface::PortChannel::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::PortChannel::Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::PortChannel::Standby::StandbyList::Track::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(decrement.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Interface::PortChannel::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Standby::StandbyList::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.operation)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Standby::StandbyList::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "decrement")
    {
        decrement = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Interface::PortChannel::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::PortChannel::AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "access-session"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::AccessSession::~AccessSession()
{
}

bool Native::Interface::PortChannel::AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::PortChannel::AccessSession::has_operation() const
{
    return is_set(operation)
	|| is_set(closed.operation)
	|| is_set(host_mode.operation)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::PortChannel::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::AccessSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessSession' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.operation)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::PortChannel::AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::PortChannel::AccessSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "closed")
    {
        closed = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
}

Native::Interface::PortChannel::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{
    yang_name = "port-control"; yang_parent_name = "access-session";
}

Native::Interface::PortChannel::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::PortChannel::AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::PortChannel::AccessSession::PortControl::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::PortChannel::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::AccessSession::PortControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::AccessSession::PortControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
}

Native::Interface::PortChannel::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::PortChannel::StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::PortChannel::StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::PortChannel::StormControl::Unicast>())
{
    action->parent = this;

    broadcast->parent = this;

    multicast->parent = this;

    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::StormControl::~StormControl()
{
}

bool Native::Interface::PortChannel::StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::PortChannel::StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::PortChannel::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::PortChannel::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::PortChannel::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::PortChannel::StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "storm-control";
}

Native::Interface::PortChannel::StormControl::Action::~Action()
{
}

bool Native::Interface::PortChannel::StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::PortChannel::StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Interface::PortChannel::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Interface::PortChannel::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Level>())
{
    include->parent = this;

    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control";
}

Native::Interface::PortChannel::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::PortChannel::StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::PortChannel::StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::PortChannel::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include != nullptr)
    {
        children["include"] = include;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::PortChannel::StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{
    yang_name = "include"; yang_parent_name = "broadcast";
}

Native::Interface::PortChannel::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast.operation);
}

std::string Native::Interface::PortChannel::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Broadcast::Include::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Include' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Broadcast::Include::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast")
    {
        multicast = value;
    }
}

Native::Interface::PortChannel::StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Interface::PortChannel::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::PortChannel::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::PortChannel::StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::PortChannel::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control";
}

Native::Interface::PortChannel::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::PortChannel::StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::PortChannel::StormControl::Multicast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::PortChannel::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::PortChannel::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::PortChannel::StormControl::Multicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::PortChannel::StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::PortChannel::StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast";
}

Native::Interface::PortChannel::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::PortChannel::StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::PortChannel::StormControl::Multicast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::PortChannel::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Multicast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::PortChannel::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::PortChannel::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::PortChannel::StormControl::Multicast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control";
}

Native::Interface::PortChannel::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::PortChannel::StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::PortChannel::StormControl::Unicast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::PortChannel::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::PortChannel::StormControl::Unicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::StormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;

    pps->parent = this;

    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast";
}

Native::Interface::PortChannel::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::has_operation() const
{
    return is_set(operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannel::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Unicast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannel::StormControl::Unicast::Level::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "threshold"; yang_parent_name = "level";
}

Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::PortChannel::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{
    yang_name = "trust"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Trust::~Trust()
{
}

bool Native::Interface::PortChannel::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::PortChannel::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(device.operation);
}

std::string Native::Interface::PortChannel::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.operation)) leaf_name_data.push_back(device.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device")
    {
        device = value;
    }
}

Native::Interface::PortChannel::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "utd"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Utd::~Utd()
{
}

bool Native::Interface::PortChannel::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::PortChannel::Utd::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Interface::PortChannel::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Utd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Utd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Utd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::PortChannel::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::PortChannel::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::PortChannel::PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::PortChannel::PriorityQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::PortChannel::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::PriorityQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::PortChannel::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::PortChannel::PriorityQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::PortChannel::PriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{
    yang_name = "cos-map"; yang_parent_name = "priority-queue";
}

Native::Interface::PortChannel::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::PortChannel::PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::PortChannel::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos_values.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::PortChannel::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::PriorityQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::PriorityQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::PortChannel::RcvQueue::RcvQueue()
{
    yang_name = "rcv-queue"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::PortChannel::RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::PortChannel::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::RcvQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RcvQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        for(auto const & c : cos_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::PortChannel::RcvQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{
    yang_name = "cos-map"; yang_parent_name = "rcv-queue";
}

Native::Interface::PortChannel::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::PortChannel::RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::PortChannel::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(threshold_id.operation)
	|| is_set(cos_values.operation);
}

std::string Native::Interface::PortChannel::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::RcvQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.operation)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::RcvQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

Native::Interface::PortChannel::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::PortChannel::Peer::Default_>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Peer::~Peer()
{
}

bool Native::Interface::PortChannel::Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::PortChannel::Peer::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::PortChannel::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::PortChannel::Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer";
}

Native::Interface::PortChannel::Peer::Default_::~Default_()
{
}

bool Native::Interface::PortChannel::Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::PortChannel::Peer::Default_::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::PortChannel::Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Peer::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default";
}

Native::Interface::PortChannel::Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Peer::Default_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "ip";
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "dhcp-pool"; yang_parent_name = "address";
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpPool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "pool"; yang_parent_name = "address";
}

Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::PortChannel::PmPath::PmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{
    yang_name = "pm-path"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::PmPath::~PmPath()
{
}

bool Native::Interface::PortChannel::PmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::PortChannel::PmPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::PortChannel::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::PmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::PmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::PortChannel::CarrierDelay::CarrierDelay()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
    	,
    down(std::make_shared<Native::Interface::PortChannel::CarrierDelay::Down>())
	,up(std::make_shared<Native::Interface::PortChannel::CarrierDelay::Up>())
{
    down->parent = this;

    up->parent = this;

    yang_name = "carrier-delay"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::CarrierDelay::~CarrierDelay()
{
}

bool Native::Interface::PortChannel::CarrierDelay::has_data() const
{
    return msec.is_set
	|| seconds.is_set
	|| (down !=  nullptr && down->has_data())
	|| (up !=  nullptr && up->has_data());
}

bool Native::Interface::PortChannel::CarrierDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation)
	|| (down !=  nullptr && down->has_operation())
	|| (up !=  nullptr && up->has_operation());
}

std::string Native::Interface::PortChannel::CarrierDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:carrier-delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::CarrierDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CarrierDelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Native::Interface::PortChannel::CarrierDelay::Down>();
        }
        return down;
    }

    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Native::Interface::PortChannel::CarrierDelay::Up>();
        }
        return up;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(down != nullptr)
    {
        children["down"] = down;
    }

    if(up != nullptr)
    {
        children["up"] = up;
    }

    return children;
}

void Native::Interface::PortChannel::CarrierDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::PortChannel::CarrierDelay::Down::Down()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "down"; yang_parent_name = "carrier-delay";
}

Native::Interface::PortChannel::CarrierDelay::Down::~Down()
{
}

bool Native::Interface::PortChannel::CarrierDelay::Down::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::PortChannel::CarrierDelay::Down::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::PortChannel::CarrierDelay::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::CarrierDelay::Down::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Down' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::CarrierDelay::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::CarrierDelay::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::CarrierDelay::Down::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::PortChannel::CarrierDelay::Up::Up()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "up"; yang_parent_name = "carrier-delay";
}

Native::Interface::PortChannel::CarrierDelay::Up::~Up()
{
}

bool Native::Interface::PortChannel::CarrierDelay::Up::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::PortChannel::CarrierDelay::Up::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::PortChannel::CarrierDelay::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::CarrierDelay::Up::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Up' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::CarrierDelay::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::CarrierDelay::Up::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::CarrierDelay::Up::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::PortChannel::ChannelGroup::ChannelGroup()
    :
    auto_{YType::empty, "auto"},
    link{YType::uint8, "link"},
    mode{YType::enumeration, "mode"},
    non_silent{YType::empty, "non-silent"},
    number{YType::uint16, "number"}
{
    yang_name = "channel-group"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::ChannelGroup::~ChannelGroup()
{
}

bool Native::Interface::PortChannel::ChannelGroup::has_data() const
{
    return auto_.is_set
	|| link.is_set
	|| mode.is_set
	|| non_silent.is_set
	|| number.is_set;
}

bool Native::Interface::PortChannel::ChannelGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation)
	|| is_set(link.operation)
	|| is_set(mode.operation)
	|| is_set(non_silent.operation)
	|| is_set(number.operation);
}

std::string Native::Interface::PortChannel::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:channel-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::ChannelGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChannelGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (non_silent.is_set || is_set(non_silent.operation)) leaf_name_data.push_back(non_silent.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::ChannelGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
    if(value_path == "link")
    {
        link = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "non-silent")
    {
        non_silent = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Interface::PortChannel::Ethernet::Ethernet()
    :
    oam(nullptr) // presence node
{
    yang_name = "ethernet"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Ethernet::~Ethernet()
{
}

bool Native::Interface::PortChannel::Ethernet::has_data() const
{
    return (oam !=  nullptr && oam->has_data());
}

bool Native::Interface::PortChannel::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (oam !=  nullptr && oam->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:ethernet";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oam")
    {
        if(oam == nullptr)
        {
            oam = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam>();
        }
        return oam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(oam != nullptr)
    {
        children["oam"] = oam;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ethernet::Oam::Oam()
    :
    max_rate{YType::uint8, "max-rate"},
    min_rate{YType::uint8, "min-rate"},
    mode{YType::enumeration, "mode"},
    timeout{YType::uint8, "timeout"}
    	,
    link_monitor(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor>())
	,remote_failure(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure>())
	,remote_loopback(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback>())
{
    link_monitor->parent = this;

    remote_failure->parent = this;

    remote_loopback->parent = this;

    yang_name = "oam"; yang_parent_name = "ethernet";
}

Native::Interface::PortChannel::Ethernet::Oam::~Oam()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::has_data() const
{
    return max_rate.is_set
	|| min_rate.is_set
	|| mode.is_set
	|| timeout.is_set
	|| (link_monitor !=  nullptr && link_monitor->has_data())
	|| (remote_failure !=  nullptr && remote_failure->has_data())
	|| (remote_loopback !=  nullptr && remote_loopback->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::has_operation() const
{
    return is_set(operation)
	|| is_set(max_rate.operation)
	|| is_set(min_rate.operation)
	|| is_set(mode.operation)
	|| is_set(timeout.operation)
	|| (link_monitor !=  nullptr && link_monitor->has_operation())
	|| (remote_failure !=  nullptr && remote_failure->has_operation())
	|| (remote_loopback !=  nullptr && remote_loopback->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Oam' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_rate.is_set || is_set(max_rate.operation)) leaf_name_data.push_back(max_rate.get_name_leafdata());
    if (min_rate.is_set || is_set(min_rate.operation)) leaf_name_data.push_back(min_rate.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-monitor")
    {
        if(link_monitor == nullptr)
        {
            link_monitor = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor>();
        }
        return link_monitor;
    }

    if(child_yang_name == "remote-failure")
    {
        if(remote_failure == nullptr)
        {
            remote_failure = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure>();
        }
        return remote_failure;
    }

    if(child_yang_name == "remote-loopback")
    {
        if(remote_loopback == nullptr)
        {
            remote_loopback = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback>();
        }
        return remote_loopback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_monitor != nullptr)
    {
        children["link-monitor"] = link_monitor;
    }

    if(remote_failure != nullptr)
    {
        children["remote-failure"] = remote_failure;
    }

    if(remote_loopback != nullptr)
    {
        children["remote-loopback"] = remote_loopback;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-rate")
    {
        max_rate = value;
    }
    if(value_path == "min-rate")
    {
        min_rate = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::LinkMonitor()
    :
    on{YType::empty, "on"},
    supported{YType::empty, "supported"}
    	,
    frame(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame>())
	,frame_period(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod>())
	,frame_seconds(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds>())
	,high_threshold(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold>())
	,receive_crc(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc>())
	,symbol_period(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod>())
{
    frame->parent = this;

    frame_period->parent = this;

    frame_seconds->parent = this;

    high_threshold->parent = this;

    receive_crc->parent = this;

    symbol_period->parent = this;

    yang_name = "link-monitor"; yang_parent_name = "oam";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::~LinkMonitor()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::has_data() const
{
    return on.is_set
	|| supported.is_set
	|| (frame !=  nullptr && frame->has_data())
	|| (frame_period !=  nullptr && frame_period->has_data())
	|| (frame_seconds !=  nullptr && frame_seconds->has_data())
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (receive_crc !=  nullptr && receive_crc->has_data())
	|| (symbol_period !=  nullptr && symbol_period->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(on.operation)
	|| is_set(supported.operation)
	|| (frame !=  nullptr && frame->has_operation())
	|| (frame_period !=  nullptr && frame_period->has_operation())
	|| (frame_seconds !=  nullptr && frame_seconds->has_operation())
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (receive_crc !=  nullptr && receive_crc->has_operation())
	|| (symbol_period !=  nullptr && symbol_period->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on.is_set || is_set(on.operation)) leaf_name_data.push_back(on.get_name_leafdata());
    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frame")
    {
        if(frame == nullptr)
        {
            frame = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame>();
        }
        return frame;
    }

    if(child_yang_name == "frame-period")
    {
        if(frame_period == nullptr)
        {
            frame_period = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod>();
        }
        return frame_period;
    }

    if(child_yang_name == "frame-seconds")
    {
        if(frame_seconds == nullptr)
        {
            frame_seconds = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds>();
        }
        return frame_seconds;
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "receive-crc")
    {
        if(receive_crc == nullptr)
        {
            receive_crc = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc>();
        }
        return receive_crc;
    }

    if(child_yang_name == "symbol-period")
    {
        if(symbol_period == nullptr)
        {
            symbol_period = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod>();
        }
        return symbol_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(high_threshold != nullptr)
    {
        children["high-threshold"] = high_threshold;
    }

    if(receive_crc != nullptr)
    {
        children["receive-crc"] = receive_crc;
    }

    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "on")
    {
        on = value;
    }
    if(value_path == "supported")
    {
        supported = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Frame()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::~Frame()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Frame' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::High()
    :
    none{YType::empty, "none"},
    thresh{YType::uint16, "thresh"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::~High()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_data() const
{
    return none.is_set
	|| thresh.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(thresh.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.operation)) leaf_name_data.push_back(thresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::Frame::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "thresh")
    {
        thresh = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::FramePeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::~FramePeriod()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-period";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FramePeriod' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-period";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::High()
    :
    f_thresh{YType::uint16, "f-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::~High()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_data() const
{
    return f_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(f_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (f_thresh.is_set || is_set(f_thresh.operation)) leaf_name_data.push_back(f_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FramePeriod::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "f-thresh")
    {
        f_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::FrameSeconds()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-seconds"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::~FrameSeconds()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-seconds";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrameSeconds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "frame-seconds";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::High()
    :
    e_thresh{YType::uint16, "e-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::~High()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_data() const
{
    return e_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(e_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_thresh.is_set || is_set(e_thresh.operation)) leaf_name_data.push_back(e_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::FrameSeconds::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "e-thresh")
    {
        e_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::HighThreshold()
    :
    action(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action>())
{
    action->parent = this;

    yang_name = "high-threshold"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::~HighThreshold()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "high-threshold";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::~Action()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::HighThreshold::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::ReceiveCrc()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>())
{
    threshold->parent = this;

    yang_name = "receive-crc"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::~ReceiveCrc()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-crc";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveCrc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "receive-crc";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::High()
    :
    crc_thresh{YType::uint16, "crc-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::~High()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_data() const
{
    return crc_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(crc_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crc_thresh.is_set || is_set(crc_thresh.operation)) leaf_name_data.push_back(crc_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::ReceiveCrc::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "crc-thresh")
    {
        crc_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::SymbolPeriod()
    :
    window{YType::uint16, "window"}
    	,
    threshold(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitor";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::~SymbolPeriod()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_data() const
{
    return window.is_set
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::has_operation() const
{
    return is_set(operation)
	|| is_set(window.operation)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "symbol-period";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SymbolPeriod' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::Threshold()
    :
    low{YType::uint16, "low"}
    	,
    high(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>())
{
    high->parent = this;

    yang_name = "threshold"; yang_parent_name = "symbol-period";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::~Threshold()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_data() const
{
    return low.is_set
	|| (high !=  nullptr && high->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::High()
    :
    err_thresh{YType::uint16, "err-thresh"},
    none{YType::empty, "none"}
{
    yang_name = "high"; yang_parent_name = "threshold";
}

Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::~High()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_data() const
{
    return err_thresh.is_set
	|| none.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::has_operation() const
{
    return is_set(operation)
	|| is_set(err_thresh.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_thresh.is_set || is_set(err_thresh.operation)) leaf_name_data.push_back(err_thresh.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::LinkMonitor::SymbolPeriod::Threshold::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "err-thresh")
    {
        err_thresh = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::RemoteFailure()
    :
    critical_event(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent>())
	,dying_gasp(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp>())
	,link_fault(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault>())
{
    critical_event->parent = this;

    dying_gasp->parent = this;

    link_fault->parent = this;

    yang_name = "remote-failure"; yang_parent_name = "oam";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::~RemoteFailure()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::has_data() const
{
    return (critical_event !=  nullptr && critical_event->has_data())
	|| (dying_gasp !=  nullptr && dying_gasp->has_data())
	|| (link_fault !=  nullptr && link_fault->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::has_operation() const
{
    return is_set(operation)
	|| (critical_event !=  nullptr && critical_event->has_operation())
	|| (dying_gasp !=  nullptr && dying_gasp->has_operation())
	|| (link_fault !=  nullptr && link_fault->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-failure";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteFailure' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical-event")
    {
        if(critical_event == nullptr)
        {
            critical_event = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent>();
        }
        return critical_event;
    }

    if(child_yang_name == "dying-gasp")
    {
        if(dying_gasp == nullptr)
        {
            dying_gasp = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp>();
        }
        return dying_gasp;
    }

    if(child_yang_name == "link-fault")
    {
        if(link_fault == nullptr)
        {
            link_fault = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault>();
        }
        return link_fault;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical_event != nullptr)
    {
        children["critical-event"] = critical_event;
    }

    if(dying_gasp != nullptr)
    {
        children["dying-gasp"] = dying_gasp;
    }

    if(link_fault != nullptr)
    {
        children["link-fault"] = link_fault;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::CriticalEvent()
    :
    action(std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>())
{
    action->parent = this;

    yang_name = "critical-event"; yang_parent_name = "remote-failure";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::~CriticalEvent()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical-event";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CriticalEvent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "critical-event";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::~Action()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::CriticalEvent::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::DyingGasp()
    :
    action(nullptr) // presence node
{
    yang_name = "dying-gasp"; yang_parent_name = "remote-failure";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::~DyingGasp()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dying-gasp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DyingGasp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "dying-gasp";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::~Action()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::DyingGasp::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::LinkFault()
    :
    action(nullptr) // presence node
{
    yang_name = "link-fault"; yang_parent_name = "remote-failure";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::~LinkFault()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::has_data() const
{
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-fault";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkFault' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::Action()
    :
    error_disable_interface{YType::empty, "error-disable-interface"}
{
    yang_name = "action"; yang_parent_name = "link-fault";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::~Action()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_data() const
{
    return error_disable_interface.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(error_disable_interface.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_disable_interface.is_set || is_set(error_disable_interface.operation)) leaf_name_data.push_back(error_disable_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteFailure::LinkFault::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-disable-interface")
    {
        error_disable_interface = value;
    }
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::RemoteLoopback()
    :
    supported{YType::empty, "supported"},
    timeout{YType::uint8, "timeout"}
{
    yang_name = "remote-loopback"; yang_parent_name = "oam";
}

Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::~RemoteLoopback()
{
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::has_data() const
{
    return supported.is_set
	|| timeout.is_set;
}

bool Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::has_operation() const
{
    return is_set(operation)
	|| is_set(supported.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-loopback";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLoopback' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (supported.is_set || is_set(supported.operation)) leaf_name_data.push_back(supported.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Ethernet::Oam::RemoteLoopback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "supported")
    {
        supported = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::PortChannel::Negotiation::Negotiation()
    :
    auto_{YType::boolean, "auto"}
{
    yang_name = "negotiation"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Negotiation::~Negotiation()
{
}

bool Native::Interface::PortChannel::Negotiation::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::PortChannel::Negotiation::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::PortChannel::Negotiation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:negotiation";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Negotiation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Negotiation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Negotiation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Negotiation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Negotiation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
}

Native::Interface::PortChannel::Synchronous::Synchronous()
    :
    mode{YType::empty, "mode"}
{
    yang_name = "synchronous"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Synchronous::~Synchronous()
{
}

bool Native::Interface::PortChannel::Synchronous::has_data() const
{
    return mode.is_set;
}

bool Native::Interface::PortChannel::Synchronous::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannel::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:synchronous";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Synchronous::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Synchronous' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Synchronous::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Interface::PortChannel::Speed::Speed()
    :
    auto_{YType::empty, "auto"},
    nonegotiate{YType::empty, "nonegotiate"},
    value_10{YType::empty, "value-10"},
    value_100{YType::empty, "value-100"},
    value_1000{YType::empty, "value-1000"},
    value_10000{YType::empty, "value-10000"}
{
    yang_name = "speed"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Speed::~Speed()
{
}

bool Native::Interface::PortChannel::Speed::has_data() const
{
    return auto_.is_set
	|| nonegotiate.is_set
	|| value_10.is_set
	|| value_100.is_set
	|| value_1000.is_set
	|| value_10000.is_set;
}

bool Native::Interface::PortChannel::Speed::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation)
	|| is_set(nonegotiate.operation)
	|| is_set(value_10.operation)
	|| is_set(value_100.operation)
	|| is_set(value_1000.operation)
	|| is_set(value_10000.operation);
}

std::string Native::Interface::PortChannel::Speed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:speed";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Speed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Speed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());
    if (nonegotiate.is_set || is_set(nonegotiate.operation)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (value_10.is_set || is_set(value_10.operation)) leaf_name_data.push_back(value_10.get_name_leafdata());
    if (value_100.is_set || is_set(value_100.operation)) leaf_name_data.push_back(value_100.get_name_leafdata());
    if (value_1000.is_set || is_set(value_1000.operation)) leaf_name_data.push_back(value_1000.get_name_leafdata());
    if (value_10000.is_set || is_set(value_10000.operation)) leaf_name_data.push_back(value_10000.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Speed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Speed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Speed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
    if(value_path == "nonegotiate")
    {
        nonegotiate = value;
    }
    if(value_path == "value-10")
    {
        value_10 = value;
    }
    if(value_path == "value-100")
    {
        value_100 = value;
    }
    if(value_path == "value-1000")
    {
        value_1000 = value;
    }
    if(value_path == "value-10000")
    {
        value_10000 = value;
    }
}

Native::Interface::PortChannel::Plim::Plim()
    :
    ethernet(std::make_shared<Native::Interface::PortChannel::Plim::Ethernet>())
	,qos(std::make_shared<Native::Interface::PortChannel::Plim::Qos>())
{
    ethernet->parent = this;

    qos->parent = this;

    yang_name = "plim"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Plim::~Plim()
{
}

bool Native::Interface::PortChannel::Plim::has_data() const
{
    return (ethernet !=  nullptr && ethernet->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::PortChannel::Plim::has_operation() const
{
    return is_set(operation)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::PortChannel::Plim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:plim";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Plim' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::PortChannel::Plim::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::PortChannel::Plim::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Ethernet::Ethernet()
    :
    vlan(std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan>())
{
    vlan->parent = this;

    yang_name = "ethernet"; yang_parent_name = "plim";
}

Native::Interface::PortChannel::Plim::Ethernet::~Ethernet()
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::PortChannel::Plim::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Ethernet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ethernet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::Vlan()
    :
    filter(std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter>())
{
    filter->parent = this;

    yang_name = "vlan"; yang_parent_name = "ethernet";
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::has_data() const
{
    return (filter !=  nullptr && filter->has_data());
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::has_operation() const
{
    return is_set(operation)
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Ethernet::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Ethernet::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::Filter()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "filter"; yang_parent_name = "vlan";
}

Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::~Filter()
{
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Filter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Plim::Ethernet::Vlan::Filter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::PortChannel::Plim::Qos::Qos()
    :
    input(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input>())
{
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "plim";
}

Native::Interface::PortChannel::Plim::Qos::~Qos()
{
}

bool Native::Interface::PortChannel::Plim::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool Native::Interface::PortChannel::Plim::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Qos::Input::Input()
    :
    queue(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue>())
{
    queue->parent = this;

    yang_name = "input"; yang_parent_name = "qos";
}

Native::Interface::PortChannel::Plim::Qos::Input::~Input()
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::has_data() const
{
    return (queue !=  nullptr && queue->has_data());
}

bool Native::Interface::PortChannel::Plim::Qos::Input::has_operation() const
{
    return is_set(operation)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::Queue()
    :
    strict_priority(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority>())
	,zero(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero>())
{
    strict_priority->parent = this;

    zero->parent = this;

    yang_name = "queue"; yang_parent_name = "input";
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::~Queue()
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::has_data() const
{
    return (strict_priority !=  nullptr && strict_priority->has_data())
	|| (zero !=  nullptr && zero->has_data());
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::has_operation() const
{
    return is_set(operation)
	|| (strict_priority !=  nullptr && strict_priority->has_operation())
	|| (zero !=  nullptr && zero->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Qos::Input::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Qos::Input::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::Input::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-priority")
    {
        if(strict_priority == nullptr)
        {
            strict_priority = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority>();
        }
        return strict_priority;
    }

    if(child_yang_name == "zero")
    {
        if(zero == nullptr)
        {
            zero = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero>();
        }
        return zero;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::Input::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_priority != nullptr)
    {
        children["strict-priority"] = strict_priority;
    }

    if(zero != nullptr)
    {
        children["zero"] = zero;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Qos::Input::Queue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Zero()
    :
    pause(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause>())
{
    pause->parent = this;

    yang_name = "zero"; yang_parent_name = "queue";
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::~Zero()
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::has_operation() const
{
    return is_set(operation)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "zero";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Zero' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{
    yang_name = "pause"; yang_parent_name = "zero";
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::~Pause()
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pause' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Plim::Qos::Input::Queue::Zero::Pause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::StrictPriority()
    :
    pause(std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause>())
{
    pause->parent = this;

    yang_name = "strict-priority"; yang_parent_name = "queue";
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::~StrictPriority()
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::has_data() const
{
    return (pause !=  nullptr && pause->has_data());
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::has_operation() const
{
    return is_set(operation)
	|| (pause !=  nullptr && pause->has_operation());
}

std::string Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StrictPriority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause>();
        }
        return pause;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    return children;
}

void Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::Pause()
    :
    enable{YType::boolean, "enable"},
    threshold{YType::uint8, "threshold"}
{
    yang_name = "pause"; yang_parent_name = "strict-priority";
}

Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::~Pause()
{
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::has_data() const
{
    return enable.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pause' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Plim::Qos::Input::Queue::StrictPriority::Pause::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::PortChannel::Pppoe::Pppoe()
    :
    max_sessions{YType::uint16, "max-sessions"}
    	,
    enable(nullptr) // presence node
{
    yang_name = "pppoe"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Pppoe::~Pppoe()
{
}

bool Native::Interface::PortChannel::Pppoe::has_data() const
{
    return max_sessions.is_set
	|| (enable !=  nullptr && enable->has_data());
}

bool Native::Interface::PortChannel::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(max_sessions.operation)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::Interface::PortChannel::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:pppoe";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sessions.is_set || is_set(max_sessions.operation)) leaf_name_data.push_back(max_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Interface::PortChannel::Pppoe::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    return children;
}

void Native::Interface::PortChannel::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-sessions")
    {
        max_sessions = value;
    }
}

Native::Interface::PortChannel::Pppoe::Enable::Enable()
    :
    group{YType::str, "group"}
{
    yang_name = "enable"; yang_parent_name = "pppoe";
}

Native::Interface::PortChannel::Pppoe::Enable::~Enable()
{
}

bool Native::Interface::PortChannel::Pppoe::Enable::has_data() const
{
    return group.is_set;
}

bool Native::Interface::PortChannel::Pppoe::Enable::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Interface::PortChannel::Pppoe::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Pppoe::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enable' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Pppoe::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Pppoe::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Pppoe::Enable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Interface::PortChannel::Service::Service()
{
    yang_name = "service"; yang_parent_name = "Port-channel";
}

Native::Interface::PortChannel::Service::~Service()
{
}

bool Native::Interface::PortChannel::Service::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::Service::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::PortChannel::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:service";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Service' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::PortChannel::Service::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::PortChannel::Service::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Instance()
    :
    id{YType::uint32, "id"},
    description{YType::str, "description"},
    ethernet{YType::empty, "ethernet"},
    ethernet_evc_name{YType::str, "ethernet-evc-name"},
    evc_name{YType::str, "evc-name"},
    gigabitethernet{YType::empty, "GigabitEthernet"},
    group{YType::uint32, "group"},
    shutdown{YType::empty, "shutdown"},
    trunk{YType::empty, "trunk"}
    	,
    bridge_domain(std::make_shared<Native::Interface::PortChannel::Service::Instance::BridgeDomain>())
	,cfm(std::make_shared<Native::Interface::PortChannel::Service::Instance::Cfm>())
	,encapsulation(std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation>())
	,errdisable(std::make_shared<Native::Interface::PortChannel::Service::Instance::Errdisable>())
	,ethernet_container(std::make_shared<Native::Interface::PortChannel::Service::Instance::EthernetContainer>())
	,ip(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip>())
	,ipv6(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ipv6>())
	,l2protocol(std::make_shared<Native::Interface::PortChannel::Service::Instance::L2Protocol>())
	,mac(std::make_shared<Native::Interface::PortChannel::Service::Instance::Mac>())
	,rewrite(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite>())
	,service_policy(std::make_shared<Native::Interface::PortChannel::Service::Instance::ServicePolicy>())
	,snmp(std::make_shared<Native::Interface::PortChannel::Service::Instance::Snmp>())
	,xconnect(std::make_shared<Native::Interface::PortChannel::Service::Instance::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::PortChannel::Service::Instance::XconnectPwClass>())
{
    bridge_domain->parent = this;

    cfm->parent = this;

    encapsulation->parent = this;

    errdisable->parent = this;

    ethernet_container->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    l2protocol->parent = this;

    mac->parent = this;

    rewrite->parent = this;

    service_policy->parent = this;

    snmp->parent = this;

    xconnect->parent = this;

    xconnect_pw_class->parent = this;

    yang_name = "instance"; yang_parent_name = "service";
}

Native::Interface::PortChannel::Service::Instance::~Instance()
{
}

bool Native::Interface::PortChannel::Service::Instance::has_data() const
{
    return id.is_set
	|| description.is_set
	|| ethernet.is_set
	|| ethernet_evc_name.is_set
	|| evc_name.is_set
	|| gigabitethernet.is_set
	|| group.is_set
	|| shutdown.is_set
	|| trunk.is_set
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (cfm !=  nullptr && cfm->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (ethernet_container !=  nullptr && ethernet_container->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (l2protocol !=  nullptr && l2protocol->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (rewrite !=  nullptr && rewrite->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(description.operation)
	|| is_set(ethernet.operation)
	|| is_set(ethernet_evc_name.operation)
	|| is_set(evc_name.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(group.operation)
	|| is_set(shutdown.operation)
	|| is_set(trunk.operation)
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (cfm !=  nullptr && cfm->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (ethernet_container !=  nullptr && ethernet_container->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (l2protocol !=  nullptr && l2protocol->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (rewrite !=  nullptr && rewrite->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Instance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.operation)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ethernet_evc_name.is_set || is_set(ethernet_evc_name.operation)) leaf_name_data.push_back(ethernet_evc_name.get_name_leafdata());
    if (evc_name.is_set || is_set(evc_name.operation)) leaf_name_data.push_back(evc_name.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.operation)) leaf_name_data.push_back(trunk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::Interface::PortChannel::Service::Instance::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "cfm")
    {
        if(cfm == nullptr)
        {
            cfm = std::make_shared<Native::Interface::PortChannel::Service::Instance::Cfm>();
        }
        return cfm;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Interface::PortChannel::Service::Instance::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "ethernet-container")
    {
        if(ethernet_container == nullptr)
        {
            ethernet_container = std::make_shared<Native::Interface::PortChannel::Service::Instance::EthernetContainer>();
        }
        return ethernet_container;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "l2protocol")
    {
        if(l2protocol == nullptr)
        {
            l2protocol = std::make_shared<Native::Interface::PortChannel::Service::Instance::L2Protocol>();
        }
        return l2protocol;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::PortChannel::Service::Instance::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "rewrite")
    {
        if(rewrite == nullptr)
        {
            rewrite = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite>();
        }
        return rewrite;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::PortChannel::Service::Instance::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::PortChannel::Service::Instance::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::PortChannel::Service::Instance::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::PortChannel::Service::Instance::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(ethernet_container != nullptr)
    {
        children["ethernet-container"] = ethernet_container;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(l2protocol != nullptr)
    {
        children["l2protocol"] = l2protocol;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
    }
    if(value_path == "ethernet-evc-name")
    {
        ethernet_evc_name = value;
    }
    if(value_path == "evc-name")
    {
        evc_name = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trunk")
    {
        trunk = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Encapsulation()
    :
    default_{YType::empty, "default"}
    	,
    dot1ad(std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad>())
	,dot1q(std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q>())
	,priority_tagged(std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged>())
	,untagged(nullptr) // presence node
{
    dot1ad->parent = this;

    dot1q->parent = this;

    priority_tagged->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "instance";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::has_data() const
{
    return default_.is_set
	|| (dot1ad !=  nullptr && dot1ad->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (priority_tagged !=  nullptr && priority_tagged->has_data())
	|| (untagged !=  nullptr && untagged->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (dot1ad !=  nullptr && dot1ad->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (priority_tagged !=  nullptr && priority_tagged->has_operation())
	|| (untagged !=  nullptr && untagged->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encapsulation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1ad")
    {
        if(dot1ad == nullptr)
        {
            dot1ad = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad>();
        }
        return dot1ad;
    }

    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "priority-tagged")
    {
        if(priority_tagged == nullptr)
        {
            priority_tagged = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged>();
        }
        return priority_tagged;
    }

    if(child_yang_name == "untagged")
    {
        if(untagged == nullptr)
        {
            untagged = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged>();
        }
        return untagged;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1ad != nullptr)
    {
        children["dot1ad"] = dot1ad;
    }

    if(dot1q != nullptr)
    {
        children["dot1q"] = dot1q;
    }

    if(priority_tagged != nullptr)
    {
        children["priority-tagged"] = priority_tagged;
    }

    if(untagged != nullptr)
    {
        children["untagged"] = untagged;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Dot1Ad()
    :
    cos{YType::uint8, "cos"},
    dot1q{YType::str, "dot1q"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    id{YType::str, "id"}
    	,
    cos2(std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1ad"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::~Dot1Ad()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dot1q.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dot1q.operation)
	|| is_set(etype.operation)
	|| is_set(exact.operation)
	|| is_set(id.operation)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1ad";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Ad' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto dot1q_name_datas = dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dot1q_name_datas.begin(), dot1q_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dot1q")
    {
        dot1q.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "id")
    {
        id.append(value);
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{
    yang_name = "cos2"; yang_parent_name = "dot1ad";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::~Cos2()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Cos2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Dot1Q()
    :
    cos{YType::uint8, "cos"},
    etype{YType::enumeration, "etype"},
    exact{YType::empty, "exact"},
    id{YType::str, "id"},
    second_dot1q{YType::str, "second-dot1q"},
    vlan_type{YType::enumeration, "vlan-type"}
    	,
    cos2(std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2>())
{
    cos2->parent = this;

    yang_name = "dot1q"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return exact.is_set
	|| vlan_type.is_set
	|| (cos2 !=  nullptr && cos2->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : second_dot1q.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(etype.operation)
	|| is_set(exact.operation)
	|| is_set(id.operation)
	|| is_set(second_dot1q.operation)
	|| is_set(vlan_type.operation)
	|| (cos2 !=  nullptr && cos2->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1Q' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exact.is_set || is_set(exact.operation)) leaf_name_data.push_back(exact.get_name_leafdata());
    if (vlan_type.is_set || is_set(vlan_type.operation)) leaf_name_data.push_back(vlan_type.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());
    auto id_name_datas = id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), id_name_datas.begin(), id_name_datas.end());
    auto second_dot1q_name_datas = second_dot1q.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), second_dot1q_name_datas.begin(), second_dot1q_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos2")
    {
        if(cos2 == nullptr)
        {
            cos2 = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2>();
        }
        return cos2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos2 != nullptr)
    {
        children["cos2"] = cos2;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "etype")
    {
        etype.append(value);
    }
    if(value_path == "exact")
    {
        exact = value;
    }
    if(value_path == "id")
    {
        id.append(value);
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q.append(value);
    }
    if(value_path == "vlan-type")
    {
        vlan_type = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::Cos2()
    :
    cos{YType::uint8, "cos"}
{
    yang_name = "cos2"; yang_parent_name = "dot1q";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::~Cos2()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos2";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cos2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::Cos2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::PriorityTagged()
    :
    etype{YType::enumeration, "etype"}
    	,
    cos_container(std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer>())
{
    cos_container->parent = this;

    yang_name = "priority-tagged"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::~PriorityTagged()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::has_data() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (cos_container !=  nullptr && cos_container->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::has_operation() const
{
    for (auto const & leaf : etype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(etype.operation)
	|| (cos_container !=  nullptr && cos_container->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-tagged";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityTagged' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto etype_name_datas = etype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), etype_name_datas.begin(), etype_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-container")
    {
        if(cos_container == nullptr)
        {
            cos_container = std::make_shared<Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer>();
        }
        return cos_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_container != nullptr)
    {
        children["cos-container"] = cos_container;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "etype")
    {
        etype.append(value);
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::CosContainer()
    :
    cos{YType::uint8, "cos"}
{
    yang_name = "cos-container"; yang_parent_name = "priority-tagged";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::~CosContainer()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-container";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::CosContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos.append(value);
    }
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::Untagged()
{
    yang_name = "untagged"; yang_parent_name = "encapsulation";
}

Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::~Untagged()
{
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::has_data() const
{
    return false;
}

bool Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "untagged";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Untagged' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Encapsulation::Untagged::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Ip::Ip()
    :
    acl(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Acl>())
	,dhcp(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp>())
	,verify(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Verify>())
{
    acl->parent = this;

    dhcp->parent = this;

    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "instance";
}

Native::Interface::PortChannel::Service::Instance::Ip::~Ip()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ip::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Ip::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Ip::Acl::Acl()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "acl"; yang_parent_name = "ip";
}

Native::Interface::PortChannel::Service::Instance::Ip::Acl::~Acl()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Acl::has_data() const
{
    return access_group.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Ip::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ip::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.operation)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ip::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ip::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ip::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group")
    {
        access_group = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Dhcp()
    :
    relay(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay>())
{
    relay->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::has_data() const
{
    return (relay !=  nullptr && relay->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp";
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Information()
    :
    option(std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay";
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{
    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_id.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Ip::Verify::Verify()
    :
    dhcp_snooping{YType::empty, "dhcp-snooping"},
    port_security{YType::empty, "port-security"},
    source{YType::empty, "source"},
    vlan{YType::empty, "vlan"}
{
    yang_name = "verify"; yang_parent_name = "ip";
}

Native::Interface::PortChannel::Service::Instance::Ip::Verify::~Verify()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Verify::has_data() const
{
    return dhcp_snooping.is_set
	|| port_security.is_set
	|| source.is_set
	|| vlan.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Ip::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_snooping.operation)
	|| is_set(port_security.operation)
	|| is_set(source.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ip::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping.is_set || is_set(dhcp_snooping.operation)) leaf_name_data.push_back(dhcp_snooping.get_name_leafdata());
    if (port_security.is_set || is_set(port_security.operation)) leaf_name_data.push_back(port_security.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ip::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-snooping")
    {
        dhcp_snooping = value;
    }
    if(value_path == "port-security")
    {
        port_security = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Ipv6::Ipv6()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"},
    traffic_filter{YType::str, "traffic-filter"}
{
    yang_name = "ipv6"; yang_parent_name = "instance";
}

Native::Interface::PortChannel::Service::Instance::Ipv6::~Ipv6()
{
}

bool Native::Interface::PortChannel::Service::Instance::Ipv6::has_data() const
{
    return in.is_set
	|| out.is_set
	|| traffic_filter.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation)
	|| is_set(traffic_filter.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());
    if (traffic_filter.is_set || is_set(traffic_filter.operation)) leaf_name_data.push_back(traffic_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
    if(value_path == "traffic-filter")
    {
        traffic_filter = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Rewrite()
    :
    ingress(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress>())
{
    ingress->parent = this;

    yang_name = "rewrite"; yang_parent_name = "instance";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::~Rewrite()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::has_data() const
{
    return (ingress !=  nullptr && ingress->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::has_operation() const
{
    return is_set(operation)
	|| (ingress !=  nullptr && ingress->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rewrite' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress>();
        }
        return ingress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ingress != nullptr)
    {
        children["ingress"] = ingress;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Ingress()
    :
    tag(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag>())
{
    tag->parent = this;

    yang_name = "ingress"; yang_parent_name = "rewrite";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::~Ingress()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::has_operation() const
{
    return is_set(operation)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ingress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Tag()
    :
    pop(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop>())
	,push(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push>())
	,translate(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate>())
{
    pop->parent = this;

    push->parent = this;

    translate->parent = this;

    yang_name = "tag"; yang_parent_name = "ingress";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::~Tag()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::has_data() const
{
    return (pop !=  nullptr && pop->has_data())
	|| (push !=  nullptr && push->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::has_operation() const
{
    return is_set(operation)
	|| (pop !=  nullptr && pop->has_operation())
	|| (push !=  nullptr && push->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pop")
    {
        if(pop == nullptr)
        {
            pop = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop>();
        }
        return pop;
    }

    if(child_yang_name == "push")
    {
        if(push == nullptr)
        {
            push = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push>();
        }
        return push;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pop != nullptr)
    {
        children["pop"] = pop;
    }

    if(push != nullptr)
    {
        children["push"] = push;
    }

    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::Pop()
    :
    mode{YType::enumeration, "mode"},
    way{YType::enumeration, "way"}
{
    yang_name = "pop"; yang_parent_name = "tag";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::~Pop()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::has_data() const
{
    return mode.is_set
	|| way.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(way.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (way.is_set || is_set(way.operation)) leaf_name_data.push_back(way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "way")
    {
        way = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::Push()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "push"; yang_parent_name = "tag";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::~Push()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::Translate()
    :
    t1_to_1(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>())
	,t1_to_2(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>())
	,t2_to_1(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>())
	,t2_to_2(std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>())
{
    t1_to_1->parent = this;

    t1_to_2->parent = this;

    t2_to_1->parent = this;

    t2_to_2->parent = this;

    yang_name = "translate"; yang_parent_name = "tag";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::~Translate()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::has_data() const
{
    return (t1_to_1 !=  nullptr && t1_to_1->has_data())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_data())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_data())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_data());
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::has_operation() const
{
    return is_set(operation)
	|| (t1_to_1 !=  nullptr && t1_to_1->has_operation())
	|| (t1_to_2 !=  nullptr && t1_to_2->has_operation())
	|| (t2_to_1 !=  nullptr && t2_to_1->has_operation())
	|| (t2_to_2 !=  nullptr && t2_to_2->has_operation());
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Translate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "t1-to-1")
    {
        if(t1_to_1 == nullptr)
        {
            t1_to_1 = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1>();
        }
        return t1_to_1;
    }

    if(child_yang_name == "t1-to-2")
    {
        if(t1_to_2 == nullptr)
        {
            t1_to_2 = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2>();
        }
        return t1_to_2;
    }

    if(child_yang_name == "t2-to-1")
    {
        if(t2_to_1 == nullptr)
        {
            t2_to_1 = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1>();
        }
        return t2_to_1;
    }

    if(child_yang_name == "t2-to-2")
    {
        if(t2_to_2 == nullptr)
        {
            t2_to_2 = std::make_shared<Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To2>();
        }
        return t2_to_2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(t1_to_1 != nullptr)
    {
        children["t1-to-1"] = t1_to_1;
    }

    if(t1_to_2 != nullptr)
    {
        children["t1-to-2"] = t1_to_2;
    }

    if(t2_to_1 != nullptr)
    {
        children["t2-to-1"] = t2_to_1;
    }

    if(t2_to_2 != nullptr)
    {
        children["t2-to-2"] = t2_to_2;
    }

    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::T1To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "t1-to-1"; yang_parent_name = "translate";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::~T1To1()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-1";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T1To1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::T1To2()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"},
    second_dot1q{YType::uint16, "second-dot1q"}
{
    yang_name = "t1-to-2"; yang_parent_name = "translate";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::~T1To2()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_data() const
{
    return dot1q.is_set
	|| mode.is_set
	|| second_dot1q.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation)
	|| is_set(second_dot1q.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t1-to-2";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T1To2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (second_dot1q.is_set || is_set(second_dot1q.operation)) leaf_name_data.push_back(second_dot1q.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "second-dot1q")
    {
        second_dot1q = value;
    }
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::T2To1()
    :
    dot1q{YType::uint16, "dot1q"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "t2-to-1"; yang_parent_name = "translate";
}

Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::~T2To1()
{
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_data() const
{
    return dot1q.is_set
	|| mode.is_set;
}

bool Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1q.operation)
	|| is_set(mode.operation);
}

std::string Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "t2-to-1";

    return path_buffer.str();

}

const EntityPath Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'T2To1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1q.is_set || is_set(dot1q.operation)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1q")
    {
        dot1q = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Ospf::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Ospf::Neighbor::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::RouteEnum::only {0, "only"};
const Enum::YLeaf Native::Interface::PortChannel::Ipv6::Rip::DefaultInformation::RouteEnum::originate {1, "originate"};

const Enum::YLeaf Native::Interface::PortChannel::Interface_Qos::Trust::DeviceEnum::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::PortChannel::Standby::VersionEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::PortChannel::Standby::VersionEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::PortChannel::Standby::StandbyList::Ipv6Enum::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostModeEnum::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostModeEnum::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostModeEnum::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::PortChannel::AccessSession::HostModeEnum::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::PortChannel::Trust::DeviceEnum::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::PortChannel::Trust::DeviceEnum::cts {1, "cts"};
const Enum::YLeaf Native::Interface::PortChannel::Trust::DeviceEnum::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::PortChannel::Trust::DeviceEnum::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::PortChannel::ChannelGroup::ModeEnum::active {0, "active"};
const Enum::YLeaf Native::Interface::PortChannel::ChannelGroup::ModeEnum::auto_ {1, "auto"};
const Enum::YLeaf Native::Interface::PortChannel::ChannelGroup::ModeEnum::desirable {2, "desirable"};
const Enum::YLeaf Native::Interface::PortChannel::ChannelGroup::ModeEnum::on {3, "on"};
const Enum::YLeaf Native::Interface::PortChannel::ChannelGroup::ModeEnum::passive {4, "passive"};

const Enum::YLeaf Native::Interface::PortChannel::Ethernet::Oam::ModeEnum::active {0, "active"};
const Enum::YLeaf Native::Interface::PortChannel::Ethernet::Oam::ModeEnum::passive {1, "passive"};

const Enum::YLeaf Native::Interface::PortChannel::Pppoe::Enable::GroupEnum::global {0, "global"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::IdEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::Dot1QEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Ad::EtypeEnum::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::IdEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::SecondDot1QEnum::any {0, "any"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::EtypeEnum::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum::Y_0x88A8 {0, "0x88A8"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum::Y_0x9100 {1, "0x9100"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::Dot1Q::VlanTypeEnum::Y_0x9200 {2, "0x9200"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::pppoe_all {2, "pppoe-all"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::pppoe_discovery {3, "pppoe-discovery"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Encapsulation::PriorityTagged::EtypeEnum::pppoe_session {4, "pppoe-session"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::WayEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Pop::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Push::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To1::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T1To2::ModeEnum::symmetric {0, "symmetric"};

const Enum::YLeaf Native::Interface::PortChannel::Service::Instance::Rewrite::Ingress::Tag::Translate::T2To1::ModeEnum::symmetric {0, "symmetric"};


}
}
