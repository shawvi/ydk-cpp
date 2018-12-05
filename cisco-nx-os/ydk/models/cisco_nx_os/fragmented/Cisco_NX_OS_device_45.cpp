
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_45.hpp"
#include "Cisco_NX_OS_device_46.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::AccesslistcliItems()
    :
    rulecli_list(this, {"name"})
{

    yang_name = "accesslistcli-items"; yang_parent_name = "rpmcli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::~AccesslistcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulecli_list.len(); index++)
    {
        if(rulecli_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::has_operation() const
{
    for (std::size_t index=0; index<rulecli_list.len(); index++)
    {
        if(rulecli_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesslistcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleCli-list")
    {
        auto ent_ = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList>();
        ent_->parent = this;
        rulecli_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulecli_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleCli-list")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::RuleCliList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    entcli_items(std::make_shared<System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems>())
{
    entcli_items->parent = this;

    yang_name = "RuleCli-list"; yang_parent_name = "accesslistcli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::~RuleCliList()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (entcli_items !=  nullptr && entcli_items->has_data());
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (entcli_items !=  nullptr && entcli_items->has_operation());
}

std::string System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/accesslistcli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleCli-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entcli-items")
    {
        if(entcli_items == nullptr)
        {
            entcli_items = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems>();
        }
        return entcli_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entcli_items != nullptr)
    {
        _children["entcli-items"] = entcli_items;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entcli-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::EntcliItems()
    :
    cliaction{YType::enumeration, "cliAction"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint32, "order"},
    action{YType::enumeration, "action"},
    regex{YType::str, "regex"}
{

    yang_name = "entcli-items"; yang_parent_name = "RuleCli-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::~EntcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::has_data() const
{
    if (is_presence_container) return true;
    return cliaction.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| action.is_set
	|| regex.is_set;
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cliaction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cliaction.is_set || is_set(cliaction.yfilter)) leaf_name_data.push_back(cliaction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cliAction")
    {
        cliaction = value;
        cliaction.value_namespace = name_space;
        cliaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cliAction")
    {
        cliaction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::AccesslistcliItems::RuleCliList::EntcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cliAction" || name == "name" || name == "descr" || name == "order" || name == "action" || name == "regex")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::Pfxlistv4cliItems()
    :
    rulev4cli_list(this, {"name"})
{

    yang_name = "pfxlistv4cli-items"; yang_parent_name = "rpmcli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::~Pfxlistv4cliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulev4cli_list.len(); index++)
    {
        if(rulev4cli_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::has_operation() const
{
    for (std::size_t index=0; index<rulev4cli_list.len(); index++)
    {
        if(rulev4cli_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxlistv4cli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleV4Cli-list")
    {
        auto ent_ = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList>();
        ent_->parent = this;
        rulev4cli_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulev4cli_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleV4Cli-list")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::RuleV4CliList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    entcli_items(std::make_shared<System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems>())
{
    entcli_items->parent = this;

    yang_name = "RuleV4Cli-list"; yang_parent_name = "pfxlistv4cli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::~RuleV4CliList()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (entcli_items !=  nullptr && entcli_items->has_data());
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (entcli_items !=  nullptr && entcli_items->has_operation());
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/pfxlistv4cli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleV4Cli-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entcli-items")
    {
        if(entcli_items == nullptr)
        {
            entcli_items = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems>();
        }
        return entcli_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entcli_items != nullptr)
    {
        _children["entcli-items"] = entcli_items;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entcli-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::EntcliItems()
    :
    cliaction{YType::enumeration, "cliAction"},
    pfx{YType::str, "pfx"},
    mask{YType::str, "mask"},
    criteria{YType::enumeration, "criteria"},
    frompfxlen{YType::uint16, "fromPfxLen"},
    topfxlen{YType::uint16, "toPfxLen"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint32, "order"},
    action{YType::enumeration, "action"}
{

    yang_name = "entcli-items"; yang_parent_name = "RuleV4Cli-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::~EntcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::has_data() const
{
    if (is_presence_container) return true;
    return cliaction.is_set
	|| pfx.is_set
	|| mask.is_set
	|| criteria.is_set
	|| frompfxlen.is_set
	|| topfxlen.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| action.is_set;
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cliaction.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(criteria.yfilter)
	|| ydk::is_set(frompfxlen.yfilter)
	|| ydk::is_set(topfxlen.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cliaction.is_set || is_set(cliaction.yfilter)) leaf_name_data.push_back(cliaction.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (criteria.is_set || is_set(criteria.yfilter)) leaf_name_data.push_back(criteria.get_name_leafdata());
    if (frompfxlen.is_set || is_set(frompfxlen.yfilter)) leaf_name_data.push_back(frompfxlen.get_name_leafdata());
    if (topfxlen.is_set || is_set(topfxlen.yfilter)) leaf_name_data.push_back(topfxlen.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cliAction")
    {
        cliaction = value;
        cliaction.value_namespace = name_space;
        cliaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criteria")
    {
        criteria = value;
        criteria.value_namespace = name_space;
        criteria.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fromPfxLen")
    {
        frompfxlen = value;
        frompfxlen.value_namespace = name_space;
        frompfxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toPfxLen")
    {
        topfxlen = value;
        topfxlen.value_namespace = name_space;
        topfxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cliAction")
    {
        cliaction.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "criteria")
    {
        criteria.yfilter = yfilter;
    }
    if(value_path == "fromPfxLen")
    {
        frompfxlen.yfilter = yfilter;
    }
    if(value_path == "toPfxLen")
    {
        topfxlen.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv4cliItems::RuleV4CliList::EntcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cliAction" || name == "pfx" || name == "mask" || name == "criteria" || name == "fromPfxLen" || name == "toPfxLen" || name == "name" || name == "descr" || name == "order" || name == "action")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::Pfxlistv6cliItems()
    :
    rulev6cli_list(this, {"name"})
{

    yang_name = "pfxlistv6cli-items"; yang_parent_name = "rpmcli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::~Pfxlistv6cliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulev6cli_list.len(); index++)
    {
        if(rulev6cli_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::has_operation() const
{
    for (std::size_t index=0; index<rulev6cli_list.len(); index++)
    {
        if(rulev6cli_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxlistv6cli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleV6Cli-list")
    {
        auto ent_ = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList>();
        ent_->parent = this;
        rulev6cli_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulev6cli_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleV6Cli-list")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::RuleV6CliList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    entcli_items(std::make_shared<System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems>())
{
    entcli_items->parent = this;

    yang_name = "RuleV6Cli-list"; yang_parent_name = "pfxlistv6cli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::~RuleV6CliList()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (entcli_items !=  nullptr && entcli_items->has_data());
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (entcli_items !=  nullptr && entcli_items->has_operation());
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/pfxlistv6cli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleV6Cli-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entcli-items")
    {
        if(entcli_items == nullptr)
        {
            entcli_items = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems>();
        }
        return entcli_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entcli_items != nullptr)
    {
        _children["entcli-items"] = entcli_items;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entcli-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::EntcliItems()
    :
    cliaction{YType::enumeration, "cliAction"},
    pfx{YType::str, "pfx"},
    mask{YType::str, "mask"},
    criteria{YType::enumeration, "criteria"},
    frompfxlen{YType::uint16, "fromPfxLen"},
    topfxlen{YType::uint16, "toPfxLen"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint32, "order"},
    action{YType::enumeration, "action"}
{

    yang_name = "entcli-items"; yang_parent_name = "RuleV6Cli-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::~EntcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::has_data() const
{
    if (is_presence_container) return true;
    return cliaction.is_set
	|| pfx.is_set
	|| mask.is_set
	|| criteria.is_set
	|| frompfxlen.is_set
	|| topfxlen.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| action.is_set;
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cliaction.yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(criteria.yfilter)
	|| ydk::is_set(frompfxlen.yfilter)
	|| ydk::is_set(topfxlen.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cliaction.is_set || is_set(cliaction.yfilter)) leaf_name_data.push_back(cliaction.get_name_leafdata());
    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (criteria.is_set || is_set(criteria.yfilter)) leaf_name_data.push_back(criteria.get_name_leafdata());
    if (frompfxlen.is_set || is_set(frompfxlen.yfilter)) leaf_name_data.push_back(frompfxlen.get_name_leafdata());
    if (topfxlen.is_set || is_set(topfxlen.yfilter)) leaf_name_data.push_back(topfxlen.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cliAction")
    {
        cliaction = value;
        cliaction.value_namespace = name_space;
        cliaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criteria")
    {
        criteria = value;
        criteria.value_namespace = name_space;
        criteria.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fromPfxLen")
    {
        frompfxlen = value;
        frompfxlen.value_namespace = name_space;
        frompfxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toPfxLen")
    {
        topfxlen = value;
        topfxlen.value_namespace = name_space;
        topfxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cliAction")
    {
        cliaction.yfilter = yfilter;
    }
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "criteria")
    {
        criteria.yfilter = yfilter;
    }
    if(value_path == "fromPfxLen")
    {
        frompfxlen.yfilter = yfilter;
    }
    if(value_path == "toPfxLen")
    {
        topfxlen.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::Pfxlistv6cliItems::RuleV6CliList::EntcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cliAction" || name == "pfx" || name == "mask" || name == "criteria" || name == "fromPfxLen" || name == "toPfxLen" || name == "name" || name == "descr" || name == "order" || name == "action")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RtregcomcliItems()
    :
    rulecli_list(this, {"name"})
{

    yang_name = "rtregcomcli-items"; yang_parent_name = "rpmcli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::~RtregcomcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rulecli_list.len(); index++)
    {
        if(rulecli_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::has_operation() const
{
    for (std::size_t index=0; index<rulecli_list.len(); index++)
    {
        if(rulecli_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtregcomcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RuleCli-list")
    {
        auto ent_ = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList>();
        ent_->parent = this;
        rulecli_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rulecli_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RuleCli-list")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::RuleCliList()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"}
        ,
    entregcli_items(std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems>())
    , entcli_items(std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems>())
{
    entregcli_items->parent = this;
    entcli_items->parent = this;

    yang_name = "RuleCli-list"; yang_parent_name = "rtregcomcli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::~RuleCliList()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| type.is_set
	|| mode.is_set
	|| (entregcli_items !=  nullptr && entregcli_items->has_data())
	|| (entcli_items !=  nullptr && entcli_items->has_data());
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (entregcli_items !=  nullptr && entregcli_items->has_operation())
	|| (entcli_items !=  nullptr && entcli_items->has_operation());
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/rpmcli-items/rtregcomcli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RuleCli-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entregcli-items")
    {
        if(entregcli_items == nullptr)
        {
            entregcli_items = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems>();
        }
        return entregcli_items;
    }

    if(child_yang_name == "entcli-items")
    {
        if(entcli_items == nullptr)
        {
            entcli_items = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems>();
        }
        return entcli_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entregcli_items != nullptr)
    {
        _children["entregcli-items"] = entregcli_items;
    }

    if(entcli_items != nullptr)
    {
        _children["entcli-items"] = entcli_items;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entregcli-items" || name == "entcli-items" || name == "name" || name == "descr" || name == "type" || name == "mode")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::EntregcliItems()
    :
    numofchildren{YType::uint32, "numOfChildren"},
    cliaction{YType::enumeration, "cliAction"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint32, "order"},
    action{YType::enumeration, "action"},
    regex{YType::str, "regex"}
{

    yang_name = "entregcli-items"; yang_parent_name = "RuleCli-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::~EntregcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::has_data() const
{
    if (is_presence_container) return true;
    return numofchildren.is_set
	|| cliaction.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| action.is_set
	|| regex.is_set;
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numofchildren.yfilter)
	|| ydk::is_set(cliaction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entregcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numofchildren.is_set || is_set(numofchildren.yfilter)) leaf_name_data.push_back(numofchildren.get_name_leafdata());
    if (cliaction.is_set || is_set(cliaction.yfilter)) leaf_name_data.push_back(cliaction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numOfChildren")
    {
        numofchildren = value;
        numofchildren.value_namespace = name_space;
        numofchildren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cliAction")
    {
        cliaction = value;
        cliaction.value_namespace = name_space;
        cliaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numOfChildren")
    {
        numofchildren.yfilter = yfilter;
    }
    if(value_path == "cliAction")
    {
        cliaction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntregcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "numOfChildren" || name == "cliAction" || name == "name" || name == "descr" || name == "order" || name == "action" || name == "regex")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::EntcliItems()
    :
    numofchildren{YType::uint32, "numOfChildren"},
    cliaction{YType::enumeration, "cliAction"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    order{YType::uint32, "order"},
    action{YType::enumeration, "action"},
    regex{YType::str, "regex"}
        ,
    itemcli_items(std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems>())
{
    itemcli_items->parent = this;

    yang_name = "entcli-items"; yang_parent_name = "RuleCli-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::~EntcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::has_data() const
{
    if (is_presence_container) return true;
    return numofchildren.is_set
	|| cliaction.is_set
	|| name.is_set
	|| descr.is_set
	|| order.is_set
	|| action.is_set
	|| regex.is_set
	|| (itemcli_items !=  nullptr && itemcli_items->has_data());
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numofchildren.yfilter)
	|| ydk::is_set(cliaction.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(regex.yfilter)
	|| (itemcli_items !=  nullptr && itemcli_items->has_operation());
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numofchildren.is_set || is_set(numofchildren.yfilter)) leaf_name_data.push_back(numofchildren.get_name_leafdata());
    if (cliaction.is_set || is_set(cliaction.yfilter)) leaf_name_data.push_back(cliaction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "itemcli-items")
    {
        if(itemcli_items == nullptr)
        {
            itemcli_items = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems>();
        }
        return itemcli_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(itemcli_items != nullptr)
    {
        _children["itemcli-items"] = itemcli_items;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numOfChildren")
    {
        numofchildren = value;
        numofchildren.value_namespace = name_space;
        numofchildren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cliAction")
    {
        cliaction = value;
        cliaction.value_namespace = name_space;
        cliaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numOfChildren")
    {
        numofchildren.yfilter = yfilter;
    }
    if(value_path == "cliAction")
    {
        cliaction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itemcli-items" || name == "numOfChildren" || name == "cliAction" || name == "name" || name == "descr" || name == "order" || name == "action" || name == "regex")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemcliItems()
    :
    itemcli_list(this, {"community"})
{

    yang_name = "itemcli-items"; yang_parent_name = "entcli-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::~ItemcliItems()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<itemcli_list.len(); index++)
    {
        if(itemcli_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::has_operation() const
{
    for (std::size_t index=0; index<itemcli_list.len(); index++)
    {
        if(itemcli_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itemcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ItemCli-list")
    {
        auto ent_ = std::make_shared<System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList>();
        ent_->parent = this;
        itemcli_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : itemcli_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ItemCli-list")
        return true;
    return false;
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::ItemCliList()
    :
    community{YType::str, "community"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "ItemCli-list"; yang_parent_name = "itemcli-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::~ItemCliList()
{
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::has_data() const
{
    if (is_presence_container) return true;
    return community.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ItemCli-list";
    ADD_KEY_TOKEN(community, "community");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::RpmcliItems::RtregcomcliItems::RuleCliList::EntcliItems::ItemcliItems::ItemCliList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "name" || name == "descr")
        return true;
    return false;
}

System::ScrtchpdrtItems::VlanmgrcliItems::VlanmgrcliItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::ScrtchpdrtItems::VlanmgrcliItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "vlanmgrcli-items"; yang_parent_name = "scrtchpdrt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::VlanmgrcliItems::~VlanmgrcliItems()
{
}

bool System::ScrtchpdrtItems::VlanmgrcliItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::ScrtchpdrtItems::VlanmgrcliItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::ScrtchpdrtItems::VlanmgrcliItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::VlanmgrcliItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanmgrcli-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::VlanmgrcliItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::VlanmgrcliItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::ScrtchpdrtItems::VlanmgrcliItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::VlanmgrcliItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::ScrtchpdrtItems::VlanmgrcliItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::VlanmgrcliItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::VlanmgrcliItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::InstItems()
    :
    vxlannativevlans{YType::boolean, "vxlanNativeVlans"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
{

    yang_name = "inst-items"; yang_parent_name = "vlanmgrcli-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::~InstItems()
{
}

bool System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return vxlannativevlans.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set;
}

bool System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vxlannativevlans.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter);
}

std::string System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/scrtchpdrt-items/vlanmgrcli-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vxlannativevlans.is_set || is_set(vxlannativevlans.yfilter)) leaf_name_data.push_back(vxlannativevlans.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vxlanNativeVlans")
    {
        vxlannativevlans = value;
        vxlannativevlans.value_namespace = name_space;
        vxlannativevlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vxlanNativeVlans")
    {
        vxlannativevlans.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::ScrtchpdrtItems::VlanmgrcliItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vxlanNativeVlans" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::SectlItems::SectlItems()
    :
    swtltestobj_list(this, {"name"})
{

    yang_name = "sectl-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SectlItems::~SectlItems()
{
}

bool System::SectlItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<swtltestobj_list.len(); index++)
    {
        if(swtltestobj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SectlItems::has_operation() const
{
    for (std::size_t index=0; index<swtltestobj_list.len(); index++)
    {
        if(swtltestobj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SectlItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SectlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sectl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SwTLTestObj-list")
    {
        auto ent_ = std::make_shared<System::SectlItems::SwTLTestObjList>();
        ent_->parent = this;
        swtltestobj_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : swtltestobj_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SectlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SectlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SectlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SwTLTestObj-list")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::SwTLTestObjList()
    :
    name{YType::str, "name"},
    id{YType::uint64, "id"},
    descr{YType::str, "descr"},
    objdn{YType::str, "objDn"},
    prikey{YType::str, "priKey"}
        ,
    secc_items(std::make_shared<System::SectlItems::SwTLTestObjList::SeccItems>())
    , iecc_items(std::make_shared<System::SectlItems::SwTLTestObjList::IeccItems>())
    , rttoobj_items(std::make_shared<System::SectlItems::SwTLTestObjList::RttoObjItems>())
{
    secc_items->parent = this;
    iecc_items->parent = this;
    rttoobj_items->parent = this;

    yang_name = "SwTLTestObj-list"; yang_parent_name = "sectl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SectlItems::SwTLTestObjList::~SwTLTestObjList()
{
}

bool System::SectlItems::SwTLTestObjList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| id.is_set
	|| descr.is_set
	|| objdn.is_set
	|| prikey.is_set
	|| (secc_items !=  nullptr && secc_items->has_data())
	|| (iecc_items !=  nullptr && iecc_items->has_data())
	|| (rttoobj_items !=  nullptr && rttoobj_items->has_data());
}

bool System::SectlItems::SwTLTestObjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(objdn.yfilter)
	|| ydk::is_set(prikey.yfilter)
	|| (secc_items !=  nullptr && secc_items->has_operation())
	|| (iecc_items !=  nullptr && iecc_items->has_operation())
	|| (rttoobj_items !=  nullptr && rttoobj_items->has_operation());
}

std::string System::SectlItems::SwTLTestObjList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/sectl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SectlItems::SwTLTestObjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SwTLTestObj-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (objdn.is_set || is_set(objdn.yfilter)) leaf_name_data.push_back(objdn.get_name_leafdata());
    if (prikey.is_set || is_set(prikey.yfilter)) leaf_name_data.push_back(prikey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secc-items")
    {
        if(secc_items == nullptr)
        {
            secc_items = std::make_shared<System::SectlItems::SwTLTestObjList::SeccItems>();
        }
        return secc_items;
    }

    if(child_yang_name == "iecc-items")
    {
        if(iecc_items == nullptr)
        {
            iecc_items = std::make_shared<System::SectlItems::SwTLTestObjList::IeccItems>();
        }
        return iecc_items;
    }

    if(child_yang_name == "rttoObj-items")
    {
        if(rttoobj_items == nullptr)
        {
            rttoobj_items = std::make_shared<System::SectlItems::SwTLTestObjList::RttoObjItems>();
        }
        return rttoobj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secc_items != nullptr)
    {
        _children["secc-items"] = secc_items;
    }

    if(iecc_items != nullptr)
    {
        _children["iecc-items"] = iecc_items;
    }

    if(rttoobj_items != nullptr)
    {
        _children["rttoObj-items"] = rttoobj_items;
    }

    return _children;
}

void System::SectlItems::SwTLTestObjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "objDn")
    {
        objdn = value;
        objdn.value_namespace = name_space;
        objdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priKey")
    {
        prikey = value;
        prikey.value_namespace = name_space;
        prikey.value_namespace_prefix = name_space_prefix;
    }
}

void System::SectlItems::SwTLTestObjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "objDn")
    {
        objdn.yfilter = yfilter;
    }
    if(value_path == "priKey")
    {
        prikey.yfilter = yfilter;
    }
}

bool System::SectlItems::SwTLTestObjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secc-items" || name == "iecc-items" || name == "rttoObj-items" || name == "name" || name == "id" || name == "descr" || name == "objDn" || name == "priKey")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::SeccItems::SeccItems()
    :
    swctestobj_list(this, {"name"})
{

    yang_name = "secc-items"; yang_parent_name = "SwTLTestObj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::SeccItems::~SeccItems()
{
}

bool System::SectlItems::SwTLTestObjList::SeccItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<swctestobj_list.len(); index++)
    {
        if(swctestobj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SectlItems::SwTLTestObjList::SeccItems::has_operation() const
{
    for (std::size_t index=0; index<swctestobj_list.len(); index++)
    {
        if(swctestobj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SectlItems::SwTLTestObjList::SeccItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::SeccItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::SeccItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SwCTestObj-list")
    {
        auto ent_ = std::make_shared<System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList>();
        ent_->parent = this;
        swctestobj_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::SeccItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : swctestobj_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SectlItems::SwTLTestObjList::SeccItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SectlItems::SwTLTestObjList::SeccItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SectlItems::SwTLTestObjList::SeccItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SwCTestObj-list")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::SwCTestObjList()
    :
    name{YType::str, "name"},
    swctestonly{YType::str, "swCTestOnly"},
    id{YType::uint64, "id"},
    descr{YType::str, "descr"},
    objdn{YType::str, "objDn"}
        ,
    rstoobj_items(std::make_shared<System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems>())
    , rttoobj_items(std::make_shared<System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems>())
{
    rstoobj_items->parent = this;
    rttoobj_items->parent = this;

    yang_name = "SwCTestObj-list"; yang_parent_name = "secc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::~SwCTestObjList()
{
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| swctestonly.is_set
	|| id.is_set
	|| descr.is_set
	|| objdn.is_set
	|| (rstoobj_items !=  nullptr && rstoobj_items->has_data())
	|| (rttoobj_items !=  nullptr && rttoobj_items->has_data());
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(swctestonly.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(objdn.yfilter)
	|| (rstoobj_items !=  nullptr && rstoobj_items->has_operation())
	|| (rttoobj_items !=  nullptr && rttoobj_items->has_operation());
}

std::string System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SwCTestObj-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (swctestonly.is_set || is_set(swctestonly.yfilter)) leaf_name_data.push_back(swctestonly.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (objdn.is_set || is_set(objdn.yfilter)) leaf_name_data.push_back(objdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rstoObj-items")
    {
        if(rstoobj_items == nullptr)
        {
            rstoobj_items = std::make_shared<System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems>();
        }
        return rstoobj_items;
    }

    if(child_yang_name == "rttoObj-items")
    {
        if(rttoobj_items == nullptr)
        {
            rttoobj_items = std::make_shared<System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems>();
        }
        return rttoobj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rstoobj_items != nullptr)
    {
        _children["rstoObj-items"] = rstoobj_items;
    }

    if(rttoobj_items != nullptr)
    {
        _children["rttoObj-items"] = rttoobj_items;
    }

    return _children;
}

void System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCTestOnly")
    {
        swctestonly = value;
        swctestonly.value_namespace = name_space;
        swctestonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "objDn")
    {
        objdn = value;
        objdn.value_namespace = name_space;
        objdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "swCTestOnly")
    {
        swctestonly.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "objDn")
    {
        objdn.yfilter = yfilter;
    }
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rstoObj-items" || name == "rttoObj-items" || name == "name" || name == "swCTestOnly" || name == "id" || name == "descr" || name == "objDn")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::RstoObjItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rstoObj-items"; yang_parent_name = "SwCTestObj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::~RstoObjItems()
{
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstoObj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RstoObjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::RttoObjItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rttoObj-items"; yang_parent_name = "SwCTestObj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::~RttoObjItems()
{
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttoObj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::SectlItems::SwTLTestObjList::SeccItems::SwCTestObjList::RttoObjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::IeccItems::IeccItems()
    :
    ifcctestobj_list(this, {"name"})
{

    yang_name = "iecc-items"; yang_parent_name = "SwTLTestObj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::IeccItems::~IeccItems()
{
}

bool System::SectlItems::SwTLTestObjList::IeccItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifcctestobj_list.len(); index++)
    {
        if(ifcctestobj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SectlItems::SwTLTestObjList::IeccItems::has_operation() const
{
    for (std::size_t index=0; index<ifcctestobj_list.len(); index++)
    {
        if(ifcctestobj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SectlItems::SwTLTestObjList::IeccItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iecc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::IeccItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::IeccItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IfcCTestObj-list")
    {
        auto ent_ = std::make_shared<System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList>();
        ent_->parent = this;
        ifcctestobj_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::IeccItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifcctestobj_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SectlItems::SwTLTestObjList::IeccItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SectlItems::SwTLTestObjList::IeccItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SectlItems::SwTLTestObjList::IeccItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IfcCTestObj-list")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::IfcCTestObjList()
    :
    name{YType::str, "name"},
    ifcctestonly{YType::str, "ifcCTestOnly"},
    id{YType::uint64, "id"},
    descr{YType::str, "descr"},
    objdn{YType::str, "objDn"}
        ,
    rttoobj_items(std::make_shared<System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems>())
{
    rttoobj_items->parent = this;

    yang_name = "IfcCTestObj-list"; yang_parent_name = "iecc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::~IfcCTestObjList()
{
}

bool System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ifcctestonly.is_set
	|| id.is_set
	|| descr.is_set
	|| objdn.is_set
	|| (rttoobj_items !=  nullptr && rttoobj_items->has_data());
}

bool System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifcctestonly.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(objdn.yfilter)
	|| (rttoobj_items !=  nullptr && rttoobj_items->has_operation());
}

std::string System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IfcCTestObj-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifcctestonly.is_set || is_set(ifcctestonly.yfilter)) leaf_name_data.push_back(ifcctestonly.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (objdn.is_set || is_set(objdn.yfilter)) leaf_name_data.push_back(objdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rttoObj-items")
    {
        if(rttoobj_items == nullptr)
        {
            rttoobj_items = std::make_shared<System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems>();
        }
        return rttoobj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rttoobj_items != nullptr)
    {
        _children["rttoObj-items"] = rttoobj_items;
    }

    return _children;
}

void System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifcCTestOnly")
    {
        ifcctestonly = value;
        ifcctestonly.value_namespace = name_space;
        ifcctestonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "objDn")
    {
        objdn = value;
        objdn.value_namespace = name_space;
        objdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifcCTestOnly")
    {
        ifcctestonly.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "objDn")
    {
        objdn.yfilter = yfilter;
    }
}

bool System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rttoObj-items" || name == "name" || name == "ifcCTestOnly" || name == "id" || name == "descr" || name == "objDn")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::RttoObjItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rttoObj-items"; yang_parent_name = "IfcCTestObj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::~RttoObjItems()
{
}

bool System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttoObj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::SectlItems::SwTLTestObjList::IeccItems::IfcCTestObjList::RttoObjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::SectlItems::SwTLTestObjList::RttoObjItems::RttoObjItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rttoObj-items"; yang_parent_name = "SwTLTestObj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SectlItems::SwTLTestObjList::RttoObjItems::~RttoObjItems()
{
}

bool System::SectlItems::SwTLTestObjList::RttoObjItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::SectlItems::SwTLTestObjList::RttoObjItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::SectlItems::SwTLTestObjList::RttoObjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttoObj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SectlItems::SwTLTestObjList::RttoObjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SectlItems::SwTLTestObjList::RttoObjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SectlItems::SwTLTestObjList::RttoObjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SectlItems::SwTLTestObjList::RttoObjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::SectlItems::SwTLTestObjList::RttoObjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::SectlItems::SwTLTestObjList::RttoObjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::CaggrItems()
    :
    aggrif_list(this, {"id"})
{

    yang_name = "caggr-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CaggrItems::~CaggrItems()
{
}

bool System::CaggrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggrif_list.len(); index++)
    {
        if(aggrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CaggrItems::has_operation() const
{
    for (std::size_t index=0; index<aggrif_list.len(); index++)
    {
        if(aggrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CaggrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CaggrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caggr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AggrIf-list")
    {
        auto ent_ = std::make_shared<System::CaggrItems::AggrIfList>();
        ent_->parent = this;
        aggrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aggrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CaggrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CaggrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CaggrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AggrIf-list")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::AggrIfList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    speed{YType::enumeration, "speed"},
    duplex{YType::enumeration, "duplex"},
    autoneg{YType::enumeration, "autoNeg"},
    mtu{YType::uint32, "mtu"},
    snmptrapst{YType::enumeration, "snmpTrapSt"},
    mode{YType::enumeration, "mode"},
    layer{YType::enumeration, "layer"},
    mdix{YType::enumeration, "mdix"},
    delay{YType::uint32, "delay"},
    linkdebounce{YType::uint16, "linkDebounce"},
    dot1qethertype{YType::enumeration, "dot1qEtherType"},
    bw{YType::uint32, "bw"},
    medium{YType::enumeration, "medium"},
    inhbw{YType::uint32, "inhBw"},
    spanmode{YType::enumeration, "spanMode"},
    linklog{YType::enumeration, "linkLog"},
    trunklog{YType::enumeration, "trunkLog"},
    routermac{YType::str, "routerMac"},
    portt{YType::enumeration, "portT"},
    usage{YType::str, "usage"},
    trunkvlans{YType::str, "trunkVlans"},
    accessvlan{YType::str, "accessVlan"},
    controllerid{YType::str, "controllerId"},
    nativevlan{YType::str, "nativeVlan"},
    usercfgdflags{YType::str, "userCfgdFlags"}
        ,
    dom_items(std::make_shared<System::CaggrItems::AggrIfList::DomItems>())
    , rtextconf_items(std::make_shared<System::CaggrItems::AggrIfList::RtextConfItems>())
    , rtbrconf_items(std::make_shared<System::CaggrItems::AggrIfList::RtbrConfItems>())
    , rtfvnodeportatt_items(std::make_shared<System::CaggrItems::AggrIfList::RtfvNodePortAttItems>())
    , rtvrfmbr_items(std::make_shared<System::CaggrItems::AggrIfList::RtvrfMbrItems>())
    , rtphysrtdconf_items(std::make_shared<System::CaggrItems::AggrIfList::RtphysRtdConfItems>())
    , rtl3encphysrtdconf_items(std::make_shared<System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::CaggrItems::AggrIfList::RtnwPathToIfItems>())
    , rtlsnodetoif_items(std::make_shared<System::CaggrItems::AggrIfList::RtLsNodeToIfItems>())
    , rsmbrifs_items(std::make_shared<System::CaggrItems::AggrIfList::RsmbrIfsItems>())
    , rsactiveif_items(std::make_shared<System::CaggrItems::AggrIfList::RsactiveIfItems>())
{
    dom_items->parent = this;
    rtextconf_items->parent = this;
    rtbrconf_items->parent = this;
    rtfvnodeportatt_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtphysrtdconf_items->parent = this;
    rtl3encphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;
    rtlsnodetoif_items->parent = this;
    rsmbrifs_items->parent = this;
    rsactiveif_items->parent = this;

    yang_name = "AggrIf-list"; yang_parent_name = "caggr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CaggrItems::AggrIfList::~AggrIfList()
{
}

bool System::CaggrItems::AggrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| speed.is_set
	|| duplex.is_set
	|| autoneg.is_set
	|| mtu.is_set
	|| snmptrapst.is_set
	|| mode.is_set
	|| layer.is_set
	|| mdix.is_set
	|| delay.is_set
	|| linkdebounce.is_set
	|| dot1qethertype.is_set
	|| bw.is_set
	|| medium.is_set
	|| inhbw.is_set
	|| spanmode.is_set
	|| linklog.is_set
	|| trunklog.is_set
	|| routermac.is_set
	|| portt.is_set
	|| usage.is_set
	|| trunkvlans.is_set
	|| accessvlan.is_set
	|| controllerid.is_set
	|| nativevlan.is_set
	|| usercfgdflags.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_data())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_data())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_data())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_data())
	|| (rsmbrifs_items !=  nullptr && rsmbrifs_items->has_data())
	|| (rsactiveif_items !=  nullptr && rsactiveif_items->has_data());
}

bool System::CaggrItems::AggrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(snmptrapst.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(layer.yfilter)
	|| ydk::is_set(mdix.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(linkdebounce.yfilter)
	|| ydk::is_set(dot1qethertype.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(inhbw.yfilter)
	|| ydk::is_set(spanmode.yfilter)
	|| ydk::is_set(linklog.yfilter)
	|| ydk::is_set(trunklog.yfilter)
	|| ydk::is_set(routermac.yfilter)
	|| ydk::is_set(portt.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| ydk::is_set(trunkvlans.yfilter)
	|| ydk::is_set(accessvlan.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(usercfgdflags.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_operation())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_operation())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_operation())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_operation())
	|| (rsmbrifs_items !=  nullptr && rsmbrifs_items->has_operation())
	|| (rsactiveif_items !=  nullptr && rsactiveif_items->has_operation());
}

std::string System::CaggrItems::AggrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/caggr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CaggrItems::AggrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AggrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (layer.is_set || is_set(layer.yfilter)) leaf_name_data.push_back(layer.get_name_leafdata());
    if (mdix.is_set || is_set(mdix.yfilter)) leaf_name_data.push_back(mdix.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (linkdebounce.is_set || is_set(linkdebounce.yfilter)) leaf_name_data.push_back(linkdebounce.get_name_leafdata());
    if (dot1qethertype.is_set || is_set(dot1qethertype.yfilter)) leaf_name_data.push_back(dot1qethertype.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (inhbw.is_set || is_set(inhbw.yfilter)) leaf_name_data.push_back(inhbw.get_name_leafdata());
    if (spanmode.is_set || is_set(spanmode.yfilter)) leaf_name_data.push_back(spanmode.get_name_leafdata());
    if (linklog.is_set || is_set(linklog.yfilter)) leaf_name_data.push_back(linklog.get_name_leafdata());
    if (trunklog.is_set || is_set(trunklog.yfilter)) leaf_name_data.push_back(trunklog.get_name_leafdata());
    if (routermac.is_set || is_set(routermac.yfilter)) leaf_name_data.push_back(routermac.get_name_leafdata());
    if (portt.is_set || is_set(portt.yfilter)) leaf_name_data.push_back(portt.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());
    if (trunkvlans.is_set || is_set(trunkvlans.yfilter)) leaf_name_data.push_back(trunkvlans.get_name_leafdata());
    if (accessvlan.is_set || is_set(accessvlan.yfilter)) leaf_name_data.push_back(accessvlan.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (usercfgdflags.is_set || is_set(usercfgdflags.yfilter)) leaf_name_data.push_back(usercfgdflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::CaggrItems::AggrIfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "rtextConf-items")
    {
        if(rtextconf_items == nullptr)
        {
            rtextconf_items = std::make_shared<System::CaggrItems::AggrIfList::RtextConfItems>();
        }
        return rtextconf_items;
    }

    if(child_yang_name == "rtbrConf-items")
    {
        if(rtbrconf_items == nullptr)
        {
            rtbrconf_items = std::make_shared<System::CaggrItems::AggrIfList::RtbrConfItems>();
        }
        return rtbrconf_items;
    }

    if(child_yang_name == "rtfvNodePortAtt-items")
    {
        if(rtfvnodeportatt_items == nullptr)
        {
            rtfvnodeportatt_items = std::make_shared<System::CaggrItems::AggrIfList::RtfvNodePortAttItems>();
        }
        return rtfvnodeportatt_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::CaggrItems::AggrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtphysRtdConf-items")
    {
        if(rtphysrtdconf_items == nullptr)
        {
            rtphysrtdconf_items = std::make_shared<System::CaggrItems::AggrIfList::RtphysRtdConfItems>();
        }
        return rtphysrtdconf_items;
    }

    if(child_yang_name == "rtl3EncPhysRtdConf-items")
    {
        if(rtl3encphysrtdconf_items == nullptr)
        {
            rtl3encphysrtdconf_items = std::make_shared<System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems>();
        }
        return rtl3encphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::CaggrItems::AggrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "rtLsNodeToIf-items")
    {
        if(rtlsnodetoif_items == nullptr)
        {
            rtlsnodetoif_items = std::make_shared<System::CaggrItems::AggrIfList::RtLsNodeToIfItems>();
        }
        return rtlsnodetoif_items;
    }

    if(child_yang_name == "rsmbrIfs-items")
    {
        if(rsmbrifs_items == nullptr)
        {
            rsmbrifs_items = std::make_shared<System::CaggrItems::AggrIfList::RsmbrIfsItems>();
        }
        return rsmbrifs_items;
    }

    if(child_yang_name == "rsactiveIf-items")
    {
        if(rsactiveif_items == nullptr)
        {
            rsactiveif_items = std::make_shared<System::CaggrItems::AggrIfList::RsactiveIfItems>();
        }
        return rsactiveif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(rtextconf_items != nullptr)
    {
        _children["rtextConf-items"] = rtextconf_items;
    }

    if(rtbrconf_items != nullptr)
    {
        _children["rtbrConf-items"] = rtbrconf_items;
    }

    if(rtfvnodeportatt_items != nullptr)
    {
        _children["rtfvNodePortAtt-items"] = rtfvnodeportatt_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtphysrtdconf_items != nullptr)
    {
        _children["rtphysRtdConf-items"] = rtphysrtdconf_items;
    }

    if(rtl3encphysrtdconf_items != nullptr)
    {
        _children["rtl3EncPhysRtdConf-items"] = rtl3encphysrtdconf_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(rtlsnodetoif_items != nullptr)
    {
        _children["rtLsNodeToIf-items"] = rtlsnodetoif_items;
    }

    if(rsmbrifs_items != nullptr)
    {
        _children["rsmbrIfs-items"] = rsmbrifs_items;
    }

    if(rsactiveif_items != nullptr)
    {
        _children["rsactiveIf-items"] = rsactiveif_items;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoNeg")
    {
        autoneg = value;
        autoneg.value_namespace = name_space;
        autoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst = value;
        snmptrapst.value_namespace = name_space;
        snmptrapst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer")
    {
        layer = value;
        layer.value_namespace = name_space;
        layer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdix")
    {
        mdix = value;
        mdix.value_namespace = name_space;
        mdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce = value;
        linkdebounce.value_namespace = name_space;
        linkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qEtherType")
    {
        dot1qethertype = value;
        dot1qethertype.value_namespace = name_space;
        dot1qethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inhBw")
    {
        inhbw = value;
        inhbw.value_namespace = name_space;
        inhbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spanMode")
    {
        spanmode = value;
        spanmode.value_namespace = name_space;
        spanmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLog")
    {
        linklog = value;
        linklog.value_namespace = name_space;
        linklog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkLog")
    {
        trunklog = value;
        trunklog.value_namespace = name_space;
        trunklog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMac")
    {
        routermac = value;
        routermac.value_namespace = name_space;
        routermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portT")
    {
        portt = value;
        portt.value_namespace = name_space;
        portt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans = value;
        trunkvlans.value_namespace = name_space;
        trunkvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessVlan")
    {
        accessvlan = value;
        accessvlan.value_namespace = name_space;
        accessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags = value;
        usercfgdflags.value_namespace = name_space;
        usercfgdflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "autoNeg")
    {
        autoneg.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "layer")
    {
        layer.yfilter = yfilter;
    }
    if(value_path == "mdix")
    {
        mdix.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce.yfilter = yfilter;
    }
    if(value_path == "dot1qEtherType")
    {
        dot1qethertype.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "inhBw")
    {
        inhbw.yfilter = yfilter;
    }
    if(value_path == "spanMode")
    {
        spanmode.yfilter = yfilter;
    }
    if(value_path == "linkLog")
    {
        linklog.yfilter = yfilter;
    }
    if(value_path == "trunkLog")
    {
        trunklog.yfilter = yfilter;
    }
    if(value_path == "routerMac")
    {
        routermac.yfilter = yfilter;
    }
    if(value_path == "portT")
    {
        portt.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans.yfilter = yfilter;
    }
    if(value_path == "accessVlan")
    {
        accessvlan.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "rtextConf-items" || name == "rtbrConf-items" || name == "rtfvNodePortAtt-items" || name == "rtvrfMbr-items" || name == "rtphysRtdConf-items" || name == "rtl3EncPhysRtdConf-items" || name == "rtnwPathToIf-items" || name == "rtLsNodeToIf-items" || name == "rsmbrIfs-items" || name == "rsactiveIf-items" || name == "id" || name == "operSt" || name == "name" || name == "descr" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt" || name == "mode" || name == "layer" || name == "mdix" || name == "delay" || name == "linkDebounce" || name == "dot1qEtherType" || name == "bw" || name == "medium" || name == "inhBw" || name == "spanMode" || name == "linkLog" || name == "trunkLog" || name == "routerMac" || name == "portT" || name == "usage" || name == "trunkVlans" || name == "accessVlan" || name == "controllerId" || name == "nativeVlan" || name == "userCfgdFlags")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::DomItems::DomItems()
    :
    domdef_list(this, {"dompkey"})
{

    yang_name = "dom-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::DomItems::~DomItems()
{
}

bool System::CaggrItems::AggrIfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CaggrItems::AggrIfList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CaggrItems::AggrIfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomDef-list")
    {
        auto ent_ = std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList>();
        ent_->parent = this;
        domdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CaggrItems::AggrIfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CaggrItems::AggrIfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomDef-list")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::DomDefList()
    :
    dompkey{YType::str, "domPKey"},
    instrimedcy{YType::enumeration, "instrImedcy"},
    name{YType::str, "name"}
        ,
    rsdomdefns_items(std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems>())
    , rsdomdefnslocal_items(std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems>())
    , rtfvtodomdef_items(std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems>())
{
    rsdomdefns_items->parent = this;
    rsdomdefnslocal_items->parent = this;
    rtfvtodomdef_items->parent = this;

    yang_name = "DomDef-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::~DomDefList()
{
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::has_data() const
{
    if (is_presence_container) return true;
    return dompkey.is_set
	|| instrimedcy.is_set
	|| name.is_set
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_data())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_data())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_data());
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dompkey.yfilter)
	|| ydk::is_set(instrimedcy.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_operation())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_operation())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_operation());
}

std::string System::CaggrItems::AggrIfList::DomItems::DomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomDef-list";
    ADD_KEY_TOKEN(dompkey, "domPKey");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::DomItems::DomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dompkey.is_set || is_set(dompkey.yfilter)) leaf_name_data.push_back(dompkey.get_name_leafdata());
    if (instrimedcy.is_set || is_set(instrimedcy.yfilter)) leaf_name_data.push_back(instrimedcy.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::DomItems::DomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsdomDefNs-items")
    {
        if(rsdomdefns_items == nullptr)
        {
            rsdomdefns_items = std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems>();
        }
        return rsdomdefns_items;
    }

    if(child_yang_name == "rsdomDefNsLocal-items")
    {
        if(rsdomdefnslocal_items == nullptr)
        {
            rsdomdefnslocal_items = std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems>();
        }
        return rsdomdefnslocal_items;
    }

    if(child_yang_name == "rtfvToDomDef-items")
    {
        if(rtfvtodomdef_items == nullptr)
        {
            rtfvtodomdef_items = std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems>();
        }
        return rtfvtodomdef_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::DomItems::DomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsdomdefns_items != nullptr)
    {
        _children["rsdomDefNs-items"] = rsdomdefns_items;
    }

    if(rsdomdefnslocal_items != nullptr)
    {
        _children["rsdomDefNsLocal-items"] = rsdomdefnslocal_items;
    }

    if(rtfvtodomdef_items != nullptr)
    {
        _children["rtfvToDomDef-items"] = rtfvtodomdef_items;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domPKey")
    {
        dompkey = value;
        dompkey.value_namespace = name_space;
        dompkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instrImedcy")
    {
        instrimedcy = value;
        instrimedcy.value_namespace = name_space;
        instrimedcy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domPKey")
    {
        dompkey.yfilter = yfilter;
    }
    if(value_path == "instrImedcy")
    {
        instrimedcy.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsdomDefNs-items" || name == "rsdomDefNsLocal-items" || name == "rtfvToDomDef-items" || name == "domPKey" || name == "instrImedcy" || name == "name")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::RsdomDefNsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNs-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::~RsdomDefNsItems()
{
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::RsdomDefNsLocalItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNsLocal-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::~RsdomDefNsLocalItems()
{
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNsLocal-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtfvToDomDefItems()
    :
    rtfvtodomdef_list(this, {"tdn"})
{

    yang_name = "rtfvToDomDef-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::~RtfvToDomDefItems()
{
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToDomDef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToDomDef-list")
    {
        auto ent_ = std::make_shared<System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList>();
        ent_->parent = this;
        rtfvtodomdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvtodomdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToDomDef-list")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::RtFvToDomDefList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvToDomDef-list"; yang_parent_name = "rtfvToDomDef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::~RtFvToDomDefList()
{
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToDomDef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtextConfItems::RtextConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtextConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtextConfItems::~RtextConfItems()
{
}

bool System::CaggrItems::AggrIfList::RtextConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RtextConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RtextConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtextConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtextConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtextConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtextConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RtextConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RtextConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RtextConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtbrConfItems::RtbrConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtbrConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtbrConfItems::~RtbrConfItems()
{
}

bool System::CaggrItems::AggrIfList::RtbrConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RtbrConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RtbrConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtbrConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtbrConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RtbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RtbrConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RtbrConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtfvNodePortAttItems()
    :
    rtfvnodeportatt_list(this, {"tdn"})
{

    yang_name = "rtfvNodePortAtt-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtfvNodePortAttItems::~RtfvNodePortAttItems()
{
}

bool System::CaggrItems::AggrIfList::RtfvNodePortAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CaggrItems::AggrIfList::RtfvNodePortAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CaggrItems::AggrIfList::RtfvNodePortAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvNodePortAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtfvNodePortAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtfvNodePortAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvNodePortAtt-list")
    {
        auto ent_ = std::make_shared<System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList>();
        ent_->parent = this;
        rtfvnodeportatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtfvNodePortAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvnodeportatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::RtfvNodePortAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CaggrItems::AggrIfList::RtfvNodePortAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CaggrItems::AggrIfList::RtfvNodePortAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvNodePortAtt-list")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::RtFvNodePortAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvNodePortAtt-list"; yang_parent_name = "rtfvNodePortAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::~RtFvNodePortAttList()
{
}

bool System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvNodePortAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::CaggrItems::AggrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtphysRtdConfItems::RtphysRtdConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtphysRtdConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtphysRtdConfItems::~RtphysRtdConfItems()
{
}

bool System::CaggrItems::AggrIfList::RtphysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RtphysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RtphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtphysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RtphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RtphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RtphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::Rtl3EncPhysRtdConfItems()
    :
    rtl3encphysrtdconf_list(this, {"tdn"})
{

    yang_name = "rtl3EncPhysRtdConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::~Rtl3EncPhysRtdConfItems()
{
}

bool System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_operation() const
{
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtl3EncPhysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtL3EncPhysRtdConf-list")
    {
        auto ent_ = std::make_shared<System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList>();
        ent_->parent = this;
        rtl3encphysrtdconf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtl3encphysrtdconf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtL3EncPhysRtdConf-list")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::RtL3EncPhysRtdConfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtL3EncPhysRtdConf-list"; yang_parent_name = "rtl3EncPhysRtdConf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::~RtL3EncPhysRtdConfList()
{
}

bool System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtL3EncPhysRtdConf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::CaggrItems::AggrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CaggrItems::AggrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CaggrItems::AggrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CaggrItems::AggrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CaggrItems::AggrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RtLsNodeToIfItems::RtLsNodeToIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtLsNodeToIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RtLsNodeToIfItems::~RtLsNodeToIfItems()
{
}

bool System::CaggrItems::AggrIfList::RtLsNodeToIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RtLsNodeToIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RtLsNodeToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtLsNodeToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RtLsNodeToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RtLsNodeToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RtLsNodeToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RtLsNodeToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RtLsNodeToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RtLsNodeToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RsmbrIfsItems::RsmbrIfsItems()
    :
    rsmbrifs_list(this, {"tdn"})
{

    yang_name = "rsmbrIfs-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RsmbrIfsItems::~RsmbrIfsItems()
{
}

bool System::CaggrItems::AggrIfList::RsmbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmbrifs_list.len(); index++)
    {
        if(rsmbrifs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CaggrItems::AggrIfList::RsmbrIfsItems::has_operation() const
{
    for (std::size_t index=0; index<rsmbrifs_list.len(); index++)
    {
        if(rsmbrifs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CaggrItems::AggrIfList::RsmbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RsmbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RsmbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMbrIfs-list")
    {
        auto ent_ = std::make_shared<System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList>();
        ent_->parent = this;
        rsmbrifs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RsmbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmbrifs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CaggrItems::AggrIfList::RsmbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CaggrItems::AggrIfList::RsmbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CaggrItems::AggrIfList::RsmbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMbrIfs-list")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::RsMbrIfsList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMbrIfs-list"; yang_parent_name = "rsmbrIfs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::~RsMbrIfsList()
{
}

bool System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMbrIfs-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CaggrItems::AggrIfList::RsactiveIfItems::RsactiveIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsactiveIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CaggrItems::AggrIfList::RsactiveIfItems::~RsactiveIfItems()
{
}

bool System::CaggrItems::AggrIfList::RsactiveIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CaggrItems::AggrIfList::RsactiveIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CaggrItems::AggrIfList::RsactiveIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsactiveIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CaggrItems::AggrIfList::RsactiveIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CaggrItems::AggrIfList::RsactiveIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CaggrItems::AggrIfList::RsactiveIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CaggrItems::AggrIfList::RsactiveIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CaggrItems::AggrIfList::RsactiveIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CaggrItems::AggrIfList::RsactiveIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::CphysItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "cphys-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CphysItems::~CphysItems()
{
}

bool System::CphysItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CphysItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CphysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CphysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cphys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto ent_ = std::make_shared<System::CphysItems::PhysIfList>();
        ent_->parent = this;
        physif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : physif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CphysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CphysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CphysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::CphysItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    speed{YType::enumeration, "speed"},
    duplex{YType::enumeration, "duplex"},
    autoneg{YType::enumeration, "autoNeg"},
    mtu{YType::uint32, "mtu"},
    snmptrapst{YType::enumeration, "snmpTrapSt"},
    mode{YType::enumeration, "mode"},
    layer{YType::enumeration, "layer"},
    mdix{YType::enumeration, "mdix"},
    delay{YType::uint32, "delay"},
    linkdebounce{YType::uint16, "linkDebounce"},
    dot1qethertype{YType::enumeration, "dot1qEtherType"},
    bw{YType::uint32, "bw"},
    medium{YType::enumeration, "medium"},
    inhbw{YType::uint32, "inhBw"},
    spanmode{YType::enumeration, "spanMode"},
    linklog{YType::enumeration, "linkLog"},
    trunklog{YType::enumeration, "trunkLog"},
    routermac{YType::str, "routerMac"},
    portt{YType::enumeration, "portT"},
    usage{YType::str, "usage"},
    trunkvlans{YType::str, "trunkVlans"},
    accessvlan{YType::str, "accessVlan"},
    controllerid{YType::str, "controllerId"},
    nativevlan{YType::str, "nativeVlan"},
    usercfgdflags{YType::str, "userCfgdFlags"}
        ,
    dom_items(std::make_shared<System::CphysItems::PhysIfList::DomItems>())
    , rtextconf_items(std::make_shared<System::CphysItems::PhysIfList::RtextConfItems>())
    , rtbrconf_items(std::make_shared<System::CphysItems::PhysIfList::RtbrConfItems>())
    , rtfvnodeportatt_items(std::make_shared<System::CphysItems::PhysIfList::RtfvNodePortAttItems>())
    , rtvrfmbr_items(std::make_shared<System::CphysItems::PhysIfList::RtvrfMbrItems>())
    , rtphysrtdconf_items(std::make_shared<System::CphysItems::PhysIfList::RtphysRtdConfItems>())
    , rtl3encphysrtdconf_items(std::make_shared<System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::CphysItems::PhysIfList::RtnwPathToIfItems>())
    , rtlsnodetoif_items(std::make_shared<System::CphysItems::PhysIfList::RtLsNodeToIfItems>())
    , rtmbrifs_items(std::make_shared<System::CphysItems::PhysIfList::RtmbrIfsItems>())
    , rtactiveif_items(std::make_shared<System::CphysItems::PhysIfList::RtactiveIfItems>())
{
    dom_items->parent = this;
    rtextconf_items->parent = this;
    rtbrconf_items->parent = this;
    rtfvnodeportatt_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtphysrtdconf_items->parent = this;
    rtl3encphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;
    rtlsnodetoif_items->parent = this;
    rtmbrifs_items->parent = this;
    rtactiveif_items->parent = this;

    yang_name = "PhysIf-list"; yang_parent_name = "cphys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CphysItems::PhysIfList::~PhysIfList()
{
}

bool System::CphysItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| speed.is_set
	|| duplex.is_set
	|| autoneg.is_set
	|| mtu.is_set
	|| snmptrapst.is_set
	|| mode.is_set
	|| layer.is_set
	|| mdix.is_set
	|| delay.is_set
	|| linkdebounce.is_set
	|| dot1qethertype.is_set
	|| bw.is_set
	|| medium.is_set
	|| inhbw.is_set
	|| spanmode.is_set
	|| linklog.is_set
	|| trunklog.is_set
	|| routermac.is_set
	|| portt.is_set
	|| usage.is_set
	|| trunkvlans.is_set
	|| accessvlan.is_set
	|| controllerid.is_set
	|| nativevlan.is_set
	|| usercfgdflags.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_data())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_data())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_data())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_data())
	|| (rtmbrifs_items !=  nullptr && rtmbrifs_items->has_data())
	|| (rtactiveif_items !=  nullptr && rtactiveif_items->has_data());
}

bool System::CphysItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(snmptrapst.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(layer.yfilter)
	|| ydk::is_set(mdix.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(linkdebounce.yfilter)
	|| ydk::is_set(dot1qethertype.yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(inhbw.yfilter)
	|| ydk::is_set(spanmode.yfilter)
	|| ydk::is_set(linklog.yfilter)
	|| ydk::is_set(trunklog.yfilter)
	|| ydk::is_set(routermac.yfilter)
	|| ydk::is_set(portt.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| ydk::is_set(trunkvlans.yfilter)
	|| ydk::is_set(accessvlan.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(usercfgdflags.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_operation())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_operation())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_operation())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_operation())
	|| (rtmbrifs_items !=  nullptr && rtmbrifs_items->has_operation())
	|| (rtactiveif_items !=  nullptr && rtactiveif_items->has_operation());
}

std::string System::CphysItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/cphys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CphysItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (snmptrapst.is_set || is_set(snmptrapst.yfilter)) leaf_name_data.push_back(snmptrapst.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (layer.is_set || is_set(layer.yfilter)) leaf_name_data.push_back(layer.get_name_leafdata());
    if (mdix.is_set || is_set(mdix.yfilter)) leaf_name_data.push_back(mdix.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (linkdebounce.is_set || is_set(linkdebounce.yfilter)) leaf_name_data.push_back(linkdebounce.get_name_leafdata());
    if (dot1qethertype.is_set || is_set(dot1qethertype.yfilter)) leaf_name_data.push_back(dot1qethertype.get_name_leafdata());
    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (inhbw.is_set || is_set(inhbw.yfilter)) leaf_name_data.push_back(inhbw.get_name_leafdata());
    if (spanmode.is_set || is_set(spanmode.yfilter)) leaf_name_data.push_back(spanmode.get_name_leafdata());
    if (linklog.is_set || is_set(linklog.yfilter)) leaf_name_data.push_back(linklog.get_name_leafdata());
    if (trunklog.is_set || is_set(trunklog.yfilter)) leaf_name_data.push_back(trunklog.get_name_leafdata());
    if (routermac.is_set || is_set(routermac.yfilter)) leaf_name_data.push_back(routermac.get_name_leafdata());
    if (portt.is_set || is_set(portt.yfilter)) leaf_name_data.push_back(portt.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());
    if (trunkvlans.is_set || is_set(trunkvlans.yfilter)) leaf_name_data.push_back(trunkvlans.get_name_leafdata());
    if (accessvlan.is_set || is_set(accessvlan.yfilter)) leaf_name_data.push_back(accessvlan.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (usercfgdflags.is_set || is_set(usercfgdflags.yfilter)) leaf_name_data.push_back(usercfgdflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::CphysItems::PhysIfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "rtextConf-items")
    {
        if(rtextconf_items == nullptr)
        {
            rtextconf_items = std::make_shared<System::CphysItems::PhysIfList::RtextConfItems>();
        }
        return rtextconf_items;
    }

    if(child_yang_name == "rtbrConf-items")
    {
        if(rtbrconf_items == nullptr)
        {
            rtbrconf_items = std::make_shared<System::CphysItems::PhysIfList::RtbrConfItems>();
        }
        return rtbrconf_items;
    }

    if(child_yang_name == "rtfvNodePortAtt-items")
    {
        if(rtfvnodeportatt_items == nullptr)
        {
            rtfvnodeportatt_items = std::make_shared<System::CphysItems::PhysIfList::RtfvNodePortAttItems>();
        }
        return rtfvnodeportatt_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::CphysItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtphysRtdConf-items")
    {
        if(rtphysrtdconf_items == nullptr)
        {
            rtphysrtdconf_items = std::make_shared<System::CphysItems::PhysIfList::RtphysRtdConfItems>();
        }
        return rtphysrtdconf_items;
    }

    if(child_yang_name == "rtl3EncPhysRtdConf-items")
    {
        if(rtl3encphysrtdconf_items == nullptr)
        {
            rtl3encphysrtdconf_items = std::make_shared<System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems>();
        }
        return rtl3encphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::CphysItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "rtLsNodeToIf-items")
    {
        if(rtlsnodetoif_items == nullptr)
        {
            rtlsnodetoif_items = std::make_shared<System::CphysItems::PhysIfList::RtLsNodeToIfItems>();
        }
        return rtlsnodetoif_items;
    }

    if(child_yang_name == "rtmbrIfs-items")
    {
        if(rtmbrifs_items == nullptr)
        {
            rtmbrifs_items = std::make_shared<System::CphysItems::PhysIfList::RtmbrIfsItems>();
        }
        return rtmbrifs_items;
    }

    if(child_yang_name == "rtactiveIf-items")
    {
        if(rtactiveif_items == nullptr)
        {
            rtactiveif_items = std::make_shared<System::CphysItems::PhysIfList::RtactiveIfItems>();
        }
        return rtactiveif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(rtextconf_items != nullptr)
    {
        _children["rtextConf-items"] = rtextconf_items;
    }

    if(rtbrconf_items != nullptr)
    {
        _children["rtbrConf-items"] = rtbrconf_items;
    }

    if(rtfvnodeportatt_items != nullptr)
    {
        _children["rtfvNodePortAtt-items"] = rtfvnodeportatt_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtphysrtdconf_items != nullptr)
    {
        _children["rtphysRtdConf-items"] = rtphysrtdconf_items;
    }

    if(rtl3encphysrtdconf_items != nullptr)
    {
        _children["rtl3EncPhysRtdConf-items"] = rtl3encphysrtdconf_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    if(rtlsnodetoif_items != nullptr)
    {
        _children["rtLsNodeToIf-items"] = rtlsnodetoif_items;
    }

    if(rtmbrifs_items != nullptr)
    {
        _children["rtmbrIfs-items"] = rtmbrifs_items;
    }

    if(rtactiveif_items != nullptr)
    {
        _children["rtactiveIf-items"] = rtactiveif_items;
    }

    return _children;
}

void System::CphysItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoNeg")
    {
        autoneg = value;
        autoneg.value_namespace = name_space;
        autoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst = value;
        snmptrapst.value_namespace = name_space;
        snmptrapst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "layer")
    {
        layer = value;
        layer.value_namespace = name_space;
        layer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdix")
    {
        mdix = value;
        mdix.value_namespace = name_space;
        mdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce = value;
        linkdebounce.value_namespace = name_space;
        linkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qEtherType")
    {
        dot1qethertype = value;
        dot1qethertype.value_namespace = name_space;
        dot1qethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inhBw")
    {
        inhbw = value;
        inhbw.value_namespace = name_space;
        inhbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spanMode")
    {
        spanmode = value;
        spanmode.value_namespace = name_space;
        spanmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLog")
    {
        linklog = value;
        linklog.value_namespace = name_space;
        linklog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkLog")
    {
        trunklog = value;
        trunklog.value_namespace = name_space;
        trunklog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMac")
    {
        routermac = value;
        routermac.value_namespace = name_space;
        routermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portT")
    {
        portt = value;
        portt.value_namespace = name_space;
        portt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans = value;
        trunkvlans.value_namespace = name_space;
        trunkvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessVlan")
    {
        accessvlan = value;
        accessvlan.value_namespace = name_space;
        accessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags = value;
        usercfgdflags.value_namespace = name_space;
        usercfgdflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "autoNeg")
    {
        autoneg.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "snmpTrapSt")
    {
        snmptrapst.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "layer")
    {
        layer.yfilter = yfilter;
    }
    if(value_path == "mdix")
    {
        mdix.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce.yfilter = yfilter;
    }
    if(value_path == "dot1qEtherType")
    {
        dot1qethertype.yfilter = yfilter;
    }
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "inhBw")
    {
        inhbw.yfilter = yfilter;
    }
    if(value_path == "spanMode")
    {
        spanmode.yfilter = yfilter;
    }
    if(value_path == "linkLog")
    {
        linklog.yfilter = yfilter;
    }
    if(value_path == "trunkLog")
    {
        trunklog.yfilter = yfilter;
    }
    if(value_path == "routerMac")
    {
        routermac.yfilter = yfilter;
    }
    if(value_path == "portT")
    {
        portt.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
    if(value_path == "trunkVlans")
    {
        trunkvlans.yfilter = yfilter;
    }
    if(value_path == "accessVlan")
    {
        accessvlan.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "rtextConf-items" || name == "rtbrConf-items" || name == "rtfvNodePortAtt-items" || name == "rtvrfMbr-items" || name == "rtphysRtdConf-items" || name == "rtl3EncPhysRtdConf-items" || name == "rtnwPathToIf-items" || name == "rtLsNodeToIf-items" || name == "rtmbrIfs-items" || name == "rtactiveIf-items" || name == "id" || name == "operSt" || name == "name" || name == "descr" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt" || name == "mode" || name == "layer" || name == "mdix" || name == "delay" || name == "linkDebounce" || name == "dot1qEtherType" || name == "bw" || name == "medium" || name == "inhBw" || name == "spanMode" || name == "linkLog" || name == "trunkLog" || name == "routerMac" || name == "portT" || name == "usage" || name == "trunkVlans" || name == "accessVlan" || name == "controllerId" || name == "nativeVlan" || name == "userCfgdFlags")
        return true;
    return false;
}

System::CphysItems::PhysIfList::DomItems::DomItems()
    :
    domdef_list(this, {"dompkey"})
{

    yang_name = "dom-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::DomItems::~DomItems()
{
}

bool System::CphysItems::PhysIfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CphysItems::PhysIfList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CphysItems::PhysIfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomDef-list")
    {
        auto ent_ = std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList>();
        ent_->parent = this;
        domdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CphysItems::PhysIfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CphysItems::PhysIfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CphysItems::PhysIfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomDef-list")
        return true;
    return false;
}

System::CphysItems::PhysIfList::DomItems::DomDefList::DomDefList()
    :
    dompkey{YType::str, "domPKey"},
    instrimedcy{YType::enumeration, "instrImedcy"},
    name{YType::str, "name"}
        ,
    rsdomdefns_items(std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems>())
    , rsdomdefnslocal_items(std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems>())
    , rtfvtodomdef_items(std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems>())
{
    rsdomdefns_items->parent = this;
    rsdomdefnslocal_items->parent = this;
    rtfvtodomdef_items->parent = this;

    yang_name = "DomDef-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::DomItems::DomDefList::~DomDefList()
{
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::has_data() const
{
    if (is_presence_container) return true;
    return dompkey.is_set
	|| instrimedcy.is_set
	|| name.is_set
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_data())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_data())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_data());
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dompkey.yfilter)
	|| ydk::is_set(instrimedcy.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_operation())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_operation())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_operation());
}

std::string System::CphysItems::PhysIfList::DomItems::DomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomDef-list";
    ADD_KEY_TOKEN(dompkey, "domPKey");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::DomItems::DomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dompkey.is_set || is_set(dompkey.yfilter)) leaf_name_data.push_back(dompkey.get_name_leafdata());
    if (instrimedcy.is_set || is_set(instrimedcy.yfilter)) leaf_name_data.push_back(instrimedcy.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::DomItems::DomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsdomDefNs-items")
    {
        if(rsdomdefns_items == nullptr)
        {
            rsdomdefns_items = std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems>();
        }
        return rsdomdefns_items;
    }

    if(child_yang_name == "rsdomDefNsLocal-items")
    {
        if(rsdomdefnslocal_items == nullptr)
        {
            rsdomdefnslocal_items = std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems>();
        }
        return rsdomdefnslocal_items;
    }

    if(child_yang_name == "rtfvToDomDef-items")
    {
        if(rtfvtodomdef_items == nullptr)
        {
            rtfvtodomdef_items = std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems>();
        }
        return rtfvtodomdef_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::DomItems::DomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsdomdefns_items != nullptr)
    {
        _children["rsdomDefNs-items"] = rsdomdefns_items;
    }

    if(rsdomdefnslocal_items != nullptr)
    {
        _children["rsdomDefNsLocal-items"] = rsdomdefnslocal_items;
    }

    if(rtfvtodomdef_items != nullptr)
    {
        _children["rtfvToDomDef-items"] = rtfvtodomdef_items;
    }

    return _children;
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domPKey")
    {
        dompkey = value;
        dompkey.value_namespace = name_space;
        dompkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instrImedcy")
    {
        instrimedcy = value;
        instrimedcy.value_namespace = name_space;
        instrimedcy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domPKey")
    {
        dompkey.yfilter = yfilter;
    }
    if(value_path == "instrImedcy")
    {
        instrimedcy.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsdomDefNs-items" || name == "rsdomDefNsLocal-items" || name == "rtfvToDomDef-items" || name == "domPKey" || name == "instrImedcy" || name == "name")
        return true;
    return false;
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::RsdomDefNsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNs-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::~RsdomDefNsItems()
{
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::RsdomDefNsLocalItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNsLocal-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::~RsdomDefNsLocalItems()
{
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNsLocal-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtfvToDomDefItems()
    :
    rtfvtodomdef_list(this, {"tdn"})
{

    yang_name = "rtfvToDomDef-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::~RtfvToDomDefItems()
{
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToDomDef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToDomDef-list")
    {
        auto ent_ = std::make_shared<System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList>();
        ent_->parent = this;
        rtfvtodomdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvtodomdef_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToDomDef-list")
        return true;
    return false;
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::RtFvToDomDefList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvToDomDef-list"; yang_parent_name = "rtfvToDomDef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::~RtFvToDomDefList()
{
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToDomDef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtextConfItems::RtextConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtextConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtextConfItems::~RtextConfItems()
{
}

bool System::CphysItems::PhysIfList::RtextConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtextConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtextConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtextConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtextConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtextConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtextConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtextConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtextConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtextConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtbrConfItems::RtbrConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtbrConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtbrConfItems::~RtbrConfItems()
{
}

bool System::CphysItems::PhysIfList::RtbrConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtbrConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtbrConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtbrConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtbrConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtbrConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtbrConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtfvNodePortAttItems()
    :
    rtfvnodeportatt_list(this, {"tdn"})
{

    yang_name = "rtfvNodePortAtt-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtfvNodePortAttItems::~RtfvNodePortAttItems()
{
}

bool System::CphysItems::PhysIfList::RtfvNodePortAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CphysItems::PhysIfList::RtfvNodePortAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CphysItems::PhysIfList::RtfvNodePortAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvNodePortAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtfvNodePortAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtfvNodePortAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvNodePortAtt-list")
    {
        auto ent_ = std::make_shared<System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList>();
        ent_->parent = this;
        rtfvnodeportatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtfvNodePortAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvnodeportatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CphysItems::PhysIfList::RtfvNodePortAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CphysItems::PhysIfList::RtfvNodePortAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CphysItems::PhysIfList::RtfvNodePortAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvNodePortAtt-list")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::RtFvNodePortAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvNodePortAtt-list"; yang_parent_name = "rtfvNodePortAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::~RtFvNodePortAttList()
{
}

bool System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvNodePortAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::CphysItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtphysRtdConfItems::RtphysRtdConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtphysRtdConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtphysRtdConfItems::~RtphysRtdConfItems()
{
}

bool System::CphysItems::PhysIfList::RtphysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtphysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtphysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::Rtl3EncPhysRtdConfItems()
    :
    rtl3encphysrtdconf_list(this, {"tdn"})
{

    yang_name = "rtl3EncPhysRtdConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::~Rtl3EncPhysRtdConfItems()
{
}

bool System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_operation() const
{
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtl3EncPhysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtL3EncPhysRtdConf-list")
    {
        auto ent_ = std::make_shared<System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList>();
        ent_->parent = this;
        rtl3encphysrtdconf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtl3encphysrtdconf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtL3EncPhysRtdConf-list")
        return true;
    return false;
}

System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::RtL3EncPhysRtdConfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtL3EncPhysRtdConf-list"; yang_parent_name = "rtl3EncPhysRtdConf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::~RtL3EncPhysRtdConfList()
{
}

bool System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtL3EncPhysRtdConf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::CphysItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::CphysItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::CphysItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::CphysItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::CphysItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::CphysItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtLsNodeToIfItems::RtLsNodeToIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtLsNodeToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtLsNodeToIfItems::~RtLsNodeToIfItems()
{
}

bool System::CphysItems::PhysIfList::RtLsNodeToIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtLsNodeToIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtLsNodeToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtLsNodeToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtLsNodeToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtLsNodeToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtLsNodeToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtLsNodeToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtLsNodeToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtLsNodeToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtmbrIfsItems::RtmbrIfsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtmbrIfs-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtmbrIfsItems::~RtmbrIfsItems()
{
}

bool System::CphysItems::PhysIfList::RtmbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtmbrIfsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtmbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtmbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtmbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtmbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtmbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtmbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtmbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::CphysItems::PhysIfList::RtactiveIfItems::RtactiveIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtactiveIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::CphysItems::PhysIfList::RtactiveIfItems::~RtactiveIfItems()
{
}

bool System::CphysItems::PhysIfList::RtactiveIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::CphysItems::PhysIfList::RtactiveIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::CphysItems::PhysIfList::RtactiveIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtactiveIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CphysItems::PhysIfList::RtactiveIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CphysItems::PhysIfList::RtactiveIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CphysItems::PhysIfList::RtactiveIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CphysItems::PhysIfList::RtactiveIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::CphysItems::PhysIfList::RtactiveIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::CphysItems::PhysIfList::RtactiveIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActionItems::ActionItems()
    :
    tracertnve_items(std::make_shared<System::ActionItems::TracertnveItems>())
    , pathtracenve_items(std::make_shared<System::ActionItems::PathtracenveItems>())
    , eqptdiagrule_items(std::make_shared<System::ActionItems::EqptdiagruleItems>())
    , lsubj_items(std::make_shared<System::ActionItems::LsubjItems>())
{
    tracertnve_items->parent = this;
    pathtracenve_items->parent = this;
    eqptdiagrule_items->parent = this;
    lsubj_items->parent = this;

    yang_name = "action-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::~ActionItems()
{
}

bool System::ActionItems::has_data() const
{
    if (is_presence_container) return true;
    return (tracertnve_items !=  nullptr && tracertnve_items->has_data())
	|| (pathtracenve_items !=  nullptr && pathtracenve_items->has_data())
	|| (eqptdiagrule_items !=  nullptr && eqptdiagrule_items->has_data())
	|| (lsubj_items !=  nullptr && lsubj_items->has_data());
}

bool System::ActionItems::has_operation() const
{
    return is_set(yfilter)
	|| (tracertnve_items !=  nullptr && tracertnve_items->has_operation())
	|| (pathtracenve_items !=  nullptr && pathtracenve_items->has_operation())
	|| (eqptdiagrule_items !=  nullptr && eqptdiagrule_items->has_operation())
	|| (lsubj_items !=  nullptr && lsubj_items->has_operation());
}

std::string System::ActionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracertnve-items")
    {
        if(tracertnve_items == nullptr)
        {
            tracertnve_items = std::make_shared<System::ActionItems::TracertnveItems>();
        }
        return tracertnve_items;
    }

    if(child_yang_name == "pathtracenve-items")
    {
        if(pathtracenve_items == nullptr)
        {
            pathtracenve_items = std::make_shared<System::ActionItems::PathtracenveItems>();
        }
        return pathtracenve_items;
    }

    if(child_yang_name == "eqptdiagrule-items")
    {
        if(eqptdiagrule_items == nullptr)
        {
            eqptdiagrule_items = std::make_shared<System::ActionItems::EqptdiagruleItems>();
        }
        return eqptdiagrule_items;
    }

    if(child_yang_name == "lsubj-items")
    {
        if(lsubj_items == nullptr)
        {
            lsubj_items = std::make_shared<System::ActionItems::LsubjItems>();
        }
        return lsubj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tracertnve_items != nullptr)
    {
        _children["tracertnve-items"] = tracertnve_items;
    }

    if(pathtracenve_items != nullptr)
    {
        _children["pathtracenve-items"] = pathtracenve_items;
    }

    if(eqptdiagrule_items != nullptr)
    {
        _children["eqptdiagrule-items"] = eqptdiagrule_items;
    }

    if(lsubj_items != nullptr)
    {
        _children["lsubj-items"] = lsubj_items;
    }

    return _children;
}

void System::ActionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracertnve-items" || name == "pathtracenve-items" || name == "eqptdiagrule-items" || name == "lsubj-items")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TracertnveItems()
    :
    tracertnve_list(this, {"session"})
{

    yang_name = "tracertnve-items"; yang_parent_name = "action-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::TracertnveItems::~TracertnveItems()
{
}

bool System::ActionItems::TracertnveItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracertnve_list.len(); index++)
    {
        if(tracertnve_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::TracertnveItems::has_operation() const
{
    for (std::size_t index=0; index<tracertnve_list.len(); index++)
    {
        if(tracertnve_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::TracertnveItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::TracertnveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracertnve-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TraceRtNve-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList>();
        ent_->parent = this;
        tracertnve_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracertnve_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::TracertnveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::TracertnveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::TracertnveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TraceRtNve-list")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TraceRtNveList::TraceRtNveList()
    :
    session{YType::str, "session"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    profileid{YType::uint16, "profileId"},
    dstip{YType::str, "dstIp"},
    dstipv6{YType::str, "dstIpv6"},
    dstmac{YType::str, "dstMAC"},
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"},
    dot1q{YType::uint16, "dot1q"},
    srcport{YType::uint16, "srcPort"},
    dstport{YType::uint16, "dstPort"},
    maxttl{YType::uint8, "maxTtl"},
    vrf{YType::str, "vrf"},
    vni{YType::uint32, "vni"},
    timeout{YType::uint8, "timeout"},
    egressif{YType::str, "egressIf"},
    macsrcif{YType::str, "macsrcif"},
    verifyhost{YType::boolean, "verifyHost"},
    sessionid{YType::uint32, "sessionId"},
    payload_dot1q{YType::uint16, "payload_dot1q"},
    payload_srcip{YType::str, "payload_srcip"},
    payload_srcipv6{YType::str, "payload_srcipv6"},
    payload_srcmac{YType::str, "payload_srcmac"},
    payload_dstip{YType::str, "payload_dstip"},
    payload_dstipv6{YType::str, "payload_dstipv6"},
    payload_dstmac{YType::str, "payload_dstmac"},
    payload_srcport{YType::uint16, "payload_srcport"},
    payload_dstport{YType::uint16, "payload_dstport"},
    payload_protocol{YType::uint16, "payload_protocol"},
    payload_srcif{YType::str, "payload_srcif"}
        ,
    trnverslt_items(std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems>())
{
    trnverslt_items->parent = this;

    yang_name = "TraceRtNve-list"; yang_parent_name = "tracertnve-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::TracertnveItems::TraceRtNveList::~TraceRtNveList()
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| profileid.is_set
	|| dstip.is_set
	|| dstipv6.is_set
	|| dstmac.is_set
	|| srcip.is_set
	|| srcipv6.is_set
	|| dot1q.is_set
	|| srcport.is_set
	|| dstport.is_set
	|| maxttl.is_set
	|| vrf.is_set
	|| vni.is_set
	|| timeout.is_set
	|| egressif.is_set
	|| macsrcif.is_set
	|| verifyhost.is_set
	|| sessionid.is_set
	|| payload_dot1q.is_set
	|| payload_srcip.is_set
	|| payload_srcipv6.is_set
	|| payload_srcmac.is_set
	|| payload_dstip.is_set
	|| payload_dstipv6.is_set
	|| payload_dstmac.is_set
	|| payload_srcport.is_set
	|| payload_dstport.is_set
	|| payload_protocol.is_set
	|| payload_srcif.is_set
	|| (trnverslt_items !=  nullptr && trnverslt_items->has_data());
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(profileid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(dstipv6.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(maxttl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(macsrcif.yfilter)
	|| ydk::is_set(verifyhost.yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(payload_dot1q.yfilter)
	|| ydk::is_set(payload_srcip.yfilter)
	|| ydk::is_set(payload_srcipv6.yfilter)
	|| ydk::is_set(payload_srcmac.yfilter)
	|| ydk::is_set(payload_dstip.yfilter)
	|| ydk::is_set(payload_dstipv6.yfilter)
	|| ydk::is_set(payload_dstmac.yfilter)
	|| ydk::is_set(payload_srcport.yfilter)
	|| ydk::is_set(payload_dstport.yfilter)
	|| ydk::is_set(payload_protocol.yfilter)
	|| ydk::is_set(payload_srcif.yfilter)
	|| (trnverslt_items !=  nullptr && trnverslt_items->has_operation());
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/tracertnve-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TraceRtNve-list";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::TraceRtNveList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (profileid.is_set || is_set(profileid.yfilter)) leaf_name_data.push_back(profileid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (dstipv6.is_set || is_set(dstipv6.yfilter)) leaf_name_data.push_back(dstipv6.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (maxttl.is_set || is_set(maxttl.yfilter)) leaf_name_data.push_back(maxttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (macsrcif.is_set || is_set(macsrcif.yfilter)) leaf_name_data.push_back(macsrcif.get_name_leafdata());
    if (verifyhost.is_set || is_set(verifyhost.yfilter)) leaf_name_data.push_back(verifyhost.get_name_leafdata());
    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (payload_dot1q.is_set || is_set(payload_dot1q.yfilter)) leaf_name_data.push_back(payload_dot1q.get_name_leafdata());
    if (payload_srcip.is_set || is_set(payload_srcip.yfilter)) leaf_name_data.push_back(payload_srcip.get_name_leafdata());
    if (payload_srcipv6.is_set || is_set(payload_srcipv6.yfilter)) leaf_name_data.push_back(payload_srcipv6.get_name_leafdata());
    if (payload_srcmac.is_set || is_set(payload_srcmac.yfilter)) leaf_name_data.push_back(payload_srcmac.get_name_leafdata());
    if (payload_dstip.is_set || is_set(payload_dstip.yfilter)) leaf_name_data.push_back(payload_dstip.get_name_leafdata());
    if (payload_dstipv6.is_set || is_set(payload_dstipv6.yfilter)) leaf_name_data.push_back(payload_dstipv6.get_name_leafdata());
    if (payload_dstmac.is_set || is_set(payload_dstmac.yfilter)) leaf_name_data.push_back(payload_dstmac.get_name_leafdata());
    if (payload_srcport.is_set || is_set(payload_srcport.yfilter)) leaf_name_data.push_back(payload_srcport.get_name_leafdata());
    if (payload_dstport.is_set || is_set(payload_dstport.yfilter)) leaf_name_data.push_back(payload_dstport.get_name_leafdata());
    if (payload_protocol.is_set || is_set(payload_protocol.yfilter)) leaf_name_data.push_back(payload_protocol.get_name_leafdata());
    if (payload_srcif.is_set || is_set(payload_srcif.yfilter)) leaf_name_data.push_back(payload_srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::TraceRtNveList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trnverslt-items")
    {
        if(trnverslt_items == nullptr)
        {
            trnverslt_items = std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems>();
        }
        return trnverslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::TraceRtNveList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trnverslt_items != nullptr)
    {
        _children["trnverslt-items"] = trnverslt_items;
    }

    return _children;
}

void System::ActionItems::TracertnveItems::TraceRtNveList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileId")
    {
        profileid = value;
        profileid.value_namespace = name_space;
        profileid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6 = value;
        dstipv6.value_namespace = name_space;
        dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMAC")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTtl")
    {
        maxttl = value;
        maxttl.value_namespace = name_space;
        maxttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsrcif")
    {
        macsrcif = value;
        macsrcif.value_namespace = name_space;
        macsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyHost")
    {
        verifyhost = value;
        verifyhost.value_namespace = name_space;
        verifyhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q = value;
        payload_dot1q.value_namespace = name_space;
        payload_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip = value;
        payload_srcip.value_namespace = name_space;
        payload_srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6 = value;
        payload_srcipv6.value_namespace = name_space;
        payload_srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac = value;
        payload_srcmac.value_namespace = name_space;
        payload_srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip = value;
        payload_dstip.value_namespace = name_space;
        payload_dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6 = value;
        payload_dstipv6.value_namespace = name_space;
        payload_dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac = value;
        payload_dstmac.value_namespace = name_space;
        payload_dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport = value;
        payload_srcport.value_namespace = name_space;
        payload_srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport = value;
        payload_dstport.value_namespace = name_space;
        payload_dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol = value;
        payload_protocol.value_namespace = name_space;
        payload_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif = value;
        payload_srcif.value_namespace = name_space;
        payload_srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::TracertnveItems::TraceRtNveList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "profileId")
    {
        profileid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6.yfilter = yfilter;
    }
    if(value_path == "dstMAC")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "maxTtl")
    {
        maxttl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "macsrcif")
    {
        macsrcif.yfilter = yfilter;
    }
    if(value_path == "verifyHost")
    {
        verifyhost.yfilter = yfilter;
    }
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q.yfilter = yfilter;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip.yfilter = yfilter;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6.yfilter = yfilter;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac.yfilter = yfilter;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip.yfilter = yfilter;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6.yfilter = yfilter;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac.yfilter = yfilter;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport.yfilter = yfilter;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport.yfilter = yfilter;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol.yfilter = yfilter;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif.yfilter = yfilter;
    }
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trnverslt-items" || name == "session" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "profileId" || name == "dstIp" || name == "dstIpv6" || name == "dstMAC" || name == "srcIp" || name == "srcIpv6" || name == "dot1q" || name == "srcPort" || name == "dstPort" || name == "maxTtl" || name == "vrf" || name == "vni" || name == "timeout" || name == "egressIf" || name == "macsrcif" || name == "verifyHost" || name == "sessionId" || name == "payload_dot1q" || name == "payload_srcip" || name == "payload_srcipv6" || name == "payload_srcmac" || name == "payload_dstip" || name == "payload_dstipv6" || name == "payload_dstmac" || name == "payload_srcport" || name == "payload_dstport" || name == "payload_protocol" || name == "payload_srcif")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TrnversltItems()
    :
    tracertnverslt_list(this, {"sessionid"})
{

    yang_name = "trnverslt-items"; yang_parent_name = "TraceRtNve-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::~TrnversltItems()
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracertnverslt_list.len(); index++)
    {
        if(tracertnverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::has_operation() const
{
    for (std::size_t index=0; index<tracertnverslt_list.len(); index++)
    {
        if(tracertnverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TraceRtNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList>();
        ent_->parent = this;
        tracertnverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracertnverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TraceRtNveRslt-list")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::TraceRtNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    dstip{YType::str, "dstIp"},
    maxhops{YType::uint8, "maxHops"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    pathtr_items(std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems>())
{
    pathtr_items->parent = this;

    yang_name = "TraceRtNveRslt-list"; yang_parent_name = "trnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::~TraceRtNveRsltList()
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| dstip.is_set
	|| maxhops.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (pathtr_items !=  nullptr && pathtr_items->has_data());
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (pathtr_items !=  nullptr && pathtr_items->has_operation());
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TraceRtNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pathtr-items")
    {
        if(pathtr_items == nullptr)
        {
            pathtr_items = std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems>();
        }
        return pathtr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pathtr_items != nullptr)
    {
        _children["pathtr-items"] = pathtr_items;
    }

    return _children;
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathtr-items" || name == "sessionId" || name == "dstIp" || name == "maxHops" || name == "errorCode" || name == "failReason" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathtrItems()
    :
    pathtr_list(this, {"id"})
{

    yang_name = "pathtr-items"; yang_parent_name = "TraceRtNveRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::~PathtrItems()
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtr_list.len(); index++)
    {
        if(pathtr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_operation() const
{
    for (std::size_t index=0; index<pathtr_list.len(); index++)
    {
        if(pathtr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathtr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList>();
        ent_->parent = this;
        pathtr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTr-list")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::PathTrList()
    :
    id{YType::uint8, "id"}
        ,
    nodetr_items(std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems>())
{
    nodetr_items->parent = this;

    yang_name = "PathTr-list"; yang_parent_name = "pathtr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::~PathTrList()
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nodetr_items !=  nullptr && nodetr_items->has_data());
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nodetr_items !=  nullptr && nodetr_items->has_operation());
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTr-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodetr-items")
    {
        if(nodetr_items == nullptr)
        {
            nodetr_items = std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems>();
        }
        return nodetr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodetr_items != nullptr)
    {
        _children["nodetr-items"] = nodetr_items;
    }

    return _children;
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodetr-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodetrItems()
    :
    nodetr_list(this, {"order"})
{

    yang_name = "nodetr-items"; yang_parent_name = "PathTr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::~NodetrItems()
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodetr_list.len(); index++)
    {
        if(nodetr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_operation() const
{
    for (std::size_t index=0; index<nodetr_list.len(); index++)
    {
        if(nodetr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodetr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodeTr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList>();
        ent_->parent = this;
        nodetr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodetr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodeTr-list")
        return true;
    return false;
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::NodeTrList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"},
    v6addr{YType::str, "v6addr"},
    elapsedtime{YType::str, "elapsedTime"}
{

    yang_name = "NodeTr-list"; yang_parent_name = "nodetr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::~NodeTrList()
{
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set
	|| v6addr.is_set
	|| elapsedtime.is_set;
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(elapsedtime.yfilter);
}

std::string System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodeTr-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (elapsedtime.is_set || is_set(elapsedtime.yfilter)) leaf_name_data.push_back(elapsedtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime = value;
        elapsedtime.value_namespace = name_space;
        elapsedtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "v6addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime.yfilter = yfilter;
    }
}

bool System::ActionItems::TracertnveItems::TraceRtNveList::TrnversltItems::TraceRtNveRsltList::PathtrItems::PathTrList::NodetrItems::NodeTrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr" || name == "v6addr" || name == "elapsedTime")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathtracenveItems()
    :
    pathtracenve_list(this, {"session"})
{

    yang_name = "pathtracenve-items"; yang_parent_name = "action-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::PathtracenveItems::~PathtracenveItems()
{
}

bool System::ActionItems::PathtracenveItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtracenve_list.len(); index++)
    {
        if(pathtracenve_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::PathtracenveItems::has_operation() const
{
    for (std::size_t index=0; index<pathtracenve_list.len(); index++)
    {
        if(pathtracenve_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::PathtracenveItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::PathtracenveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathtracenve-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTraceNve-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList>();
        ent_->parent = this;
        pathtracenve_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtracenve_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::PathtracenveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::PathtracenveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::PathtracenveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTraceNve-list")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PathTraceNveList()
    :
    session{YType::str, "session"},
    reqstats{YType::boolean, "reqStats"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    profileid{YType::uint16, "profileId"},
    dstip{YType::str, "dstIp"},
    dstipv6{YType::str, "dstIpv6"},
    dstmac{YType::str, "dstMAC"},
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"},
    dot1q{YType::uint16, "dot1q"},
    srcport{YType::uint16, "srcPort"},
    dstport{YType::uint16, "dstPort"},
    maxttl{YType::uint8, "maxTtl"},
    vrf{YType::str, "vrf"},
    vni{YType::uint32, "vni"},
    timeout{YType::uint8, "timeout"},
    egressif{YType::str, "egressIf"},
    macsrcif{YType::str, "macsrcif"},
    verifyhost{YType::boolean, "verifyHost"},
    sessionid{YType::uint32, "sessionId"},
    payload_dot1q{YType::uint16, "payload_dot1q"},
    payload_srcip{YType::str, "payload_srcip"},
    payload_srcipv6{YType::str, "payload_srcipv6"},
    payload_srcmac{YType::str, "payload_srcmac"},
    payload_dstip{YType::str, "payload_dstip"},
    payload_dstipv6{YType::str, "payload_dstipv6"},
    payload_dstmac{YType::str, "payload_dstmac"},
    payload_srcport{YType::uint16, "payload_srcport"},
    payload_dstport{YType::uint16, "payload_dstport"},
    payload_protocol{YType::uint16, "payload_protocol"},
    payload_srcif{YType::str, "payload_srcif"}
        ,
    ptrnverslt_items(std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems>())
{
    ptrnverslt_items->parent = this;

    yang_name = "PathTraceNve-list"; yang_parent_name = "pathtracenve-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::PathtracenveItems::PathTraceNveList::~PathTraceNveList()
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| reqstats.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| profileid.is_set
	|| dstip.is_set
	|| dstipv6.is_set
	|| dstmac.is_set
	|| srcip.is_set
	|| srcipv6.is_set
	|| dot1q.is_set
	|| srcport.is_set
	|| dstport.is_set
	|| maxttl.is_set
	|| vrf.is_set
	|| vni.is_set
	|| timeout.is_set
	|| egressif.is_set
	|| macsrcif.is_set
	|| verifyhost.is_set
	|| sessionid.is_set
	|| payload_dot1q.is_set
	|| payload_srcip.is_set
	|| payload_srcipv6.is_set
	|| payload_srcmac.is_set
	|| payload_dstip.is_set
	|| payload_dstipv6.is_set
	|| payload_dstmac.is_set
	|| payload_srcport.is_set
	|| payload_dstport.is_set
	|| payload_protocol.is_set
	|| payload_srcif.is_set
	|| (ptrnverslt_items !=  nullptr && ptrnverslt_items->has_data());
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(reqstats.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(profileid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(dstipv6.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(dstport.yfilter)
	|| ydk::is_set(maxttl.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(macsrcif.yfilter)
	|| ydk::is_set(verifyhost.yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(payload_dot1q.yfilter)
	|| ydk::is_set(payload_srcip.yfilter)
	|| ydk::is_set(payload_srcipv6.yfilter)
	|| ydk::is_set(payload_srcmac.yfilter)
	|| ydk::is_set(payload_dstip.yfilter)
	|| ydk::is_set(payload_dstipv6.yfilter)
	|| ydk::is_set(payload_dstmac.yfilter)
	|| ydk::is_set(payload_srcport.yfilter)
	|| ydk::is_set(payload_dstport.yfilter)
	|| ydk::is_set(payload_protocol.yfilter)
	|| ydk::is_set(payload_srcif.yfilter)
	|| (ptrnverslt_items !=  nullptr && ptrnverslt_items->has_operation());
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/pathtracenve-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTraceNve-list";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::PathTraceNveList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (reqstats.is_set || is_set(reqstats.yfilter)) leaf_name_data.push_back(reqstats.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (profileid.is_set || is_set(profileid.yfilter)) leaf_name_data.push_back(profileid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (dstipv6.is_set || is_set(dstipv6.yfilter)) leaf_name_data.push_back(dstipv6.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (dstport.is_set || is_set(dstport.yfilter)) leaf_name_data.push_back(dstport.get_name_leafdata());
    if (maxttl.is_set || is_set(maxttl.yfilter)) leaf_name_data.push_back(maxttl.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (macsrcif.is_set || is_set(macsrcif.yfilter)) leaf_name_data.push_back(macsrcif.get_name_leafdata());
    if (verifyhost.is_set || is_set(verifyhost.yfilter)) leaf_name_data.push_back(verifyhost.get_name_leafdata());
    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (payload_dot1q.is_set || is_set(payload_dot1q.yfilter)) leaf_name_data.push_back(payload_dot1q.get_name_leafdata());
    if (payload_srcip.is_set || is_set(payload_srcip.yfilter)) leaf_name_data.push_back(payload_srcip.get_name_leafdata());
    if (payload_srcipv6.is_set || is_set(payload_srcipv6.yfilter)) leaf_name_data.push_back(payload_srcipv6.get_name_leafdata());
    if (payload_srcmac.is_set || is_set(payload_srcmac.yfilter)) leaf_name_data.push_back(payload_srcmac.get_name_leafdata());
    if (payload_dstip.is_set || is_set(payload_dstip.yfilter)) leaf_name_data.push_back(payload_dstip.get_name_leafdata());
    if (payload_dstipv6.is_set || is_set(payload_dstipv6.yfilter)) leaf_name_data.push_back(payload_dstipv6.get_name_leafdata());
    if (payload_dstmac.is_set || is_set(payload_dstmac.yfilter)) leaf_name_data.push_back(payload_dstmac.get_name_leafdata());
    if (payload_srcport.is_set || is_set(payload_srcport.yfilter)) leaf_name_data.push_back(payload_srcport.get_name_leafdata());
    if (payload_dstport.is_set || is_set(payload_dstport.yfilter)) leaf_name_data.push_back(payload_dstport.get_name_leafdata());
    if (payload_protocol.is_set || is_set(payload_protocol.yfilter)) leaf_name_data.push_back(payload_protocol.get_name_leafdata());
    if (payload_srcif.is_set || is_set(payload_srcif.yfilter)) leaf_name_data.push_back(payload_srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::PathTraceNveList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptrnverslt-items")
    {
        if(ptrnverslt_items == nullptr)
        {
            ptrnverslt_items = std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems>();
        }
        return ptrnverslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::PathTraceNveList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ptrnverslt_items != nullptr)
    {
        _children["ptrnverslt-items"] = ptrnverslt_items;
    }

    return _children;
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqStats")
    {
        reqstats = value;
        reqstats.value_namespace = name_space;
        reqstats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileId")
    {
        profileid = value;
        profileid.value_namespace = name_space;
        profileid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6 = value;
        dstipv6.value_namespace = name_space;
        dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMAC")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstPort")
    {
        dstport = value;
        dstport.value_namespace = name_space;
        dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTtl")
    {
        maxttl = value;
        maxttl.value_namespace = name_space;
        maxttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsrcif")
    {
        macsrcif = value;
        macsrcif.value_namespace = name_space;
        macsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyHost")
    {
        verifyhost = value;
        verifyhost.value_namespace = name_space;
        verifyhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q = value;
        payload_dot1q.value_namespace = name_space;
        payload_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip = value;
        payload_srcip.value_namespace = name_space;
        payload_srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6 = value;
        payload_srcipv6.value_namespace = name_space;
        payload_srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac = value;
        payload_srcmac.value_namespace = name_space;
        payload_srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip = value;
        payload_dstip.value_namespace = name_space;
        payload_dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6 = value;
        payload_dstipv6.value_namespace = name_space;
        payload_dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac = value;
        payload_dstmac.value_namespace = name_space;
        payload_dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport = value;
        payload_srcport.value_namespace = name_space;
        payload_srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport = value;
        payload_dstport.value_namespace = name_space;
        payload_dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol = value;
        payload_protocol.value_namespace = name_space;
        payload_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif = value;
        payload_srcif.value_namespace = name_space;
        payload_srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "reqStats")
    {
        reqstats.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "profileId")
    {
        profileid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6.yfilter = yfilter;
    }
    if(value_path == "dstMAC")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "dstPort")
    {
        dstport.yfilter = yfilter;
    }
    if(value_path == "maxTtl")
    {
        maxttl.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "macsrcif")
    {
        macsrcif.yfilter = yfilter;
    }
    if(value_path == "verifyHost")
    {
        verifyhost.yfilter = yfilter;
    }
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q.yfilter = yfilter;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip.yfilter = yfilter;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6.yfilter = yfilter;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac.yfilter = yfilter;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip.yfilter = yfilter;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6.yfilter = yfilter;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac.yfilter = yfilter;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport.yfilter = yfilter;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport.yfilter = yfilter;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol.yfilter = yfilter;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif.yfilter = yfilter;
    }
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptrnverslt-items" || name == "session" || name == "reqStats" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "profileId" || name == "dstIp" || name == "dstIpv6" || name == "dstMAC" || name == "srcIp" || name == "srcIpv6" || name == "dot1q" || name == "srcPort" || name == "dstPort" || name == "maxTtl" || name == "vrf" || name == "vni" || name == "timeout" || name == "egressIf" || name == "macsrcif" || name == "verifyHost" || name == "sessionId" || name == "payload_dot1q" || name == "payload_srcip" || name == "payload_srcipv6" || name == "payload_srcmac" || name == "payload_dstip" || name == "payload_dstipv6" || name == "payload_dstmac" || name == "payload_srcport" || name == "payload_dstport" || name == "payload_protocol" || name == "payload_srcif")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PtrnversltItems()
    :
    pathtracenverslt_list(this, {"sessionid"})
{

    yang_name = "ptrnverslt-items"; yang_parent_name = "PathTraceNve-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::~PtrnversltItems()
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathtracenverslt_list.len(); index++)
    {
        if(pathtracenverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::has_operation() const
{
    for (std::size_t index=0; index<pathtracenverslt_list.len(); index++)
    {
        if(pathtracenverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptrnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathTraceNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList>();
        ent_->parent = this;
        pathtracenverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathtracenverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathTraceNveRslt-list")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathTraceNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    dstip{YType::str, "dstIp"},
    maxhops{YType::uint8, "maxHops"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    pathptr_items(std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems>())
{
    pathptr_items->parent = this;

    yang_name = "PathTraceNveRslt-list"; yang_parent_name = "ptrnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::~PathTraceNveRsltList()
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| dstip.is_set
	|| maxhops.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (pathptr_items !=  nullptr && pathptr_items->has_data());
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (pathptr_items !=  nullptr && pathptr_items->has_operation());
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathTraceNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pathptr-items")
    {
        if(pathptr_items == nullptr)
        {
            pathptr_items = std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems>();
        }
        return pathptr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pathptr_items != nullptr)
    {
        _children["pathptr-items"] = pathptr_items;
    }

    return _children;
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pathptr-items" || name == "sessionId" || name == "dstIp" || name == "maxHops" || name == "errorCode" || name == "failReason" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathptrItems()
    :
    pathptr_list(this, {"id"})
{

    yang_name = "pathptr-items"; yang_parent_name = "PathTraceNveRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::~PathptrItems()
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathptr_list.len(); index++)
    {
        if(pathptr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_operation() const
{
    for (std::size_t index=0; index<pathptr_list.len(); index++)
    {
        if(pathptr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathptr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathPtr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList>();
        ent_->parent = this;
        pathptr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathptr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathPtr-list")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::PathPtrList()
    :
    id{YType::uint8, "id"}
        ,
    nodeptr_items(std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems>())
{
    nodeptr_items->parent = this;

    yang_name = "PathPtr-list"; yang_parent_name = "pathptr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::~PathPtrList()
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (nodeptr_items !=  nullptr && nodeptr_items->has_data());
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (nodeptr_items !=  nullptr && nodeptr_items->has_operation());
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathPtr-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodeptr-items")
    {
        if(nodeptr_items == nullptr)
        {
            nodeptr_items = std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems>();
        }
        return nodeptr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodeptr_items != nullptr)
    {
        _children["nodeptr-items"] = nodeptr_items;
    }

    return _children;
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodeptr-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodeptrItems()
    :
    nodeptr_list(this, {"order"})
{

    yang_name = "nodeptr-items"; yang_parent_name = "PathPtr-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::~NodeptrItems()
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nodeptr_list.len(); index++)
    {
        if(nodeptr_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_operation() const
{
    for (std::size_t index=0; index<nodeptr_list.len(); index++)
    {
        if(nodeptr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodeptr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NodePtr-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList>();
        ent_->parent = this;
        nodeptr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nodeptr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NodePtr-list")
        return true;
    return false;
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::NodePtrList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"},
    v6addr{YType::str, "v6addr"},
    nodename{YType::str, "nodeName"},
    elapsedtime{YType::str, "elapsedTime"},
    ingressif{YType::str, "ingressIf"},
    ingressifstate{YType::str, "ingressIfState"},
    rxlen{YType::uint64, "rxLen"},
    rxbytes{YType::uint64, "rxBytes"},
    rxpktrate{YType::uint64, "rxPktRate"},
    rxbyterate{YType::uint64, "rxByteRate"},
    rxload{YType::uint64, "rxLoad"},
    rxucast{YType::uint64, "rxUcast"},
    rxmcast{YType::uint64, "rxMcast"},
    rxbcast{YType::uint64, "rxBcast"},
    rxdiscards{YType::uint64, "rxDiscards"},
    rxerrors{YType::uint64, "rxErrors"},
    rxunknown{YType::uint64, "rxUnknown"},
    rxbandwidth{YType::uint32, "rxBandwidth"},
    egressif{YType::str, "egressIf"},
    egressifstate{YType::str, "egressIfState"},
    txlen{YType::uint64, "txLen"},
    txbytes{YType::uint64, "txBytes"},
    txpktrate{YType::uint64, "txPktRate"},
    txbyterate{YType::uint64, "txByteRate"},
    txload{YType::uint64, "txLoad"},
    txucast{YType::uint64, "txUcast"},
    txmcast{YType::uint64, "txMcast"},
    txbcast{YType::uint64, "txBcast"},
    txdiscards{YType::uint64, "txDiscards"},
    txerrors{YType::uint64, "txErrors"},
    txbandwidth{YType::uint32, "txBandwidth"}
{

    yang_name = "NodePtr-list"; yang_parent_name = "nodeptr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::~NodePtrList()
{
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set
	|| v6addr.is_set
	|| nodename.is_set
	|| elapsedtime.is_set
	|| ingressif.is_set
	|| ingressifstate.is_set
	|| rxlen.is_set
	|| rxbytes.is_set
	|| rxpktrate.is_set
	|| rxbyterate.is_set
	|| rxload.is_set
	|| rxucast.is_set
	|| rxmcast.is_set
	|| rxbcast.is_set
	|| rxdiscards.is_set
	|| rxerrors.is_set
	|| rxunknown.is_set
	|| rxbandwidth.is_set
	|| egressif.is_set
	|| egressifstate.is_set
	|| txlen.is_set
	|| txbytes.is_set
	|| txpktrate.is_set
	|| txbyterate.is_set
	|| txload.is_set
	|| txucast.is_set
	|| txmcast.is_set
	|| txbcast.is_set
	|| txdiscards.is_set
	|| txerrors.is_set
	|| txbandwidth.is_set;
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(v6addr.yfilter)
	|| ydk::is_set(nodename.yfilter)
	|| ydk::is_set(elapsedtime.yfilter)
	|| ydk::is_set(ingressif.yfilter)
	|| ydk::is_set(ingressifstate.yfilter)
	|| ydk::is_set(rxlen.yfilter)
	|| ydk::is_set(rxbytes.yfilter)
	|| ydk::is_set(rxpktrate.yfilter)
	|| ydk::is_set(rxbyterate.yfilter)
	|| ydk::is_set(rxload.yfilter)
	|| ydk::is_set(rxucast.yfilter)
	|| ydk::is_set(rxmcast.yfilter)
	|| ydk::is_set(rxbcast.yfilter)
	|| ydk::is_set(rxdiscards.yfilter)
	|| ydk::is_set(rxerrors.yfilter)
	|| ydk::is_set(rxunknown.yfilter)
	|| ydk::is_set(rxbandwidth.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(egressifstate.yfilter)
	|| ydk::is_set(txlen.yfilter)
	|| ydk::is_set(txbytes.yfilter)
	|| ydk::is_set(txpktrate.yfilter)
	|| ydk::is_set(txbyterate.yfilter)
	|| ydk::is_set(txload.yfilter)
	|| ydk::is_set(txucast.yfilter)
	|| ydk::is_set(txmcast.yfilter)
	|| ydk::is_set(txbcast.yfilter)
	|| ydk::is_set(txdiscards.yfilter)
	|| ydk::is_set(txerrors.yfilter)
	|| ydk::is_set(txbandwidth.yfilter);
}

std::string System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NodePtr-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (v6addr.is_set || is_set(v6addr.yfilter)) leaf_name_data.push_back(v6addr.get_name_leafdata());
    if (nodename.is_set || is_set(nodename.yfilter)) leaf_name_data.push_back(nodename.get_name_leafdata());
    if (elapsedtime.is_set || is_set(elapsedtime.yfilter)) leaf_name_data.push_back(elapsedtime.get_name_leafdata());
    if (ingressif.is_set || is_set(ingressif.yfilter)) leaf_name_data.push_back(ingressif.get_name_leafdata());
    if (ingressifstate.is_set || is_set(ingressifstate.yfilter)) leaf_name_data.push_back(ingressifstate.get_name_leafdata());
    if (rxlen.is_set || is_set(rxlen.yfilter)) leaf_name_data.push_back(rxlen.get_name_leafdata());
    if (rxbytes.is_set || is_set(rxbytes.yfilter)) leaf_name_data.push_back(rxbytes.get_name_leafdata());
    if (rxpktrate.is_set || is_set(rxpktrate.yfilter)) leaf_name_data.push_back(rxpktrate.get_name_leafdata());
    if (rxbyterate.is_set || is_set(rxbyterate.yfilter)) leaf_name_data.push_back(rxbyterate.get_name_leafdata());
    if (rxload.is_set || is_set(rxload.yfilter)) leaf_name_data.push_back(rxload.get_name_leafdata());
    if (rxucast.is_set || is_set(rxucast.yfilter)) leaf_name_data.push_back(rxucast.get_name_leafdata());
    if (rxmcast.is_set || is_set(rxmcast.yfilter)) leaf_name_data.push_back(rxmcast.get_name_leafdata());
    if (rxbcast.is_set || is_set(rxbcast.yfilter)) leaf_name_data.push_back(rxbcast.get_name_leafdata());
    if (rxdiscards.is_set || is_set(rxdiscards.yfilter)) leaf_name_data.push_back(rxdiscards.get_name_leafdata());
    if (rxerrors.is_set || is_set(rxerrors.yfilter)) leaf_name_data.push_back(rxerrors.get_name_leafdata());
    if (rxunknown.is_set || is_set(rxunknown.yfilter)) leaf_name_data.push_back(rxunknown.get_name_leafdata());
    if (rxbandwidth.is_set || is_set(rxbandwidth.yfilter)) leaf_name_data.push_back(rxbandwidth.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (egressifstate.is_set || is_set(egressifstate.yfilter)) leaf_name_data.push_back(egressifstate.get_name_leafdata());
    if (txlen.is_set || is_set(txlen.yfilter)) leaf_name_data.push_back(txlen.get_name_leafdata());
    if (txbytes.is_set || is_set(txbytes.yfilter)) leaf_name_data.push_back(txbytes.get_name_leafdata());
    if (txpktrate.is_set || is_set(txpktrate.yfilter)) leaf_name_data.push_back(txpktrate.get_name_leafdata());
    if (txbyterate.is_set || is_set(txbyterate.yfilter)) leaf_name_data.push_back(txbyterate.get_name_leafdata());
    if (txload.is_set || is_set(txload.yfilter)) leaf_name_data.push_back(txload.get_name_leafdata());
    if (txucast.is_set || is_set(txucast.yfilter)) leaf_name_data.push_back(txucast.get_name_leafdata());
    if (txmcast.is_set || is_set(txmcast.yfilter)) leaf_name_data.push_back(txmcast.get_name_leafdata());
    if (txbcast.is_set || is_set(txbcast.yfilter)) leaf_name_data.push_back(txbcast.get_name_leafdata());
    if (txdiscards.is_set || is_set(txdiscards.yfilter)) leaf_name_data.push_back(txdiscards.get_name_leafdata());
    if (txerrors.is_set || is_set(txerrors.yfilter)) leaf_name_data.push_back(txerrors.get_name_leafdata());
    if (txbandwidth.is_set || is_set(txbandwidth.yfilter)) leaf_name_data.push_back(txbandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "v6addr")
    {
        v6addr = value;
        v6addr.value_namespace = name_space;
        v6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeName")
    {
        nodename = value;
        nodename.value_namespace = name_space;
        nodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime = value;
        elapsedtime.value_namespace = name_space;
        elapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIf")
    {
        ingressif = value;
        ingressif.value_namespace = name_space;
        ingressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressIfState")
    {
        ingressifstate = value;
        ingressifstate.value_namespace = name_space;
        ingressifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxLen")
    {
        rxlen = value;
        rxlen.value_namespace = name_space;
        rxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBytes")
    {
        rxbytes = value;
        rxbytes.value_namespace = name_space;
        rxbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPktRate")
    {
        rxpktrate = value;
        rxpktrate.value_namespace = name_space;
        rxpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxByteRate")
    {
        rxbyterate = value;
        rxbyterate.value_namespace = name_space;
        rxbyterate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxLoad")
    {
        rxload = value;
        rxload.value_namespace = name_space;
        rxload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUcast")
    {
        rxucast = value;
        rxucast.value_namespace = name_space;
        rxucast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxMcast")
    {
        rxmcast = value;
        rxmcast.value_namespace = name_space;
        rxmcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBcast")
    {
        rxbcast = value;
        rxbcast.value_namespace = name_space;
        rxbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxDiscards")
    {
        rxdiscards = value;
        rxdiscards.value_namespace = name_space;
        rxdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxErrors")
    {
        rxerrors = value;
        rxerrors.value_namespace = name_space;
        rxerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxUnknown")
    {
        rxunknown = value;
        rxunknown.value_namespace = name_space;
        rxunknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxBandwidth")
    {
        rxbandwidth = value;
        rxbandwidth.value_namespace = name_space;
        rxbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIfState")
    {
        egressifstate = value;
        egressifstate.value_namespace = name_space;
        egressifstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txLen")
    {
        txlen = value;
        txlen.value_namespace = name_space;
        txlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBytes")
    {
        txbytes = value;
        txbytes.value_namespace = name_space;
        txbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPktRate")
    {
        txpktrate = value;
        txpktrate.value_namespace = name_space;
        txpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txByteRate")
    {
        txbyterate = value;
        txbyterate.value_namespace = name_space;
        txbyterate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txLoad")
    {
        txload = value;
        txload.value_namespace = name_space;
        txload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txUcast")
    {
        txucast = value;
        txucast.value_namespace = name_space;
        txucast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txMcast")
    {
        txmcast = value;
        txmcast.value_namespace = name_space;
        txmcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBcast")
    {
        txbcast = value;
        txbcast.value_namespace = name_space;
        txbcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txDiscards")
    {
        txdiscards = value;
        txdiscards.value_namespace = name_space;
        txdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txErrors")
    {
        txerrors = value;
        txerrors.value_namespace = name_space;
        txerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txBandwidth")
    {
        txbandwidth = value;
        txbandwidth.value_namespace = name_space;
        txbandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "v6addr")
    {
        v6addr.yfilter = yfilter;
    }
    if(value_path == "nodeName")
    {
        nodename.yfilter = yfilter;
    }
    if(value_path == "elapsedTime")
    {
        elapsedtime.yfilter = yfilter;
    }
    if(value_path == "ingressIf")
    {
        ingressif.yfilter = yfilter;
    }
    if(value_path == "ingressIfState")
    {
        ingressifstate.yfilter = yfilter;
    }
    if(value_path == "rxLen")
    {
        rxlen.yfilter = yfilter;
    }
    if(value_path == "rxBytes")
    {
        rxbytes.yfilter = yfilter;
    }
    if(value_path == "rxPktRate")
    {
        rxpktrate.yfilter = yfilter;
    }
    if(value_path == "rxByteRate")
    {
        rxbyterate.yfilter = yfilter;
    }
    if(value_path == "rxLoad")
    {
        rxload.yfilter = yfilter;
    }
    if(value_path == "rxUcast")
    {
        rxucast.yfilter = yfilter;
    }
    if(value_path == "rxMcast")
    {
        rxmcast.yfilter = yfilter;
    }
    if(value_path == "rxBcast")
    {
        rxbcast.yfilter = yfilter;
    }
    if(value_path == "rxDiscards")
    {
        rxdiscards.yfilter = yfilter;
    }
    if(value_path == "rxErrors")
    {
        rxerrors.yfilter = yfilter;
    }
    if(value_path == "rxUnknown")
    {
        rxunknown.yfilter = yfilter;
    }
    if(value_path == "rxBandwidth")
    {
        rxbandwidth.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "egressIfState")
    {
        egressifstate.yfilter = yfilter;
    }
    if(value_path == "txLen")
    {
        txlen.yfilter = yfilter;
    }
    if(value_path == "txBytes")
    {
        txbytes.yfilter = yfilter;
    }
    if(value_path == "txPktRate")
    {
        txpktrate.yfilter = yfilter;
    }
    if(value_path == "txByteRate")
    {
        txbyterate.yfilter = yfilter;
    }
    if(value_path == "txLoad")
    {
        txload.yfilter = yfilter;
    }
    if(value_path == "txUcast")
    {
        txucast.yfilter = yfilter;
    }
    if(value_path == "txMcast")
    {
        txmcast.yfilter = yfilter;
    }
    if(value_path == "txBcast")
    {
        txbcast.yfilter = yfilter;
    }
    if(value_path == "txDiscards")
    {
        txdiscards.yfilter = yfilter;
    }
    if(value_path == "txErrors")
    {
        txerrors.yfilter = yfilter;
    }
    if(value_path == "txBandwidth")
    {
        txbandwidth.yfilter = yfilter;
    }
}

bool System::ActionItems::PathtracenveItems::PathTraceNveList::PtrnversltItems::PathTraceNveRsltList::PathptrItems::PathPtrList::NodeptrItems::NodePtrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr" || name == "v6addr" || name == "nodeName" || name == "elapsedTime" || name == "ingressIf" || name == "ingressIfState" || name == "rxLen" || name == "rxBytes" || name == "rxPktRate" || name == "rxByteRate" || name == "rxLoad" || name == "rxUcast" || name == "rxMcast" || name == "rxBcast" || name == "rxDiscards" || name == "rxErrors" || name == "rxUnknown" || name == "rxBandwidth" || name == "egressIf" || name == "egressIfState" || name == "txLen" || name == "txBytes" || name == "txPktRate" || name == "txByteRate" || name == "txLoad" || name == "txUcast" || name == "txMcast" || name == "txBcast" || name == "txDiscards" || name == "txErrors" || name == "txBandwidth")
        return true;
    return false;
}

System::ActionItems::EqptdiagruleItems::EqptdiagruleItems()
    :
    ondrule_list(this, {"type"})
{

    yang_name = "eqptdiagrule-items"; yang_parent_name = "action-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::EqptdiagruleItems::~EqptdiagruleItems()
{
}

bool System::ActionItems::EqptdiagruleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ondrule_list.len(); index++)
    {
        if(ondrule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::EqptdiagruleItems::has_operation() const
{
    for (std::size_t index=0; index<ondrule_list.len(); index++)
    {
        if(ondrule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::EqptdiagruleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::EqptdiagruleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eqptdiagrule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::EqptdiagruleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::EqptdiagruleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OnDRule-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::EqptdiagruleItems::OnDRuleList>();
        ent_->parent = this;
        ondrule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::EqptdiagruleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ondrule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::EqptdiagruleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::EqptdiagruleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::EqptdiagruleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OnDRule-list")
        return true;
    return false;
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::OnDRuleList()
    :
    type{YType::uint16, "type"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    trig{YType::enumeration, "trig"},
    freq{YType::str, "freq"}
        ,
    subj_items(std::make_shared<System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems>())
{
    subj_items->parent = this;

    yang_name = "OnDRule-list"; yang_parent_name = "eqptdiagrule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::~OnDRuleList()
{
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| trig.is_set
	|| freq.is_set
	|| (subj_items !=  nullptr && subj_items->has_data());
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(trig.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| (subj_items !=  nullptr && subj_items->has_operation());
}

std::string System::ActionItems::EqptdiagruleItems::OnDRuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/eqptdiagrule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::EqptdiagruleItems::OnDRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OnDRule-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::EqptdiagruleItems::OnDRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (trig.is_set || is_set(trig.yfilter)) leaf_name_data.push_back(trig.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::EqptdiagruleItems::OnDRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subj-items")
    {
        if(subj_items == nullptr)
        {
            subj_items = std::make_shared<System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems>();
        }
        return subj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::EqptdiagruleItems::OnDRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subj_items != nullptr)
    {
        _children["subj-items"] = subj_items;
    }

    return _children;
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig")
    {
        trig = value;
        trig.value_namespace = name_space;
        trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "trig")
    {
        trig.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj-items" || name == "type" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "trig" || name == "freq")
        return true;
    return false;
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::SubjItems()
    :
    ondsubj_list(this, {"odn"})
{

    yang_name = "subj-items"; yang_parent_name = "OnDRule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::~SubjItems()
{
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ondsubj_list.len(); index++)
    {
        if(ondsubj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::has_operation() const
{
    for (std::size_t index=0; index<ondsubj_list.len(); index++)
    {
        if(ondsubj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OnDSubj-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList>();
        ent_->parent = this;
        ondsubj_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ondsubj_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OnDSubj-list")
        return true;
    return false;
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::OnDSubjList()
    :
    odn{YType::str, "oDn"},
    adminst{YType::enumeration, "adminSt"},
    opk{YType::str, "oPk"},
    osk{YType::str, "oSk"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
        ,
    rslt_items(std::make_shared<System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems>())
{
    rslt_items->parent = this;

    yang_name = "OnDSubj-list"; yang_parent_name = "subj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::~OnDSubjList()
{
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::has_data() const
{
    if (is_presence_container) return true;
    return odn.is_set
	|| adminst.is_set
	|| opk.is_set
	|| osk.is_set
	|| operst.is_set
	|| name.is_set
	|| (rslt_items !=  nullptr && rslt_items->has_data());
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odn.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(opk.yfilter)
	|| ydk::is_set(osk.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rslt_items !=  nullptr && rslt_items->has_operation());
}

std::string System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OnDSubj-list";
    ADD_KEY_TOKEN(odn, "oDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odn.is_set || is_set(odn.yfilter)) leaf_name_data.push_back(odn.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (opk.is_set || is_set(opk.yfilter)) leaf_name_data.push_back(opk.get_name_leafdata());
    if (osk.is_set || is_set(osk.yfilter)) leaf_name_data.push_back(osk.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rslt-items")
    {
        if(rslt_items == nullptr)
        {
            rslt_items = std::make_shared<System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems>();
        }
        return rslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rslt_items != nullptr)
    {
        _children["rslt-items"] = rslt_items;
    }

    return _children;
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oDn")
    {
        odn = value;
        odn.value_namespace = name_space;
        odn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oPk")
    {
        opk = value;
        opk.value_namespace = name_space;
        opk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oSk")
    {
        osk = value;
        osk.value_namespace = name_space;
        osk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oDn")
    {
        odn.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "oPk")
    {
        opk.yfilter = yfilter;
    }
    if(value_path == "oSk")
    {
        osk.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rslt-items" || name == "oDn" || name == "adminSt" || name == "oPk" || name == "oSk" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltItems()
    :
    rslt_list(this, {"ts"})
{

    yang_name = "rslt-items"; yang_parent_name = "OnDSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::~RsltItems()
{
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::has_operation() const
{
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList>();
        ent_->parent = this;
        rslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rslt-list")
        return true;
    return false;
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::RsltList()
    :
    ts{YType::str, "ts"},
    trig{YType::enumeration, "trig"},
    operst{YType::enumeration, "operSt"},
    qual{YType::str, "qual"},
    name{YType::str, "name"}
{

    yang_name = "Rslt-list"; yang_parent_name = "rslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::~RsltList()
{
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::has_data() const
{
    if (is_presence_container) return true;
    return ts.is_set
	|| trig.is_set
	|| operst.is_set
	|| qual.is_set
	|| name.is_set;
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(trig.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rslt-list";
    ADD_KEY_TOKEN(ts, "ts");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (trig.is_set || is_set(trig.yfilter)) leaf_name_data.push_back(trig.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig")
    {
        trig = value;
        trig.value_namespace = name_space;
        trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "trig")
    {
        trig.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ActionItems::EqptdiagruleItems::OnDRuleList::SubjItems::OnDSubjList::RsltItems::RsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ts" || name == "trig" || name == "operSt" || name == "qual" || name == "name")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LsubjItems()
    :
    lsubj_list(this, {"odn"})
{

    yang_name = "lsubj-items"; yang_parent_name = "action-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::LsubjItems::~LsubjItems()
{
}

bool System::ActionItems::LsubjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsubj_list.len(); index++)
    {
        if(lsubj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::has_operation() const
{
    for (std::size_t index=0; index<lsubj_list.len(); index++)
    {
        if(lsubj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::LsubjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsubj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LSubj-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList>();
        ent_->parent = this;
        lsubj_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsubj_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LSubj-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::LSubjList()
    :
    odn{YType::str, "oDn"},
    ocl{YType::str, "oCl"}
        ,
    idomain_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::IdomainItems>())
    , pingnve_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnveItems>())
    , pingexecfab_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingexecfabItems>())
    , pingexectn_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingexectnItems>())
    , pingrsltfab_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems>())
    , pingrslttn_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrslttnItems>())
    , trexecfab_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexecfabItems>())
    , trexectn_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexectnItems>())
    , trrsltfab_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems>())
    , trrslttn_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems>())
    , imginsttaskrslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems>())
    , trkip_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems>())
    , trkmac_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems>())
    , iprslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems>())
    , macrslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems>())
    , pingnverslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnversltItems>())
    , tracertnve_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems>())
    , pathtracenve_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems>())
    , trnverslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems>())
    , ptrnverslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems>())
    , rslsubjtodomainref_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems>())
{
    idomain_items->parent = this;
    pingnve_items->parent = this;
    pingexecfab_items->parent = this;
    pingexectn_items->parent = this;
    pingrsltfab_items->parent = this;
    pingrslttn_items->parent = this;
    trexecfab_items->parent = this;
    trexectn_items->parent = this;
    trrsltfab_items->parent = this;
    trrslttn_items->parent = this;
    imginsttaskrslt_items->parent = this;
    trkip_items->parent = this;
    trkmac_items->parent = this;
    iprslt_items->parent = this;
    macrslt_items->parent = this;
    pingnverslt_items->parent = this;
    tracertnve_items->parent = this;
    pathtracenve_items->parent = this;
    trnverslt_items->parent = this;
    ptrnverslt_items->parent = this;
    rslsubjtodomainref_items->parent = this;

    yang_name = "LSubj-list"; yang_parent_name = "lsubj-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ActionItems::LsubjItems::LSubjList::~LSubjList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::has_data() const
{
    if (is_presence_container) return true;
    return odn.is_set
	|| ocl.is_set
	|| (idomain_items !=  nullptr && idomain_items->has_data())
	|| (pingnve_items !=  nullptr && pingnve_items->has_data())
	|| (pingexecfab_items !=  nullptr && pingexecfab_items->has_data())
	|| (pingexectn_items !=  nullptr && pingexectn_items->has_data())
	|| (pingrsltfab_items !=  nullptr && pingrsltfab_items->has_data())
	|| (pingrslttn_items !=  nullptr && pingrslttn_items->has_data())
	|| (trexecfab_items !=  nullptr && trexecfab_items->has_data())
	|| (trexectn_items !=  nullptr && trexectn_items->has_data())
	|| (trrsltfab_items !=  nullptr && trrsltfab_items->has_data())
	|| (trrslttn_items !=  nullptr && trrslttn_items->has_data())
	|| (imginsttaskrslt_items !=  nullptr && imginsttaskrslt_items->has_data())
	|| (trkip_items !=  nullptr && trkip_items->has_data())
	|| (trkmac_items !=  nullptr && trkmac_items->has_data())
	|| (iprslt_items !=  nullptr && iprslt_items->has_data())
	|| (macrslt_items !=  nullptr && macrslt_items->has_data())
	|| (pingnverslt_items !=  nullptr && pingnverslt_items->has_data())
	|| (tracertnve_items !=  nullptr && tracertnve_items->has_data())
	|| (pathtracenve_items !=  nullptr && pathtracenve_items->has_data())
	|| (trnverslt_items !=  nullptr && trnverslt_items->has_data())
	|| (ptrnverslt_items !=  nullptr && ptrnverslt_items->has_data())
	|| (rslsubjtodomainref_items !=  nullptr && rslsubjtodomainref_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odn.yfilter)
	|| ydk::is_set(ocl.yfilter)
	|| (idomain_items !=  nullptr && idomain_items->has_operation())
	|| (pingnve_items !=  nullptr && pingnve_items->has_operation())
	|| (pingexecfab_items !=  nullptr && pingexecfab_items->has_operation())
	|| (pingexectn_items !=  nullptr && pingexectn_items->has_operation())
	|| (pingrsltfab_items !=  nullptr && pingrsltfab_items->has_operation())
	|| (pingrslttn_items !=  nullptr && pingrslttn_items->has_operation())
	|| (trexecfab_items !=  nullptr && trexecfab_items->has_operation())
	|| (trexectn_items !=  nullptr && trexectn_items->has_operation())
	|| (trrsltfab_items !=  nullptr && trrsltfab_items->has_operation())
	|| (trrslttn_items !=  nullptr && trrslttn_items->has_operation())
	|| (imginsttaskrslt_items !=  nullptr && imginsttaskrslt_items->has_operation())
	|| (trkip_items !=  nullptr && trkip_items->has_operation())
	|| (trkmac_items !=  nullptr && trkmac_items->has_operation())
	|| (iprslt_items !=  nullptr && iprslt_items->has_operation())
	|| (macrslt_items !=  nullptr && macrslt_items->has_operation())
	|| (pingnverslt_items !=  nullptr && pingnverslt_items->has_operation())
	|| (tracertnve_items !=  nullptr && tracertnve_items->has_operation())
	|| (pathtracenve_items !=  nullptr && pathtracenve_items->has_operation())
	|| (trnverslt_items !=  nullptr && trnverslt_items->has_operation())
	|| (ptrnverslt_items !=  nullptr && ptrnverslt_items->has_operation())
	|| (rslsubjtodomainref_items !=  nullptr && rslsubjtodomainref_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/action-items/lsubj-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ActionItems::LsubjItems::LSubjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LSubj-list";
    ADD_KEY_TOKEN(odn, "oDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odn.is_set || is_set(odn.yfilter)) leaf_name_data.push_back(odn.get_name_leafdata());
    if (ocl.is_set || is_set(ocl.yfilter)) leaf_name_data.push_back(ocl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idomain-items")
    {
        if(idomain_items == nullptr)
        {
            idomain_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::IdomainItems>();
        }
        return idomain_items;
    }

    if(child_yang_name == "pingnve-items")
    {
        if(pingnve_items == nullptr)
        {
            pingnve_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnveItems>();
        }
        return pingnve_items;
    }

    if(child_yang_name == "pingexecfab-items")
    {
        if(pingexecfab_items == nullptr)
        {
            pingexecfab_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingexecfabItems>();
        }
        return pingexecfab_items;
    }

    if(child_yang_name == "pingexectn-items")
    {
        if(pingexectn_items == nullptr)
        {
            pingexectn_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingexectnItems>();
        }
        return pingexectn_items;
    }

    if(child_yang_name == "pingrsltfab-items")
    {
        if(pingrsltfab_items == nullptr)
        {
            pingrsltfab_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems>();
        }
        return pingrsltfab_items;
    }

    if(child_yang_name == "pingrslttn-items")
    {
        if(pingrslttn_items == nullptr)
        {
            pingrslttn_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrslttnItems>();
        }
        return pingrslttn_items;
    }

    if(child_yang_name == "trexecfab-items")
    {
        if(trexecfab_items == nullptr)
        {
            trexecfab_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexecfabItems>();
        }
        return trexecfab_items;
    }

    if(child_yang_name == "trexectn-items")
    {
        if(trexectn_items == nullptr)
        {
            trexectn_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexectnItems>();
        }
        return trexectn_items;
    }

    if(child_yang_name == "trrsltfab-items")
    {
        if(trrsltfab_items == nullptr)
        {
            trrsltfab_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems>();
        }
        return trrsltfab_items;
    }

    if(child_yang_name == "trrslttn-items")
    {
        if(trrslttn_items == nullptr)
        {
            trrslttn_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems>();
        }
        return trrslttn_items;
    }

    if(child_yang_name == "imginsttaskrslt-items")
    {
        if(imginsttaskrslt_items == nullptr)
        {
            imginsttaskrslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems>();
        }
        return imginsttaskrslt_items;
    }

    if(child_yang_name == "trkip-items")
    {
        if(trkip_items == nullptr)
        {
            trkip_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems>();
        }
        return trkip_items;
    }

    if(child_yang_name == "trkmac-items")
    {
        if(trkmac_items == nullptr)
        {
            trkmac_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems>();
        }
        return trkmac_items;
    }

    if(child_yang_name == "iprslt-items")
    {
        if(iprslt_items == nullptr)
        {
            iprslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems>();
        }
        return iprslt_items;
    }

    if(child_yang_name == "macrslt-items")
    {
        if(macrslt_items == nullptr)
        {
            macrslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems>();
        }
        return macrslt_items;
    }

    if(child_yang_name == "pingnverslt-items")
    {
        if(pingnverslt_items == nullptr)
        {
            pingnverslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnversltItems>();
        }
        return pingnverslt_items;
    }

    if(child_yang_name == "tracertnve-items")
    {
        if(tracertnve_items == nullptr)
        {
            tracertnve_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TracertnveItems>();
        }
        return tracertnve_items;
    }

    if(child_yang_name == "pathtracenve-items")
    {
        if(pathtracenve_items == nullptr)
        {
            pathtracenve_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PathtracenveItems>();
        }
        return pathtracenve_items;
    }

    if(child_yang_name == "trnverslt-items")
    {
        if(trnverslt_items == nullptr)
        {
            trnverslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrnversltItems>();
        }
        return trnverslt_items;
    }

    if(child_yang_name == "ptrnverslt-items")
    {
        if(ptrnverslt_items == nullptr)
        {
            ptrnverslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PtrnversltItems>();
        }
        return ptrnverslt_items;
    }

    if(child_yang_name == "rslSubjToDomainRef-items")
    {
        if(rslsubjtodomainref_items == nullptr)
        {
            rslsubjtodomainref_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::RslSubjToDomainRefItems>();
        }
        return rslsubjtodomainref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idomain_items != nullptr)
    {
        _children["idomain-items"] = idomain_items;
    }

    if(pingnve_items != nullptr)
    {
        _children["pingnve-items"] = pingnve_items;
    }

    if(pingexecfab_items != nullptr)
    {
        _children["pingexecfab-items"] = pingexecfab_items;
    }

    if(pingexectn_items != nullptr)
    {
        _children["pingexectn-items"] = pingexectn_items;
    }

    if(pingrsltfab_items != nullptr)
    {
        _children["pingrsltfab-items"] = pingrsltfab_items;
    }

    if(pingrslttn_items != nullptr)
    {
        _children["pingrslttn-items"] = pingrslttn_items;
    }

    if(trexecfab_items != nullptr)
    {
        _children["trexecfab-items"] = trexecfab_items;
    }

    if(trexectn_items != nullptr)
    {
        _children["trexectn-items"] = trexectn_items;
    }

    if(trrsltfab_items != nullptr)
    {
        _children["trrsltfab-items"] = trrsltfab_items;
    }

    if(trrslttn_items != nullptr)
    {
        _children["trrslttn-items"] = trrslttn_items;
    }

    if(imginsttaskrslt_items != nullptr)
    {
        _children["imginsttaskrslt-items"] = imginsttaskrslt_items;
    }

    if(trkip_items != nullptr)
    {
        _children["trkip-items"] = trkip_items;
    }

    if(trkmac_items != nullptr)
    {
        _children["trkmac-items"] = trkmac_items;
    }

    if(iprslt_items != nullptr)
    {
        _children["iprslt-items"] = iprslt_items;
    }

    if(macrslt_items != nullptr)
    {
        _children["macrslt-items"] = macrslt_items;
    }

    if(pingnverslt_items != nullptr)
    {
        _children["pingnverslt-items"] = pingnverslt_items;
    }

    if(tracertnve_items != nullptr)
    {
        _children["tracertnve-items"] = tracertnve_items;
    }

    if(pathtracenve_items != nullptr)
    {
        _children["pathtracenve-items"] = pathtracenve_items;
    }

    if(trnverslt_items != nullptr)
    {
        _children["trnverslt-items"] = trnverslt_items;
    }

    if(ptrnverslt_items != nullptr)
    {
        _children["ptrnverslt-items"] = ptrnverslt_items;
    }

    if(rslsubjtodomainref_items != nullptr)
    {
        _children["rslSubjToDomainRef-items"] = rslsubjtodomainref_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oDn")
    {
        odn = value;
        odn.value_namespace = name_space;
        odn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oCl")
    {
        ocl = value;
        ocl.value_namespace = name_space;
        ocl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oDn")
    {
        odn.yfilter = yfilter;
    }
    if(value_path == "oCl")
    {
        ocl.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idomain-items" || name == "pingnve-items" || name == "pingexecfab-items" || name == "pingexectn-items" || name == "pingrsltfab-items" || name == "pingrslttn-items" || name == "trexecfab-items" || name == "trexectn-items" || name == "trrsltfab-items" || name == "trrslttn-items" || name == "imginsttaskrslt-items" || name == "trkip-items" || name == "trkmac-items" || name == "iprslt-items" || name == "macrslt-items" || name == "pingnverslt-items" || name == "tracertnve-items" || name == "pathtracenve-items" || name == "trnverslt-items" || name == "ptrnverslt-items" || name == "rslSubjToDomainRef-items" || name == "oDn" || name == "oCl")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IdomainItems::IdomainItems()
    :
    idomainref_list(this, {"name"})
{

    yang_name = "idomain-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IdomainItems::~IdomainItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IdomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<idomainref_list.len(); index++)
    {
        if(idomainref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::IdomainItems::has_operation() const
{
    for (std::size_t index=0; index<idomainref_list.len(); index++)
    {
        if(idomainref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::IdomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IdomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IdomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IDomainRef-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList>();
        ent_->parent = this;
        idomainref_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IdomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : idomainref_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IdomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::IdomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::IdomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IDomainRef-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::IDomainRefList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "IDomainRef-list"; yang_parent_name = "idomain-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::~IDomainRefList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IDomainRef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::IdomainItems::IDomainRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingnveItems()
    :
    pingnve_list(this, {"session"})
{

    yang_name = "pingnve-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::~PingnveItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pingnve_list.len(); index++)
    {
        if(pingnve_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::has_operation() const
{
    for (std::size_t index=0; index<pingnve_list.len(); index++)
    {
        if(pingnve_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingnveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingnve-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingnveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingnveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PingNve-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList>();
        ent_->parent = this;
        pingnve_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingnveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pingnve_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PingNve-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingNveList()
    :
    session{YType::str, "session"},
    profileid{YType::uint16, "profileId"},
    dstip{YType::str, "dstIp"},
    dstipv6{YType::str, "dstIpv6"},
    dstmac{YType::str, "dstMAC"},
    srcip{YType::str, "srcIp"},
    srcipv6{YType::str, "srcIpv6"},
    dot1q{YType::uint16, "dot1q"},
    srcport{YType::str, "srcPort"},
    count{YType::uint16, "count"},
    timeout{YType::uint8, "timeout"},
    interval{YType::uint8, "interval"},
    datapattern{YType::uint16, "dataPattern"},
    sweepmin{YType::uint16, "sweepmin"},
    sweepmax{YType::uint16, "sweepmax"},
    packetsz{YType::uint16, "packetSz"},
    vrf{YType::str, "vrf"},
    vni{YType::uint32, "vni"},
    egressif{YType::str, "egressIf"},
    macsrcif{YType::str, "macsrcif"},
    operst{YType::enumeration, "operSt"},
    sessionid{YType::uint32, "sessionId"},
    verifyhost{YType::boolean, "verifyHost"},
    payload_dot1q{YType::uint16, "payload_dot1q"},
    payload_srcip{YType::str, "payload_srcip"},
    payload_srcipv6{YType::str, "payload_srcipv6"},
    payload_srcmac{YType::str, "payload_srcmac"},
    payload_dstip{YType::str, "payload_dstip"},
    payload_dstipv6{YType::str, "payload_dstipv6"},
    payload_dstmac{YType::str, "payload_dstmac"},
    payload_srcport{YType::uint16, "payload_srcport"},
    payload_dstport{YType::uint16, "payload_dstport"},
    payload_protocol{YType::uint16, "payload_protocol"},
    payload_srcif{YType::str, "payload_srcif"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"}
        ,
    pingnverslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems>())
{
    pingnverslt_items->parent = this;

    yang_name = "PingNve-list"; yang_parent_name = "pingnve-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::~PingNveList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::has_data() const
{
    if (is_presence_container) return true;
    return session.is_set
	|| profileid.is_set
	|| dstip.is_set
	|| dstipv6.is_set
	|| dstmac.is_set
	|| srcip.is_set
	|| srcipv6.is_set
	|| dot1q.is_set
	|| srcport.is_set
	|| count.is_set
	|| timeout.is_set
	|| interval.is_set
	|| datapattern.is_set
	|| sweepmin.is_set
	|| sweepmax.is_set
	|| packetsz.is_set
	|| vrf.is_set
	|| vni.is_set
	|| egressif.is_set
	|| macsrcif.is_set
	|| operst.is_set
	|| sessionid.is_set
	|| verifyhost.is_set
	|| payload_dot1q.is_set
	|| payload_srcip.is_set
	|| payload_srcipv6.is_set
	|| payload_srcmac.is_set
	|| payload_dstip.is_set
	|| payload_dstipv6.is_set
	|| payload_dstmac.is_set
	|| payload_srcport.is_set
	|| payload_dstport.is_set
	|| payload_protocol.is_set
	|| payload_srcif.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| (pingnverslt_items !=  nullptr && pingnverslt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(profileid.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(dstipv6.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(srcipv6.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(srcport.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(datapattern.yfilter)
	|| ydk::is_set(sweepmin.yfilter)
	|| ydk::is_set(sweepmax.yfilter)
	|| ydk::is_set(packetsz.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(egressif.yfilter)
	|| ydk::is_set(macsrcif.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(verifyhost.yfilter)
	|| ydk::is_set(payload_dot1q.yfilter)
	|| ydk::is_set(payload_srcip.yfilter)
	|| ydk::is_set(payload_srcipv6.yfilter)
	|| ydk::is_set(payload_srcmac.yfilter)
	|| ydk::is_set(payload_dstip.yfilter)
	|| ydk::is_set(payload_dstipv6.yfilter)
	|| ydk::is_set(payload_dstmac.yfilter)
	|| ydk::is_set(payload_srcport.yfilter)
	|| ydk::is_set(payload_dstport.yfilter)
	|| ydk::is_set(payload_protocol.yfilter)
	|| ydk::is_set(payload_srcif.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| (pingnverslt_items !=  nullptr && pingnverslt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PingNve-list";
    ADD_KEY_TOKEN(session, "session");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (profileid.is_set || is_set(profileid.yfilter)) leaf_name_data.push_back(profileid.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (dstipv6.is_set || is_set(dstipv6.yfilter)) leaf_name_data.push_back(dstipv6.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (srcipv6.is_set || is_set(srcipv6.yfilter)) leaf_name_data.push_back(srcipv6.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (srcport.is_set || is_set(srcport.yfilter)) leaf_name_data.push_back(srcport.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (datapattern.is_set || is_set(datapattern.yfilter)) leaf_name_data.push_back(datapattern.get_name_leafdata());
    if (sweepmin.is_set || is_set(sweepmin.yfilter)) leaf_name_data.push_back(sweepmin.get_name_leafdata());
    if (sweepmax.is_set || is_set(sweepmax.yfilter)) leaf_name_data.push_back(sweepmax.get_name_leafdata());
    if (packetsz.is_set || is_set(packetsz.yfilter)) leaf_name_data.push_back(packetsz.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (egressif.is_set || is_set(egressif.yfilter)) leaf_name_data.push_back(egressif.get_name_leafdata());
    if (macsrcif.is_set || is_set(macsrcif.yfilter)) leaf_name_data.push_back(macsrcif.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (verifyhost.is_set || is_set(verifyhost.yfilter)) leaf_name_data.push_back(verifyhost.get_name_leafdata());
    if (payload_dot1q.is_set || is_set(payload_dot1q.yfilter)) leaf_name_data.push_back(payload_dot1q.get_name_leafdata());
    if (payload_srcip.is_set || is_set(payload_srcip.yfilter)) leaf_name_data.push_back(payload_srcip.get_name_leafdata());
    if (payload_srcipv6.is_set || is_set(payload_srcipv6.yfilter)) leaf_name_data.push_back(payload_srcipv6.get_name_leafdata());
    if (payload_srcmac.is_set || is_set(payload_srcmac.yfilter)) leaf_name_data.push_back(payload_srcmac.get_name_leafdata());
    if (payload_dstip.is_set || is_set(payload_dstip.yfilter)) leaf_name_data.push_back(payload_dstip.get_name_leafdata());
    if (payload_dstipv6.is_set || is_set(payload_dstipv6.yfilter)) leaf_name_data.push_back(payload_dstipv6.get_name_leafdata());
    if (payload_dstmac.is_set || is_set(payload_dstmac.yfilter)) leaf_name_data.push_back(payload_dstmac.get_name_leafdata());
    if (payload_srcport.is_set || is_set(payload_srcport.yfilter)) leaf_name_data.push_back(payload_srcport.get_name_leafdata());
    if (payload_dstport.is_set || is_set(payload_dstport.yfilter)) leaf_name_data.push_back(payload_dstport.get_name_leafdata());
    if (payload_protocol.is_set || is_set(payload_protocol.yfilter)) leaf_name_data.push_back(payload_protocol.get_name_leafdata());
    if (payload_srcif.is_set || is_set(payload_srcif.yfilter)) leaf_name_data.push_back(payload_srcif.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pingnverslt-items")
    {
        if(pingnverslt_items == nullptr)
        {
            pingnverslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems>();
        }
        return pingnverslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pingnverslt_items != nullptr)
    {
        _children["pingnverslt-items"] = pingnverslt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileId")
    {
        profileid = value;
        profileid.value_namespace = name_space;
        profileid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6 = value;
        dstipv6.value_namespace = name_space;
        dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMAC")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6 = value;
        srcipv6.value_namespace = name_space;
        srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcPort")
    {
        srcport = value;
        srcport.value_namespace = name_space;
        srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dataPattern")
    {
        datapattern = value;
        datapattern.value_namespace = name_space;
        datapattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweepmin")
    {
        sweepmin = value;
        sweepmin.value_namespace = name_space;
        sweepmin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sweepmax")
    {
        sweepmax = value;
        sweepmax.value_namespace = name_space;
        sweepmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetSz")
    {
        packetsz = value;
        packetsz.value_namespace = name_space;
        packetsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egressIf")
    {
        egressif = value;
        egressif.value_namespace = name_space;
        egressif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macsrcif")
    {
        macsrcif = value;
        macsrcif.value_namespace = name_space;
        macsrcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verifyHost")
    {
        verifyhost = value;
        verifyhost.value_namespace = name_space;
        verifyhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q = value;
        payload_dot1q.value_namespace = name_space;
        payload_dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip = value;
        payload_srcip.value_namespace = name_space;
        payload_srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6 = value;
        payload_srcipv6.value_namespace = name_space;
        payload_srcipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac = value;
        payload_srcmac.value_namespace = name_space;
        payload_srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip = value;
        payload_dstip.value_namespace = name_space;
        payload_dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6 = value;
        payload_dstipv6.value_namespace = name_space;
        payload_dstipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac = value;
        payload_dstmac.value_namespace = name_space;
        payload_dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport = value;
        payload_srcport.value_namespace = name_space;
        payload_srcport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport = value;
        payload_dstport.value_namespace = name_space;
        payload_dstport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol = value;
        payload_protocol.value_namespace = name_space;
        payload_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif = value;
        payload_srcif.value_namespace = name_space;
        payload_srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "profileId")
    {
        profileid.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "dstIpv6")
    {
        dstipv6.yfilter = yfilter;
    }
    if(value_path == "dstMAC")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "srcIpv6")
    {
        srcipv6.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "srcPort")
    {
        srcport.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "dataPattern")
    {
        datapattern.yfilter = yfilter;
    }
    if(value_path == "sweepmin")
    {
        sweepmin.yfilter = yfilter;
    }
    if(value_path == "sweepmax")
    {
        sweepmax.yfilter = yfilter;
    }
    if(value_path == "packetSz")
    {
        packetsz.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "egressIf")
    {
        egressif.yfilter = yfilter;
    }
    if(value_path == "macsrcif")
    {
        macsrcif.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "verifyHost")
    {
        verifyhost.yfilter = yfilter;
    }
    if(value_path == "payload_dot1q")
    {
        payload_dot1q.yfilter = yfilter;
    }
    if(value_path == "payload_srcip")
    {
        payload_srcip.yfilter = yfilter;
    }
    if(value_path == "payload_srcipv6")
    {
        payload_srcipv6.yfilter = yfilter;
    }
    if(value_path == "payload_srcmac")
    {
        payload_srcmac.yfilter = yfilter;
    }
    if(value_path == "payload_dstip")
    {
        payload_dstip.yfilter = yfilter;
    }
    if(value_path == "payload_dstipv6")
    {
        payload_dstipv6.yfilter = yfilter;
    }
    if(value_path == "payload_dstmac")
    {
        payload_dstmac.yfilter = yfilter;
    }
    if(value_path == "payload_srcport")
    {
        payload_srcport.yfilter = yfilter;
    }
    if(value_path == "payload_dstport")
    {
        payload_dstport.yfilter = yfilter;
    }
    if(value_path == "payload_protocol")
    {
        payload_protocol.yfilter = yfilter;
    }
    if(value_path == "payload_srcif")
    {
        payload_srcif.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pingnverslt-items" || name == "session" || name == "profileId" || name == "dstIp" || name == "dstIpv6" || name == "dstMAC" || name == "srcIp" || name == "srcIpv6" || name == "dot1q" || name == "srcPort" || name == "count" || name == "timeout" || name == "interval" || name == "dataPattern" || name == "sweepmin" || name == "sweepmax" || name == "packetSz" || name == "vrf" || name == "vni" || name == "egressIf" || name == "macsrcif" || name == "operSt" || name == "sessionId" || name == "verifyHost" || name == "payload_dot1q" || name == "payload_srcip" || name == "payload_srcipv6" || name == "payload_srcmac" || name == "payload_dstip" || name == "payload_dstipv6" || name == "payload_dstmac" || name == "payload_srcport" || name == "payload_dstport" || name == "payload_protocol" || name == "payload_srcif" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingnversltItems()
    :
    pingnverslt_list(this, {"sessionid"})
{

    yang_name = "pingnverslt-items"; yang_parent_name = "PingNve-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::~PingnversltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::has_operation() const
{
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PingNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList>();
        ent_->parent = this;
        pingnverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pingnverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PingNveRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::PingNveRsltList()
    :
    sessionid{YType::uint16, "sessionId"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    replyip{YType::str, "replyIp"},
    replyipv6{YType::str, "replyIpv6"},
    nodename{YType::str, "nodeName"},
    errorcode{YType::str, "errorCode"},
    failreason{YType::str, "failReason"},
    sport{YType::uint16, "sPort"},
    packetsz{YType::uint16, "packetSz"},
    sentpkts{YType::uint32, "sentPkts"},
    notsentpkts{YType::uint32, "notSentPkts"},
    rcvdpkts{YType::uint32, "rcvdPkts"},
    minrtt{YType::uint32, "minRtt"},
    avgrtt{YType::uint32, "avgRtt"},
    maxrtt{YType::uint32, "maxRtt"},
    totalrtt{YType::uint32, "totalRtt"}
{

    yang_name = "PingNveRslt-list"; yang_parent_name = "pingnverslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::~PingNveRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::has_data() const
{
    if (is_presence_container) return true;
    return sessionid.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| replyip.is_set
	|| replyipv6.is_set
	|| nodename.is_set
	|| errorcode.is_set
	|| failreason.is_set
	|| sport.is_set
	|| packetsz.is_set
	|| sentpkts.is_set
	|| notsentpkts.is_set
	|| rcvdpkts.is_set
	|| minrtt.is_set
	|| avgrtt.is_set
	|| maxrtt.is_set
	|| totalrtt.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessionid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(replyip.yfilter)
	|| ydk::is_set(replyipv6.yfilter)
	|| ydk::is_set(nodename.yfilter)
	|| ydk::is_set(errorcode.yfilter)
	|| ydk::is_set(failreason.yfilter)
	|| ydk::is_set(sport.yfilter)
	|| ydk::is_set(packetsz.yfilter)
	|| ydk::is_set(sentpkts.yfilter)
	|| ydk::is_set(notsentpkts.yfilter)
	|| ydk::is_set(rcvdpkts.yfilter)
	|| ydk::is_set(minrtt.yfilter)
	|| ydk::is_set(avgrtt.yfilter)
	|| ydk::is_set(maxrtt.yfilter)
	|| ydk::is_set(totalrtt.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PingNveRslt-list";
    ADD_KEY_TOKEN(sessionid, "sessionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessionid.is_set || is_set(sessionid.yfilter)) leaf_name_data.push_back(sessionid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (replyip.is_set || is_set(replyip.yfilter)) leaf_name_data.push_back(replyip.get_name_leafdata());
    if (replyipv6.is_set || is_set(replyipv6.yfilter)) leaf_name_data.push_back(replyipv6.get_name_leafdata());
    if (nodename.is_set || is_set(nodename.yfilter)) leaf_name_data.push_back(nodename.get_name_leafdata());
    if (errorcode.is_set || is_set(errorcode.yfilter)) leaf_name_data.push_back(errorcode.get_name_leafdata());
    if (failreason.is_set || is_set(failreason.yfilter)) leaf_name_data.push_back(failreason.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());
    if (packetsz.is_set || is_set(packetsz.yfilter)) leaf_name_data.push_back(packetsz.get_name_leafdata());
    if (sentpkts.is_set || is_set(sentpkts.yfilter)) leaf_name_data.push_back(sentpkts.get_name_leafdata());
    if (notsentpkts.is_set || is_set(notsentpkts.yfilter)) leaf_name_data.push_back(notsentpkts.get_name_leafdata());
    if (rcvdpkts.is_set || is_set(rcvdpkts.yfilter)) leaf_name_data.push_back(rcvdpkts.get_name_leafdata());
    if (minrtt.is_set || is_set(minrtt.yfilter)) leaf_name_data.push_back(minrtt.get_name_leafdata());
    if (avgrtt.is_set || is_set(avgrtt.yfilter)) leaf_name_data.push_back(avgrtt.get_name_leafdata());
    if (maxrtt.is_set || is_set(maxrtt.yfilter)) leaf_name_data.push_back(maxrtt.get_name_leafdata());
    if (totalrtt.is_set || is_set(totalrtt.yfilter)) leaf_name_data.push_back(totalrtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessionId")
    {
        sessionid = value;
        sessionid.value_namespace = name_space;
        sessionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replyIp")
    {
        replyip = value;
        replyip.value_namespace = name_space;
        replyip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replyIpv6")
    {
        replyipv6 = value;
        replyipv6.value_namespace = name_space;
        replyipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeName")
    {
        nodename = value;
        nodename.value_namespace = name_space;
        nodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errorCode")
    {
        errorcode = value;
        errorcode.value_namespace = name_space;
        errorcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failReason")
    {
        failreason = value;
        failreason.value_namespace = name_space;
        failreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPort")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetSz")
    {
        packetsz = value;
        packetsz.value_namespace = name_space;
        packetsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentPkts")
    {
        sentpkts = value;
        sentpkts.value_namespace = name_space;
        sentpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notSentPkts")
    {
        notsentpkts = value;
        notsentpkts.value_namespace = name_space;
        notsentpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPkts")
    {
        rcvdpkts = value;
        rcvdpkts.value_namespace = name_space;
        rcvdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRtt")
    {
        minrtt = value;
        minrtt.value_namespace = name_space;
        minrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avgRtt")
    {
        avgrtt = value;
        avgrtt.value_namespace = name_space;
        avgrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRtt")
    {
        maxrtt = value;
        maxrtt.value_namespace = name_space;
        maxrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalRtt")
    {
        totalrtt = value;
        totalrtt.value_namespace = name_space;
        totalrtt.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessionId")
    {
        sessionid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "replyIp")
    {
        replyip.yfilter = yfilter;
    }
    if(value_path == "replyIpv6")
    {
        replyipv6.yfilter = yfilter;
    }
    if(value_path == "nodeName")
    {
        nodename.yfilter = yfilter;
    }
    if(value_path == "errorCode")
    {
        errorcode.yfilter = yfilter;
    }
    if(value_path == "failReason")
    {
        failreason.yfilter = yfilter;
    }
    if(value_path == "sPort")
    {
        sport.yfilter = yfilter;
    }
    if(value_path == "packetSz")
    {
        packetsz.yfilter = yfilter;
    }
    if(value_path == "sentPkts")
    {
        sentpkts.yfilter = yfilter;
    }
    if(value_path == "notSentPkts")
    {
        notsentpkts.yfilter = yfilter;
    }
    if(value_path == "rcvdPkts")
    {
        rcvdpkts.yfilter = yfilter;
    }
    if(value_path == "minRtt")
    {
        minrtt.yfilter = yfilter;
    }
    if(value_path == "avgRtt")
    {
        avgrtt.yfilter = yfilter;
    }
    if(value_path == "maxRtt")
    {
        maxrtt.yfilter = yfilter;
    }
    if(value_path == "totalRtt")
    {
        totalrtt.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingnveItems::PingNveList::PingnversltItems::PingNveRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessionId" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "replyIp" || name == "replyIpv6" || name == "nodeName" || name == "errorCode" || name == "failReason" || name == "sPort" || name == "packetSz" || name == "sentPkts" || name == "notSentPkts" || name == "rcvdPkts" || name == "minRtt" || name == "avgRtt" || name == "maxRtt" || name == "totalRtt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::PingexecfabItems()
    :
    execfab_list(this, {"name", "srcnodeid", "dstnodeid"})
{

    yang_name = "pingexecfab-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::~PingexecfabItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<execfab_list.len(); index++)
    {
        if(execfab_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::has_operation() const
{
    for (std::size_t index=0; index<execfab_list.len(); index++)
    {
        if(execfab_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingexecfab-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExecFab-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList>();
        ent_->parent = this;
        execfab_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : execfab_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExecFab-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::ExecFabList()
    :
    name{YType::str, "name"},
    srcnodeid{YType::uint16, "srcNodeId"},
    dstnodeid{YType::uint16, "dstNodeId"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    ept{YType::enumeration, "epT"},
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    payloadsz{YType::uint16, "payloadSz"},
    tenant{YType::str, "tenant"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    vtep{YType::str, "vtep"},
    vtepencap{YType::str, "vtepEncap"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ExecFab-list"; yang_parent_name = "pingexecfab-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::~ExecFabList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcnodeid.is_set
	|| dstnodeid.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| ept.is_set
	|| vrf.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| payloadsz.is_set
	|| tenant.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| vtep.is_set
	|| vtepencap.is_set
	|| operst.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(dstnodeid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(ept.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| ydk::is_set(vtepencap.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExecFab-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcnodeid, "srcNodeId");
    ADD_KEY_TOKEN(dstnodeid, "dstNodeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (dstnodeid.is_set || is_set(dstnodeid.yfilter)) leaf_name_data.push_back(dstnodeid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (ept.is_set || is_set(ept.yfilter)) leaf_name_data.push_back(ept.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());
    if (vtepencap.is_set || is_set(vtepencap.yfilter)) leaf_name_data.push_back(vtepencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid = value;
        dstnodeid.value_namespace = name_space;
        dstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epT")
    {
        ept = value;
        ept.value_namespace = name_space;
        ept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap = value;
        vtepencap.value_namespace = name_space;
        vtepencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "epT")
    {
        ept.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingexecfabItems::ExecFabList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "srcNodeId" || name == "dstNodeId" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "epT" || name == "vrf" || name == "srcIp" || name == "dstIp" || name == "payloadSz" || name == "tenant" || name == "srcMac" || name == "dstMac" || name == "vtep" || name == "vtepEncap" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::PingexectnItems()
    :
    exectn_list(this, {"tenant", "name", "srcip", "dstip"})
{

    yang_name = "pingexectn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::~PingexectnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::has_operation() const
{
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingexectn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExecTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList>();
        ent_->parent = this;
        exectn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exectn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExecTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::ExecTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    ept{YType::enumeration, "epT"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    vtep{YType::str, "vtep"},
    vtepencap{YType::str, "vtepEncap"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ExecTn-list"; yang_parent_name = "pingexectn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::~ExecTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| ept.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| vtep.is_set
	|| vtepencap.is_set
	|| operst.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(ept.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| ydk::is_set(vtepencap.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExecTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (ept.is_set || is_set(ept.yfilter)) leaf_name_data.push_back(ept.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());
    if (vtepencap.is_set || is_set(vtepencap.yfilter)) leaf_name_data.push_back(vtepencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epT")
    {
        ept = value;
        ept.value_namespace = name_space;
        ept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap = value;
        vtepencap.value_namespace = name_space;
        vtepencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "epT")
    {
        ept.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingexectnItems::ExecTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "epT" || name == "srcNodeId" || name == "vrf" || name == "payloadSz" || name == "srcMac" || name == "dstMac" || name == "vtep" || name == "vtepEncap" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::PingrsltfabItems()
    :
    rsltfab_list(this, {"name", "srcnodeid", "dstnodeid", "startts"})
{

    yang_name = "pingrsltfab-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::~PingrsltfabItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::has_operation() const
{
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingrsltfab-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltFab-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList>();
        ent_->parent = this;
        rsltfab_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsltfab_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltFab-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::RsltFabList()
    :
    name{YType::str, "name"},
    srcnodeid{YType::uint16, "srcNodeId"},
    dstnodeid{YType::uint16, "dstNodeId"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    tenant{YType::str, "tenant"},
    payloadsz{YType::uint16, "payloadSz"}
{

    yang_name = "RsltFab-list"; yang_parent_name = "pingrsltfab-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::~RsltFabList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcnodeid.is_set
	|| dstnodeid.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| vrf.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| tenant.is_set
	|| payloadsz.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(dstnodeid.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(payloadsz.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltFab-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcnodeid, "srcNodeId");
    ADD_KEY_TOKEN(dstnodeid, "dstNodeId");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (dstnodeid.is_set || is_set(dstnodeid.yfilter)) leaf_name_data.push_back(dstnodeid.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid = value;
        dstnodeid.value_namespace = name_space;
        dstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingrsltfabItems::RsltFabList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "srcNodeId" || name == "dstNodeId" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "vrf" || name == "srcIp" || name == "dstIp" || name == "tenant" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::PingrslttnItems()
    :
    rslttn_list(this, {"tenant", "name", "srcip", "dstip", "startts"})
{

    yang_name = "pingrslttn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::~PingrslttnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::has_operation() const
{
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingrslttn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList>();
        ent_->parent = this;
        rslttn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslttn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::RsltTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"}
{

    yang_name = "RsltTn-list"; yang_parent_name = "pingrslttn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::~RsltTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::PingrslttnItems::RsltTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "srcNodeId" || name == "vrf" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::TrexecfabItems()
    :
    execfab_list(this, {"name", "srcnodeid", "dstnodeid"})
{

    yang_name = "trexecfab-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::~TrexecfabItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<execfab_list.len(); index++)
    {
        if(execfab_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::has_operation() const
{
    for (std::size_t index=0; index<execfab_list.len(); index++)
    {
        if(execfab_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trexecfab-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExecFab-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList>();
        ent_->parent = this;
        execfab_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : execfab_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExecFab-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::ExecFabList()
    :
    name{YType::str, "name"},
    srcnodeid{YType::uint16, "srcNodeId"},
    dstnodeid{YType::uint16, "dstNodeId"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    ept{YType::enumeration, "epT"},
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    payloadsz{YType::uint16, "payloadSz"},
    tenant{YType::str, "tenant"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    vtep{YType::str, "vtep"},
    vtepencap{YType::str, "vtepEncap"},
    operst{YType::enumeration, "operSt"},
    maxpaths{YType::uint16, "maxPaths"},
    maxhops{YType::uint8, "maxHops"}
{

    yang_name = "ExecFab-list"; yang_parent_name = "trexecfab-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::~ExecFabList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcnodeid.is_set
	|| dstnodeid.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| ept.is_set
	|| vrf.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| payloadsz.is_set
	|| tenant.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| vtep.is_set
	|| vtepencap.is_set
	|| operst.is_set
	|| maxpaths.is_set
	|| maxhops.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(dstnodeid.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(ept.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| ydk::is_set(vtepencap.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxpaths.yfilter)
	|| ydk::is_set(maxhops.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExecFab-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcnodeid, "srcNodeId");
    ADD_KEY_TOKEN(dstnodeid, "dstNodeId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (dstnodeid.is_set || is_set(dstnodeid.yfilter)) leaf_name_data.push_back(dstnodeid.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (ept.is_set || is_set(ept.yfilter)) leaf_name_data.push_back(ept.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());
    if (vtepencap.is_set || is_set(vtepencap.yfilter)) leaf_name_data.push_back(vtepencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxpaths.is_set || is_set(maxpaths.yfilter)) leaf_name_data.push_back(maxpaths.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid = value;
        dstnodeid.value_namespace = name_space;
        dstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epT")
    {
        ept = value;
        ept.value_namespace = name_space;
        ept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap = value;
        vtepencap.value_namespace = name_space;
        vtepencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPaths")
    {
        maxpaths = value;
        maxpaths.value_namespace = name_space;
        maxpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "epT")
    {
        ept.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxPaths")
    {
        maxpaths.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrexecfabItems::ExecFabList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "srcNodeId" || name == "dstNodeId" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "epT" || name == "vrf" || name == "srcIp" || name == "dstIp" || name == "payloadSz" || name == "tenant" || name == "srcMac" || name == "dstMac" || name == "vtep" || name == "vtepEncap" || name == "operSt" || name == "maxPaths" || name == "maxHops")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::TrexectnItems()
    :
    exectn_list(this, {"tenant", "name", "srcip", "dstip"})
{

    yang_name = "trexectn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::~TrexectnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::has_operation() const
{
    for (std::size_t index=0; index<exectn_list.len(); index++)
    {
        if(exectn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trexectn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExecTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList>();
        ent_->parent = this;
        exectn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : exectn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExecTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::ExecTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    gwmac{YType::str, "gwMac"},
    usegwmac{YType::boolean, "useGwMac"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"},
    ept{YType::enumeration, "epT"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"},
    srcmac{YType::str, "srcMac"},
    dstmac{YType::str, "dstMac"},
    vtep{YType::str, "vtep"},
    vtepencap{YType::str, "vtepEncap"},
    operst{YType::enumeration, "operSt"},
    maxpaths{YType::uint16, "maxPaths"},
    maxhops{YType::uint8, "maxHops"}
{

    yang_name = "ExecTn-list"; yang_parent_name = "trexectn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::~ExecTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| gwmac.is_set
	|| usegwmac.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| ept.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set
	|| srcmac.is_set
	|| dstmac.is_set
	|| vtep.is_set
	|| vtepencap.is_set
	|| operst.is_set
	|| maxpaths.is_set
	|| maxhops.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(gwmac.yfilter)
	|| ydk::is_set(usegwmac.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| ydk::is_set(ept.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| ydk::is_set(srcmac.yfilter)
	|| ydk::is_set(dstmac.yfilter)
	|| ydk::is_set(vtep.yfilter)
	|| ydk::is_set(vtepencap.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxpaths.yfilter)
	|| ydk::is_set(maxhops.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExecTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (gwmac.is_set || is_set(gwmac.yfilter)) leaf_name_data.push_back(gwmac.get_name_leafdata());
    if (usegwmac.is_set || is_set(usegwmac.yfilter)) leaf_name_data.push_back(usegwmac.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());
    if (ept.is_set || is_set(ept.yfilter)) leaf_name_data.push_back(ept.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());
    if (srcmac.is_set || is_set(srcmac.yfilter)) leaf_name_data.push_back(srcmac.get_name_leafdata());
    if (dstmac.is_set || is_set(dstmac.yfilter)) leaf_name_data.push_back(dstmac.get_name_leafdata());
    if (vtep.is_set || is_set(vtep.yfilter)) leaf_name_data.push_back(vtep.get_name_leafdata());
    if (vtepencap.is_set || is_set(vtepencap.yfilter)) leaf_name_data.push_back(vtepencap.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxpaths.is_set || is_set(maxpaths.yfilter)) leaf_name_data.push_back(maxpaths.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gwMac")
    {
        gwmac = value;
        gwmac.value_namespace = name_space;
        gwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useGwMac")
    {
        usegwmac = value;
        usegwmac.value_namespace = name_space;
        usegwmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epT")
    {
        ept = value;
        ept.value_namespace = name_space;
        ept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcMac")
    {
        srcmac = value;
        srcmac.value_namespace = name_space;
        srcmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstMac")
    {
        dstmac = value;
        dstmac.value_namespace = name_space;
        dstmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep")
    {
        vtep = value;
        vtep.value_namespace = name_space;
        vtep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap = value;
        vtepencap.value_namespace = name_space;
        vtepencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPaths")
    {
        maxpaths = value;
        maxpaths.value_namespace = name_space;
        maxpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "gwMac")
    {
        gwmac.yfilter = yfilter;
    }
    if(value_path == "useGwMac")
    {
        usegwmac.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
    if(value_path == "epT")
    {
        ept.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
    if(value_path == "srcMac")
    {
        srcmac.yfilter = yfilter;
    }
    if(value_path == "dstMac")
    {
        dstmac.yfilter = yfilter;
    }
    if(value_path == "vtep")
    {
        vtep.yfilter = yfilter;
    }
    if(value_path == "vtepEncap")
    {
        vtepencap.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxPaths")
    {
        maxpaths.yfilter = yfilter;
    }
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrexectnItems::ExecTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "gwMac" || name == "useGwMac" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq" || name == "epT" || name == "srcNodeId" || name == "vrf" || name == "payloadSz" || name == "srcMac" || name == "dstMac" || name == "vtep" || name == "vtepEncap" || name == "operSt" || name == "maxPaths" || name == "maxHops")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::TrrsltfabItems()
    :
    rsltfab_list(this, {"name", "srcnodeid", "dstnodeid", "startts"})
{

    yang_name = "trrsltfab-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::~TrrsltfabItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::has_operation() const
{
    for (std::size_t index=0; index<rsltfab_list.len(); index++)
    {
        if(rsltfab_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trrsltfab-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltFab-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList>();
        ent_->parent = this;
        rsltfab_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsltfab_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltFab-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::RsltFabList()
    :
    name{YType::str, "name"},
    srcnodeid{YType::uint16, "srcNodeId"},
    dstnodeid{YType::uint16, "dstNodeId"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    vrf{YType::str, "vrf"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    tenant{YType::str, "tenant"},
    payloadsz{YType::uint16, "payloadSz"}
        ,
    pgrp_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems>())
{
    pgrp_items->parent = this;

    yang_name = "RsltFab-list"; yang_parent_name = "trrsltfab-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::~RsltFabList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| srcnodeid.is_set
	|| dstnodeid.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| vrf.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| tenant.is_set
	|| payloadsz.is_set
	|| (pgrp_items !=  nullptr && pgrp_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(dstnodeid.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| (pgrp_items !=  nullptr && pgrp_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltFab-list";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcnodeid, "srcNodeId");
    ADD_KEY_TOKEN(dstnodeid, "dstNodeId");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (dstnodeid.is_set || is_set(dstnodeid.yfilter)) leaf_name_data.push_back(dstnodeid.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pgrp-items")
    {
        if(pgrp_items == nullptr)
        {
            pgrp_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems>();
        }
        return pgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pgrp_items != nullptr)
    {
        _children["pgrp-items"] = pgrp_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid = value;
        dstnodeid.value_namespace = name_space;
        dstnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "dstNodeId")
    {
        dstnodeid.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pgrp-items" || name == "name" || name == "srcNodeId" || name == "dstNodeId" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "vrf" || name == "srcIp" || name == "dstIp" || name == "tenant" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PgrpItems()
    :
    pathgrp_list(this, {"id"})
{

    yang_name = "pgrp-items"; yang_parent_name = "RsltFab-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::~PgrpItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::has_operation() const
{
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathGrp-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList>();
        ent_->parent = this;
        pathgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathGrp-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathGrpList()
    :
    id{YType::uint8, "id"}
        ,
    path_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems>())
{
    path_items->parent = this;

    yang_name = "PathGrp-list"; yang_parent_name = "pgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::~PathGrpList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathItems()
    :
    path_list(this, {"id"})
{

    yang_name = "path-items"; yang_parent_name = "PathGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::~PathItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::PathList()
    :
    id{YType::uint8, "id"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"}
        ,
    node_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>())
{
    node_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::~PathList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| flags.is_set
	|| (node_items !=  nullptr && node_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>();
        }
        return node_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "id" || name == "type" || name == "flags")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeItems()
    :
    node_list(this, {"order"})
{

    yang_name = "node-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::~NodeItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Node-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList>();
        ent_->parent = this;
        node_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Node-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::NodeList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"}
{

    yang_name = "Node-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::~NodeList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Node-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrsltfabItems::RsltFabList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::TrrslttnItems()
    :
    rslttn_list(this, {"tenant", "name", "srcip", "dstip", "startts"})
{

    yang_name = "trrslttn-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::~TrrslttnItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::has_operation() const
{
    for (std::size_t index=0; index<rslttn_list.len(); index++)
    {
        if(rslttn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trrslttn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsltTn-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList>();
        ent_->parent = this;
        rslttn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslttn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsltTn-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::RsltTnList()
    :
    tenant{YType::str, "tenant"},
    name{YType::str, "name"},
    srcip{YType::str, "srcIp"},
    dstip{YType::str, "dstIp"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"},
    srcnodeid{YType::uint16, "srcNodeId"},
    vrf{YType::str, "vrf"},
    payloadsz{YType::uint16, "payloadSz"}
        ,
    pgrp_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems>())
{
    pgrp_items->parent = this;

    yang_name = "RsltTn-list"; yang_parent_name = "trrslttn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::~RsltTnList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::has_data() const
{
    if (is_presence_container) return true;
    return tenant.is_set
	|| name.is_set
	|| srcip.is_set
	|| dstip.is_set
	|| startts.is_set
	|| descr.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| srcnodeid.is_set
	|| vrf.is_set
	|| payloadsz.is_set
	|| (pgrp_items !=  nullptr && pgrp_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(dstip.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(srcnodeid.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(payloadsz.yfilter)
	|| (pgrp_items !=  nullptr && pgrp_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsltTn-list";
    ADD_KEY_TOKEN(tenant, "tenant");
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(srcip, "srcIp");
    ADD_KEY_TOKEN(dstip, "dstIp");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant.is_set || is_set(tenant.yfilter)) leaf_name_data.push_back(tenant.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (dstip.is_set || is_set(dstip.yfilter)) leaf_name_data.push_back(dstip.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (srcnodeid.is_set || is_set(srcnodeid.yfilter)) leaf_name_data.push_back(srcnodeid.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (payloadsz.is_set || is_set(payloadsz.yfilter)) leaf_name_data.push_back(payloadsz.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pgrp-items")
    {
        if(pgrp_items == nullptr)
        {
            pgrp_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems>();
        }
        return pgrp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pgrp_items != nullptr)
    {
        _children["pgrp-items"] = pgrp_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant")
    {
        tenant = value;
        tenant.value_namespace = name_space;
        tenant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIp")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dstIp")
    {
        dstip = value;
        dstip.value_namespace = name_space;
        dstip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid = value;
        srcnodeid.value_namespace = name_space;
        srcnodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payloadSz")
    {
        payloadsz = value;
        payloadsz.value_namespace = name_space;
        payloadsz.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant")
    {
        tenant.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "srcIp")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "dstIp")
    {
        dstip.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "srcNodeId")
    {
        srcnodeid.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "payloadSz")
    {
        payloadsz.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pgrp-items" || name == "tenant" || name == "name" || name == "srcIp" || name == "dstIp" || name == "startTs" || name == "descr" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt" || name == "srcNodeId" || name == "vrf" || name == "payloadSz")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PgrpItems()
    :
    pathgrp_list(this, {"id"})
{

    yang_name = "pgrp-items"; yang_parent_name = "RsltTn-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::~PgrpItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::has_operation() const
{
    for (std::size_t index=0; index<pathgrp_list.len(); index++)
    {
        if(pathgrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PathGrp-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList>();
        ent_->parent = this;
        pathgrp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pathgrp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PathGrp-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathGrpList()
    :
    id{YType::uint8, "id"}
        ,
    path_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems>())
{
    path_items->parent = this;

    yang_name = "PathGrp-list"; yang_parent_name = "pgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::~PathGrpList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (path_items !=  nullptr && path_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (path_items !=  nullptr && path_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PathGrp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-items")
    {
        if(path_items == nullptr)
        {
            path_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems>();
        }
        return path_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_items != nullptr)
    {
        _children["path-items"] = path_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-items" || name == "id")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathItems()
    :
    path_list(this, {"id"})
{

    yang_name = "path-items"; yang_parent_name = "PathGrp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::~PathItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::has_operation() const
{
    for (std::size_t index=0; index<path_list.len(); index++)
    {
        if(path_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Path-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList>();
        ent_->parent = this;
        path_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Path-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::PathList()
    :
    id{YType::uint8, "id"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"}
        ,
    node_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>())
{
    node_items->parent = this;

    yang_name = "Path-list"; yang_parent_name = "path-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::~PathList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| flags.is_set
	|| (node_items !=  nullptr && node_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (node_items !=  nullptr && node_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Path-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-items")
    {
        if(node_items == nullptr)
        {
            node_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems>();
        }
        return node_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_items != nullptr)
    {
        _children["node-items"] = node_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-items" || name == "id" || name == "type" || name == "flags")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeItems()
    :
    node_list(this, {"order"})
{

    yang_name = "node-items"; yang_parent_name = "Path-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::~NodeItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_operation() const
{
    for (std::size_t index=0; index<node_list.len(); index++)
    {
        if(node_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Node-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList>();
        ent_->parent = this;
        node_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Node-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::NodeList()
    :
    order{YType::uint8, "order"},
    addr{YType::str, "addr"}
{

    yang_name = "Node-list"; yang_parent_name = "node-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::~NodeList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| addr.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(addr.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Node-list";
    ADD_KEY_TOKEN(order, "order");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrrslttnItems::RsltTnList::PgrpItems::PathGrpList::PathItems::PathList::NodeItems::NodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "addr")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::ImginsttaskrsltItems()
    :
    rslt_list(this, {"type", "startts"})
{

    yang_name = "imginsttaskrslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::~ImginsttaskrsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::has_operation() const
{
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imginsttaskrslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList>();
        ent_->parent = this;
        rslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::RsltList()
    :
    type{YType::enumeration, "type"},
    startts{YType::str, "startTs"},
    descr{YType::str, "descr"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Rslt-list"; yang_parent_name = "imginsttaskrslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::~RsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| startts.is_set
	|| descr.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rslt-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(startts, "startTs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::ImginsttaskrsltItems::RsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "startTs" || name == "descr" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::TrkipItems()
    :
    ipepexec_list(this, {"addr", "vrf"})
{

    yang_name = "trkip-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::~TrkipItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipepexec_list.len(); index++)
    {
        if(ipepexec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::has_operation() const
{
    for (std::size_t index=0; index<ipepexec_list.len(); index++)
    {
        if(ipepexec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trkip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEpExec-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList>();
        ent_->parent = this;
        ipepexec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipepexec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEpExec-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IpEpExecList()
    :
    addr{YType::str, "addr"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"}
        ,
    iprslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems>())
{
    iprslt_items->parent = this;

    yang_name = "IpEpExec-list"; yang_parent_name = "trkip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::~IpEpExecList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vrf.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| (iprslt_items !=  nullptr && iprslt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| (iprslt_items !=  nullptr && iprslt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEpExec-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iprslt-items")
    {
        if(iprslt_items == nullptr)
        {
            iprslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems>();
        }
        return iprslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iprslt_items != nullptr)
    {
        _children["iprslt-items"] = iprslt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iprslt-items" || name == "addr" || name == "vrf" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IprsltItems()
    :
    ipeprslt_list(this, {"addr", "vrf"})
{

    yang_name = "iprslt-items"; yang_parent_name = "IpEpExec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::~IprsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::has_operation() const
{
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList>();
        ent_->parent = this;
        ipeprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipeprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::IpEpRsltList()
    :
    addr{YType::str, "addr"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsipeprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>())
{
    rsipeprslttoipepatt_items->parent = this;

    yang_name = "IpEpRslt-list"; yang_parent_name = "iprslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::~IpEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vrf.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsipEpRslttoIpEpAtt-items")
    {
        if(rsipeprslttoipepatt_items == nullptr)
        {
            rsipeprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>();
        }
        return rsipeprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsipeprslttoipepatt_items != nullptr)
    {
        _children["rsipEpRslttoIpEpAtt-items"] = rsipeprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsipEpRslttoIpEpAtt-items" || name == "addr" || name == "vrf" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::RsipEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsipEpRslttoIpEpAtt-items"; yang_parent_name = "IpEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::~RsipEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsipEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkipItems::IpEpExecList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::TrkmacItems()
    :
    macepexec_list(this, {"addr", "encap"})
{

    yang_name = "trkmac-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::~TrkmacItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macepexec_list.len(); index++)
    {
        if(macepexec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::has_operation() const
{
    for (std::size_t index=0; index<macepexec_list.len(); index++)
    {
        if(macepexec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trkmac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEpExec-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList>();
        ent_->parent = this;
        macepexec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macepexec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEpExec-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacEpExecList()
    :
    addr{YType::str, "addr"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    adminst{YType::enumeration, "adminSt"},
    freq{YType::str, "freq"}
        ,
    macrslt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems>())
{
    macrslt_items->parent = this;

    yang_name = "MacEpExec-list"; yang_parent_name = "trkmac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::~MacEpExecList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encap.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| adminst.is_set
	|| freq.is_set
	|| (macrslt_items !=  nullptr && macrslt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| (macrslt_items !=  nullptr && macrslt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEpExec-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macrslt-items")
    {
        if(macrslt_items == nullptr)
        {
            macrslt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems>();
        }
        return macrslt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macrslt_items != nullptr)
    {
        _children["macrslt-items"] = macrslt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macrslt-items" || name == "addr" || name == "encap" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "adminSt" || name == "freq")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacrsltItems()
    :
    maceprslt_list(this, {"addr", "encap"})
{

    yang_name = "macrslt-items"; yang_parent_name = "MacEpExec-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::~MacrsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::has_operation() const
{
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macrslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList>();
        ent_->parent = this;
        maceprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : maceprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::MacEpRsltList()
    :
    addr{YType::str, "addr"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsmaceprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>())
{
    rsmaceprslttoipepatt_items->parent = this;

    yang_name = "MacEpRslt-list"; yang_parent_name = "macrslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::~MacEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encap.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpRslttoIpEpAtt-items")
    {
        if(rsmaceprslttoipepatt_items == nullptr)
        {
            rsmaceprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>();
        }
        return rsmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceprslttoipepatt_items != nullptr)
    {
        _children["rsmacEpRslttoIpEpAtt-items"] = rsmaceprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpRslttoIpEpAtt-items" || name == "addr" || name == "encap" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsmacEpRslttoIpEpAttItems()
    :
    rsmaceprslttoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpRslttoIpEpAtt-items"; yang_parent_name = "MacEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::~RsmacEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpRslttoIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList>();
        ent_->parent = this;
        rsmaceprslttoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceprslttoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpRslttoIpEpAtt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::RsMacEpRslttoIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpRslttoIpEpAtt-list"; yang_parent_name = "rsmacEpRslttoIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::~RsMacEpRslttoIpEpAttList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpRslttoIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::TrkmacItems::MacEpExecList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IprsltItems()
    :
    ipeprslt_list(this, {"addr", "vrf"})
{

    yang_name = "iprslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::~IprsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::has_operation() const
{
    for (std::size_t index=0; index<ipeprslt_list.len(); index++)
    {
        if(ipeprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iprslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList>();
        ent_->parent = this;
        ipeprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IprsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipeprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::IpEpRsltList()
    :
    addr{YType::str, "addr"},
    vrf{YType::str, "vrf"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsipeprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>())
{
    rsipeprslttoipepatt_items->parent = this;

    yang_name = "IpEpRslt-list"; yang_parent_name = "iprslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::~IpEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| vrf.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsipeprslttoipepatt_items !=  nullptr && rsipeprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsipEpRslttoIpEpAtt-items")
    {
        if(rsipeprslttoipepatt_items == nullptr)
        {
            rsipeprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems>();
        }
        return rsipeprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsipeprslttoipepatt_items != nullptr)
    {
        _children["rsipEpRslttoIpEpAtt-items"] = rsipeprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsipEpRslttoIpEpAtt-items" || name == "addr" || name == "vrf" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::RsipEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsipEpRslttoIpEpAtt-items"; yang_parent_name = "IpEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::~RsipEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsipEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::IprsltItems::IpEpRsltList::RsipEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacrsltItems()
    :
    maceprslt_list(this, {"addr", "encap"})
{

    yang_name = "macrslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::~MacrsltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::has_operation() const
{
    for (std::size_t index=0; index<maceprslt_list.len(); index++)
    {
        if(maceprslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macrslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEpRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList>();
        ent_->parent = this;
        maceprslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : maceprslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEpRslt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::MacEpRsltList()
    :
    addr{YType::str, "addr"},
    encap{YType::str, "encap"},
    descr{YType::str, "descr"},
    startts{YType::str, "startTs"},
    type{YType::enumeration, "type"},
    rsz{YType::uint16, "rSz"},
    rtm{YType::str, "rTm"},
    peerclassid{YType::str, "peerClassId"},
    qual{YType::str, "qual"},
    ack{YType::boolean, "ack"},
    endts{YType::str, "endTs"},
    operst{YType::enumeration, "operSt"}
        ,
    rsmaceprslttoipepatt_items(std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>())
{
    rsmaceprslttoipepatt_items->parent = this;

    yang_name = "MacEpRslt-list"; yang_parent_name = "macrslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::~MacEpRsltList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| encap.is_set
	|| descr.is_set
	|| startts.is_set
	|| type.is_set
	|| rsz.is_set
	|| rtm.is_set
	|| peerclassid.is_set
	|| qual.is_set
	|| ack.is_set
	|| endts.is_set
	|| operst.is_set
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_data());
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(startts.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rsz.yfilter)
	|| ydk::is_set(rtm.yfilter)
	|| ydk::is_set(peerclassid.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(endts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (rsmaceprslttoipepatt_items !=  nullptr && rsmaceprslttoipepatt_items->has_operation());
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEpRslt-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (startts.is_set || is_set(startts.yfilter)) leaf_name_data.push_back(startts.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rsz.is_set || is_set(rsz.yfilter)) leaf_name_data.push_back(rsz.get_name_leafdata());
    if (rtm.is_set || is_set(rtm.yfilter)) leaf_name_data.push_back(rtm.get_name_leafdata());
    if (peerclassid.is_set || is_set(peerclassid.yfilter)) leaf_name_data.push_back(peerclassid.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (endts.is_set || is_set(endts.yfilter)) leaf_name_data.push_back(endts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpRslttoIpEpAtt-items")
    {
        if(rsmaceprslttoipepatt_items == nullptr)
        {
            rsmaceprslttoipepatt_items = std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems>();
        }
        return rsmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceprslttoipepatt_items != nullptr)
    {
        _children["rsmacEpRslttoIpEpAtt-items"] = rsmaceprslttoipepatt_items;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startTs")
    {
        startts = value;
        startts.value_namespace = name_space;
        startts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rSz")
    {
        rsz = value;
        rsz.value_namespace = name_space;
        rsz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rTm")
    {
        rtm = value;
        rtm.value_namespace = name_space;
        rtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerClassId")
    {
        peerclassid = value;
        peerclassid.value_namespace = name_space;
        peerclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "endTs")
    {
        endts = value;
        endts.value_namespace = name_space;
        endts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "startTs")
    {
        startts.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rSz")
    {
        rsz.yfilter = yfilter;
    }
    if(value_path == "rTm")
    {
        rtm.yfilter = yfilter;
    }
    if(value_path == "peerClassId")
    {
        peerclassid.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "endTs")
    {
        endts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpRslttoIpEpAtt-items" || name == "addr" || name == "encap" || name == "descr" || name == "startTs" || name == "type" || name == "rSz" || name == "rTm" || name == "peerClassId" || name == "qual" || name == "ack" || name == "endTs" || name == "operSt")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsmacEpRslttoIpEpAttItems()
    :
    rsmaceprslttoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpRslttoIpEpAtt-items"; yang_parent_name = "MacEpRslt-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::~RsmacEpRslttoIpEpAttItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceprslttoipepatt_list.len(); index++)
    {
        if(rsmaceprslttoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpRslttoIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList>();
        ent_->parent = this;
        rsmaceprslttoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceprslttoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpRslttoIpEpAtt-list")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::RsMacEpRslttoIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpRslttoIpEpAtt-list"; yang_parent_name = "rsmacEpRslttoIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::~RsMacEpRslttoIpEpAttList()
{
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpRslttoIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ActionItems::LsubjItems::LSubjList::MacrsltItems::MacEpRsltList::RsmacEpRslttoIpEpAttItems::RsMacEpRslttoIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingnversltItems()
    :
    pingnverslt_list(this, {"sessionid"})
{

    yang_name = "pingnverslt-items"; yang_parent_name = "LSubj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ActionItems::LsubjItems::LSubjList::PingnversltItems::~PingnversltItems()
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::has_operation() const
{
    for (std::size_t index=0; index<pingnverslt_list.len(); index++)
    {
        if(pingnverslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pingnverslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PingNveRslt-list")
    {
        auto ent_ = std::make_shared<System::ActionItems::LsubjItems::LSubjList::PingnversltItems::PingNveRsltList>();
        ent_->parent = this;
        pingnverslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ActionItems::LsubjItems::LSubjList::PingnversltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pingnverslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ActionItems::LsubjItems::LSubjList::PingnversltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ActionItems::LsubjItems::LSubjList::PingnversltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ActionItems::LsubjItems::LSubjList::PingnversltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PingNveRslt-list")
        return true;
    return false;
}


}
}

