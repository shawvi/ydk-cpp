
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_39.hpp"
#include "Cisco_IOS_XE_native_42.hpp"
#include "Cisco_IOS_XE_native_41.hpp"
#include "Cisco_IOS_XE_native_40.hpp"
#include "Cisco_IOS_XE_native_44.hpp"
#include "Cisco_IOS_XE_native_43.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::ServiceEngine::Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::Delay::~Delay()
{
}

bool Native::Interface::ServiceEngine::Standby::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::ServiceEngine::Standby::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::ServiceEngine::Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::ServiceEngine::Standby::UseBia::~UseBia()
{
}

bool Native::Interface::ServiceEngine::Standby::UseBia::has_data() const
{
    if (is_presence_container) return true;
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::ServiceEngine::Standby::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::ServiceEngine::Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(scope != nullptr)
    {
        _children["scope"] = scope;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Standby::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Standby::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::ServiceEngine::Standby::UseBia::Scope::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set;
}

bool Native::Interface::ServiceEngine::Standby::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
        ,
    authentication(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Authentication>())
    , ip(nullptr) // presence node
    , preempt(nullptr) // presence node
    , redirect(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect>())
    , timers(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Timers>())
    , track(this, {"number"})
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<track.len(); index++)
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

bool Native::Interface::ServiceEngine::Standby::StandbyList::has_operation() const
{
    for (std::size_t index=0; index<track.len(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(follow.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list";
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.yfilter)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        auto ent_ = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Track>();
        ent_->parent = this;
        track.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(redirect != nullptr)
    {
        _children["redirect"] = redirect;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    count_ = 0;
    for (auto ent_ : track.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "follow")
    {
        follow = value;
        follow.value_namespace = name_space;
        follow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "follow")
    {
        follow.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Authentication()
    :
    word{YType::str, "word"},
    text{YType::str, "text"}
        ,
    md5(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| text.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(text.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "word" || name == "text")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
        ,
    key_string(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
        ,
    advertisement(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement>())
    , timers(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::has_data() const
{
    if (is_presence_container) return true;
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertisement != nullptr)
    {
        _children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
        ,
    key_string(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::has_data() const
{
    if (is_presence_container) return true;
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
        advertisement.value_namespace = name_space;
        advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertisement")
    {
        advertisement.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval>())
    , hold_time(std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hello_interval != nullptr)
    {
        _children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        _children["hold-time"] = hold_time;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    seconds{YType::uint8, "seconds"},
    msec{YType::uint16, "msec"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| msec.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "msec")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Track::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::ServiceEngine::Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Standby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Standby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Standby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::ServiceEngine::AccessSession::AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
        ,
    port_control(std::make_shared<Native::Interface::ServiceEngine::AccessSession::PortControl>())
    , control_direction(std::make_shared<Native::Interface::ServiceEngine::AccessSession::ControlDirection>())
{
    port_control->parent = this;
    control_direction->parent = this;

    yang_name = "access-session"; yang_parent_name = "Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::AccessSession::~AccessSession()
{
}

bool Native::Interface::ServiceEngine::AccessSession::has_data() const
{
    if (is_presence_container) return true;
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data())
	|| (control_direction !=  nullptr && control_direction->has_data());
}

bool Native::Interface::ServiceEngine::AccessSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation())
	|| (control_direction !=  nullptr && control_direction->has_operation());
}

std::string Native::Interface::ServiceEngine::AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::AccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::ServiceEngine::AccessSession::PortControl>();
        }
        return port_control;
    }

    if(child_yang_name == "control-direction")
    {
        if(control_direction == nullptr)
        {
            control_direction = std::make_shared<Native::Interface::ServiceEngine::AccessSession::ControlDirection>();
        }
        return control_direction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port_control != nullptr)
    {
        _children["port-control"] = port_control;
    }

    if(control_direction != nullptr)
    {
        _children["control-direction"] = control_direction;
    }

    return _children;
}

void Native::Interface::ServiceEngine::AccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "closed")
    {
        closed = value;
        closed.value_namespace = name_space;
        closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::AccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "closed")
    {
        closed.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::AccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "control-direction" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::ServiceEngine::AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::ServiceEngine::AccessSession::PortControl::has_data() const
{
    if (is_presence_container) return true;
    return auto_.is_set;
}

bool Native::Interface::ServiceEngine::AccessSession::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::ServiceEngine::AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::AccessSession::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::AccessSession::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::AccessSession::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::AccessSession::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::ServiceEngine::AccessSession::ControlDirection::ControlDirection()
    :
    in{YType::empty, "in"}
{

    yang_name = "control-direction"; yang_parent_name = "access-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::AccessSession::ControlDirection::~ControlDirection()
{
}

bool Native::Interface::ServiceEngine::AccessSession::ControlDirection::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set;
}

bool Native::Interface::ServiceEngine::AccessSession::ControlDirection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::ServiceEngine::AccessSession::ControlDirection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::AccessSession::ControlDirection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::AccessSession::ControlDirection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::AccessSession::ControlDirection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::AccessSession::ControlDirection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::AccessSession::ControlDirection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::AccessSession::ControlDirection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::StormControl()
    :
    action(std::make_shared<Native::Interface::ServiceEngine::StormControl::Action>())
    , broadcast(std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast>())
    , multicast(std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast>())
    , unicast(std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "storm-control"; yang_parent_name = "Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::~StormControl()
{
}

bool Native::Interface::ServiceEngine::StormControl::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::ServiceEngine::StormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::ServiceEngine::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::ServiceEngine::StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        _children["unicast"] = unicast;
    }

    return _children;
}

void Native::Interface::ServiceEngine::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Action::~Action()
{
}

bool Native::Interface::ServiceEngine::StormControl::Action::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap")
    {
        trap = value;
        trap.value_namespace = name_space;
        trap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trap")
    {
        trap.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Include>())
    , level(std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::ServiceEngine::StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(include != nullptr)
    {
        _children["include"] = include;
    }

    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Include::has_data() const
{
    if (is_presence_container) return true;
    return multicast.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold>())
    , bps(std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps>())
    , pps(std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::ServiceEngine::StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::ServiceEngine::StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::StormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold>())
    , bps(std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps>())
    , pps(std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::ServiceEngine::StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::ServiceEngine::StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::StormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::Level()
    :
    threshold(std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold>())
    , bps(std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps>())
    , pps(std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps>())
{
    threshold->parent = this;
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data())
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation())
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::ServiceEngine::StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    if(bps != nullptr)
    {
        _children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        _children["pps"] = pps;
    }

    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "bps" || name == "pps")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::Threshold()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::Bps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::Pps()
    :
    rising_threshold{YType::str, "rising-threshold"},
    falling_threshold{YType::str, "falling-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::has_data() const
{
    if (is_presence_container) return true;
    return rising_threshold.is_set
	|| falling_threshold.is_set;
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rising_threshold.yfilter)
	|| ydk::is_set(falling_threshold.yfilter);
}

std::string Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());
    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::StormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rising-threshold" || name == "falling-threshold")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Trust::~Trust()
{
}

bool Native::Interface::ServiceEngine::Trust::has_data() const
{
    if (is_presence_container) return true;
    return device.is_set;
}

bool Native::Interface::ServiceEngine::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::ServiceEngine::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::ServiceEngine::PriorityQueue::PriorityQueue()
    :
    out{YType::empty, "out"}
        ,
    cos_map(std::make_shared<Native::Interface::ServiceEngine::PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "priority-queue"; yang_parent_name = "Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::PriorityQueue::~PriorityQueue()
{
}

bool Native::Interface::ServiceEngine::PriorityQueue::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::ServiceEngine::PriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::ServiceEngine::PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::PriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::ServiceEngine::PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cos_map != nullptr)
    {
        _children["cos-map"] = cos_map;
    }

    return _children;
}

void Native::Interface::ServiceEngine::PriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::PriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::PriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::ServiceEngine::PriorityQueue::CosMap::CosMap()
    :
    id{YType::uint8, "id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "priority-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::ServiceEngine::PriorityQueue::CosMap::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::ServiceEngine::PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::ServiceEngine::PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::PriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::PriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::ServiceEngine::PriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::PriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::ServiceEngine::RcvQueue::RcvQueue()
    :
    cos_map(this, {"queue_id", "threshold_id"})
{

    yang_name = "rcv-queue"; yang_parent_name = "Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::RcvQueue::~RcvQueue()
{
}

bool Native::Interface::ServiceEngine::RcvQueue::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cos_map.len(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::ServiceEngine::RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.len(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::ServiceEngine::RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::RcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        auto ent_ = std::make_shared<Native::Interface::ServiceEngine::RcvQueue::CosMap>();
        ent_->parent = this;
        cos_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cos_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::ServiceEngine::RcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::RcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::RcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::ServiceEngine::RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "rcv-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::ServiceEngine::RcvQueue::CosMap::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::ServiceEngine::RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(queue_id.yfilter)
	|| ydk::is_set(threshold_id.yfilter)
	|| ydk::is_set(cos_values.yfilter);
}

std::string Native::Interface::ServiceEngine::RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    ADD_KEY_TOKEN(queue_id, "queue-id");
    ADD_KEY_TOKEN(threshold_id, "threshold-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::RcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::RcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
        queue_id.value_namespace = name_space;
        queue_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
        threshold_id.value_namespace = name_space;
        threshold_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

void Native::Interface::ServiceEngine::RcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "queue-id")
    {
        queue_id.yfilter = yfilter;
    }
    if(value_path == "threshold-id")
    {
        threshold_id.yfilter = yfilter;
    }
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::RcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Peer::Peer()
    :
    default_(std::make_shared<Native::Interface::ServiceEngine::Peer::Default>())
{
    default_->parent = this;

    yang_name = "peer"; yang_parent_name = "Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Peer::~Peer()
{
}

bool Native::Interface::ServiceEngine::Peer::has_data() const
{
    if (is_presence_container) return true;
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::ServiceEngine::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::ServiceEngine::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::ServiceEngine::Peer::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Peer::Default::Default()
    :
    ip(std::make_shared<Native::Interface::ServiceEngine::Peer::Default::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Peer::Default::~Default()
{
}

bool Native::Interface::ServiceEngine::Peer::Default::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::ServiceEngine::Peer::Default::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::ServiceEngine::Peer::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Peer::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Peer::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::ServiceEngine::Peer::Default::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Peer::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Peer::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Peer::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Peer::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Peer::Default::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::ServiceEngine::Peer::Default::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Peer::Default::Ip::~Ip()
{
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::ServiceEngine::Peer::Default::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Peer::Default::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Peer::Default::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::ServiceEngine::Peer::Default::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Peer::Default::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
        ,
    dhcp_pool(nullptr) // presence node
    , pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::Peer::Default::Ip::Address::~Address()
{
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::ServiceEngine::Peer::Default::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Peer::Default::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Peer::Default::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Peer::Default::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp_pool != nullptr)
    {
        _children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    return _children;
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::has_data() const
{
    if (is_presence_container) return true;
    return pools.is_set;
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::has_data() const
{
    if (is_presence_container) return true;
    return pools.is_set;
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::Peer::Default::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::ServiceEngine::PmPath::PmPath()
    :
    name{YType::str, "name"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "pm-path"; yang_parent_name = "Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::ServiceEngine::PmPath::~PmPath()
{
}

bool Native::Interface::ServiceEngine::PmPath::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| interface_id.is_set;
}

bool Native::Interface::ServiceEngine::PmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::ServiceEngine::PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ServiceEngine::PmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::ServiceEngine::PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::ServiceEngine::PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::ServiceEngine::PmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ServiceEngine::PmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::ServiceEngine::PmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::GigabitEthernet()
    :
    name{YType::str, "name"},
    media_type{YType::enumeration, "media-type"},
    port_type{YType::enumeration, "port-type"},
    description{YType::str, "description"},
    mac_address{YType::str, "mac-address"},
    shutdown{YType::empty, "shutdown"},
    keepalive{YType::boolean, "keepalive"},
    if_state{YType::enumeration, "if-state"},
    delay{YType::uint32, "delay"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    cisco_ios_xe_ethernet_macsec{YType::empty, "Cisco-IOS-XE-ethernet:macsec"},
    cisco_ios_xe_switch_macsec{YType::empty, "Cisco-IOS-XE-switch:macsec"},
    nat66{YType::enumeration, "Cisco-IOS-XE-nat:nat66"}
        ,
    switchport_conf(std::make_shared<Native::Interface::GigabitEthernet::SwitchportConf>())
    , switchport(std::make_shared<Native::Interface::GigabitEthernet::Switchport>())
    , stackwise_virtual(std::make_shared<Native::Interface::GigabitEthernet::StackwiseVirtual>())
    , arp(std::make_shared<Native::Interface::GigabitEthernet::Arp>())
    , backup(std::make_shared<Native::Interface::GigabitEthernet::Backup>())
    , cemoudp(std::make_shared<Native::Interface::GigabitEthernet::Cemoudp>())
    , cws_tunnel(std::make_shared<Native::Interface::GigabitEthernet::CwsTunnel>())
    , l2protocol_tunnel(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Interface::GigabitEthernet::Encapsulation>())
    , fair_queue_conf(std::make_shared<Native::Interface::GigabitEthernet::FairQueueConf>())
    , fair_queue(std::make_shared<Native::Interface::GigabitEthernet::FairQueue>())
    , flowcontrol(std::make_shared<Native::Interface::GigabitEthernet::Flowcontrol>())
    , isis(std::make_shared<Native::Interface::GigabitEthernet::Isis>())
    , keepalive_settings(std::make_shared<Native::Interface::GigabitEthernet::KeepaliveSettings>())
    , bfd(std::make_shared<Native::Interface::GigabitEthernet::Bfd>())
    , bandwidth(std::make_shared<Native::Interface::GigabitEthernet::Bandwidth>())
    , dampening(std::make_shared<Native::Interface::GigabitEthernet::Dampening>())
    , domain(std::make_shared<Native::Interface::GigabitEthernet::Domain>())
    , hold_queue(this, {"direction"})
    , mpls(std::make_shared<Native::Interface::GigabitEthernet::Mpls>())
    , ip_vrf(std::make_shared<Native::Interface::GigabitEthernet::IpVrf>())
    , vrf(std::make_shared<Native::Interface::GigabitEthernet::Vrf>())
    , ip(std::make_shared<Native::Interface::GigabitEthernet::Ip>())
    , ipv6(std::make_shared<Native::Interface::GigabitEthernet::Ipv6>())
    , logging(std::make_shared<Native::Interface::GigabitEthernet::Logging>())
    , mdix(std::make_shared<Native::Interface::GigabitEthernet::Mdix>())
    , mop(std::make_shared<Native::Interface::GigabitEthernet::Mop>())
    , interface_qos(std::make_shared<Native::Interface::GigabitEthernet::InterfaceQos>())
    , source(std::make_shared<Native::Interface::GigabitEthernet::Source>())
    , standby(std::make_shared<Native::Interface::GigabitEthernet::Standby>())
    , access_session(std::make_shared<Native::Interface::GigabitEthernet::AccessSession>())
    , storm_control(std::make_shared<Native::Interface::GigabitEthernet::StormControl>())
    , trust(std::make_shared<Native::Interface::GigabitEthernet::Trust>())
    , priority_queue(std::make_shared<Native::Interface::GigabitEthernet::PriorityQueue>())
    , rcv_queue(std::make_shared<Native::Interface::GigabitEthernet::RcvQueue>())
    , peer(std::make_shared<Native::Interface::GigabitEthernet::Peer>())
    , pm_path(std::make_shared<Native::Interface::GigabitEthernet::PmPath>())
    , switchport_wrapper(std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper>())
    , power(std::make_shared<Native::Interface::GigabitEthernet::Power>())
    , carrier_delay(std::make_shared<Native::Interface::GigabitEthernet::CarrierDelay>())
    , channel_group(std::make_shared<Native::Interface::GigabitEthernet::ChannelGroup>())
    , ethernet(std::make_shared<Native::Interface::GigabitEthernet::Ethernet>())
    , eapol(std::make_shared<Native::Interface::GigabitEthernet::Eapol>())
    , synchronous(std::make_shared<Native::Interface::GigabitEthernet::Synchronous>())
    , speed(std::make_shared<Native::Interface::GigabitEthernet::Speed>())
    , negotiation(std::make_shared<Native::Interface::GigabitEthernet::Negotiation>())
    , plim(std::make_shared<Native::Interface::GigabitEthernet::Plim>())
    , pppoe(std::make_shared<Native::Interface::GigabitEthernet::Pppoe>())
    , service(std::make_shared<Native::Interface::GigabitEthernet::Service>())
    , lacp(std::make_shared<Native::Interface::GigabitEthernet::Lacp>())
    , cisco_ios_xe_ethernet_macsec_option(std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption>())
    , snmp(std::make_shared<Native::Interface::GigabitEthernet::Snmp>())
    , authentication(std::make_shared<Native::Interface::GigabitEthernet::Authentication>())
    , mab(nullptr) // presence node
    , et_analytics(std::make_shared<Native::Interface::GigabitEthernet::EtAnalytics>())
    , service_policy(std::make_shared<Native::Interface::GigabitEthernet::ServicePolicy>())
    , auto_(std::make_shared<Native::Interface::GigabitEthernet::Auto>())
    , datalink(std::make_shared<Native::Interface::GigabitEthernet::Datalink>())
    , energywise(nullptr) // presence node
    , location(std::make_shared<Native::Interface::GigabitEthernet::Location>())
    , mac(std::make_shared<Native::Interface::GigabitEthernet::Mac>())
    , macro(std::make_shared<Native::Interface::GigabitEthernet::Macro>())
    , dual_active(std::make_shared<Native::Interface::GigabitEthernet::DualActive>())
    , load_balancing(std::make_shared<Native::Interface::GigabitEthernet::LoadBalancing>())
    , vlan_range(this, {"id"})
    , switch_(std::make_shared<Native::Interface::GigabitEthernet::Switch>())
    , srr_queue(std::make_shared<Native::Interface::GigabitEthernet::SrrQueue>())
    , cisco_ios_xe_switch_macsec_option_(std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption>())
    , device_tracking(std::make_shared<Native::Interface::GigabitEthernet::DeviceTracking>())
    , ospfv3(std::make_shared<Native::Interface::GigabitEthernet::Ospfv3>())
    , performance(std::make_shared<Native::Interface::GigabitEthernet::Performance>())
    , lisp(std::make_shared<Native::Interface::GigabitEthernet::Lisp>())
    , spanning_tree(std::make_shared<Native::Interface::GigabitEthernet::SpanningTree>())
    , mka(std::make_shared<Native::Interface::GigabitEthernet::Mka>())
    , umbrella(std::make_shared<Native::Interface::GigabitEthernet::Umbrella>())
    , xconnect(std::make_shared<Native::Interface::GigabitEthernet::Xconnect>())
    , evpn(std::make_shared<Native::Interface::GigabitEthernet::Evpn>())
    , dot1x(std::make_shared<Native::Interface::GigabitEthernet::Dot1x>())
    , crypto(std::make_shared<Native::Interface::GigabitEthernet::Crypto>())
    , lldp(std::make_shared<Native::Interface::GigabitEthernet::Lldp>())
    , zone_member(std::make_shared<Native::Interface::GigabitEthernet::ZoneMember>())
    , vrrp(std::make_shared<Native::Interface::GigabitEthernet::Vrrp>())
    , fabric_domain(std::make_shared<Native::Interface::GigabitEthernet::FabricDomain>())
    , analysis_module(std::make_shared<Native::Interface::GigabitEthernet::AnalysisModule>())
    , cts(std::make_shared<Native::Interface::GigabitEthernet::Cts>())
    , udld(std::make_shared<Native::Interface::GigabitEthernet::Udld>())
    , cdp(std::make_shared<Native::Interface::GigabitEthernet::Cdp>())
    , mvrp(nullptr) // presence node
    , ntp(std::make_shared<Native::Interface::GigabitEthernet::Ntp>())
    , utd(std::make_shared<Native::Interface::GigabitEthernet::Utd>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
    stackwise_virtual->parent = this;
    arp->parent = this;
    backup->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    encapsulation->parent = this;
    fair_queue_conf->parent = this;
    fair_queue->parent = this;
    flowcontrol->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    bfd->parent = this;
    bandwidth->parent = this;
    dampening->parent = this;
    domain->parent = this;
    mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    interface_qos->parent = this;
    source->parent = this;
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;
    switchport_wrapper->parent = this;
    power->parent = this;
    carrier_delay->parent = this;
    channel_group->parent = this;
    ethernet->parent = this;
    eapol->parent = this;
    synchronous->parent = this;
    speed->parent = this;
    negotiation->parent = this;
    plim->parent = this;
    pppoe->parent = this;
    service->parent = this;
    lacp->parent = this;
    cisco_ios_xe_ethernet_macsec_option->parent = this;
    snmp->parent = this;
    authentication->parent = this;
    et_analytics->parent = this;
    service_policy->parent = this;
    auto_->parent = this;
    datalink->parent = this;
    location->parent = this;
    mac->parent = this;
    macro->parent = this;
    dual_active->parent = this;
    load_balancing->parent = this;
    switch_->parent = this;
    srr_queue->parent = this;
    cisco_ios_xe_switch_macsec_option_->parent = this;
    device_tracking->parent = this;
    ospfv3->parent = this;
    performance->parent = this;
    lisp->parent = this;
    spanning_tree->parent = this;
    mka->parent = this;
    umbrella->parent = this;
    xconnect->parent = this;
    evpn->parent = this;
    dot1x->parent = this;
    crypto->parent = this;
    lldp->parent = this;
    zone_member->parent = this;
    vrrp->parent = this;
    fabric_domain->parent = this;
    analysis_module->parent = this;
    cts->parent = this;
    udld->parent = this;
    cdp->parent = this;
    ntp->parent = this;
    utd->parent = this;

    yang_name = "GigabitEthernet"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::GigabitEthernet::~GigabitEthernet()
{
}

bool Native::Interface::GigabitEthernet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return name.is_set
	|| media_type.is_set
	|| port_type.is_set
	|| description.is_set
	|| mac_address.is_set
	|| shutdown.is_set
	|| keepalive.is_set
	|| if_state.is_set
	|| delay.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| channel_protocol.is_set
	|| duplex.is_set
	|| cisco_ios_xe_ethernet_macsec.is_set
	|| cisco_ios_xe_switch_macsec.is_set
	|| nat66.is_set
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (switchport_wrapper !=  nullptr && switchport_wrapper->has_data())
	|| (power !=  nullptr && power->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (eapol !=  nullptr && eapol->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (cisco_ios_xe_ethernet_macsec_option !=  nullptr && cisco_ios_xe_ethernet_macsec_option->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (et_analytics !=  nullptr && et_analytics->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (cisco_ios_xe_switch_macsec_option_ !=  nullptr && cisco_ios_xe_switch_macsec_option_->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (performance !=  nullptr && performance->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (mka !=  nullptr && mka->has_data())
	|| (umbrella !=  nullptr && umbrella->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data())
	|| (vrrp !=  nullptr && vrrp->has_data())
	|| (fabric_domain !=  nullptr && fabric_domain->has_data())
	|| (analysis_module !=  nullptr && analysis_module->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (utd !=  nullptr && utd->has_data());
}

bool Native::Interface::GigabitEthernet::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| ydk::is_set(channel_protocol.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(cisco_ios_xe_ethernet_macsec.yfilter)
	|| ydk::is_set(cisco_ios_xe_switch_macsec.yfilter)
	|| ydk::is_set(nat66.yfilter)
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (switchport_wrapper !=  nullptr && switchport_wrapper->has_operation())
	|| (power !=  nullptr && power->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (eapol !=  nullptr && eapol->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (cisco_ios_xe_ethernet_macsec_option !=  nullptr && cisco_ios_xe_ethernet_macsec_option->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (et_analytics !=  nullptr && et_analytics->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (cisco_ios_xe_switch_macsec_option_ !=  nullptr && cisco_ios_xe_switch_macsec_option_->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (performance !=  nullptr && performance->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (mka !=  nullptr && mka->has_operation())
	|| (umbrella !=  nullptr && umbrella->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation())
	|| (vrrp !=  nullptr && vrrp->has_operation())
	|| (fabric_domain !=  nullptr && fabric_domain->has_operation())
	|| (analysis_module !=  nullptr && analysis_module->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (utd !=  nullptr && utd->has_operation());
}

std::string Native::Interface::GigabitEthernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::GigabitEthernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GigabitEthernet";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.yfilter)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (cisco_ios_xe_ethernet_macsec.is_set || is_set(cisco_ios_xe_ethernet_macsec.yfilter)) leaf_name_data.push_back(cisco_ios_xe_ethernet_macsec.get_name_leafdata());
    if (cisco_ios_xe_switch_macsec.is_set || is_set(cisco_ios_xe_switch_macsec.yfilter)) leaf_name_data.push_back(cisco_ios_xe_switch_macsec.get_name_leafdata());
    if (nat66.is_set || is_set(nat66.yfilter)) leaf_name_data.push_back(nat66.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::GigabitEthernet::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::GigabitEthernet::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::Interface::GigabitEthernet::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::GigabitEthernet::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::GigabitEthernet::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::GigabitEthernet::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::GigabitEthernet::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::GigabitEthernet::L2protocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::GigabitEthernet::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::GigabitEthernet::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::GigabitEthernet::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::GigabitEthernet::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::GigabitEthernet::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::GigabitEthernet::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::GigabitEthernet::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::GigabitEthernet::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::GigabitEthernet::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::GigabitEthernet::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::HoldQueue>();
        ent_->parent = this;
        hold_queue.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::GigabitEthernet::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::GigabitEthernet::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::GigabitEthernet::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::GigabitEthernet::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::GigabitEthernet::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::GigabitEthernet::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::GigabitEthernet::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::GigabitEthernet::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::GigabitEthernet::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::GigabitEthernet::Source>();
        }
        return source;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::GigabitEthernet::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::GigabitEthernet::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::GigabitEthernet::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::GigabitEthernet::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::GigabitEthernet::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::GigabitEthernet::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::GigabitEthernet::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::GigabitEthernet::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "switchport-wrapper")
    {
        if(switchport_wrapper == nullptr)
        {
            switchport_wrapper = std::make_shared<Native::Interface::GigabitEthernet::SwitchportWrapper>();
        }
        return switchport_wrapper;
    }

    if(child_yang_name == "Cisco-IOS-XE-power:power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Native::Interface::GigabitEthernet::Power>();
        }
        return power;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::GigabitEthernet::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::GigabitEthernet::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::GigabitEthernet::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:eapol")
    {
        if(eapol == nullptr)
        {
            eapol = std::make_shared<Native::Interface::GigabitEthernet::Eapol>();
        }
        return eapol;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::GigabitEthernet::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::GigabitEthernet::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::GigabitEthernet::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::GigabitEthernet::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::GigabitEthernet::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::GigabitEthernet::Service>();
        }
        return service;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<Native::Interface::GigabitEthernet::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:macsec-option")
    {
        if(cisco_ios_xe_ethernet_macsec_option == nullptr)
        {
            cisco_ios_xe_ethernet_macsec_option = std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXEEthernetMacsecOption>();
        }
        return cisco_ios_xe_ethernet_macsec_option;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::GigabitEthernet::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::GigabitEthernet::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::GigabitEthernet::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "Cisco-IOS-XE-eta:et-analytics")
    {
        if(et_analytics == nullptr)
        {
            et_analytics = std::make_shared<Native::Interface::GigabitEthernet::EtAnalytics>();
        }
        return et_analytics;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::GigabitEthernet::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::GigabitEthernet::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::GigabitEthernet::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::GigabitEthernet::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::GigabitEthernet::Location>();
        }
        return location;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::GigabitEthernet::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::GigabitEthernet::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::GigabitEthernet::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::GigabitEthernet::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vlan-range")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::VlanRange>();
        ent_->parent = this;
        vlan_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Interface::GigabitEthernet::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::GigabitEthernet::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macsec-option")
    {
        if(cisco_ios_xe_switch_macsec_option_ == nullptr)
        {
            cisco_ios_xe_switch_macsec_option_ = std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption>();
        }
        return cisco_ios_xe_switch_macsec_option_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::Interface::GigabitEthernet::DeviceTracking>();
        }
        return device_tracking;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospfv3:ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Interface::GigabitEthernet::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "Cisco-IOS-XE-ezpm:performance")
    {
        if(performance == nullptr)
        {
            performance = std::make_shared<Native::Interface::GigabitEthernet::Performance>();
        }
        return performance;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::GigabitEthernet::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::GigabitEthernet::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "Cisco-IOS-XE-mka:mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Native::Interface::GigabitEthernet::Mka>();
        }
        return mka;
    }

    if(child_yang_name == "Cisco-IOS-XE-umbrella:umbrella")
    {
        if(umbrella == nullptr)
        {
            umbrella = std::make_shared<Native::Interface::GigabitEthernet::Umbrella>();
        }
        return umbrella;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::GigabitEthernet::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<Native::Interface::GigabitEthernet::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Interface::GigabitEthernet::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::GigabitEthernet::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "Cisco-IOS-XE-lldp:lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Interface::GigabitEthernet::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "Cisco-IOS-XE-zone:zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::GigabitEthernet::ZoneMember>();
        }
        return zone_member;
    }

    if(child_yang_name == "Cisco-IOS-XE-vrrp:vrrp")
    {
        if(vrrp == nullptr)
        {
            vrrp = std::make_shared<Native::Interface::GigabitEthernet::Vrrp>();
        }
        return vrrp;
    }

    if(child_yang_name == "Cisco-IOS-XE-iwanfabric:fabric-domain")
    {
        if(fabric_domain == nullptr)
        {
            fabric_domain = std::make_shared<Native::Interface::GigabitEthernet::FabricDomain>();
        }
        return fabric_domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-nam:analysis-module")
    {
        if(analysis_module == nullptr)
        {
            analysis_module = std::make_shared<Native::Interface::GigabitEthernet::AnalysisModule>();
        }
        return analysis_module;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::GigabitEthernet::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "Cisco-IOS-XE-udld:udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::Interface::GigabitEthernet::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "Cisco-IOS-XE-cdp:cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Interface::GigabitEthernet::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XE-mvrp:mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<Native::Interface::GigabitEthernet::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Interface::GigabitEthernet::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::GigabitEthernet::Utd>();
        }
        return utd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchport_conf != nullptr)
    {
        _children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(stackwise_virtual != nullptr)
    {
        _children["stackwise-virtual"] = stackwise_virtual;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        _children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        _children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        _children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        _children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        _children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        _children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        _children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    count_ = 0;
    for (auto ent_ : hold_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        _children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        _children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        _children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        _children["interface_qos"] = interface_qos;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        _children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    if(priority_queue != nullptr)
    {
        _children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        _children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        _children["pm-path"] = pm_path;
    }

    if(switchport_wrapper != nullptr)
    {
        _children["switchport-wrapper"] = switchport_wrapper;
    }

    if(power != nullptr)
    {
        _children["Cisco-IOS-XE-power:power"] = power;
    }

    if(carrier_delay != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:carrier-delay"] = carrier_delay;
    }

    if(channel_group != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:channel-group"] = channel_group;
    }

    if(ethernet != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:ethernet"] = ethernet;
    }

    if(eapol != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:eapol"] = eapol;
    }

    if(synchronous != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:synchronous"] = synchronous;
    }

    if(speed != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:speed"] = speed;
    }

    if(negotiation != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:negotiation"] = negotiation;
    }

    if(plim != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:plim"] = plim;
    }

    if(pppoe != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:pppoe"] = pppoe;
    }

    if(service != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:service"] = service;
    }

    if(lacp != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:lacp"] = lacp;
    }

    if(cisco_ios_xe_ethernet_macsec_option != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:macsec-option"] = cisco_ios_xe_ethernet_macsec_option;
    }

    if(snmp != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:snmp"] = snmp;
    }

    if(authentication != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:authentication"] = authentication;
    }

    if(mab != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:mab"] = mab;
    }

    if(et_analytics != nullptr)
    {
        _children["Cisco-IOS-XE-eta:et-analytics"] = et_analytics;
    }

    if(service_policy != nullptr)
    {
        _children["Cisco-IOS-XE-policy:service-policy"] = service_policy;
    }

    if(auto_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:auto"] = auto_;
    }

    if(datalink != nullptr)
    {
        _children["Cisco-IOS-XE-switch:datalink"] = datalink;
    }

    if(energywise != nullptr)
    {
        _children["Cisco-IOS-XE-switch:energywise"] = energywise;
    }

    if(location != nullptr)
    {
        _children["Cisco-IOS-XE-switch:location"] = location;
    }

    if(mac != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mac"] = mac;
    }

    if(macro != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macro"] = macro;
    }

    if(dual_active != nullptr)
    {
        _children["Cisco-IOS-XE-switch:dual-active"] = dual_active;
    }

    if(load_balancing != nullptr)
    {
        _children["Cisco-IOS-XE-switch:load-balancing"] = load_balancing;
    }

    count_ = 0;
    for (auto ent_ : vlan_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(switch_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:switch"] = switch_;
    }

    if(srr_queue != nullptr)
    {
        _children["Cisco-IOS-XE-switch:srr-queue"] = srr_queue;
    }

    if(cisco_ios_xe_switch_macsec_option_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macsec-option"] = cisco_ios_xe_switch_macsec_option_;
    }

    if(device_tracking != nullptr)
    {
        _children["Cisco-IOS-XE-switch:device-tracking"] = device_tracking;
    }

    if(ospfv3 != nullptr)
    {
        _children["Cisco-IOS-XE-ospfv3:ospfv3"] = ospfv3;
    }

    if(performance != nullptr)
    {
        _children["Cisco-IOS-XE-ezpm:performance"] = performance;
    }

    if(lisp != nullptr)
    {
        _children["Cisco-IOS-XE-lisp:lisp"] = lisp;
    }

    if(spanning_tree != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:spanning-tree"] = spanning_tree;
    }

    if(mka != nullptr)
    {
        _children["Cisco-IOS-XE-mka:mka"] = mka;
    }

    if(umbrella != nullptr)
    {
        _children["Cisco-IOS-XE-umbrella:umbrella"] = umbrella;
    }

    if(xconnect != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    if(evpn != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:evpn"] = evpn;
    }

    if(dot1x != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:dot1x"] = dot1x;
    }

    if(crypto != nullptr)
    {
        _children["Cisco-IOS-XE-crypto:crypto"] = crypto;
    }

    if(lldp != nullptr)
    {
        _children["Cisco-IOS-XE-lldp:lldp"] = lldp;
    }

    if(zone_member != nullptr)
    {
        _children["Cisco-IOS-XE-zone:zone-member"] = zone_member;
    }

    if(vrrp != nullptr)
    {
        _children["Cisco-IOS-XE-vrrp:vrrp"] = vrrp;
    }

    if(fabric_domain != nullptr)
    {
        _children["Cisco-IOS-XE-iwanfabric:fabric-domain"] = fabric_domain;
    }

    if(analysis_module != nullptr)
    {
        _children["Cisco-IOS-XE-nam:analysis-module"] = analysis_module;
    }

    if(cts != nullptr)
    {
        _children["Cisco-IOS-XE-cts:cts"] = cts;
    }

    if(udld != nullptr)
    {
        _children["Cisco-IOS-XE-udld:udld"] = udld;
    }

    if(cdp != nullptr)
    {
        _children["Cisco-IOS-XE-cdp:cdp"] = cdp;
    }

    if(mvrp != nullptr)
    {
        _children["Cisco-IOS-XE-mvrp:mvrp"] = mvrp;
    }

    if(ntp != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:ntp"] = ntp;
    }

    if(utd != nullptr)
    {
        _children["Cisco-IOS-XE-utd:utd"] = utd;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:channel-protocol")
    {
        channel_protocol = value;
        channel_protocol.value_namespace = name_space;
        channel_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:macsec")
    {
        cisco_ios_xe_ethernet_macsec = value;
        cisco_ios_xe_ethernet_macsec.value_namespace = name_space;
        cisco_ios_xe_ethernet_macsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:macsec")
    {
        cisco_ios_xe_switch_macsec = value;
        cisco_ios_xe_switch_macsec.value_namespace = name_space;
        cisco_ios_xe_switch_macsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-nat:nat66")
    {
        nat66 = value;
        nat66.value_namespace = name_space;
        nat66.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        cisco_ios_xe_ethernet_macsec.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        cisco_ios_xe_switch_macsec.yfilter = yfilter;
    }
    if(value_path == "nat66")
    {
        nat66.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "stackwise-virtual" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "source" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "switchport-wrapper" || name == "power" || name == "carrier-delay" || name == "channel-group" || name == "ethernet" || name == "eapol" || name == "synchronous" || name == "speed" || name == "negotiation" || name == "plim" || name == "pppoe" || name == "service" || name == "lacp" || name == "macsec-option" || name == "snmp" || name == "authentication" || name == "mab" || name == "et-analytics" || name == "service-policy" || name == "auto" || name == "datalink" || name == "energywise" || name == "location" || name == "mac" || name == "macro" || name == "dual-active" || name == "load-balancing" || name == "vlan-range" || name == "switch" || name == "srr-queue" || name == "macsec-option" || name == "device-tracking" || name == "ospfv3" || name == "performance" || name == "lisp" || name == "spanning-tree" || name == "mka" || name == "umbrella" || name == "xconnect" || name == "evpn" || name == "dot1x" || name == "crypto" || name == "lldp" || name == "zone-member" || name == "vrrp" || name == "fabric-domain" || name == "analysis-module" || name == "cts" || name == "udld" || name == "cdp" || name == "mvrp" || name == "ntp" || name == "utd" || name == "name" || name == "media-type" || name == "port-type" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion" || name == "channel-protocol" || name == "duplex" || name == "macsec" || name == "macsec" || name == "nat66")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::GigabitEthernet::SwitchportConf::has_data() const
{
    if (is_presence_container) return true;
    return switchport.is_set;
}

bool Native::Interface::GigabitEthernet::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::GigabitEthernet::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Switchport()
    :
    nonegotiate{YType::empty, "Cisco-IOS-XE-switch:nonegotiate"},
    protected_{YType::empty, "Cisco-IOS-XE-switch:protected"},
    host{YType::empty, "Cisco-IOS-XE-switch:host"}
        ,
    access(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Access>())
    , block(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Block>())
    , mode(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Mode>())
    , port_security(nullptr) // presence node
    , trunk(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk>())
    , voice(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Voice>())
    , priority(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Priority>())
    , autostate(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Autostate>())
    , private_vlan(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan>())
    , vepa(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Vepa>())
    , device_tracking(std::make_shared<Native::Interface::GigabitEthernet::Switchport::DeviceTracking>())
{
    access->parent = this;
    block->parent = this;
    mode->parent = this;
    trunk->parent = this;
    voice->parent = this;
    priority->parent = this;
    autostate->parent = this;
    private_vlan->parent = this;
    vepa->parent = this;
    device_tracking->parent = this;

    yang_name = "switchport"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::~Switchport()
{
}

bool Native::Interface::GigabitEthernet::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return nonegotiate.is_set
	|| protected_.is_set
	|| host.is_set
	|| (access !=  nullptr && access->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (port_security !=  nullptr && port_security->has_data())
	|| (trunk !=  nullptr && trunk->has_data())
	|| (voice !=  nullptr && voice->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (autostate !=  nullptr && autostate->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (vepa !=  nullptr && vepa->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nonegotiate.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(host.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (port_security !=  nullptr && port_security->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation())
	|| (voice !=  nullptr && voice->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (autostate !=  nullptr && autostate->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (vepa !=  nullptr && vepa->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nonegotiate.is_set || is_set(nonegotiate.yfilter)) leaf_name_data.push_back(nonegotiate.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Access>();
        }
        return access;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Block>();
        }
        return block;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:port-security")
    {
        if(port_security == nullptr)
        {
            port_security = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PortSecurity>();
        }
        return port_security;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk>();
        }
        return trunk;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Voice>();
        }
        return voice;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:autostate")
    {
        if(autostate == nullptr)
        {
            autostate = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Autostate>();
        }
        return autostate;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vepa")
    {
        if(vepa == nullptr)
        {
            vepa = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Vepa>();
        }
        return vepa;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::Interface::GigabitEthernet::Switchport::DeviceTracking>();
        }
        return device_tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["Cisco-IOS-XE-switch:access"] = access;
    }

    if(block != nullptr)
    {
        _children["Cisco-IOS-XE-switch:block"] = block;
    }

    if(mode != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mode"] = mode;
    }

    if(port_security != nullptr)
    {
        _children["Cisco-IOS-XE-switch:port-security"] = port_security;
    }

    if(trunk != nullptr)
    {
        _children["Cisco-IOS-XE-switch:trunk"] = trunk;
    }

    if(voice != nullptr)
    {
        _children["Cisco-IOS-XE-switch:voice"] = voice;
    }

    if(priority != nullptr)
    {
        _children["Cisco-IOS-XE-switch:priority"] = priority;
    }

    if(autostate != nullptr)
    {
        _children["Cisco-IOS-XE-switch:autostate"] = autostate;
    }

    if(private_vlan != nullptr)
    {
        _children["Cisco-IOS-XE-switch:private-vlan"] = private_vlan;
    }

    if(vepa != nullptr)
    {
        _children["Cisco-IOS-XE-switch:vepa"] = vepa;
    }

    if(device_tracking != nullptr)
    {
        _children["Cisco-IOS-XE-switch:device-tracking"] = device_tracking;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-switch:nonegotiate")
    {
        nonegotiate = value;
        nonegotiate.value_namespace = name_space;
        nonegotiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nonegotiate")
    {
        nonegotiate.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "block" || name == "mode" || name == "port-security" || name == "trunk" || name == "voice" || name == "priority" || name == "autostate" || name == "private-vlan" || name == "vepa" || name == "device-tracking" || name == "nonegotiate" || name == "protected" || name == "host")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Access::Access()
    :
    vlan(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Access::Vlan>())
{
    vlan->parent = this;

    yang_name = "access"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Access::~Access()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Access::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Access::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Access::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Access::Vlan::Vlan()
    :
    vlan{YType::str, "vlan"},
    name{YType::str, "name"}
{

    yang_name = "vlan"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Access::Vlan::~Vlan()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Access::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| name.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Access::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Access::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Access::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Access::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Access::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Access::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Access::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Access::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Block::Block()
    :
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
{

    yang_name = "block"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Block::~Block()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Block::has_data() const
{
    if (is_presence_container) return true;
    return multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Mode::Mode()
    :
    dynamic{YType::enumeration, "dynamic"}
        ,
    access(nullptr) // presence node
    , dot1q_tunnel(nullptr) // presence node
    , private_vlan(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan>())
    , trunk(nullptr) // presence node
{
    private_vlan->parent = this;

    yang_name = "mode"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Mode::~Mode()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| (access !=  nullptr && access->has_data())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (trunk !=  nullptr && trunk->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (dot1q_tunnel !=  nullptr && dot1q_tunnel->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (trunk !=  nullptr && trunk->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Mode::Access>();
        }
        return access;
    }

    if(child_yang_name == "dot1q-tunnel")
    {
        if(dot1q_tunnel == nullptr)
        {
            dot1q_tunnel = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel>();
        }
        return dot1q_tunnel;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "trunk")
    {
        if(trunk == nullptr)
        {
            trunk = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Mode::Trunk>();
        }
        return trunk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(dot1q_tunnel != nullptr)
    {
        _children["dot1q-tunnel"] = dot1q_tunnel;
    }

    if(private_vlan != nullptr)
    {
        _children["private-vlan"] = private_vlan;
    }

    if(trunk != nullptr)
    {
        _children["trunk"] = trunk;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "dot1q-tunnel" || name == "private-vlan" || name == "trunk" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Mode::Access::Access()
{

    yang_name = "access"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Switchport::Mode::Access::~Access()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Access::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Access::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Mode::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Mode::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Mode::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Mode::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Mode::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Mode::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::Dot1qTunnel()
{

    yang_name = "dot1q-tunnel"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::~Dot1qTunnel()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Dot1qTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::PrivateVlan()
    :
    host{YType::empty, "host"},
    promiscuous{YType::empty, "promiscuous"}
{

    yang_name = "private-vlan"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| promiscuous.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(promiscuous.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (promiscuous.is_set || is_set(promiscuous.yfilter)) leaf_name_data.push_back(promiscuous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promiscuous")
    {
        promiscuous = value;
        promiscuous.value_namespace = name_space;
        promiscuous.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "promiscuous")
    {
        promiscuous.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "promiscuous")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::Trunk()
{

    yang_name = "trunk"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::~Trunk()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Mode::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::PortSecurity()
    :
    violation{YType::enumeration, "violation"}
        ,
    aging(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging>())
    , mac_address(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress>())
    , maximum(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum>())
{
    aging->parent = this;
    mac_address->parent = this;
    maximum->parent = this;

    yang_name = "port-security"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::~PortSecurity()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::has_data() const
{
    if (is_presence_container) return true;
    return violation.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aging != nullptr)
    {
        _children["aging"] = aging;
    }

    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    if(maximum != nullptr)
    {
        _children["maximum"] = maximum;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "mac-address" || name == "maximum" || name == "violation")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::Aging()
    :
    static_{YType::empty, "static"},
    time{YType::uint16, "time"},
    type{YType::enumeration, "type"}
{

    yang_name = "aging"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::~Aging()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::has_data() const
{
    if (is_presence_container) return true;
    return static_.is_set
	|| time.is_set
	|| type.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "time" || name == "type")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::MacAddress()
    :
    sticky{YType::empty, "sticky"},
    hw_address{YType::str, "hw-address"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "mac-address"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::~MacAddress()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return sticky.is_set
	|| hw_address.is_set
	|| vlan.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(hw_address.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (hw_address.is_set || is_set(hw_address.yfilter)) leaf_name_data.push_back(hw_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-address")
    {
        hw_address = value;
        hw_address.value_namespace = name_space;
        hw_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "hw-address")
    {
        hw_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky" || name == "hw-address" || name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::Maximum()
    :
    max_addresses{YType::uint16, "max-addresses"},
    vlan{YType::str, "vlan"}
{

    yang_name = "maximum"; yang_parent_name = "port-security"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::~Maximum()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::has_data() const
{
    if (is_presence_container) return true;
    return max_addresses.is_set
	|| vlan.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_addresses.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_addresses.is_set || is_set(max_addresses.yfilter)) leaf_name_data.push_back(max_addresses.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-addresses")
    {
        max_addresses = value;
        max_addresses.value_namespace = name_space;
        max_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-addresses")
    {
        max_addresses.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PortSecurity::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-addresses" || name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Trunk()
    :
    encapsulation{YType::enumeration, "encapsulation"}
        ,
    allowed(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed>())
    , native(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Native_>())
    , pruning(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning>())
{
    allowed->parent = this;
    native->parent = this;
    pruning->parent = this;

    yang_name = "trunk"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Trunk::~Trunk()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::has_data() const
{
    if (is_presence_container) return true;
    return encapsulation.is_set
	|| (allowed !=  nullptr && allowed->has_data())
	|| (native !=  nullptr && native->has_data())
	|| (pruning !=  nullptr && pruning->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (allowed !=  nullptr && allowed->has_operation())
	|| (native !=  nullptr && native->has_operation())
	|| (pruning !=  nullptr && pruning->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Trunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:trunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Trunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Trunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowed")
    {
        if(allowed == nullptr)
        {
            allowed = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed>();
        }
        return allowed;
    }

    if(child_yang_name == "native")
    {
        if(native == nullptr)
        {
            native = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Native_>();
        }
        return native;
    }

    if(child_yang_name == "pruning")
    {
        if(pruning == nullptr)
        {
            pruning = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning>();
        }
        return pruning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Trunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowed != nullptr)
    {
        _children["allowed"] = allowed;
    }

    if(native != nullptr)
    {
        _children["native"] = native;
    }

    if(pruning != nullptr)
    {
        _children["pruning"] = pruning;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed" || name == "native" || name == "pruning" || name == "encapsulation")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Allowed()
    :
    vlan(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan>())
{
    vlan->parent = this;

    yang_name = "allowed"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::~Allowed()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::Vlan()
    :
    vlans{YType::str, "vlans"},
    add{YType::str, "add"},
    all{YType::empty, "all"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"}
{

    yang_name = "vlan"; yang_parent_name = "allowed"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::~Vlan()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vlans.is_set
	|| add.is_set
	|| all.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::has_operation() const
{
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlans.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(except.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlans.is_set || is_set(vlans.yfilter)) leaf_name_data.push_back(vlans.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlans")
    {
        vlans = value;
        vlans.value_namespace = name_space;
        vlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlans")
    {
        vlans.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "except")
    {
        except.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Allowed::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlans" || name == "add" || name == "all" || name == "except" || name == "none" || name == "remove")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::Native_()
    :
    vlan{YType::str, "vlan"}
{

    yang_name = "native"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::~Native_()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "native";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Pruning()
    :
    vlan(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan>())
{
    vlan->parent = this;

    yang_name = "pruning"; yang_parent_name = "trunk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::~Pruning()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pruning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::Vlan()
    :
    vlans{YType::str, "vlans"},
    add{YType::str, "add"},
    except{YType::str, "except"},
    none{YType::empty, "none"},
    remove{YType::str, "remove"}
{

    yang_name = "vlan"; yang_parent_name = "pruning"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::~Vlan()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : except.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return add.is_set
	|| none.is_set
	|| remove.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::has_operation() const
{
    for (auto const & leaf : vlans.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : except.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlans.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(except.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    auto vlans_name_datas = vlans.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlans_name_datas.begin(), vlans_name_datas.end());
    auto except_name_datas = except.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), except_name_datas.begin(), except_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlans")
    {
        vlans.append(value);
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "except")
    {
        except.append(value);
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlans")
    {
        vlans.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "except")
    {
        except.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Trunk::Pruning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlans" || name == "add" || name == "except" || name == "none" || name == "remove")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Voice::Voice()
    :
    vlan(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Voice::Vlan>())
    , detect(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Voice::Detect>())
{
    vlan->parent = this;
    detect->parent = this;

    yang_name = "voice"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Voice::~Voice()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data())
	|| (detect !=  nullptr && detect->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (detect !=  nullptr && detect->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Voice::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "detect")
    {
        if(detect == nullptr)
        {
            detect = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Voice::Detect>();
        }
        return detect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(detect != nullptr)
    {
        _children["detect"] = detect;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "detect")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::Vlan()
    :
    vlan{YType::str, "vlan"},
    name{YType::str, "name"}
{

    yang_name = "vlan"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::~Vlan()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| name.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Voice::Detect::Detect()
    :
    cisco_phone(nullptr) // presence node
{

    yang_name = "detect"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Voice::Detect::~Detect()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Detect::has_data() const
{
    if (is_presence_container) return true;
    return (cisco_phone !=  nullptr && cisco_phone->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Detect::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_phone !=  nullptr && cisco_phone->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Voice::Detect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Voice::Detect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Voice::Detect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-phone")
    {
        if(cisco_phone == nullptr)
        {
            cisco_phone = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone>();
        }
        return cisco_phone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Voice::Detect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco_phone != nullptr)
    {
        _children["cisco-phone"] = cisco_phone;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Voice::Detect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Voice::Detect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Detect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-phone")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::CiscoPhone()
    :
    full_duplex{YType::empty, "full-duplex"}
{

    yang_name = "cisco-phone"; yang_parent_name = "detect"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::~CiscoPhone()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::has_data() const
{
    if (is_presence_container) return true;
    return full_duplex.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full_duplex.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-phone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_duplex.is_set || is_set(full_duplex.yfilter)) leaf_name_data.push_back(full_duplex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full-duplex")
    {
        full_duplex = value;
        full_duplex.value_namespace = name_space;
        full_duplex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full-duplex")
    {
        full_duplex.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Voice::Detect::CiscoPhone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full-duplex")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Priority::Priority()
    :
    extend(std::make_shared<Native::Interface::GigabitEthernet::Switchport::Priority::Extend>())
{
    extend->parent = this;

    yang_name = "priority"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Priority::~Priority()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Priority::has_data() const
{
    if (is_presence_container) return true;
    return (extend !=  nullptr && extend->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::Priority::has_operation() const
{
    return is_set(yfilter)
	|| (extend !=  nullptr && extend->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::Interface::GigabitEthernet::Switchport::Priority::Extend>();
        }
        return extend;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extend != nullptr)
    {
        _children["extend"] = extend;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extend")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Priority::Extend::Extend()
    :
    trust{YType::empty, "trust"},
    cos{YType::uint8, "cos"}
{

    yang_name = "extend"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Priority::Extend::~Extend()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Priority::Extend::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| cos.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Priority::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| ydk::is_set(cos.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Priority::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Priority::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Priority::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Priority::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Priority::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Priority::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Priority::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust" || name == "cos")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Autostate::Autostate()
    :
    exclude{YType::empty, "exclude"}
{

    yang_name = "autostate"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Autostate::~Autostate()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Autostate::has_data() const
{
    if (is_presence_container) return true;
    return exclude.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Autostate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclude.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Autostate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:autostate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Autostate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude.is_set || is_set(exclude.yfilter)) leaf_name_data.push_back(exclude.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Autostate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Autostate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Autostate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude")
    {
        exclude = value;
        exclude.value_namespace = name_space;
        exclude.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Autostate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude")
    {
        exclude.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Autostate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::PrivateVlan()
    :
    association(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association>())
    , host_association(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation>())
    , mapping(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping>())
{
    association->parent = this;
    host_association->parent = this;
    mapping->parent = this;

    yang_name = "private-vlan"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return (association !=  nullptr && association->has_data())
	|| (host_association !=  nullptr && host_association->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| (association !=  nullptr && association->has_operation())
	|| (host_association !=  nullptr && host_association->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association>();
        }
        return association;
    }

    if(child_yang_name == "host-association")
    {
        if(host_association == nullptr)
        {
            host_association = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation>();
        }
        return host_association;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(association != nullptr)
    {
        _children["association"] = association;
    }

    if(host_association != nullptr)
    {
        _children["host-association"] = host_association;
    }

    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association" || name == "host-association" || name == "mapping")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Association()
    :
    host(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host>())
    , mapping(std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping>())
{
    host->parent = this;
    mapping->parent = this;

    yang_name = "association"; yang_parent_name = "private-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::~Association()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::has_data() const
{
    if (is_presence_container) return true;
    return (host !=  nullptr && host->has_data())
	|| (mapping !=  nullptr && mapping->has_data());
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::has_operation() const
{
    return is_set(yfilter)
	|| (host !=  nullptr && host->has_operation())
	|| (mapping !=  nullptr && mapping->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host>();
        }
        return host;
    }

    if(child_yang_name == "mapping")
    {
        if(mapping == nullptr)
        {
            mapping = std::make_shared<Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping>();
        }
        return mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(mapping != nullptr)
    {
        _children["mapping"] = mapping;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "mapping")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::Host()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{

    yang_name = "host"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::~Host()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::Mapping()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::str, "secondary-range"},
    add{YType::str, "add"},
    remove{YType::str, "remove"}
{

    yang_name = "mapping"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::~Mapping()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set
	|| add.is_set
	|| remove.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Association::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range" || name == "add" || name == "remove")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::HostAssociation()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::uint16, "secondary-range"}
{

    yang_name = "host-association"; yang_parent_name = "private-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::~HostAssociation()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::HostAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::Mapping()
    :
    primary_range{YType::uint16, "primary-range"},
    secondary_range{YType::str, "secondary-range"},
    add{YType::str, "add"},
    remove{YType::str, "remove"}
{

    yang_name = "mapping"; yang_parent_name = "private-vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::~Mapping()
{
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::has_data() const
{
    if (is_presence_container) return true;
    return primary_range.is_set
	|| secondary_range.is_set
	|| add.is_set
	|| remove.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary_range.yfilter)
	|| ydk::is_set(secondary_range.yfilter)
	|| ydk::is_set(add.yfilter)
	|| ydk::is_set(remove.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary_range.is_set || is_set(primary_range.yfilter)) leaf_name_data.push_back(primary_range.get_name_leafdata());
    if (secondary_range.is_set || is_set(secondary_range.yfilter)) leaf_name_data.push_back(secondary_range.get_name_leafdata());
    if (add.is_set || is_set(add.yfilter)) leaf_name_data.push_back(add.get_name_leafdata());
    if (remove.is_set || is_set(remove.yfilter)) leaf_name_data.push_back(remove.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary-range")
    {
        primary_range = value;
        primary_range.value_namespace = name_space;
        primary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-range")
    {
        secondary_range = value;
        secondary_range.value_namespace = name_space;
        secondary_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add")
    {
        add = value;
        add.value_namespace = name_space;
        add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove")
    {
        remove = value;
        remove.value_namespace = name_space;
        remove.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary-range")
    {
        primary_range.yfilter = yfilter;
    }
    if(value_path == "secondary-range")
    {
        secondary_range.yfilter = yfilter;
    }
    if(value_path == "add")
    {
        add.yfilter = yfilter;
    }
    if(value_path == "remove")
    {
        remove.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::PrivateVlan::Mapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-range" || name == "secondary-range" || name == "add" || name == "remove")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::Vepa::Vepa()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "vepa"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::Vepa::~Vepa()
{
}

bool Native::Interface::GigabitEthernet::Switchport::Vepa::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::Vepa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::Vepa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vepa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::Vepa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::Vepa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::Vepa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::Vepa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::Vepa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::Vepa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switchport::DeviceTracking::DeviceTracking()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "device-tracking"; yang_parent_name = "switchport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switchport::DeviceTracking::~DeviceTracking()
{
}

bool Native::Interface::GigabitEthernet::Switchport::DeviceTracking::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::GigabitEthernet::Switchport::DeviceTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switchport::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switchport::DeviceTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switchport::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switchport::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switchport::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switchport::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switchport::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::StackwiseVirtual::StackwiseVirtual()
    :
    link{YType::uint8, "link"},
    dual_active_detection{YType::empty, "dual-active-detection"}
{

    yang_name = "stackwise-virtual"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::StackwiseVirtual::~StackwiseVirtual()
{
}

bool Native::Interface::GigabitEthernet::StackwiseVirtual::has_data() const
{
    if (is_presence_container) return true;
    return link.is_set
	|| dual_active_detection.is_set;
}

bool Native::Interface::GigabitEthernet::StackwiseVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(dual_active_detection.yfilter);
}

std::string Native::Interface::GigabitEthernet::StackwiseVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::StackwiseVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (dual_active_detection.is_set || is_set(dual_active_detection.yfilter)) leaf_name_data.push_back(dual_active_detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::StackwiseVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::StackwiseVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::StackwiseVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection = value;
        dual_active_detection.value_namespace = name_space;
        dual_active_detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::StackwiseVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::StackwiseVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "dual-active-detection")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Arp::~Arp()
{
}

bool Native::Interface::GigabitEthernet::Arp::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Interface::GigabitEthernet::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::GigabitEthernet::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::GigabitEthernet::Backup::Delay>())
    , interface(std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_>())
    , load(std::make_shared<Native::Interface::GigabitEthernet::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::~Backup()
{
}

bool Native::Interface::GigabitEthernet::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::GigabitEthernet::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::GigabitEthernet::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::GigabitEthernet::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::GigabitEthernet::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(load != nullptr)
    {
        _children["load"] = load;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::Delay::~Delay()
{
}

bool Native::Interface::GigabitEthernet::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::GigabitEthernet::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::GigabitEthernet::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Backup::Load::~Load()
{
}

bool Native::Interface::GigabitEthernet::Backup::Load::has_data() const
{
    if (is_presence_container) return true;
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::GigabitEthernet::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::GigabitEthernet::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::GigabitEthernet::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::GigabitEthernet::Cemoudp::has_data() const
{
    if (is_presence_container) return true;
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::GigabitEthernet::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::GigabitEthernet::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::GigabitEthernet::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reserve != nullptr)
    {
        _children["reserve"] = reserve;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::GigabitEthernet::Cemoudp::Reserve::has_data() const
{
    if (is_presence_container) return true;
    return acr.is_set;
}

bool Native::Interface::GigabitEthernet::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::GigabitEthernet::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
        ,
    out(std::make_shared<Native::Interface::GigabitEthernet::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::GigabitEthernet::CwsTunnel::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::GigabitEthernet::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::GigabitEthernet::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::GigabitEthernet::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::GigabitEthernet::CwsTunnel::Out::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_number.is_set;
}

bool Native::Interface::GigabitEthernet::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::GigabitEthernet::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::L2protocolTunnel::L2protocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
        ,
    drop_threshold(std::make_shared<Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold>())
    , shutdown_threshold(std::make_shared<Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::L2protocolTunnel::~L2protocolTunnel()
{
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::has_data() const
{
    if (is_presence_container) return true;
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::GigabitEthernet::L2protocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::L2protocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::L2protocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::L2protocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(drop_threshold != nullptr)
    {
        _children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        _children["shutdown-threshold"] = shutdown_threshold;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::L2protocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::L2protocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::L2protocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::GigabitEthernet::Encapsulation::Dot1Q>())
    , isl(std::make_shared<Native::Interface::GigabitEthernet::Encapsulation::Isl>())
    , ppp(nullptr) // presence node
    , slip(nullptr) // presence node
    , frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::GigabitEthernet::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::GigabitEthernet::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::GigabitEthernet::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::GigabitEthernet::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::GigabitEthernet::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::GigabitEthernet::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::GigabitEthernet::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1q != nullptr)
    {
        _children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        _children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        _children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        _children["frame-relay"] = frame_relay;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::Isl::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool Native::Interface::GigabitEthernet::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::GigabitEthernet::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::GigabitEthernet::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::GigabitEthernet::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::Slip::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::GigabitEthernet::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::has_data() const
{
    if (is_presence_container) return true;
    return ietf.is_set;
}

bool Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::GigabitEthernet::FairQueueConf::has_data() const
{
    if (is_presence_container) return true;
    return fair_queue.is_set;
}

bool Native::Interface::GigabitEthernet::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::GigabitEthernet::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::FairQueue::~FairQueue()
{
}

bool Native::Interface::GigabitEthernet::FairQueue::has_data() const
{
    if (is_presence_container) return true;
    return incomplete.is_set;
}

bool Native::Interface::GigabitEthernet::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::GigabitEthernet::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::GigabitEthernet::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::GigabitEthernet::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::GigabitEthernet::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Isis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
        ,
    adjacency_filter(std::make_shared<Native::Interface::GigabitEthernet::Isis::AdjacencyFilter>())
    , advertise(std::make_shared<Native::Interface::GigabitEthernet::Isis::Advertise>())
    , authentication(std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication>())
    , circuit_type(nullptr) // presence node
    , csnp_interval(std::make_shared<Native::Interface::GigabitEthernet::Isis::CsnpInterval>())
    , hello(std::make_shared<Native::Interface::GigabitEthernet::Isis::Hello>())
    , hello_interval(std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloInterval>())
    , hello_multiplier(std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloMultiplier>())
    , ipv6(std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6>())
    , metric(std::make_shared<Native::Interface::GigabitEthernet::Isis::Metric>())
    , password(std::make_shared<Native::Interface::GigabitEthernet::Isis::Password>())
    , priority(std::make_shared<Native::Interface::GigabitEthernet::Isis::Priority>())
    , bfd(nullptr) // presence node
    , three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;
    advertise->parent = this;
    authentication->parent = this;
    csnp_interval->parent = this;
    hello->parent = this;
    hello_interval->parent = this;
    hello_multiplier->parent = this;
    ipv6->parent = this;
    metric->parent = this;
    password->parent = this;
    priority->parent = this;

    yang_name = "isis"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::~Isis()
{
}

bool Native::Interface::GigabitEthernet::Isis::has_data() const
{
    if (is_presence_container) return true;
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_interval.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(retransmit_throttle_interval.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.yfilter)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.yfilter)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-isis:adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::GigabitEthernet::Isis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::GigabitEthernet::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::GigabitEthernet::Isis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::GigabitEthernet::Isis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::GigabitEthernet::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::GigabitEthernet::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::GigabitEthernet::Isis::Password>();
        }
        return password;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::GigabitEthernet::Isis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::GigabitEthernet::Isis::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_filter != nullptr)
    {
        _children["Cisco-IOS-XE-isis:adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        _children["Cisco-IOS-XE-isis:advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        _children["Cisco-IOS-XE-isis:authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        _children["Cisco-IOS-XE-isis:circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        _children["Cisco-IOS-XE-isis:csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        _children["Cisco-IOS-XE-isis:ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        _children["Cisco-IOS-XE-isis:metric"] = metric;
    }

    if(password != nullptr)
    {
        _children["Cisco-IOS-XE-isis:password"] = password;
    }

    if(priority != nullptr)
    {
        _children["Cisco-IOS-XE-isis:priority"] = priority;
    }

    if(bfd != nullptr)
    {
        _children["Cisco-IOS-XE-isis:bfd"] = bfd;
    }

    if(three_way_handshake != nullptr)
    {
        _children["Cisco-IOS-XE-isis:three-way-handshake"] = three_way_handshake;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-isis:lsp-interval")
    {
        lsp_interval = value;
        lsp_interval.value_namespace = name_space;
        lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
        retransmit_throttle_interval.value_namespace = name_space;
        retransmit_throttle_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-filter" || name == "advertise" || name == "authentication" || name == "circuit-type" || name == "csnp-interval" || name == "hello" || name == "hello-interval" || name == "hello-multiplier" || name == "ipv6" || name == "metric" || name == "password" || name == "priority" || name == "bfd" || name == "three-way-handshake" || name == "lsp-interval" || name == "mesh-group" || name == "network" || name == "protocol" || name == "retransmit-interval" || name == "retransmit-throttle-interval" || name == "tag")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::AdjacencyFilter()
    :
    name{YType::str, "name"},
    match_all{YType::empty, "match-all"}
{

    yang_name = "adjacency-filter"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_all.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_all.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_all.is_set || is_set(match_all.yfilter)) leaf_name_data.push_back(match_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-all")
    {
        match_all = value;
        match_all.value_namespace = name_space;
        match_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-all")
    {
        match_all.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::AdjacencyFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-all")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{

    yang_name = "advertise"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Advertise::~Advertise()
{
}

bool Native::Interface::GigabitEthernet::Isis::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Authentication()
    :
    mode(std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode>())
    , key_chain(std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain>())
    , send_only(nullptr) // presence node
{
    mode->parent = this;
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Authentication::~Authentication()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(send_only != nullptr)
    {
        _children["send-only"] = send_only;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain" || name == "send-only")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
    , text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(text != nullptr)
    {
        _children["text"] = text;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
        ,
    key_chain_list(this, {"levels"})
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList>();
        ent_->parent = this;
        key_chain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key_chain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "circuit-type"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::CircuitType::~CircuitType()
{
}

bool Native::Interface::GigabitEthernet::Isis::CircuitType::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::CircuitType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::CircuitType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::CircuitType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::CircuitType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::CircuitType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
        ,
    csnp_interval_list(this, {"levels"})
{

    yang_name = "csnp-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csnp_interval_list.len(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.len(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList>();
        ent_->parent = this;
        csnp_interval_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csnp_interval_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Hello::~Hello()
{
}

bool Native::Interface::GigabitEthernet::Isis::Hello::has_data() const
{
    if (is_presence_container) return true;
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::GigabitEthernet::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::Hello::Padding::~Padding()
{
}

bool Native::Interface::GigabitEthernet::Isis::Hello::Padding::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
        ,
    hello_interval_list(this, {"levels"})
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interval_list.len(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.len(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList>();
        ent_->parent = this;
        hello_interval_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interval_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
        ,
    hello_multiplier_list(this, {"levels"})
{

    yang_name = "hello-multiplier"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_multiplier_list.len(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.len(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList>();
        ent_->parent = this;
        hello_multiplier_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_multiplier_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
        ,
    metric(std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6::Metric>())
    , bfd(nullptr) // presence node
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Ipv6::~Ipv6()
{
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Interface::GigabitEthernet::Isis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "bfd" || name == "tag")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
        ,
    metric_list(this, {"levels"})
{

    yang_name = "metric"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList>();
        ent_->parent = this;
        metric_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::~Bfd()
{
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Ipv6::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Metric::Metric()
    :
    value_{YType::str, "value"}
        ,
    metric_list(this, {"levels"})
{

    yang_name = "metric"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Metric::~Metric()
{
}

bool Native::Interface::GigabitEthernet::Isis::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::Metric::MetricList>();
        ent_->parent = this;
        metric_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Metric::MetricList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Password::Password()
    :
    password{YType::str, "password"}
        ,
    password_list(this, {"levels"})
{

    yang_name = "password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Password::~Password()
{
}

bool Native::Interface::GigabitEthernet::Isis::Password::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<password_list.len(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.len(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::Password::PasswordList>();
        ent_->parent = this;
        password_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : password_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-list" || name == "password")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{

    yang_name = "password-list"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Password::PasswordList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Password::PasswordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Password::PasswordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Password::PasswordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Password::PasswordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "password")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
        ,
    priority_list(this, {"levels"})
{

    yang_name = "priority"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Priority::~Priority()
{
}

bool Native::Interface::GigabitEthernet::Isis::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_list.len(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.len(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Isis::Priority::PriorityList>();
        ent_->parent = this;
        priority_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-list" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{

    yang_name = "priority-list"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::Bfd::~Bfd()
{
}

bool Native::Interface::GigabitEthernet::Isis::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{

    yang_name = "three-way-handshake"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::has_data() const
{
    if (is_presence_container) return true;
    return implementor.is_set;
}

bool Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implementor.yfilter);
}

std::string Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.yfilter)) leaf_name_data.push_back(implementor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implementor")
    {
        implementor = value;
        implementor.value_namespace = name_space;
        implementor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implementor")
    {
        implementor.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "implementor")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::has_data() const
{
    if (is_presence_container) return true;
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::GigabitEthernet::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Bfd::Bfd()
    :
    template_{YType::str, "Cisco-IOS-XE-bfd:template"},
    echo{YType::boolean, "Cisco-IOS-XE-bfd:echo"}
        ,
    interval(std::make_shared<Native::Interface::GigabitEthernet::Bfd::Interval>())
{
    interval->parent = this;

    yang_name = "bfd"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Bfd::~Bfd()
{
}

bool Native::Interface::GigabitEthernet::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return template_.is_set
	|| echo.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Interface::GigabitEthernet::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter)
	|| ydk::is_set(echo.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Interface::GigabitEthernet::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());
    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bfd:interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Interface::GigabitEthernet::Bfd::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interval != nullptr)
    {
        _children["Cisco-IOS-XE-bfd:interval"] = interval;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-bfd:template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-bfd:echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "template" || name == "echo")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Bfd::Interval::Interval()
    :
    msecs{YType::uint16, "msecs"},
    min_rx{YType::uint16, "min_rx"},
    multiplier{YType::uint8, "multiplier"}
{

    yang_name = "interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Bfd::Interval::~Interval()
{
}

bool Native::Interface::GigabitEthernet::Bfd::Interval::has_data() const
{
    if (is_presence_container) return true;
    return msecs.is_set
	|| min_rx.is_set
	|| multiplier.is_set;
}

bool Native::Interface::GigabitEthernet::Bfd::Interval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msecs.yfilter)
	|| ydk::is_set(min_rx.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Native::Interface::GigabitEthernet::Bfd::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Bfd::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msecs.is_set || is_set(msecs.yfilter)) leaf_name_data.push_back(msecs.get_name_leafdata());
    if (min_rx.is_set || is_set(min_rx.yfilter)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Bfd::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Bfd::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Bfd::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msecs")
    {
        msecs = value;
        msecs.value_namespace = name_space;
        msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min_rx")
    {
        min_rx = value;
        min_rx.value_namespace = name_space;
        min_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Bfd::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msecs")
    {
        msecs.yfilter = yfilter;
    }
    if(value_path == "min_rx")
    {
        min_rx.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Bfd::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msecs" || name == "min_rx" || name == "multiplier")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::ServiceEngine::Standby::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::ServiceEngine::Standby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::ServiceEngine::Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::ServiceEngine::AccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::ServiceEngine::AccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::ServiceEngine::AccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::ServiceEngine::AccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::ServiceEngine::Trust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::ServiceEngine::Trust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::ServiceEngine::Trust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::ServiceEngine::Trust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::GigabitEthernet::MediaType::auto_select {0, "auto-select"};
const Enum::YLeaf Native::Interface::GigabitEthernet::MediaType::rj45 {1, "rj45"};
const Enum::YLeaf Native::Interface::GigabitEthernet::MediaType::sfp {2, "sfp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::PortType::nni {0, "nni"};

const Enum::YLeaf Native::Interface::GigabitEthernet::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::GigabitEthernet::ChannelProtocol::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::GigabitEthernet::ChannelProtocol::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Duplex::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Duplex::full {1, "full"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Duplex::half {2, "half"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Nat66::inside {0, "inside"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Nat66::outside {1, "outside"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Access::Vlan::Vlan_::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Mode::Dynamic::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Mode::Dynamic::desirable {1, "desirable"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::PortSecurity::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::PortSecurity::Violation::restrict {1, "restrict"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::PortSecurity::Violation::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::Type::absolute {0, "absolute"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::PortSecurity::Aging::Type::inactivity {1, "inactivity"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Trunk::Encapsulation::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Trunk::Encapsulation::isl {1, "isl"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Trunk::Encapsulation::negotiate {2, "negotiate"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Trunk::Native_::Vlan::tag {0, "tag"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::Vlan_::dot1p {0, "dot1p"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::Vlan_::none {1, "none"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Switchport::Voice::Vlan::Vlan_::untagged {2, "untagged"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::MeshGroup::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Network::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Protocol::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CircuitType::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CircuitType::Levels::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CircuitType::Levels::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::CsnpInterval::CsnpIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloInterval::HelloIntervalList::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Ipv6::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Password::PasswordList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Password::PasswordList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::Priority::PriorityList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::Implementor::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Isis::ThreeWayHandshake::Implementor::ietf {1, "ietf"};


}
}

