
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_120.hpp"
#include "Cisco_IOS_XE_native_121.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block")
    {
        block = value;
        block.value_namespace = name_space;
        block.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "block")
    {
        block.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::has_data() const
{
    if (is_presence_container) return true;
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::has_data() const
{
    if (is_presence_container) return true;
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
        ,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
        ,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roaming")
    {
        roaming = value;
        roaming.value_namespace = name_space;
        roaming.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "roaming")
    {
        roaming.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::has_data() const
{
    if (is_presence_container) return true;
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-stop")
    {
        acct_stop = value;
        acct_stop.value_namespace = name_space;
        acct_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail = value;
        reauth_fail.value_namespace = name_space;
        reauth_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-stop")
    {
        acct_stop.yfilter = yfilter;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::ClientIpMaskVrf()
    :
    client(this, {"ip", "mask", "vrf"})
{

    yang_name = "client-ip-mask-vrf"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::~ClientIpMaskVrf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-ip-mask-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Client()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    vrf{YType::str, "vrf"}
        ,
    accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication>())
    , calling_station_id(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId>())
    , eap_user(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser>())
    , filter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter>())
    , key(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator>())
    , mode(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode>())
    , pwlan_session(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession>())
    , re_authentication(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication>())
    , session_identifier(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier>())
    , timer(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer>())
{
    accounting->parent = this;
    authentication->parent = this;
    calling_station_id->parent = this;
    eap_user->parent = this;
    filter->parent = this;
    key->parent = this;
    message_authenticator->parent = this;
    mode->parent = this;
    pwlan_session->parent = this;
    re_authentication->parent = this;
    session_identifier->parent = this;
    timer->parent = this;

    yang_name = "client"; yang_parent_name = "client-ip-mask-vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mask.is_set
	|| vrf.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (calling_station_id !=  nullptr && calling_station_id->has_data())
	|| (eap_user !=  nullptr && eap_user->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (pwlan_session !=  nullptr && pwlan_session->has_data())
	|| (re_authentication !=  nullptr && re_authentication->has_data())
	|| (session_identifier !=  nullptr && session_identifier->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (calling_station_id !=  nullptr && calling_station_id->has_operation())
	|| (eap_user !=  nullptr && eap_user->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (pwlan_session !=  nullptr && pwlan_session->has_operation())
	|| (re_authentication !=  nullptr && re_authentication->has_operation())
	|| (session_identifier !=  nullptr && session_identifier->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/client-ip-mask-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    ADD_KEY_TOKEN(mask, "mask");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "calling-station-id")
    {
        if(calling_station_id == nullptr)
        {
            calling_station_id = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId>();
        }
        return calling_station_id;
    }

    if(child_yang_name == "eap-user")
    {
        if(eap_user == nullptr)
        {
            eap_user = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser>();
        }
        return eap_user;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "pwlan-session")
    {
        if(pwlan_session == nullptr)
        {
            pwlan_session = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession>();
        }
        return pwlan_session;
    }

    if(child_yang_name == "re-authentication")
    {
        if(re_authentication == nullptr)
        {
            re_authentication = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication>();
        }
        return re_authentication;
    }

    if(child_yang_name == "session-identifier")
    {
        if(session_identifier == nullptr)
        {
            session_identifier = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier>();
        }
        return session_identifier;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(calling_station_id != nullptr)
    {
        _children["calling-station-id"] = calling_station_id;
    }

    if(eap_user != nullptr)
    {
        _children["eap-user"] = eap_user;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        _children["message-authenticator"] = message_authenticator;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(pwlan_session != nullptr)
    {
        _children["pwlan-session"] = pwlan_session;
    }

    if(re_authentication != nullptr)
    {
        _children["re-authentication"] = re_authentication;
    }

    if(session_identifier != nullptr)
    {
        _children["session-identifier"] = session_identifier;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "calling-station-id" || name == "eap-user" || name == "filter" || name == "key" || name == "message-authenticator" || name == "mode" || name == "pwlan-session" || name == "re-authentication" || name == "session-identifier" || name == "timer" || name == "ip" || name == "mask" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::Accounting()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList>())
{
    method_list->parent = this;

    yang_name = "accounting"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Accounting::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::Authentication()
    :
    port{YType::uint16, "port"}
        ,
    method_list(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList>())
{
    method_list->parent = this;

    yang_name = "authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::~Authentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| (method_list !=  nullptr && method_list->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (method_list !=  nullptr && method_list->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method-list")
    {
        if(method_list == nullptr)
        {
            method_list = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList>();
        }
        return method_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method_list != nullptr)
    {
        _children["method-list"] = method_list;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-list" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::MethodList()
    :
    method_name{YType::str, "method-name"},
    default_{YType::empty, "default"}
{

    yang_name = "method-list"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::~MethodList()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::has_data() const
{
    if (is_presence_container) return true;
    return method_name.is_set
	|| default_.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method_name.is_set || is_set(method_name.yfilter)) leaf_name_data.push_back(method_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method-name")
    {
        method_name = value;
        method_name.value_namespace = name_space;
        method_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method-name")
    {
        method_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Authentication::MethodList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method-name" || name == "default")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::CallingStationId()
    :
    format(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format>())
{
    format->parent = this;

    yang_name = "calling-station-id"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::~CallingStationId()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::has_data() const
{
    if (is_presence_container) return true;
    return (format !=  nullptr && format->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::has_operation() const
{
    return is_set(yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "calling-station-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format != nullptr)
    {
        _children["format"] = format;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::Format()
    :
    msisdn{YType::empty, "msisdn"}
        ,
    mac_address(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "format"; yang_parent_name = "calling-station-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::~Format()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::has_data() const
{
    if (is_presence_container) return true;
    return msisdn.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msisdn.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msisdn.is_set || is_set(msisdn.yfilter)) leaf_name_data.push_back(msisdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msisdn")
    {
        msisdn = value;
        msisdn.value_namespace = name_space;
        msisdn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msisdn")
    {
        msisdn.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "msisdn")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::MacAddress()
    :
    none{YType::empty, "none"}
        ,
    default_(nullptr) // presence node
    , ietf(nullptr) // presence node
    , one_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte>())
    , three_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>())
    , two_byte(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte>())
    , unformatted(nullptr) // presence node
{
    one_byte->parent = this;
    three_byte->parent = this;
    two_byte->parent = this;

    yang_name = "mac-address"; yang_parent_name = "format"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::~MacAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (ietf !=  nullptr && ietf->has_data())
	|| (one_byte !=  nullptr && one_byte->has_data())
	|| (three_byte !=  nullptr && three_byte->has_data())
	|| (two_byte !=  nullptr && two_byte->has_data())
	|| (unformatted !=  nullptr && unformatted->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ietf !=  nullptr && ietf->has_operation())
	|| (one_byte !=  nullptr && one_byte->has_operation())
	|| (three_byte !=  nullptr && three_byte->has_operation())
	|| (two_byte !=  nullptr && two_byte->has_operation())
	|| (unformatted !=  nullptr && unformatted->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ietf")
    {
        if(ietf == nullptr)
        {
            ietf = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf>();
        }
        return ietf;
    }

    if(child_yang_name == "one-byte")
    {
        if(one_byte == nullptr)
        {
            one_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte>();
        }
        return one_byte;
    }

    if(child_yang_name == "three-byte")
    {
        if(three_byte == nullptr)
        {
            three_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte>();
        }
        return three_byte;
    }

    if(child_yang_name == "two-byte")
    {
        if(two_byte == nullptr)
        {
            two_byte = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte>();
        }
        return two_byte;
    }

    if(child_yang_name == "unformatted")
    {
        if(unformatted == nullptr)
        {
            unformatted = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted>();
        }
        return unformatted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(ietf != nullptr)
    {
        _children["ietf"] = ietf;
    }

    if(one_byte != nullptr)
    {
        _children["one-byte"] = one_byte;
    }

    if(three_byte != nullptr)
    {
        _children["three-byte"] = three_byte;
    }

    if(two_byte != nullptr)
    {
        _children["two-byte"] = two_byte;
    }

    if(unformatted != nullptr)
    {
        _children["unformatted"] = unformatted;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "ietf" || name == "one-byte" || name == "three-byte" || name == "two-byte" || name == "unformatted" || name == "none")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Default()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "default"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::~Default()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Ietf()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "ietf"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::~Ietf()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::OneByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "one-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::~OneByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "one-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::ThreeByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "three-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::~ThreeByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "three-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::TwoByte()
    :
    delimiter(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>())
{
    delimiter->parent = this;

    yang_name = "two-byte"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::~TwoByte()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_data() const
{
    if (is_presence_container) return true;
    return (delimiter !=  nullptr && delimiter->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_operation() const
{
    return is_set(yfilter)
	|| (delimiter !=  nullptr && delimiter->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delimiter")
    {
        if(delimiter == nullptr)
        {
            delimiter = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter>();
        }
        return delimiter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delimiter != nullptr)
    {
        _children["delimiter"] = delimiter;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Delimiter()
    :
    colon(nullptr) // presence node
    , dot(nullptr) // presence node
    , hyphen(nullptr) // presence node
{

    yang_name = "delimiter"; yang_parent_name = "two-byte"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::~Delimiter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_data() const
{
    if (is_presence_container) return true;
    return (colon !=  nullptr && colon->has_data())
	|| (dot !=  nullptr && dot->has_data())
	|| (hyphen !=  nullptr && hyphen->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_operation() const
{
    return is_set(yfilter)
	|| (colon !=  nullptr && colon->has_operation())
	|| (dot !=  nullptr && dot->has_operation())
	|| (hyphen !=  nullptr && hyphen->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delimiter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "colon")
    {
        if(colon == nullptr)
        {
            colon = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon>();
        }
        return colon;
    }

    if(child_yang_name == "dot")
    {
        if(dot == nullptr)
        {
            dot = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot>();
        }
        return dot;
    }

    if(child_yang_name == "hyphen")
    {
        if(hyphen == nullptr)
        {
            hyphen = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen>();
        }
        return hyphen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(colon != nullptr)
    {
        _children["colon"] = colon;
    }

    if(dot != nullptr)
    {
        _children["dot"] = dot;
    }

    if(hyphen != nullptr)
    {
        _children["hyphen"] = hyphen;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "colon" || name == "dot" || name == "hyphen")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Colon()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "colon"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::~Colon()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "colon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Dot()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "dot"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::~Dot()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Hyphen()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "hyphen"; yang_parent_name = "delimiter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::~Hyphen()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hyphen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Unformatted()
    :
    type{YType::enumeration, "type"}
{

    yang_name = "unformatted"; yang_parent_name = "mac-address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::~Unformatted()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unformatted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::EapUser()
    :
    ignore_open_session{YType::empty, "ignore-open-session"}
{

    yang_name = "eap-user"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::~EapUser()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::has_data() const
{
    if (is_presence_container) return true;
    return ignore_open_session.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_open_session.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_open_session.is_set || is_set(ignore_open_session.yfilter)) leaf_name_data.push_back(ignore_open_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session = value;
        ignore_open_session.value_namespace = name_space;
        ignore_open_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-open-session")
    {
        ignore_open_session.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::EapUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-open-session")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Filter()
    :
    access(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access>())
    , accounting(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting>())
    , attribute(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute>())
{
    access->parent = this;
    accounting->parent = this;
    attribute->parent = this;

    yang_name = "filter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::~Filter()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (access !=  nullptr && access->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access>();
        }
        return access;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access != nullptr)
    {
        _children["access"] = access;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(attribute != nullptr)
    {
        _children["attribute"] = attribute;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "accounting" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Access()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "access"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::~Access()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Access::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Accounting()
    :
    ack(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack>())
    , drop(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop>())
    , ignore(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore>())
{
    ack->parent = this;
    drop->parent = this;
    ignore->parent = this;

    yang_name = "accounting"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::~Accounting()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (ack !=  nullptr && ack->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (ack !=  nullptr && ack->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ack")
    {
        if(ack == nullptr)
        {
            ack = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack>();
        }
        return ack;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ack != nullptr)
    {
        _children["ack"] = ack;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "drop" || name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::Ack()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ack"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::~Ack()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::Drop()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "drop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::~Drop()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::Ignore()
    :
    word1{YType::str, "word1"},
    word2{YType::str, "word2"},
    word3{YType::str, "word3"},
    word4{YType::str, "word4"}
{

    yang_name = "ignore"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return word1.is_set
	|| word2.is_set
	|| word3.is_set
	|| word4.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word1.yfilter)
	|| ydk::is_set(word2.yfilter)
	|| ydk::is_set(word3.yfilter)
	|| ydk::is_set(word4.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word1.is_set || is_set(word1.yfilter)) leaf_name_data.push_back(word1.get_name_leafdata());
    if (word2.is_set || is_set(word2.yfilter)) leaf_name_data.push_back(word2.get_name_leafdata());
    if (word3.is_set || is_set(word3.yfilter)) leaf_name_data.push_back(word3.get_name_leafdata());
    if (word4.is_set || is_set(word4.yfilter)) leaf_name_data.push_back(word4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word1")
    {
        word1 = value;
        word1.value_namespace = name_space;
        word1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word2")
    {
        word2 = value;
        word2.value_namespace = name_space;
        word2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word3")
    {
        word3 = value;
        word3.value_namespace = name_space;
        word3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word4")
    {
        word4 = value;
        word4.value_namespace = name_space;
        word4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word1")
    {
        word1.yfilter = yfilter;
    }
    if(value_path == "word2")
    {
        word2.yfilter = yfilter;
    }
    if(value_path == "word3")
    {
        word3.yfilter = yfilter;
    }
    if(value_path == "word4")
    {
        word4.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Accounting::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word1" || name == "word2" || name == "word3" || name == "word4")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::Attribute()
    :
    allow{YType::str, "allow"},
    block{YType::str, "block"}
{

    yang_name = "attribute"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::~Attribute()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return allow.is_set
	|| block.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow.yfilter)
	|| ydk::is_set(block.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow.is_set || is_set(allow.yfilter)) leaf_name_data.push_back(allow.get_name_leafdata());
    if (block.is_set || is_set(block.yfilter)) leaf_name_data.push_back(block.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow")
    {
        allow = value;
        allow.value_namespace = name_space;
        allow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block")
    {
        block = value;
        block.value_namespace = name_space;
        block.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow")
    {
        allow.yfilter = yfilter;
    }
    if(value_path == "block")
    {
        block.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Filter::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::MessageAuthenticator()
    :
    ignore(nullptr) // presence node
{

    yang_name = "message-authenticator"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return (ignore !=  nullptr && ignore->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| (ignore !=  nullptr && ignore->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore>();
        }
        return ignore;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ignore != nullptr)
    {
        _children["ignore"] = ignore;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::Ignore()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "ignore"; yang_parent_name = "message-authenticator"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::~Ignore()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::MessageAuthenticator::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::Mode()
    :
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "mode"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::~Mode()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_data() const
{
    if (is_presence_container) return true;
    return pass_through.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pass-through")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::PwlanSession()
    :
    reconnect{YType::empty, "reconnect"}
{

    yang_name = "pwlan-session"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::~PwlanSession()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_data() const
{
    if (is_presence_container) return true;
    return reconnect.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reconnect.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwlan-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::PwlanSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reconnect")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::ReAuthentication()
    :
    do_not_apply{YType::empty, "do-not-apply"}
{

    yang_name = "re-authentication"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::~ReAuthentication()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return do_not_apply.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(do_not_apply.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "re-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_apply.is_set || is_set(do_not_apply.yfilter)) leaf_name_data.push_back(do_not_apply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply = value;
        do_not_apply.value_namespace = name_space;
        do_not_apply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-apply")
    {
        do_not_apply.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::ReAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-apply")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::SessionIdentifier()
    :
    attribute{YType::uint8, "attribute"}
        ,
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa>())
{
    vsa->parent = this;

    yang_name = "session-identifier"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::~SessionIdentifier()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_data() const
{
    if (is_presence_container) return true;
    return attribute.is_set
	|| (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa" || name == "attribute")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::Vsa()
    :
    vendor{YType::uint16, "vendor"},
    type{YType::uint8, "type"}
{

    yang_name = "vsa"; yang_parent_name = "session-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| type.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::SessionIdentifier::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Timer()
    :
    ip_address{YType::uint16, "ip-address"},
    reconnect{YType::uint16, "reconnect"},
    request{YType::uint16, "request"},
    roaming{YType::uint16, "roaming"}
        ,
    disconnect(std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect>())
{
    disconnect->parent = this;

    yang_name = "timer"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::~Timer()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| reconnect.is_set
	|| request.is_set
	|| roaming.is_set
	|| (disconnect !=  nullptr && disconnect->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(reconnect.yfilter)
	|| ydk::is_set(request.yfilter)
	|| ydk::is_set(roaming.yfilter)
	|| (disconnect !=  nullptr && disconnect->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (reconnect.is_set || is_set(reconnect.yfilter)) leaf_name_data.push_back(reconnect.get_name_leafdata());
    if (request.is_set || is_set(request.yfilter)) leaf_name_data.push_back(request.get_name_leafdata());
    if (roaming.is_set || is_set(roaming.yfilter)) leaf_name_data.push_back(roaming.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disconnect")
    {
        if(disconnect == nullptr)
        {
            disconnect = std::make_shared<Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect>();
        }
        return disconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disconnect != nullptr)
    {
        _children["disconnect"] = disconnect;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reconnect")
    {
        reconnect = value;
        reconnect.value_namespace = name_space;
        reconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request")
    {
        request = value;
        request.value_namespace = name_space;
        request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "roaming")
    {
        roaming = value;
        roaming.value_namespace = name_space;
        roaming.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "reconnect")
    {
        reconnect.yfilter = yfilter;
    }
    if(value_path == "request")
    {
        request.yfilter = yfilter;
    }
    if(value_path == "roaming")
    {
        roaming.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnect" || name == "ip-address" || name == "reconnect" || name == "request" || name == "roaming")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::Disconnect()
    :
    acct_stop{YType::uint16, "acct-stop"},
    reauth_fail{YType::uint16, "reauth-fail"}
{

    yang_name = "disconnect"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::~Disconnect()
{
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_data() const
{
    if (is_presence_container) return true;
    return acct_stop.is_set
	|| reauth_fail.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_stop.yfilter)
	|| ydk::is_set(reauth_fail.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_stop.is_set || is_set(acct_stop.yfilter)) leaf_name_data.push_back(acct_stop.get_name_leafdata());
    if (reauth_fail.is_set || is_set(reauth_fail.yfilter)) leaf_name_data.push_back(reauth_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-stop")
    {
        acct_stop = value;
        acct_stop.value_namespace = name_space;
        acct_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail = value;
        reauth_fail.value_namespace = name_space;
        reauth_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-stop")
    {
        acct_stop.yfilter = yfilter;
    }
    if(value_path == "reauth-fail")
    {
        reauth_fail.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Timer::Disconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-stop" || name == "reauth-fail")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Send()
    :
    vsa(std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa>())
{
    vsa->parent = this;

    yang_name = "send"; yang_parent_name = "proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Send::~Send()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_data() const
{
    if (is_presence_container) return true;
    return (vsa !=  nullptr && vsa->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_operation() const
{
    return is_set(yfilter)
	|| (vsa !=  nullptr && vsa->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsa")
    {
        if(vsa == nullptr)
        {
            vsa = std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa>();
        }
        return vsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsa != nullptr)
    {
        _children["vsa"] = vsa;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsa")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::Vsa()
    :
    rpclient_source_address(nullptr) // presence node
{

    yang_name = "vsa"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::~Vsa()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_data() const
{
    if (is_presence_container) return true;
    return (rpclient_source_address !=  nullptr && rpclient_source_address->has_data());
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_operation() const
{
    return is_set(yfilter)
	|| (rpclient_source_address !=  nullptr && rpclient_source_address->has_operation());
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpclient-source-address")
    {
        if(rpclient_source_address == nullptr)
        {
            rpclient_source_address = std::make_shared<Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress>();
        }
        return rpclient_source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Send::Vsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpclient_source_address != nullptr)
    {
        _children["rpclient-source-address"] = rpclient_source_address;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpclient-source-address")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::RpclientSourceAddress()
    :
    accounting{YType::empty, "accounting"},
    authentication{YType::empty, "authentication"}
{

    yang_name = "rpclient-source-address"; yang_parent_name = "vsa"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::~RpclientSourceAddress()
{
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return accounting.is_set
	|| authentication.is_set;
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| ydk::is_set(authentication.yfilter);
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/proxy/send/vsa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpclient-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Proxy::Send::Vsa::RpclientSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Sesm()
    :
    port{YType::uint16, "port"}
        ,
    client(this, {"ip"})
    , key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Key>())
    , message_authenticator(std::make_shared<Native::Aaa::Server::Radius::Sesm::MessageAuthenticator>())
{
    key->parent = this;
    message_authenticator->parent = this;

    yang_name = "sesm"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Aaa::Server::Radius::Sesm::~Sesm()
{
}

bool Native::Aaa::Server::Radius::Sesm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return port.is_set
	|| (key !=  nullptr && key->has_data())
	|| (message_authenticator !=  nullptr && message_authenticator->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| (key !=  nullptr && key->has_operation())
	|| (message_authenticator !=  nullptr && message_authenticator->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client>();
        ent_->parent = this;
        client.append(ent_);
        return ent_;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Key>();
        }
        return key;
    }

    if(child_yang_name == "message-authenticator")
    {
        if(message_authenticator == nullptr)
        {
            message_authenticator = std::make_shared<Native::Aaa::Server::Radius::Sesm::MessageAuthenticator>();
        }
        return message_authenticator;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(message_authenticator != nullptr)
    {
        _children["message-authenticator"] = message_authenticator;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Sesm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "key" || name == "message-authenticator" || name == "port")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Client()
    :
    ip{YType::str, "ip"}
        ,
    vrf(this, {"name"})
    , key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Key>())
{
    key->parent = this;

    yang_name = "client"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Sesm::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "key" || name == "ip")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    key(std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key>())
{
    key->parent = this;

    yang_name = "vrf"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Client::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Aaa::Server::Radius::Sesm::Client::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Client::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Client::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Client::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Client::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Client::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Client::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Client::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::Key::Key()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "key"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Sesm::Key::~Key()
{
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::Key::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::MessageAuthenticator()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "message-authenticator"; yang_parent_name = "sesm"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::~MessageAuthenticator()
{
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/sesm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::Sesm::MessageAuthenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Aaa::Login::Login()
    :
    display{YType::enumeration, "display"},
    success_track_conf_time{YType::uint8, "success-track-conf-time"}
{

    yang_name = "login"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Login::~Login()
{
}

bool Native::Aaa::Login::has_data() const
{
    if (is_presence_container) return true;
    return display.is_set
	|| success_track_conf_time.is_set;
}

bool Native::Aaa::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display.yfilter)
	|| ydk::is_set(success_track_conf_time.yfilter);
}

std::string Native::Aaa::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display.is_set || is_set(display.yfilter)) leaf_name_data.push_back(display.get_name_leafdata());
    if (success_track_conf_time.is_set || is_set(success_track_conf_time.yfilter)) leaf_name_data.push_back(success_track_conf_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display")
    {
        display = value;
        display.value_namespace = name_space;
        display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time = value;
        success_track_conf_time.value_namespace = name_space;
        success_track_conf_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display")
    {
        display.yfilter = yfilter;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "display" || name == "success-track-conf-time")
        return true;
    return false;
}

Native::Aaa::Memory::Memory()
    :
    threshold(std::make_shared<Native::Aaa::Memory::Threshold>())
{
    threshold->parent = this;

    yang_name = "memory"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::~Memory()
{
}

bool Native::Aaa::Memory::has_data() const
{
    if (is_presence_container) return true;
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Aaa::Memory::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Aaa::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Aaa::Memory::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold != nullptr)
    {
        _children["threshold"] = threshold;
    }

    return _children;
}

void Native::Aaa::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Threshold()
    :
    accounting(std::make_shared<Native::Aaa::Memory::Threshold::Accounting>())
    , authentication(std::make_shared<Native::Aaa::Memory::Threshold::Authentication>())
{
    accounting->parent = this;
    authentication->parent = this;

    yang_name = "threshold"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::Threshold::~Threshold()
{
}

bool Native::Aaa::Memory::Threshold::has_data() const
{
    if (is_presence_container) return true;
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Memory::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Memory::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Memory::Threshold::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Memory::Threshold::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Aaa::Memory::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Memory::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Memory::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Accounting::Accounting()
    :
    disable{YType::uint8, "disable"}
{

    yang_name = "accounting"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::Threshold::Accounting::~Accounting()
{
}

bool Native::Aaa::Memory::Threshold::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Aaa::Memory::Threshold::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Aaa::Memory::Threshold::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::Threshold::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::Threshold::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Memory::Threshold::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Memory::Threshold::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Aaa::Memory::Threshold::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Aaa::Memory::Threshold::Authentication::Authentication()
    :
    reject{YType::uint8, "reject"}
{

    yang_name = "authentication"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Memory::Threshold::Authentication::~Authentication()
{
}

bool Native::Aaa::Memory::Threshold::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return reject.is_set;
}

bool Native::Aaa::Memory::Threshold::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reject.yfilter);
}

std::string Native::Aaa::Memory::Threshold::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Memory::Threshold::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Memory::Threshold::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reject.is_set || is_set(reject.yfilter)) leaf_name_data.push_back(reject.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Memory::Threshold::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Memory::Threshold::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Memory::Threshold::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reject")
    {
        reject = value;
        reject.value_namespace = name_space;
        reject.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Memory::Threshold::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reject")
    {
        reject.yfilter = yfilter;
    }
}

bool Native::Aaa::Memory::Threshold::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reject")
        return true;
    return false;
}

Native::Aaa::Policy::Policy()
    :
    interface_config{YType::enumeration, "interface-config"}
{

    yang_name = "policy"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Policy::~Policy()
{
}

bool Native::Aaa::Policy::has_data() const
{
    if (is_presence_container) return true;
    return interface_config.is_set;
}

bool Native::Aaa::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_config.yfilter);
}

std::string Native::Aaa::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_config.is_set || is_set(interface_config.yfilter)) leaf_name_data.push_back(interface_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-config")
    {
        interface_config = value;
        interface_config.value_namespace = name_space;
        interface_config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-config")
    {
        interface_config.yfilter = yfilter;
    }
}

bool Native::Aaa::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config")
        return true;
    return false;
}

Native::Aaa::Route::Route()
    :
    download(std::make_shared<Native::Aaa::Route::Download>())
{
    download->parent = this;

    yang_name = "route"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Route::~Route()
{
}

bool Native::Aaa::Route::has_data() const
{
    if (is_presence_container) return true;
    return (download !=  nullptr && download->has_data());
}

bool Native::Aaa::Route::has_operation() const
{
    return is_set(yfilter)
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Aaa::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Aaa::Route::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(download != nullptr)
    {
        _children["download"] = download;
    }

    return _children;
}

void Native::Aaa::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "download")
        return true;
    return false;
}

Native::Aaa::Route::Download::Download()
    :
    update_period{YType::uint16, "update-period"},
    authorization{YType::str, "authorization"}
{

    yang_name = "download"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Aaa::Route::Download::~Download()
{
}

bool Native::Aaa::Route::Download::has_data() const
{
    if (is_presence_container) return true;
    return update_period.is_set
	|| authorization.is_set;
}

bool Native::Aaa::Route::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_period.yfilter)
	|| ydk::is_set(authorization.yfilter);
}

std::string Native::Aaa::Route::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Route::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Route::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_period.is_set || is_set(update_period.yfilter)) leaf_name_data.push_back(update_period.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Aaa::Route::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Aaa::Route::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Aaa::Route::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-period")
    {
        update_period = value;
        update_period.value_namespace = name_space;
        update_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Route::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-period")
    {
        update_period.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
}

bool Native::Aaa::Route::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-period" || name == "authorization")
        return true;
    return false;
}

Native::Privilege::Privilege()
    :
    mode(this, {"name"})
{

    yang_name = "privilege"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Privilege::~Privilege()
{
}

bool Native::Privilege::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mode.len(); index++)
    {
        if(mode[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::has_operation() const
{
    for (std::size_t index=0; index<mode.len(); index++)
    {
        if(mode[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Privilege::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode>();
        ent_->parent = this;
        mode.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mode.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Privilege::Mode::Mode()
    :
    name{YType::enumeration, "name"}
        ,
    all(std::make_shared<Native::Privilege::Mode::All>())
    , level(this, {"privilege"})
    , reset(this, {"command"})
{
    all->parent = this;

    yang_name = "mode"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Privilege::Mode::~Mode()
{
}

bool Native::Privilege::Mode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_data())
            return true;
    }
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::Privilege::Mode::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Privilege::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Privilege::Mode::All>();
        }
        return all;
    }

    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reset")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::Reset>();
        ent_->parent = this;
        reset.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "level" || name == "reset" || name == "name")
        return true;
    return false;
}

Native::Privilege::Mode::All::All()
    :
    level(this, {"privilege"})
    , reset(this, {"command"})
{

    yang_name = "all"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::~All()
{
}

bool Native::Privilege::Mode::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::Mode::All::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reset.len(); index++)
    {
        if(reset[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Privilege::Mode::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::All::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reset")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::All::Reset>();
        ent_->parent = this;
        reset.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::Mode::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::Mode::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "reset")
        return true;
    return false;
}

Native::Privilege::Mode::All::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
        ,
    command_list(this, {"command"})
{

    yang_name = "level"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::Level::~Level()
{
}

bool Native::Privilege::Mode::All::Level::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Mode::All::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Privilege::Mode::All::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(privilege, "privilege");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::All::Level::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::All::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::All::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::All::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list" || name == "privilege")
        return true;
    return false;
}

Native::Privilege::Mode::All::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{

    yang_name = "command-list"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Mode::All::Level::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::All::Level::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::All::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::Level::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::All::Level::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::All::Level::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::All::Level::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Privilege::Mode::All::Reset::Reset()
    :
    command{YType::str, "command"}
{

    yang_name = "reset"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::All::Reset::~Reset()
{
}

bool Native::Privilege::Mode::All::Reset::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::All::Reset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::All::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::All::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::All::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::All::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::All::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::All::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::All::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Privilege::Mode::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
        ,
    command_list(this, {"command"})
{

    yang_name = "level"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::Level::~Level()
{
}

bool Native::Privilege::Mode::Level::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Mode::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Privilege::Mode::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(privilege, "privilege");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Privilege::Mode::Level::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Privilege::Mode::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list" || name == "privilege")
        return true;
    return false;
}

Native::Privilege::Mode::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{

    yang_name = "command-list"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Mode::Level::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::Level::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::Level::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::Level::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::Level::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::Level::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Privilege::Mode::Reset::Reset()
    :
    command{YType::str, "command"}
{

    yang_name = "reset"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Privilege::Mode::Reset::~Reset()
{
}

bool Native::Privilege::Mode::Reset::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set;
}

bool Native::Privilege::Mode::Reset::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Mode::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Mode::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Privilege::Mode::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Privilege::Mode::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Privilege::Mode::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Mode::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Mode::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Login::Login()
    :
    delay{YType::uint8, "delay"}
        ,
    on_failure(nullptr) // presence node
    , on_success(nullptr) // presence node
{

    yang_name = "login"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Login::~Login()
{
}

bool Native::Login::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| (on_failure !=  nullptr && on_failure->has_data())
	|| (on_success !=  nullptr && on_success->has_data());
}

bool Native::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (on_failure !=  nullptr && on_failure->has_operation())
	|| (on_success !=  nullptr && on_success->has_operation());
}

std::string Native::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-failure")
    {
        if(on_failure == nullptr)
        {
            on_failure = std::make_shared<Native::Login::OnFailure>();
        }
        return on_failure;
    }

    if(child_yang_name == "on-success")
    {
        if(on_success == nullptr)
        {
            on_success = std::make_shared<Native::Login::OnSuccess>();
        }
        return on_success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(on_failure != nullptr)
    {
        _children["on-failure"] = on_failure;
    }

    if(on_success != nullptr)
    {
        _children["on-success"] = on_success;
    }

    return _children;
}

void Native::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-failure" || name == "on-success" || name == "delay")
        return true;
    return false;
}

Native::Login::OnFailure::OnFailure()
    :
    log(nullptr) // presence node
{

    yang_name = "on-failure"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnFailure::~OnFailure()
{
}

bool Native::Login::OnFailure::has_data() const
{
    if (is_presence_container) return true;
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnFailure::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnFailure::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Login::OnFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnFailure::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-failure"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnFailure::Log::~Log()
{
}

bool Native::Login::OnFailure::Log::has_data() const
{
    if (is_presence_container) return true;
    return every.is_set;
}

bool Native::Login::OnFailure::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnFailure::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-failure/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnFailure::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnFailure::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Login::OnFailure::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnFailure::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnFailure::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Login::OnSuccess::OnSuccess()
    :
    log(nullptr) // presence node
{

    yang_name = "on-success"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnSuccess::~OnSuccess()
{
}

bool Native::Login::OnSuccess::has_data() const
{
    if (is_presence_container) return true;
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnSuccess::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnSuccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnSuccess::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Login::OnSuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnSuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnSuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnSuccess::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-success"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Login::OnSuccess::Log::~Log()
{
}

bool Native::Login::OnSuccess::Log::has_data() const
{
    if (is_presence_container) return true;
    return every.is_set;
}

bool Native::Login::OnSuccess::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnSuccess::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Login::OnSuccess::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Login::OnSuccess::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Login::OnSuccess::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnSuccess::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnSuccess::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Multilink::Multilink()
    :
    bundle_name{YType::enumeration, "Cisco-IOS-XE-ppp:bundle-name"},
    virtual_template{YType::uint16, "Cisco-IOS-XE-ppp:virtual-template"}
{

    yang_name = "multilink"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Multilink::~Multilink()
{
}

bool Native::Multilink::has_data() const
{
    if (is_presence_container) return true;
    return bundle_name.is_set
	|| virtual_template.is_set;
}

bool Native::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Multilink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ppp:bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ppp:virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "virtual-template")
        return true;
    return false;
}

Native::MacAddressTable::MacAddressTable()
    :
    evc_xconnect(std::make_shared<Native::MacAddressTable::EvcXconnect>())
    , limit(std::make_shared<Native::MacAddressTable::Limit>())
    , learning(std::make_shared<Native::MacAddressTable::Learning>())
{
    evc_xconnect->parent = this;
    limit->parent = this;
    learning->parent = this;

    yang_name = "mac-address-table"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::~MacAddressTable()
{
}

bool Native::MacAddressTable::has_data() const
{
    if (is_presence_container) return true;
    return (evc_xconnect !=  nullptr && evc_xconnect->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (learning !=  nullptr && learning->has_data());
}

bool Native::MacAddressTable::has_operation() const
{
    return is_set(yfilter)
	|| (evc_xconnect !=  nullptr && evc_xconnect->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (learning !=  nullptr && learning->has_operation());
}

std::string Native::MacAddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evc-xconnect")
    {
        if(evc_xconnect == nullptr)
        {
            evc_xconnect = std::make_shared<Native::MacAddressTable::EvcXconnect>();
        }
        return evc_xconnect;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::MacAddressTable::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::MacAddressTable::Learning>();
        }
        return learning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(evc_xconnect != nullptr)
    {
        _children["evc-xconnect"] = evc_xconnect;
    }

    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    if(learning != nullptr)
    {
        _children["learning"] = learning;
    }

    return _children;
}

void Native::MacAddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evc-xconnect" || name == "limit" || name == "learning")
        return true;
    return false;
}

Native::MacAddressTable::EvcXconnect::EvcXconnect()
    :
    l2pt_forward_all{YType::empty, "l2pt-forward-all"}
{

    yang_name = "evc-xconnect"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::EvcXconnect::~EvcXconnect()
{
}

bool Native::MacAddressTable::EvcXconnect::has_data() const
{
    if (is_presence_container) return true;
    return l2pt_forward_all.is_set;
}

bool Native::MacAddressTable::EvcXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2pt_forward_all.yfilter);
}

std::string Native::MacAddressTable::EvcXconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::EvcXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::EvcXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2pt_forward_all.is_set || is_set(l2pt_forward_all.yfilter)) leaf_name_data.push_back(l2pt_forward_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::EvcXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::EvcXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::MacAddressTable::EvcXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all = value;
        l2pt_forward_all.value_namespace = name_space;
        l2pt_forward_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::EvcXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::EvcXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2pt-forward-all")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Limit()
    :
    bdomain(this, {"number"})
{

    yang_name = "limit"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Limit::~Limit()
{
}

bool Native::MacAddressTable::Limit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdomain.len(); index++)
    {
        if(bdomain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Limit::has_operation() const
{
    for (std::size_t index=0; index<bdomain.len(); index++)
    {
        if(bdomain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdomain")
    {
        auto ent_ = std::make_shared<Native::MacAddressTable::Limit::Bdomain>();
        ent_->parent = this;
        bdomain.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdomain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::MacAddressTable::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdomain")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Bdomain::Bdomain()
    :
    number{YType::uint16, "number"},
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "bdomain"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Limit::Bdomain::~Bdomain()
{
}

bool Native::MacAddressTable::Limit::Bdomain::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| action.is_set
	|| maximum.is_set;
}

bool Native::MacAddressTable::Limit::Bdomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string Native::MacAddressTable::Limit::Bdomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::Bdomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdomain";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::Bdomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Limit::Bdomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Limit::Bdomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::MacAddressTable::Limit::Bdomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Limit::Bdomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Limit::Bdomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "action" || name == "maximum")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Learning()
    :
    vlan(this, {"id"})
{

    yang_name = "learning"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Learning::~Learning()
{
}

bool Native::MacAddressTable::Learning::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Learning::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::MacAddressTable::Learning::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::MacAddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Vlan::Vlan()
    :
    id{YType::uint16, "id"},
    module{YType::uint8, "module"}
{

    yang_name = "vlan"; yang_parent_name = "learning"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::MacAddressTable::Learning::Vlan::~Vlan()
{
}

bool Native::MacAddressTable::Learning::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| module.is_set;
}

bool Native::MacAddressTable::Learning::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(module.yfilter);
}

std::string Native::MacAddressTable::Learning::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/learning/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::MacAddressTable::Learning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::MacAddressTable::Learning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::MacAddressTable::Learning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Learning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Learning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "module")
        return true;
    return false;
}

Native::Redundancy::Redundancy()
    :
    maintenance_mode{YType::empty, "maintenance-mode"},
    mode{YType::enumeration, "mode"}
        ,
    main_cpu(nullptr) // presence node
    , policy(std::make_shared<Native::Redundancy::Policy>())
    , timer(std::make_shared<Native::Redundancy::Timer>())
    , interchassis(std::make_shared<Native::Redundancy::Interchassis>())
{
    policy->parent = this;
    timer->parent = this;
    interchassis->parent = this;

    yang_name = "redundancy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Redundancy::~Redundancy()
{
}

bool Native::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return maintenance_mode.is_set
	|| mode.is_set
	|| (main_cpu !=  nullptr && main_cpu->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance_mode.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (main_cpu !=  nullptr && main_cpu->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance_mode.is_set || is_set(maintenance_mode.yfilter)) leaf_name_data.push_back(maintenance_mode.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-cpu")
    {
        if(main_cpu == nullptr)
        {
            main_cpu = std::make_shared<Native::Redundancy::MainCpu>();
        }
        return main_cpu;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Redundancy::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Redundancy::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Redundancy::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main_cpu != nullptr)
    {
        _children["main-cpu"] = main_cpu;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    if(interchassis != nullptr)
    {
        _children["interchassis"] = interchassis;
    }

    return _children;
}

void Native::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode = value;
        maintenance_mode.value_namespace = name_space;
        maintenance_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-cpu" || name == "policy" || name == "timer" || name == "interchassis" || name == "maintenance-mode" || name == "mode")
        return true;
    return false;
}

Native::Redundancy::MainCpu::MainCpu()
    :
    auto_sync(std::make_shared<Native::Redundancy::MainCpu::AutoSync>())
    , standby(std::make_shared<Native::Redundancy::MainCpu::Standby>())
{
    auto_sync->parent = this;
    standby->parent = this;

    yang_name = "main-cpu"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Redundancy::MainCpu::~MainCpu()
{
}

bool Native::Redundancy::MainCpu::has_data() const
{
    if (is_presence_container) return true;
    return (auto_sync !=  nullptr && auto_sync->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Native::Redundancy::MainCpu::has_operation() const
{
    return is_set(yfilter)
	|| (auto_sync !=  nullptr && auto_sync->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Native::Redundancy::MainCpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-sync")
    {
        if(auto_sync == nullptr)
        {
            auto_sync = std::make_shared<Native::Redundancy::MainCpu::AutoSync>();
        }
        return auto_sync;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Redundancy::MainCpu::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_sync != nullptr)
    {
        _children["auto-sync"] = auto_sync;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    return _children;
}

void Native::Redundancy::MainCpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-sync" || name == "standby")
        return true;
    return false;
}

Native::Redundancy::MainCpu::AutoSync::AutoSync()
    :
    running_config{YType::empty, "running-config"},
    config_register{YType::empty, "config-register"},
    bootvar{YType::empty, "bootvar"},
    standard{YType::empty, "standard"}
{

    yang_name = "auto-sync"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::AutoSync::~AutoSync()
{
}

bool Native::Redundancy::MainCpu::AutoSync::has_data() const
{
    if (is_presence_container) return true;
    return running_config.is_set
	|| config_register.is_set
	|| bootvar.is_set
	|| standard.is_set;
}

bool Native::Redundancy::MainCpu::AutoSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(config_register.yfilter)
	|| ydk::is_set(bootvar.yfilter)
	|| ydk::is_set(standard.yfilter);
}

std::string Native::Redundancy::MainCpu::AutoSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::AutoSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::AutoSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (bootvar.is_set || is_set(bootvar.yfilter)) leaf_name_data.push_back(bootvar.get_name_leafdata());
    if (standard.is_set || is_set(standard.yfilter)) leaf_name_data.push_back(standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::AutoSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::AutoSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::MainCpu::AutoSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-register")
    {
        config_register = value;
        config_register.value_namespace = name_space;
        config_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootvar")
    {
        bootvar = value;
        bootvar.value_namespace = name_space;
        bootvar.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard")
    {
        standard = value;
        standard.value_namespace = name_space;
        standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::AutoSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
    if(value_path == "bootvar")
    {
        bootvar.yfilter = yfilter;
    }
    if(value_path == "standard")
    {
        standard.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::AutoSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-config" || name == "config-register" || name == "bootvar" || name == "standard")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Standby()
    :
    console(std::make_shared<Native::Redundancy::MainCpu::Standby::Console>())
    , initialization(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>())
{
    console->parent = this;
    initialization->parent = this;

    yang_name = "standby"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::~Standby()
{
}

bool Native::Redundancy::MainCpu::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (console !=  nullptr && console->has_data())
	|| (initialization !=  nullptr && initialization->has_data());
}

bool Native::Redundancy::MainCpu::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (console !=  nullptr && console->has_operation())
	|| (initialization !=  nullptr && initialization->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Redundancy::MainCpu::Standby::Console>();
        }
        return console;
    }

    if(child_yang_name == "initialization")
    {
        if(initialization == nullptr)
        {
            initialization = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>();
        }
        return initialization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(console != nullptr)
    {
        _children["console"] = console;
    }

    if(initialization != nullptr)
    {
        _children["initialization"] = initialization;
    }

    return _children;
}

void Native::Redundancy::MainCpu::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console" || name == "initialization")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Console::Console()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "console"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::Console::~Console()
{
}

bool Native::Redundancy::MainCpu::Standby::Console::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::MainCpu::Standby::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Initialization()
    :
    delay(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>())
{
    delay->parent = this;

    yang_name = "initialization"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::Initialization::~Initialization()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initialization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::Initialization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::Initialization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::Delay()
    :
    second{YType::uint16, "second"},
    boot_only{YType::empty, "boot-only"}
{

    yang_name = "delay"; yang_parent_name = "initialization"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::~Delay()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_data() const
{
    if (is_presence_container) return true;
    return second.is_set
	|| boot_only.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(boot_only.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/initialization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (boot_only.is_set || is_set(boot_only.yfilter)) leaf_name_data.push_back(boot_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-only")
    {
        boot_only = value;
        boot_only.value_namespace = name_space;
        boot_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "boot-only")
    {
        boot_only.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "boot-only")
        return true;
    return false;
}

Native::Redundancy::Policy::Policy()
    :
    config_sync(std::make_shared<Native::Redundancy::Policy::ConfigSync>())
{
    config_sync->parent = this;

    yang_name = "policy"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::~Policy()
{
}

bool Native::Redundancy::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (config_sync !=  nullptr && config_sync->has_data());
}

bool Native::Redundancy::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (config_sync !=  nullptr && config_sync->has_operation());
}

std::string Native::Redundancy::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-sync")
    {
        if(config_sync == nullptr)
        {
            config_sync = std::make_shared<Native::Redundancy::Policy::ConfigSync>();
        }
        return config_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config_sync != nullptr)
    {
        _children["config-sync"] = config_sync;
    }

    return _children;
}

void Native::Redundancy::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-sync")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::ConfigSync()
    :
    bulk(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>())
    , lbl(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>())
{
    bulk->parent = this;
    lbl->parent = this;

    yang_name = "config-sync"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::~ConfigSync()
{
}

bool Native::Redundancy::Policy::ConfigSync::has_data() const
{
    if (is_presence_container) return true;
    return (bulk !=  nullptr && bulk->has_data())
	|| (lbl !=  nullptr && lbl->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::has_operation() const
{
    return is_set(yfilter)
	|| (bulk !=  nullptr && bulk->has_operation())
	|| (lbl !=  nullptr && lbl->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk")
    {
        if(bulk == nullptr)
        {
            bulk = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>();
        }
        return bulk;
    }

    if(child_yang_name == "lbl")
    {
        if(lbl == nullptr)
        {
            lbl = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>();
        }
        return lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bulk != nullptr)
    {
        _children["bulk"] = bulk;
    }

    if(lbl != nullptr)
    {
        _children["lbl"] = lbl;
    }

    return _children;
}

void Native::Redundancy::Policy::ConfigSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "lbl")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Bulk()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>())
{
    prc->parent = this;

    yang_name = "bulk"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Bulk::~Bulk()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_data() const
{
    if (is_presence_container) return true;
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Bulk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prc != nullptr)
    {
        _children["prc"] = prc;
    }

    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "bulk"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_data() const
{
    if (is_presence_container) return true;
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/bulk/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Lbl()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>())
{
    prc->parent = this;

    yang_name = "lbl"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Lbl::~Lbl()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_data() const
{
    if (is_presence_container) return true;
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Lbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prc != nullptr)
    {
        _children["prc"] = prc;
    }

    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "lbl"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_data() const
{
    if (is_presence_container) return true;
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/lbl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Timer::Timer()
    :
    rpso{YType::uint16, "rpso"}
{

    yang_name = "timer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Timer::~Timer()
{
}

bool Native::Redundancy::Timer::has_data() const
{
    if (is_presence_container) return true;
    return rpso.is_set;
}

bool Native::Redundancy::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpso.yfilter);
}

std::string Native::Redundancy::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpso.is_set || is_set(rpso.yfilter)) leaf_name_data.push_back(rpso.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpso")
    {
        rpso = value;
        rpso.value_namespace = name_space;
        rpso.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpso")
    {
        rpso.yfilter = yfilter;
    }
}

bool Native::Redundancy::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpso")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Interchassis()
    :
    group(this, {"group_number"})
{

    yang_name = "interchassis"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Interchassis::~Interchassis()
{
}

bool Native::Redundancy::Interchassis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Redundancy::Interchassis::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Redundancy::Interchassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Native::Redundancy::Interchassis::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Redundancy::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Group()
    :
    group_number{YType::uint64, "group-number"}
        ,
    monitor(std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>())
    , member(std::make_shared<Native::Redundancy::Interchassis::Group::Member>())
    , backbone(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>())
{
    monitor->parent = this;
    member->parent = this;
    backbone->parent = this;

    yang_name = "group"; yang_parent_name = "interchassis"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Redundancy::Interchassis::Group::~Group()
{
}

bool Native::Redundancy::Interchassis::Group::has_data() const
{
    if (is_presence_container) return true;
    return group_number.is_set
	|| (monitor !=  nullptr && monitor->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (backbone !=  nullptr && backbone->has_data());
}

bool Native::Redundancy::Interchassis::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (backbone !=  nullptr && backbone->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/interchassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Redundancy::Interchassis::Group::Member>();
        }
        return member;
    }

    if(child_yang_name == "backbone")
    {
        if(backbone == nullptr)
        {
            backbone = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>();
        }
        return backbone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    if(member != nullptr)
    {
        _children["member"] = member;
    }

    if(backbone != nullptr)
    {
        _children["backbone"] = backbone;
    }

    return _children;
}

void Native::Redundancy::Interchassis::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "member" || name == "backbone" || name == "group-number")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Monitor::Monitor()
    :
    peer{YType::empty, "peer"},
    bfd{YType::empty, "bfd"}
{

    yang_name = "monitor"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Monitor::~Monitor()
{
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return peer.is_set
	|| bfd.is_set;
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(bfd.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "bfd")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Member::Member()
    :
    ip{YType::str, "ip"}
{

    yang_name = "member"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Member::~Member()
{
}

bool Native::Redundancy::Interchassis::Group::Member::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set;
}

bool Native::Redundancy::Interchassis::Group::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Backbone()
    :
    interface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>())
{
    interface->parent = this;

    yang_name = "backbone"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::~Backbone()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_data() const
{
    if (is_presence_container) return true;
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::Group::Backbone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::Interface()
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
    atm_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backbone"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::~Interface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_data() const
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

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_operation() const
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

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_children() const
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

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Scheduler::Scheduler()
    :
    runtime(std::make_shared<Native::Scheduler::Runtime>())
    , allocate(std::make_shared<Native::Scheduler::Allocate>())
{
    runtime->parent = this;
    allocate->parent = this;

    yang_name = "scheduler"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Scheduler::~Scheduler()
{
}

bool Native::Scheduler::has_data() const
{
    if (is_presence_container) return true;
    return (runtime !=  nullptr && runtime->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool Native::Scheduler::has_operation() const
{
    return is_set(yfilter)
	|| (runtime !=  nullptr && runtime->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string Native::Scheduler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Scheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        if(runtime == nullptr)
        {
            runtime = std::make_shared<Native::Scheduler::Runtime>();
        }
        return runtime;
    }

    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Scheduler::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Scheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(runtime != nullptr)
    {
        _children["runtime"] = runtime;
    }

    if(allocate != nullptr)
    {
        _children["allocate"] = allocate;
    }

    return _children;
}

void Native::Scheduler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Scheduler::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Scheduler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime" || name == "allocate")
        return true;
    return false;
}

Native::Scheduler::Runtime::Runtime()
    :
    netinput{YType::uint16, "netinput"}
{

    yang_name = "runtime"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Scheduler::Runtime::~Runtime()
{
}

bool Native::Scheduler::Runtime::has_data() const
{
    if (is_presence_container) return true;
    return netinput.is_set;
}

bool Native::Scheduler::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netinput.yfilter);
}

std::string Native::Scheduler::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netinput.is_set || is_set(netinput.yfilter)) leaf_name_data.push_back(netinput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Scheduler::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Scheduler::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Scheduler::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netinput")
    {
        netinput = value;
        netinput.value_namespace = name_space;
        netinput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netinput")
    {
        netinput.yfilter = yfilter;
    }
}

bool Native::Scheduler::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netinput")
        return true;
    return false;
}

Native::Scheduler::Allocate::Allocate()
    :
    interrupt_time{YType::uint16, "interrupt-time"},
    process_time{YType::uint16, "process-time"}
{

    yang_name = "allocate"; yang_parent_name = "scheduler"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Scheduler::Allocate::~Allocate()
{
}

bool Native::Scheduler::Allocate::has_data() const
{
    if (is_presence_container) return true;
    return interrupt_time.is_set
	|| process_time.is_set;
}

bool Native::Scheduler::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interrupt_time.yfilter)
	|| ydk::is_set(process_time.yfilter);
}

std::string Native::Scheduler::Allocate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Scheduler::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Scheduler::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interrupt_time.is_set || is_set(interrupt_time.yfilter)) leaf_name_data.push_back(interrupt_time.get_name_leafdata());
    if (process_time.is_set || is_set(process_time.yfilter)) leaf_name_data.push_back(process_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Scheduler::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Scheduler::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Scheduler::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time = value;
        interrupt_time.value_namespace = name_space;
        interrupt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-time")
    {
        process_time = value;
        process_time.value_namespace = name_space;
        process_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Scheduler::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time.yfilter = yfilter;
    }
    if(value_path == "process-time")
    {
        process_time.yfilter = yfilter;
    }
}

bool Native::Scheduler::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interrupt-time" || name == "process-time")
        return true;
    return false;
}

Native::Epm::Epm()
    :
    logging{YType::empty, "logging"}
{

    yang_name = "epm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Epm::~Epm()
{
}

bool Native::Epm::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set;
}

bool Native::Epm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string Native::Epm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Epm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Epm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Epm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Epm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Epm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Epm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Epm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

Native::SpanningTree::SpanningTree()
    :
    backbonefast{YType::empty, "Cisco-IOS-XE-spanning-tree:backbonefast"},
    logging{YType::empty, "Cisco-IOS-XE-spanning-tree:logging"},
    mode{YType::enumeration, "Cisco-IOS-XE-spanning-tree:mode"}
        ,
    bridge(std::make_shared<Native::SpanningTree::Bridge>())
    , etherchannel(std::make_shared<Native::SpanningTree::Etherchannel>())
    , extend(std::make_shared<Native::SpanningTree::Extend>())
    , loopguard(std::make_shared<Native::SpanningTree::Loopguard>())
    , mst(std::make_shared<Native::SpanningTree::Mst>())
    , optimize(std::make_shared<Native::SpanningTree::Optimize>())
    , pathcost(std::make_shared<Native::SpanningTree::Pathcost>())
    , portfast(std::make_shared<Native::SpanningTree::Portfast>())
    , transmit(std::make_shared<Native::SpanningTree::Transmit>())
    , uplinkfast(nullptr) // presence node
    , vlan(this, {"id"})
{
    bridge->parent = this;
    etherchannel->parent = this;
    extend->parent = this;
    loopguard->parent = this;
    mst->parent = this;
    optimize->parent = this;
    pathcost->parent = this;
    portfast->parent = this;
    transmit->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::~SpanningTree()
{
}

bool Native::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return backbonefast.is_set
	|| logging.is_set
	|| mode.is_set
	|| (bridge !=  nullptr && bridge->has_data())
	|| (etherchannel !=  nullptr && etherchannel->has_data())
	|| (extend !=  nullptr && extend->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (pathcost !=  nullptr && pathcost->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (transmit !=  nullptr && transmit->has_data())
	|| (uplinkfast !=  nullptr && uplinkfast->has_data());
}

bool Native::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backbonefast.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (etherchannel !=  nullptr && etherchannel->has_operation())
	|| (extend !=  nullptr && extend->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (pathcost !=  nullptr && pathcost->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (uplinkfast !=  nullptr && uplinkfast->has_operation());
}

std::string Native::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbonefast.is_set || is_set(backbonefast.yfilter)) leaf_name_data.push_back(backbonefast.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SpanningTree::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:etherchannel")
    {
        if(etherchannel == nullptr)
        {
            etherchannel = std::make_shared<Native::SpanningTree::Etherchannel>();
        }
        return etherchannel;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::SpanningTree::Extend>();
        }
        return extend;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::SpanningTree::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:pathcost")
    {
        if(pathcost == nullptr)
        {
            pathcost = std::make_shared<Native::SpanningTree::Pathcost>();
        }
        return pathcost;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<Native::SpanningTree::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:uplinkfast")
    {
        if(uplinkfast == nullptr)
        {
            uplinkfast = std::make_shared<Native::SpanningTree::Uplinkfast>();
        }
        return uplinkfast;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:vlan")
    {
        auto ent_ = std::make_shared<Native::SpanningTree::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bridge != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:bridge"] = bridge;
    }

    if(etherchannel != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:etherchannel"] = etherchannel;
    }

    if(extend != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:extend"] = extend;
    }

    if(loopguard != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:mst"] = mst;
    }

    if(optimize != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:optimize"] = optimize;
    }

    if(pathcost != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:pathcost"] = pathcost;
    }

    if(portfast != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:portfast"] = portfast;
    }

    if(transmit != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:transmit"] = transmit;
    }

    if(uplinkfast != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:uplinkfast"] = uplinkfast;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-spanning-tree:backbonefast")
    {
        backbonefast = value;
        backbonefast.value_namespace = name_space;
        backbonefast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-spanning-tree:logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-spanning-tree:mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbonefast")
    {
        backbonefast.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge" || name == "etherchannel" || name == "extend" || name == "loopguard" || name == "mst" || name == "optimize" || name == "pathcost" || name == "portfast" || name == "transmit" || name == "uplinkfast" || name == "vlan" || name == "backbonefast" || name == "logging" || name == "mode")
        return true;
    return false;
}

Native::SpanningTree::Bridge::Bridge()
    :
    priority{YType::uint8, "priority"},
    id{YType::str, "ID"},
    assurance{YType::boolean, "assurance"}
{

    yang_name = "bridge"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Bridge::~Bridge()
{
}

bool Native::SpanningTree::Bridge::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| id.is_set
	|| assurance.is_set;
}

bool Native::SpanningTree::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(assurance.yfilter);
}

std::string Native::SpanningTree::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (assurance.is_set || is_set(assurance.yfilter)) leaf_name_data.push_back(assurance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ID")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assurance")
    {
        assurance = value;
        assurance.value_namespace = name_space;
        assurance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "ID")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "assurance")
    {
        assurance.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "ID" || name == "assurance")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Etherchannel()
    :
    guard(std::make_shared<Native::SpanningTree::Etherchannel::Guard>())
{
    guard->parent = this;

    yang_name = "etherchannel"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Etherchannel::~Etherchannel()
{
}

bool Native::SpanningTree::Etherchannel::has_data() const
{
    if (is_presence_container) return true;
    return (guard !=  nullptr && guard->has_data());
}

bool Native::SpanningTree::Etherchannel::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::SpanningTree::Etherchannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:etherchannel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Etherchannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::SpanningTree::Etherchannel::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Etherchannel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(guard != nullptr)
    {
        _children["guard"] = guard;
    }

    return _children;
}

void Native::SpanningTree::Etherchannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Etherchannel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Etherchannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Guard::Guard()
    :
    misconfig{YType::boolean, "misconfig"}
{

    yang_name = "guard"; yang_parent_name = "etherchannel"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Etherchannel::Guard::~Guard()
{
}

bool Native::SpanningTree::Etherchannel::Guard::has_data() const
{
    if (is_presence_container) return true;
    return misconfig.is_set;
}

bool Native::SpanningTree::Etherchannel::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(misconfig.yfilter);
}

std::string Native::SpanningTree::Etherchannel::Guard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:etherchannel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (misconfig.is_set || is_set(misconfig.yfilter)) leaf_name_data.push_back(misconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Etherchannel::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Etherchannel::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Etherchannel::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "misconfig")
    {
        misconfig = value;
        misconfig.value_namespace = name_space;
        misconfig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Etherchannel::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "misconfig")
    {
        misconfig.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Etherchannel::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "misconfig")
        return true;
    return false;
}

Native::SpanningTree::Extend::Extend()
    :
    system_id{YType::empty, "system-id"}
{

    yang_name = "extend"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Extend::~Extend()
{
}

bool Native::SpanningTree::Extend::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set;
}

bool Native::SpanningTree::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Native::SpanningTree::Extend::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

Native::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::SpanningTree::Loopguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Loopguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Mst::Mst()
    :
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    max_hops{YType::uint8, "max-hops"}
        ,
    instance_range(this, {"id"})
    , configuration(std::make_shared<Native::SpanningTree::Mst::Configuration>())
{
    configuration->parent = this;

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::~Mst()
{
}

bool Native::SpanningTree::Mst::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance_range.len(); index++)
    {
        if(instance_range[index]->has_data())
            return true;
    }
    return forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| max_hops.is_set
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<instance_range.len(); index++)
    {
        if(instance_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::SpanningTree::Mst::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-range")
    {
        auto ent_ = std::make_shared<Native::SpanningTree::Mst::InstanceRange>();
        ent_->parent = this;
        instance_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::SpanningTree::Mst::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    return _children;
}

void Native::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-range" || name == "configuration" || name == "forward-time" || name == "hello-time" || name == "max-age" || name == "max-hops")
        return true;
    return false;
}

Native::SpanningTree::Mst::InstanceRange::InstanceRange()
    :
    id{YType::str, "id"},
    priority{YType::uint16, "priority"},
    root{YType::enumeration, "root"}
{

    yang_name = "instance-range"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::InstanceRange::~InstanceRange()
{
}

bool Native::SpanningTree::Mst::InstanceRange::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| priority.is_set
	|| root.is_set;
}

bool Native::SpanningTree::Mst::InstanceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(root.yfilter);
}

std::string Native::SpanningTree::Mst::InstanceRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::InstanceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-range";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::InstanceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::InstanceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::InstanceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Mst::InstanceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::InstanceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::InstanceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "priority" || name == "root")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Configuration()
    :
    name{YType::str, "name"},
    revision{YType::uint16, "revision"}
        ,
    instance(this, {"id"})
    , private_vlan(std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>())
{
    private_vlan->parent = this;

    yang_name = "configuration"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::Configuration::~Configuration()
{
}

bool Native::SpanningTree::Mst::Configuration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| revision.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::SpanningTree::Mst::Configuration::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::SpanningTree::Mst::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Native::SpanningTree::Mst::Configuration::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(private_vlan != nullptr)
    {
        _children["private-vlan"] = private_vlan;
    }

    return _children;
}

void Native::SpanningTree::Mst::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "private-vlan" || name == "name" || name == "revision")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Instance::Instance()
    :
    id{YType::uint16, "id"},
    vlan{YType::str, "vlan"}
{

    yang_name = "instance"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::Configuration::Instance::~Instance()
{
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_operation() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::Configuration::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::Configuration::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Mst::Configuration::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

void Native::SpanningTree::Mst::Configuration::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vlan")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::PrivateVlan()
    :
    synchronize{YType::empty, "synchronize"}
{

    yang_name = "private-vlan"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::~PrivateVlan()
{
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_data() const
{
    if (is_presence_container) return true;
    return synchronize.is_set;
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(synchronize.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (synchronize.is_set || is_set(synchronize.yfilter)) leaf_name_data.push_back(synchronize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "synchronize")
    {
        synchronize = value;
        synchronize.value_namespace = name_space;
        synchronize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "synchronize")
    {
        synchronize.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronize")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Optimize()
    :
    bpdu(std::make_shared<Native::SpanningTree::Optimize::Bpdu>())
{
    bpdu->parent = this;

    yang_name = "optimize"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Optimize::~Optimize()
{
}

bool Native::SpanningTree::Optimize::has_data() const
{
    if (is_presence_container) return true;
    return (bpdu !=  nullptr && bpdu->has_data());
}

bool Native::SpanningTree::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (bpdu !=  nullptr && bpdu->has_operation());
}

std::string Native::SpanningTree::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdu")
    {
        if(bpdu == nullptr)
        {
            bpdu = std::make_shared<Native::SpanningTree::Optimize::Bpdu>();
        }
        return bpdu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpdu != nullptr)
    {
        _children["bpdu"] = bpdu;
    }

    return _children;
}

void Native::SpanningTree::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Bpdu::Bpdu()
    :
    transmission{YType::boolean, "transmission"}
{

    yang_name = "bpdu"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Optimize::Bpdu::~Bpdu()
{
}

bool Native::SpanningTree::Optimize::Bpdu::has_data() const
{
    if (is_presence_container) return true;
    return transmission.is_set;
}

bool Native::SpanningTree::Optimize::Bpdu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmission.yfilter);
}

std::string Native::SpanningTree::Optimize::Bpdu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::Bpdu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::Bpdu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmission.is_set || is_set(transmission.yfilter)) leaf_name_data.push_back(transmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Optimize::Bpdu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Optimize::Bpdu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Optimize::Bpdu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmission")
    {
        transmission = value;
        transmission.value_namespace = name_space;
        transmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Optimize::Bpdu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmission")
    {
        transmission.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Optimize::Bpdu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Pathcost()
    :
    method(std::make_shared<Native::SpanningTree::Pathcost::Method>())
{
    method->parent = this;

    yang_name = "pathcost"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Pathcost::~Pathcost()
{
}

bool Native::SpanningTree::Pathcost::has_data() const
{
    if (is_presence_container) return true;
    return (method !=  nullptr && method->has_data());
}

bool Native::SpanningTree::Pathcost::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::SpanningTree::Pathcost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:pathcost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Pathcost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::SpanningTree::Pathcost::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Pathcost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(method != nullptr)
    {
        _children["method"] = method;
    }

    return _children;
}

void Native::SpanningTree::Pathcost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Pathcost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Pathcost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Method::Method()
    :
    long_{YType::empty, "long"},
    short_{YType::empty, "short"}
{

    yang_name = "method"; yang_parent_name = "pathcost"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Pathcost::Method::~Method()
{
}

bool Native::SpanningTree::Pathcost::Method::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| short_.is_set;
}

bool Native::SpanningTree::Pathcost::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::SpanningTree::Pathcost::Method::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:pathcost/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Pathcost::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Pathcost::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Pathcost::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Pathcost::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Pathcost::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Portfast()
    :
    default_{YType::empty, "default"}
        ,
    bpdufilter(std::make_shared<Native::SpanningTree::Portfast::Bpdufilter>())
    , bpduguard(std::make_shared<Native::SpanningTree::Portfast::Bpduguard>())
{
    bpdufilter->parent = this;
    bpduguard->parent = this;

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Portfast::~Portfast()
{
}

bool Native::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (bpdufilter !=  nullptr && bpdufilter->has_data())
	|| (bpduguard !=  nullptr && bpduguard->has_data());
}

bool Native::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (bpdufilter !=  nullptr && bpdufilter->has_operation())
	|| (bpduguard !=  nullptr && bpduguard->has_operation());
}

std::string Native::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdufilter")
    {
        if(bpdufilter == nullptr)
        {
            bpdufilter = std::make_shared<Native::SpanningTree::Portfast::Bpdufilter>();
        }
        return bpdufilter;
    }

    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::SpanningTree::Portfast::Bpduguard>();
        }
        return bpduguard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpdufilter != nullptr)
    {
        _children["bpdufilter"] = bpdufilter;
    }

    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    return _children;
}

void Native::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdufilter" || name == "bpduguard" || name == "default")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Bpdufilter::Bpdufilter()
    :
    default_{YType::empty, "default"}
{

    yang_name = "bpdufilter"; yang_parent_name = "portfast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Portfast::Bpdufilter::~Bpdufilter()
{
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::Bpdufilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:portfast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::Bpdufilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdufilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::Bpdufilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Portfast::Bpdufilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Portfast::Bpdufilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Portfast::Bpdufilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::Bpdufilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::Bpdufilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Bpduguard::Bpduguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "bpduguard"; yang_parent_name = "portfast"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Portfast::Bpduguard::~Bpduguard()
{
}

bool Native::SpanningTree::Portfast::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::SpanningTree::Portfast::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::Bpduguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:portfast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Portfast::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Portfast::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Portfast::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Transmit::Transmit()
    :
    hold_count{YType::uint8, "hold-count"}
{

    yang_name = "transmit"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Transmit::~Transmit()
{
}

bool Native::SpanningTree::Transmit::has_data() const
{
    if (is_presence_container) return true;
    return hold_count.is_set;
}

bool Native::SpanningTree::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_count.yfilter);
}

std::string Native::SpanningTree::Transmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_count.is_set || is_set(hold_count.yfilter)) leaf_name_data.push_back(hold_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-count")
    {
        hold_count = value;
        hold_count.value_namespace = name_space;
        hold_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-count")
    {
        hold_count.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-count")
        return true;
    return false;
}

Native::SpanningTree::Uplinkfast::Uplinkfast()
    :
    max_update_rate{YType::uint32, "max-update-rate"}
{

    yang_name = "uplinkfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::SpanningTree::Uplinkfast::~Uplinkfast()
{
}

bool Native::SpanningTree::Uplinkfast::has_data() const
{
    if (is_presence_container) return true;
    return max_update_rate.is_set;
}

bool Native::SpanningTree::Uplinkfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_update_rate.yfilter);
}

std::string Native::SpanningTree::Uplinkfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Uplinkfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:uplinkfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Uplinkfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_update_rate.is_set || is_set(max_update_rate.yfilter)) leaf_name_data.push_back(max_update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Uplinkfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Uplinkfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::SpanningTree::Uplinkfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate = value;
        max_update_rate.value_namespace = name_space;
        max_update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Uplinkfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Uplinkfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-update-rate")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Vlan()
    :
    id{YType::str, "id"},
    max_age{YType::uint8, "max-age"},
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    priority{YType::uint16, "priority"}
        ,
    root(std::make_shared<Native::SpanningTree::Vlan::Root>())
{
    root->parent = this;

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::SpanningTree::Vlan::~Vlan()
{
}

bool Native::SpanningTree::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| max_age.is_set
	|| forward_time.is_set
	|| hello_time.is_set
	|| priority.is_set
	|| (root !=  nullptr && root->has_data());
}

bool Native::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (root !=  nullptr && root->has_operation());
}

std::string Native::SpanningTree::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:vlan";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root")
    {
        if(root == nullptr)
        {
            root = std::make_shared<Native::SpanningTree::Vlan::Root>();
        }
        return root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(root != nullptr)
    {
        _children["root"] = root;
    }

    return _children;
}

void Native::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root" || name == "id" || name == "max-age" || name == "forward-time" || name == "hello-time" || name == "priority")
        return true;
    return false;
}

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpVrf::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Default::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Ietf::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::OneByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::ThreeByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Colon::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Dot::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::TwoByte::Delimiter::Hyphen::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::lower_case {0, "lower-case"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::CallingStationId::Format::MacAddress::Unformatted::Type::upper_case {1, "upper-case"};

const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Proxy::ClientIpMaskVrf::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Vrf::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Client::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::Sesm::Key::Key_::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Login::Display::last_failure {0, "last-failure"};
const Enum::YLeaf Native::Aaa::Login::Display::last_success {1, "last-success"};
const Enum::YLeaf Native::Aaa::Login::Display::number_failures {2, "number-failures"};

const Enum::YLeaf Native::Aaa::Policy::InterfaceConfig::allow_subinterface {0, "allow-subinterface"};

const Enum::YLeaf Native::Privilege::Mode::Name::configure {0, "configure"};
const Enum::YLeaf Native::Privilege::Mode::Name::exec {1, "exec"};
const Enum::YLeaf Native::Privilege::Mode::Name::interface {2, "interface"};
const Enum::YLeaf Native::Privilege::Mode::Name::router {3, "router"};

const Enum::YLeaf Native::Multilink::BundleName::authenticated {0, "authenticated"};
const Enum::YLeaf Native::Multilink::BundleName::both {1, "both"};
const Enum::YLeaf Native::Multilink::BundleName::endpoint {2, "endpoint"};
const Enum::YLeaf Native::Multilink::BundleName::rfc {3, "rfc"};

const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::warning {0, "warning"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::limit {1, "limit"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Redundancy::Mode::rpr {0, "rpr"};
const Enum::YLeaf Native::Redundancy::Mode::rpr_plus {1, "rpr-plus"};
const Enum::YLeaf Native::Redundancy::Mode::sso {2, "sso"};
const Enum::YLeaf Native::Redundancy::Mode::none {3, "none"};

const Enum::YLeaf Native::SpanningTree::Mode::mst {0, "mst"};
const Enum::YLeaf Native::SpanningTree::Mode::pvst {1, "pvst"};
const Enum::YLeaf Native::SpanningTree::Mode::rapid_pvst {2, "rapid-pvst"};

const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::primary {0, "primary"};
const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::secondary {1, "secondary"};


}
}

