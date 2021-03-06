
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_30.hpp"
#include "Cisco_NX_OS_device_31.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::RsClassMapToPolicyMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsClassMapToPolicyMap-list"; yang_parent_name = "rsclassMapToPolicyMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::~RsClassMapToPolicyMapList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsClassMapToPolicyMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::PItems()
    :
    name_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems>())
{
    name_items->parent = this;

    yang_name = "p-items"; yang_parent_name = "dflt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::~PItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::has_data() const
{
    if (is_presence_container) return true;
    return (name_items !=  nullptr && name_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::has_operation() const
{
    return is_set(yfilter)
	|| (name_items !=  nullptr && name_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name-items")
    {
        if(name_items == nullptr)
        {
            name_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems>();
        }
        return name_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(name_items != nullptr)
    {
        _children["name-items"] = name_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name-items")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::NameItems()
    :
    pmapinst_list(this, {"name"})
{

    yang_name = "name-items"; yang_parent_name = "p-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::~NameItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::has_operation() const
{
    for (std::size_t index=0; index<pmapinst_list.len(); index++)
    {
        if(pmapinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PMapInst-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList>();
        ent_->parent = this;
        pmapinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmapinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PMapInst-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::PMapInstList()
    :
    name{YType::str, "name"},
    matchtype{YType::enumeration, "matchType"},
    refcount{YType::uint32, "refCount"},
    configstatus{YType::uint32, "configStatus"}
        ,
    cmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems>())
    , description_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems>())
    , rtipqospolicyinsttopmap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>())
    , rtclassmaptopolicymap_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>())
{
    cmap_items->parent = this;
    description_items->parent = this;
    rtipqospolicyinsttopmap_items->parent = this;
    rtclassmaptopolicymap_items->parent = this;

    yang_name = "PMapInst-list"; yang_parent_name = "name-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::~PMapInstList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| matchtype.is_set
	|| refcount.is_set
	|| configstatus.is_set
	|| (cmap_items !=  nullptr && cmap_items->has_data())
	|| (description_items !=  nullptr && description_items->has_data())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_data())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(matchtype.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (cmap_items !=  nullptr && cmap_items->has_operation())
	|| (description_items !=  nullptr && description_items->has_operation())
	|| (rtipqospolicyinsttopmap_items !=  nullptr && rtipqospolicyinsttopmap_items->has_operation())
	|| (rtclassmaptopolicymap_items !=  nullptr && rtclassmaptopolicymap_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PMapInst-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (matchtype.is_set || is_set(matchtype.yfilter)) leaf_name_data.push_back(matchtype.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmap-items")
    {
        if(cmap_items == nullptr)
        {
            cmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems>();
        }
        return cmap_items;
    }

    if(child_yang_name == "Description-items")
    {
        if(description_items == nullptr)
        {
            description_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems>();
        }
        return description_items;
    }

    if(child_yang_name == "rtipqosPolicyInstToPMap-items")
    {
        if(rtipqospolicyinsttopmap_items == nullptr)
        {
            rtipqospolicyinsttopmap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems>();
        }
        return rtipqospolicyinsttopmap_items;
    }

    if(child_yang_name == "rtclassMapToPolicyMap-items")
    {
        if(rtclassmaptopolicymap_items == nullptr)
        {
            rtclassmaptopolicymap_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems>();
        }
        return rtclassmaptopolicymap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmap_items != nullptr)
    {
        _children["cmap-items"] = cmap_items;
    }

    if(description_items != nullptr)
    {
        _children["Description-items"] = description_items;
    }

    if(rtipqospolicyinsttopmap_items != nullptr)
    {
        _children["rtipqosPolicyInstToPMap-items"] = rtipqospolicyinsttopmap_items;
    }

    if(rtclassmaptopolicymap_items != nullptr)
    {
        _children["rtclassMapToPolicyMap-items"] = rtclassmaptopolicymap_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "matchType")
    {
        matchtype = value;
        matchtype.value_namespace = name_space;
        matchtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "matchType")
    {
        matchtype.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmap-items" || name == "Description-items" || name == "rtipqosPolicyInstToPMap-items" || name == "rtclassMapToPolicyMap-items" || name == "name" || name == "matchType" || name == "refCount" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::CmapItems()
    :
    matchcmap_list(this, {"name"})
{

    yang_name = "cmap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::~CmapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::has_operation() const
{
    for (std::size_t index=0; index<matchcmap_list.len(); index++)
    {
        if(matchcmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MatchCMap-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList>();
        ent_->parent = this;
        matchcmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : matchcmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MatchCMap-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MatchCMapList()
    :
    name{YType::str, "name"},
    prevcmap{YType::str, "prevCMap"},
    nextcmap{YType::str, "nextCMap"},
    configstatus{YType::uint32, "configStatus"}
        ,
    setcos_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>())
    , mtu_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>())
    , setprecedence_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>())
    , setdscp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>())
    , setgrp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>())
    , setdlbdisable_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>())
    , queuelimit_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>())
    , pause_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>())
    , dpp_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>())
    , setbw_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>())
    , setrembw_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>())
    , shape_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>())
    , police_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>())
    , prio_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>())
    , randdet_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>())
    , randdetnonecn_items(std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>())
{
    setcos_items->parent = this;
    mtu_items->parent = this;
    setprecedence_items->parent = this;
    setdscp_items->parent = this;
    setgrp_items->parent = this;
    setdlbdisable_items->parent = this;
    queuelimit_items->parent = this;
    pause_items->parent = this;
    dpp_items->parent = this;
    setbw_items->parent = this;
    setrembw_items->parent = this;
    shape_items->parent = this;
    police_items->parent = this;
    prio_items->parent = this;
    randdet_items->parent = this;
    randdetnonecn_items->parent = this;

    yang_name = "MatchCMap-list"; yang_parent_name = "cmap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::~MatchCMapList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| prevcmap.is_set
	|| nextcmap.is_set
	|| configstatus.is_set
	|| (setcos_items !=  nullptr && setcos_items->has_data())
	|| (mtu_items !=  nullptr && mtu_items->has_data())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_data())
	|| (setdscp_items !=  nullptr && setdscp_items->has_data())
	|| (setgrp_items !=  nullptr && setgrp_items->has_data())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_data())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_data())
	|| (pause_items !=  nullptr && pause_items->has_data())
	|| (dpp_items !=  nullptr && dpp_items->has_data())
	|| (setbw_items !=  nullptr && setbw_items->has_data())
	|| (setrembw_items !=  nullptr && setrembw_items->has_data())
	|| (shape_items !=  nullptr && shape_items->has_data())
	|| (police_items !=  nullptr && police_items->has_data())
	|| (prio_items !=  nullptr && prio_items->has_data())
	|| (randdet_items !=  nullptr && randdet_items->has_data())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_data());
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(prevcmap.yfilter)
	|| ydk::is_set(nextcmap.yfilter)
	|| ydk::is_set(configstatus.yfilter)
	|| (setcos_items !=  nullptr && setcos_items->has_operation())
	|| (mtu_items !=  nullptr && mtu_items->has_operation())
	|| (setprecedence_items !=  nullptr && setprecedence_items->has_operation())
	|| (setdscp_items !=  nullptr && setdscp_items->has_operation())
	|| (setgrp_items !=  nullptr && setgrp_items->has_operation())
	|| (setdlbdisable_items !=  nullptr && setdlbdisable_items->has_operation())
	|| (queuelimit_items !=  nullptr && queuelimit_items->has_operation())
	|| (pause_items !=  nullptr && pause_items->has_operation())
	|| (dpp_items !=  nullptr && dpp_items->has_operation())
	|| (setbw_items !=  nullptr && setbw_items->has_operation())
	|| (setrembw_items !=  nullptr && setrembw_items->has_operation())
	|| (shape_items !=  nullptr && shape_items->has_operation())
	|| (police_items !=  nullptr && police_items->has_operation())
	|| (prio_items !=  nullptr && prio_items->has_operation())
	|| (randdet_items !=  nullptr && randdet_items->has_operation())
	|| (randdetnonecn_items !=  nullptr && randdetnonecn_items->has_operation());
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MatchCMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (prevcmap.is_set || is_set(prevcmap.yfilter)) leaf_name_data.push_back(prevcmap.get_name_leafdata());
    if (nextcmap.is_set || is_set(nextcmap.yfilter)) leaf_name_data.push_back(nextcmap.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setCos-items")
    {
        if(setcos_items == nullptr)
        {
            setcos_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems>();
        }
        return setcos_items;
    }

    if(child_yang_name == "mtu-items")
    {
        if(mtu_items == nullptr)
        {
            mtu_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems>();
        }
        return mtu_items;
    }

    if(child_yang_name == "setPrecedence-items")
    {
        if(setprecedence_items == nullptr)
        {
            setprecedence_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems>();
        }
        return setprecedence_items;
    }

    if(child_yang_name == "setDscp-items")
    {
        if(setdscp_items == nullptr)
        {
            setdscp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems>();
        }
        return setdscp_items;
    }

    if(child_yang_name == "setGrp-items")
    {
        if(setgrp_items == nullptr)
        {
            setgrp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems>();
        }
        return setgrp_items;
    }

    if(child_yang_name == "setDlbDisable-items")
    {
        if(setdlbdisable_items == nullptr)
        {
            setdlbdisable_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems>();
        }
        return setdlbdisable_items;
    }

    if(child_yang_name == "QueueLimit-items")
    {
        if(queuelimit_items == nullptr)
        {
            queuelimit_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems>();
        }
        return queuelimit_items;
    }

    if(child_yang_name == "pause-items")
    {
        if(pause_items == nullptr)
        {
            pause_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems>();
        }
        return pause_items;
    }

    if(child_yang_name == "dpp-items")
    {
        if(dpp_items == nullptr)
        {
            dpp_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems>();
        }
        return dpp_items;
    }

    if(child_yang_name == "setBW-items")
    {
        if(setbw_items == nullptr)
        {
            setbw_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems>();
        }
        return setbw_items;
    }

    if(child_yang_name == "setRemBW-items")
    {
        if(setrembw_items == nullptr)
        {
            setrembw_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems>();
        }
        return setrembw_items;
    }

    if(child_yang_name == "shape-items")
    {
        if(shape_items == nullptr)
        {
            shape_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems>();
        }
        return shape_items;
    }

    if(child_yang_name == "police-items")
    {
        if(police_items == nullptr)
        {
            police_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems>();
        }
        return police_items;
    }

    if(child_yang_name == "prio-items")
    {
        if(prio_items == nullptr)
        {
            prio_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems>();
        }
        return prio_items;
    }

    if(child_yang_name == "RandDet-items")
    {
        if(randdet_items == nullptr)
        {
            randdet_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems>();
        }
        return randdet_items;
    }

    if(child_yang_name == "RandDetNonEcn-items")
    {
        if(randdetnonecn_items == nullptr)
        {
            randdetnonecn_items = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems>();
        }
        return randdetnonecn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(setcos_items != nullptr)
    {
        _children["setCos-items"] = setcos_items;
    }

    if(mtu_items != nullptr)
    {
        _children["mtu-items"] = mtu_items;
    }

    if(setprecedence_items != nullptr)
    {
        _children["setPrecedence-items"] = setprecedence_items;
    }

    if(setdscp_items != nullptr)
    {
        _children["setDscp-items"] = setdscp_items;
    }

    if(setgrp_items != nullptr)
    {
        _children["setGrp-items"] = setgrp_items;
    }

    if(setdlbdisable_items != nullptr)
    {
        _children["setDlbDisable-items"] = setdlbdisable_items;
    }

    if(queuelimit_items != nullptr)
    {
        _children["QueueLimit-items"] = queuelimit_items;
    }

    if(pause_items != nullptr)
    {
        _children["pause-items"] = pause_items;
    }

    if(dpp_items != nullptr)
    {
        _children["dpp-items"] = dpp_items;
    }

    if(setbw_items != nullptr)
    {
        _children["setBW-items"] = setbw_items;
    }

    if(setrembw_items != nullptr)
    {
        _children["setRemBW-items"] = setrembw_items;
    }

    if(shape_items != nullptr)
    {
        _children["shape-items"] = shape_items;
    }

    if(police_items != nullptr)
    {
        _children["police-items"] = police_items;
    }

    if(prio_items != nullptr)
    {
        _children["prio-items"] = prio_items;
    }

    if(randdet_items != nullptr)
    {
        _children["RandDet-items"] = randdet_items;
    }

    if(randdetnonecn_items != nullptr)
    {
        _children["RandDetNonEcn-items"] = randdetnonecn_items;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prevCMap")
    {
        prevcmap = value;
        prevcmap.value_namespace = name_space;
        prevcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextCMap")
    {
        nextcmap = value;
        nextcmap.value_namespace = name_space;
        nextcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "prevCMap")
    {
        prevcmap.yfilter = yfilter;
    }
    if(value_path == "nextCMap")
    {
        nextcmap.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setCos-items" || name == "mtu-items" || name == "setPrecedence-items" || name == "setDscp-items" || name == "setGrp-items" || name == "setDlbDisable-items" || name == "QueueLimit-items" || name == "pause-items" || name == "dpp-items" || name == "setBW-items" || name == "setRemBW-items" || name == "shape-items" || name == "police-items" || name == "prio-items" || name == "RandDet-items" || name == "RandDetNonEcn-items" || name == "name" || name == "prevCMap" || name == "nextCMap" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::SetCosItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setCos-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::~SetCosItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setCos-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::MtuItems()
    :
    value_{YType::uint16, "value"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "mtu-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::~MtuItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::SetPrecedenceItems()
    :
    val{YType::enumeration, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setPrecedence-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::~SetPrecedenceItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setPrecedence-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::SetDscpItems()
    :
    val{YType::uint8, "val"},
    tunnel{YType::boolean, "tunnel"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDscp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::~SetDscpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| tunnel.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDscp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "tunnel" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::SetGrpItems()
    :
    id{YType::uint16, "id"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setGrp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::~SetGrpItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setGrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::SetDlbDisableItems()
    :
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setDlbDisable-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::~SetDlbDisableItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_data() const
{
    if (is_presence_container) return true;
    return configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setDlbDisable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::QueueLimitItems()
    :
    queuelimitval{YType::uint64, "QueueLimitVal"},
    queuelimitunit{YType::enumeration, "QueueLimitUnit"},
    dynamic{YType::uint8, "dynamic"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "QueueLimit-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::~QueueLimitItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_data() const
{
    if (is_presence_container) return true;
    return queuelimitval.is_set
	|| queuelimitunit.is_set
	|| dynamic.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(queuelimitval.yfilter)
	|| ydk::is_set(queuelimitunit.yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QueueLimit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queuelimitval.is_set || is_set(queuelimitval.yfilter)) leaf_name_data.push_back(queuelimitval.get_name_leafdata());
    if (queuelimitunit.is_set || is_set(queuelimitunit.yfilter)) leaf_name_data.push_back(queuelimitunit.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval = value;
        queuelimitval.value_namespace = name_space;
        queuelimitval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit = value;
        queuelimitunit.value_namespace = name_space;
        queuelimitunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "QueueLimitVal")
    {
        queuelimitval.yfilter = yfilter;
    }
    if(value_path == "QueueLimitUnit")
    {
        queuelimitunit.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QueueLimitVal" || name == "QueueLimitUnit" || name == "dynamic" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::PauseItems()
    :
    buffersize{YType::uint64, "bufferSize"},
    pausethreshold{YType::uint64, "pauseThreshold"},
    resumethreshold{YType::uint64, "resumeThreshold"},
    pfccos0{YType::boolean, "pfcCos0"},
    pfccos1{YType::boolean, "pfcCos1"},
    pfccos2{YType::boolean, "pfcCos2"},
    pfccos3{YType::boolean, "pfcCos3"},
    pfccos4{YType::boolean, "pfcCos4"},
    pfccos5{YType::boolean, "pfcCos5"},
    pfccos6{YType::boolean, "pfcCos6"},
    pfccos7{YType::boolean, "pfcCos7"},
    receive{YType::boolean, "receive"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "pause-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::~PauseItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_data() const
{
    if (is_presence_container) return true;
    return buffersize.is_set
	|| pausethreshold.is_set
	|| resumethreshold.is_set
	|| pfccos0.is_set
	|| pfccos1.is_set
	|| pfccos2.is_set
	|| pfccos3.is_set
	|| pfccos4.is_set
	|| pfccos5.is_set
	|| pfccos6.is_set
	|| pfccos7.is_set
	|| receive.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffersize.yfilter)
	|| ydk::is_set(pausethreshold.yfilter)
	|| ydk::is_set(resumethreshold.yfilter)
	|| ydk::is_set(pfccos0.yfilter)
	|| ydk::is_set(pfccos1.yfilter)
	|| ydk::is_set(pfccos2.yfilter)
	|| ydk::is_set(pfccos3.yfilter)
	|| ydk::is_set(pfccos4.yfilter)
	|| ydk::is_set(pfccos5.yfilter)
	|| ydk::is_set(pfccos6.yfilter)
	|| ydk::is_set(pfccos7.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffersize.is_set || is_set(buffersize.yfilter)) leaf_name_data.push_back(buffersize.get_name_leafdata());
    if (pausethreshold.is_set || is_set(pausethreshold.yfilter)) leaf_name_data.push_back(pausethreshold.get_name_leafdata());
    if (resumethreshold.is_set || is_set(resumethreshold.yfilter)) leaf_name_data.push_back(resumethreshold.get_name_leafdata());
    if (pfccos0.is_set || is_set(pfccos0.yfilter)) leaf_name_data.push_back(pfccos0.get_name_leafdata());
    if (pfccos1.is_set || is_set(pfccos1.yfilter)) leaf_name_data.push_back(pfccos1.get_name_leafdata());
    if (pfccos2.is_set || is_set(pfccos2.yfilter)) leaf_name_data.push_back(pfccos2.get_name_leafdata());
    if (pfccos3.is_set || is_set(pfccos3.yfilter)) leaf_name_data.push_back(pfccos3.get_name_leafdata());
    if (pfccos4.is_set || is_set(pfccos4.yfilter)) leaf_name_data.push_back(pfccos4.get_name_leafdata());
    if (pfccos5.is_set || is_set(pfccos5.yfilter)) leaf_name_data.push_back(pfccos5.get_name_leafdata());
    if (pfccos6.is_set || is_set(pfccos6.yfilter)) leaf_name_data.push_back(pfccos6.get_name_leafdata());
    if (pfccos7.is_set || is_set(pfccos7.yfilter)) leaf_name_data.push_back(pfccos7.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bufferSize")
    {
        buffersize = value;
        buffersize.value_namespace = name_space;
        buffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold = value;
        pausethreshold.value_namespace = name_space;
        pausethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold = value;
        resumethreshold.value_namespace = name_space;
        resumethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0 = value;
        pfccos0.value_namespace = name_space;
        pfccos0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1 = value;
        pfccos1.value_namespace = name_space;
        pfccos1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2 = value;
        pfccos2.value_namespace = name_space;
        pfccos2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3 = value;
        pfccos3.value_namespace = name_space;
        pfccos3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4 = value;
        pfccos4.value_namespace = name_space;
        pfccos4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5 = value;
        pfccos5.value_namespace = name_space;
        pfccos5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6 = value;
        pfccos6.value_namespace = name_space;
        pfccos6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7 = value;
        pfccos7.value_namespace = name_space;
        pfccos7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bufferSize")
    {
        buffersize.yfilter = yfilter;
    }
    if(value_path == "pauseThreshold")
    {
        pausethreshold.yfilter = yfilter;
    }
    if(value_path == "resumeThreshold")
    {
        resumethreshold.yfilter = yfilter;
    }
    if(value_path == "pfcCos0")
    {
        pfccos0.yfilter = yfilter;
    }
    if(value_path == "pfcCos1")
    {
        pfccos1.yfilter = yfilter;
    }
    if(value_path == "pfcCos2")
    {
        pfccos2.yfilter = yfilter;
    }
    if(value_path == "pfcCos3")
    {
        pfccos3.yfilter = yfilter;
    }
    if(value_path == "pfcCos4")
    {
        pfccos4.yfilter = yfilter;
    }
    if(value_path == "pfcCos5")
    {
        pfccos5.yfilter = yfilter;
    }
    if(value_path == "pfcCos6")
    {
        pfccos6.yfilter = yfilter;
    }
    if(value_path == "pfcCos7")
    {
        pfccos7.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bufferSize" || name == "pauseThreshold" || name == "resumeThreshold" || name == "pfcCos0" || name == "pfcCos1" || name == "pfcCos2" || name == "pfcCos3" || name == "pfcCos4" || name == "pfcCos5" || name == "pfcCos6" || name == "pfcCos7" || name == "receive" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::DppItems()
    :
    setqosgroup{YType::uint16, "setQosGroup"}
{

    yang_name = "dpp-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::~DppItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_data() const
{
    if (is_presence_container) return true;
    return setqosgroup.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setqosgroup.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setqosgroup.is_set || is_set(setqosgroup.yfilter)) leaf_name_data.push_back(setqosgroup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup = value;
        setqosgroup.value_namespace = name_space;
        setqosgroup.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setQosGroup")
    {
        setqosgroup.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setQosGroup")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::SetBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::~SetBWItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::SetRemBWItems()
    :
    val{YType::uint8, "val"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "setRemBW-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::~SetRemBWItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setRemBW-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::ShapeItems()
    :
    min{YType::uint64, "min"},
    minrateunit{YType::enumeration, "minRateUnit"},
    max{YType::uint64, "max"},
    maxrateunit{YType::enumeration, "maxRateUnit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "shape-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::~ShapeItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| minrateunit.is_set
	|| max.is_set
	|| maxrateunit.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(minrateunit.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(maxrateunit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (minrateunit.is_set || is_set(minrateunit.yfilter)) leaf_name_data.push_back(minrateunit.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (maxrateunit.is_set || is_set(maxrateunit.yfilter)) leaf_name_data.push_back(maxrateunit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit = value;
        minrateunit.value_namespace = name_space;
        minrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit = value;
        maxrateunit.value_namespace = name_space;
        maxrateunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "minRateUnit")
    {
        minrateunit.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "maxRateUnit")
    {
        maxrateunit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "minRateUnit" || name == "max" || name == "maxRateUnit" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::PoliceItems()
    :
    cirrate{YType::uint64, "cirRate"},
    cirunit{YType::enumeration, "cirUnit"},
    bcrate{YType::uint64, "bcRate"},
    bcunit{YType::enumeration, "bcUnit"},
    pirrate{YType::uint64, "pirRate"},
    pirunit{YType::enumeration, "pirUnit"},
    berate{YType::uint64, "beRate"},
    beunit{YType::enumeration, "beUnit"},
    conformaction{YType::enumeration, "conformAction"},
    conformsetcostransmit{YType::uint8, "conformSetCosTransmit"},
    conformsetdscptransmit{YType::uint8, "conformSetDscpTransmit"},
    conformsetprectransmit{YType::enumeration, "conformSetPrecTransmit"},
    conformsetqosgrptransmit{YType::uint16, "conformSetQosGrpTransmit"},
    exceedaction{YType::enumeration, "exceedAction"},
    exceedsetcostransmit{YType::uint8, "exceedSetCosTransmit"},
    exceedsetdscptransmit{YType::uint8, "exceedSetDscpTransmit"},
    exceedsetprectransmit{YType::enumeration, "exceedSetPrecTransmit"},
    exceedsetqosgrptransmit{YType::uint16, "exceedSetQosGrpTransmit"},
    violateaction{YType::enumeration, "violateAction"},
    violatesetcostransmit{YType::uint8, "violateSetCosTransmit"},
    violatesetdscptransmit{YType::uint8, "violateSetDscpTransmit"},
    violatesetprectransmit{YType::enumeration, "violateSetPrecTransmit"},
    violatesetqosgrptransmit{YType::uint16, "violateSetQosGrpTransmit"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "police-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::~PoliceItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_data() const
{
    if (is_presence_container) return true;
    return cirrate.is_set
	|| cirunit.is_set
	|| bcrate.is_set
	|| bcunit.is_set
	|| pirrate.is_set
	|| pirunit.is_set
	|| berate.is_set
	|| beunit.is_set
	|| conformaction.is_set
	|| conformsetcostransmit.is_set
	|| conformsetdscptransmit.is_set
	|| conformsetprectransmit.is_set
	|| conformsetqosgrptransmit.is_set
	|| exceedaction.is_set
	|| exceedsetcostransmit.is_set
	|| exceedsetdscptransmit.is_set
	|| exceedsetprectransmit.is_set
	|| exceedsetqosgrptransmit.is_set
	|| violateaction.is_set
	|| violatesetcostransmit.is_set
	|| violatesetdscptransmit.is_set
	|| violatesetprectransmit.is_set
	|| violatesetqosgrptransmit.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cirrate.yfilter)
	|| ydk::is_set(cirunit.yfilter)
	|| ydk::is_set(bcrate.yfilter)
	|| ydk::is_set(bcunit.yfilter)
	|| ydk::is_set(pirrate.yfilter)
	|| ydk::is_set(pirunit.yfilter)
	|| ydk::is_set(berate.yfilter)
	|| ydk::is_set(beunit.yfilter)
	|| ydk::is_set(conformaction.yfilter)
	|| ydk::is_set(conformsetcostransmit.yfilter)
	|| ydk::is_set(conformsetdscptransmit.yfilter)
	|| ydk::is_set(conformsetprectransmit.yfilter)
	|| ydk::is_set(conformsetqosgrptransmit.yfilter)
	|| ydk::is_set(exceedaction.yfilter)
	|| ydk::is_set(exceedsetcostransmit.yfilter)
	|| ydk::is_set(exceedsetdscptransmit.yfilter)
	|| ydk::is_set(exceedsetprectransmit.yfilter)
	|| ydk::is_set(exceedsetqosgrptransmit.yfilter)
	|| ydk::is_set(violateaction.yfilter)
	|| ydk::is_set(violatesetcostransmit.yfilter)
	|| ydk::is_set(violatesetdscptransmit.yfilter)
	|| ydk::is_set(violatesetprectransmit.yfilter)
	|| ydk::is_set(violatesetqosgrptransmit.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cirrate.is_set || is_set(cirrate.yfilter)) leaf_name_data.push_back(cirrate.get_name_leafdata());
    if (cirunit.is_set || is_set(cirunit.yfilter)) leaf_name_data.push_back(cirunit.get_name_leafdata());
    if (bcrate.is_set || is_set(bcrate.yfilter)) leaf_name_data.push_back(bcrate.get_name_leafdata());
    if (bcunit.is_set || is_set(bcunit.yfilter)) leaf_name_data.push_back(bcunit.get_name_leafdata());
    if (pirrate.is_set || is_set(pirrate.yfilter)) leaf_name_data.push_back(pirrate.get_name_leafdata());
    if (pirunit.is_set || is_set(pirunit.yfilter)) leaf_name_data.push_back(pirunit.get_name_leafdata());
    if (berate.is_set || is_set(berate.yfilter)) leaf_name_data.push_back(berate.get_name_leafdata());
    if (beunit.is_set || is_set(beunit.yfilter)) leaf_name_data.push_back(beunit.get_name_leafdata());
    if (conformaction.is_set || is_set(conformaction.yfilter)) leaf_name_data.push_back(conformaction.get_name_leafdata());
    if (conformsetcostransmit.is_set || is_set(conformsetcostransmit.yfilter)) leaf_name_data.push_back(conformsetcostransmit.get_name_leafdata());
    if (conformsetdscptransmit.is_set || is_set(conformsetdscptransmit.yfilter)) leaf_name_data.push_back(conformsetdscptransmit.get_name_leafdata());
    if (conformsetprectransmit.is_set || is_set(conformsetprectransmit.yfilter)) leaf_name_data.push_back(conformsetprectransmit.get_name_leafdata());
    if (conformsetqosgrptransmit.is_set || is_set(conformsetqosgrptransmit.yfilter)) leaf_name_data.push_back(conformsetqosgrptransmit.get_name_leafdata());
    if (exceedaction.is_set || is_set(exceedaction.yfilter)) leaf_name_data.push_back(exceedaction.get_name_leafdata());
    if (exceedsetcostransmit.is_set || is_set(exceedsetcostransmit.yfilter)) leaf_name_data.push_back(exceedsetcostransmit.get_name_leafdata());
    if (exceedsetdscptransmit.is_set || is_set(exceedsetdscptransmit.yfilter)) leaf_name_data.push_back(exceedsetdscptransmit.get_name_leafdata());
    if (exceedsetprectransmit.is_set || is_set(exceedsetprectransmit.yfilter)) leaf_name_data.push_back(exceedsetprectransmit.get_name_leafdata());
    if (exceedsetqosgrptransmit.is_set || is_set(exceedsetqosgrptransmit.yfilter)) leaf_name_data.push_back(exceedsetqosgrptransmit.get_name_leafdata());
    if (violateaction.is_set || is_set(violateaction.yfilter)) leaf_name_data.push_back(violateaction.get_name_leafdata());
    if (violatesetcostransmit.is_set || is_set(violatesetcostransmit.yfilter)) leaf_name_data.push_back(violatesetcostransmit.get_name_leafdata());
    if (violatesetdscptransmit.is_set || is_set(violatesetdscptransmit.yfilter)) leaf_name_data.push_back(violatesetdscptransmit.get_name_leafdata());
    if (violatesetprectransmit.is_set || is_set(violatesetprectransmit.yfilter)) leaf_name_data.push_back(violatesetprectransmit.get_name_leafdata());
    if (violatesetqosgrptransmit.is_set || is_set(violatesetqosgrptransmit.yfilter)) leaf_name_data.push_back(violatesetqosgrptransmit.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cirRate")
    {
        cirrate = value;
        cirrate.value_namespace = name_space;
        cirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cirUnit")
    {
        cirunit = value;
        cirunit.value_namespace = name_space;
        cirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcRate")
    {
        bcrate = value;
        bcrate.value_namespace = name_space;
        bcrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcUnit")
    {
        bcunit = value;
        bcunit.value_namespace = name_space;
        bcunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirRate")
    {
        pirrate = value;
        pirrate.value_namespace = name_space;
        pirrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pirUnit")
    {
        pirunit = value;
        pirunit.value_namespace = name_space;
        pirunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beRate")
    {
        berate = value;
        berate.value_namespace = name_space;
        berate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beUnit")
    {
        beunit = value;
        beunit.value_namespace = name_space;
        beunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformAction")
    {
        conformaction = value;
        conformaction.value_namespace = name_space;
        conformaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit = value;
        conformsetcostransmit.value_namespace = name_space;
        conformsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit = value;
        conformsetdscptransmit.value_namespace = name_space;
        conformsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit = value;
        conformsetprectransmit.value_namespace = name_space;
        conformsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit = value;
        conformsetqosgrptransmit.value_namespace = name_space;
        conformsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedAction")
    {
        exceedaction = value;
        exceedaction.value_namespace = name_space;
        exceedaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit = value;
        exceedsetcostransmit.value_namespace = name_space;
        exceedsetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit = value;
        exceedsetdscptransmit.value_namespace = name_space;
        exceedsetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit = value;
        exceedsetprectransmit.value_namespace = name_space;
        exceedsetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit = value;
        exceedsetqosgrptransmit.value_namespace = name_space;
        exceedsetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateAction")
    {
        violateaction = value;
        violateaction.value_namespace = name_space;
        violateaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit = value;
        violatesetcostransmit.value_namespace = name_space;
        violatesetcostransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit = value;
        violatesetdscptransmit.value_namespace = name_space;
        violatesetdscptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit = value;
        violatesetprectransmit.value_namespace = name_space;
        violatesetprectransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit = value;
        violatesetqosgrptransmit.value_namespace = name_space;
        violatesetqosgrptransmit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cirRate")
    {
        cirrate.yfilter = yfilter;
    }
    if(value_path == "cirUnit")
    {
        cirunit.yfilter = yfilter;
    }
    if(value_path == "bcRate")
    {
        bcrate.yfilter = yfilter;
    }
    if(value_path == "bcUnit")
    {
        bcunit.yfilter = yfilter;
    }
    if(value_path == "pirRate")
    {
        pirrate.yfilter = yfilter;
    }
    if(value_path == "pirUnit")
    {
        pirunit.yfilter = yfilter;
    }
    if(value_path == "beRate")
    {
        berate.yfilter = yfilter;
    }
    if(value_path == "beUnit")
    {
        beunit.yfilter = yfilter;
    }
    if(value_path == "conformAction")
    {
        conformaction.yfilter = yfilter;
    }
    if(value_path == "conformSetCosTransmit")
    {
        conformsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetDscpTransmit")
    {
        conformsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetPrecTransmit")
    {
        conformsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "conformSetQosGrpTransmit")
    {
        conformsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedAction")
    {
        exceedaction.yfilter = yfilter;
    }
    if(value_path == "exceedSetCosTransmit")
    {
        exceedsetcostransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetDscpTransmit")
    {
        exceedsetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetPrecTransmit")
    {
        exceedsetprectransmit.yfilter = yfilter;
    }
    if(value_path == "exceedSetQosGrpTransmit")
    {
        exceedsetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "violateAction")
    {
        violateaction.yfilter = yfilter;
    }
    if(value_path == "violateSetCosTransmit")
    {
        violatesetcostransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetDscpTransmit")
    {
        violatesetdscptransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetPrecTransmit")
    {
        violatesetprectransmit.yfilter = yfilter;
    }
    if(value_path == "violateSetQosGrpTransmit")
    {
        violatesetqosgrptransmit.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cirRate" || name == "cirUnit" || name == "bcRate" || name == "bcUnit" || name == "pirRate" || name == "pirUnit" || name == "beRate" || name == "beUnit" || name == "conformAction" || name == "conformSetCosTransmit" || name == "conformSetDscpTransmit" || name == "conformSetPrecTransmit" || name == "conformSetQosGrpTransmit" || name == "exceedAction" || name == "exceedSetCosTransmit" || name == "exceedSetDscpTransmit" || name == "exceedSetPrecTransmit" || name == "exceedSetQosGrpTransmit" || name == "violateAction" || name == "violateSetCosTransmit" || name == "violateSetDscpTransmit" || name == "violateSetPrecTransmit" || name == "violateSetQosGrpTransmit" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::PrioItems()
    :
    level{YType::uint8, "level"},
    configstatus{YType::uint32, "configStatus"}
{

    yang_name = "prio-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::~PrioItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| configstatus.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prio-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "configStatus")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::RandDetItems()
    :
    minthreshold{YType::uint32, "minThreshold"},
    minthresholdunit{YType::enumeration, "minThresholdUnit"},
    maxthreshold{YType::uint32, "maxThreshold"},
    maxthresholdunit{YType::enumeration, "maxThresholdUnit"},
    dropavail{YType::uint8, "dropAvail"},
    weight{YType::uint8, "weight"},
    capaverage{YType::boolean, "capAverage"},
    optimization{YType::uint8, "optimization"},
    ecn{YType::boolean, "ecn"}
{

    yang_name = "RandDet-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::~RandDetItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_data() const
{
    if (is_presence_container) return true;
    return minthreshold.is_set
	|| minthresholdunit.is_set
	|| maxthreshold.is_set
	|| maxthresholdunit.is_set
	|| dropavail.is_set
	|| weight.is_set
	|| capaverage.is_set
	|| optimization.is_set
	|| ecn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthreshold.yfilter)
	|| ydk::is_set(minthresholdunit.yfilter)
	|| ydk::is_set(maxthreshold.yfilter)
	|| ydk::is_set(maxthresholdunit.yfilter)
	|| ydk::is_set(dropavail.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(capaverage.yfilter)
	|| ydk::is_set(optimization.yfilter)
	|| ydk::is_set(ecn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDet-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthreshold.is_set || is_set(minthreshold.yfilter)) leaf_name_data.push_back(minthreshold.get_name_leafdata());
    if (minthresholdunit.is_set || is_set(minthresholdunit.yfilter)) leaf_name_data.push_back(minthresholdunit.get_name_leafdata());
    if (maxthreshold.is_set || is_set(maxthreshold.yfilter)) leaf_name_data.push_back(maxthreshold.get_name_leafdata());
    if (maxthresholdunit.is_set || is_set(maxthresholdunit.yfilter)) leaf_name_data.push_back(maxthresholdunit.get_name_leafdata());
    if (dropavail.is_set || is_set(dropavail.yfilter)) leaf_name_data.push_back(dropavail.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (capaverage.is_set || is_set(capaverage.yfilter)) leaf_name_data.push_back(capaverage.get_name_leafdata());
    if (optimization.is_set || is_set(optimization.yfilter)) leaf_name_data.push_back(optimization.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThreshold")
    {
        minthreshold = value;
        minthreshold.value_namespace = name_space;
        minthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit = value;
        minthresholdunit.value_namespace = name_space;
        minthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold = value;
        maxthreshold.value_namespace = name_space;
        maxthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit = value;
        maxthresholdunit.value_namespace = name_space;
        maxthresholdunit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvail")
    {
        dropavail = value;
        dropavail.value_namespace = name_space;
        dropavail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capAverage")
    {
        capaverage = value;
        capaverage.value_namespace = name_space;
        capaverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "optimization")
    {
        optimization = value;
        optimization.value_namespace = name_space;
        optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThreshold")
    {
        minthreshold.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnit")
    {
        minthresholdunit.yfilter = yfilter;
    }
    if(value_path == "maxThreshold")
    {
        maxthreshold.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnit")
    {
        maxthresholdunit.yfilter = yfilter;
    }
    if(value_path == "dropAvail")
    {
        dropavail.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "capAverage")
    {
        capaverage.yfilter = yfilter;
    }
    if(value_path == "optimization")
    {
        optimization.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThreshold" || name == "minThresholdUnit" || name == "maxThreshold" || name == "maxThresholdUnit" || name == "dropAvail" || name == "weight" || name == "capAverage" || name == "optimization" || name == "ecn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::RandDetNonEcnItems()
    :
    minthresholdnonecn{YType::uint32, "minThresholdNonEcn"},
    minthresholdunitnonecn{YType::enumeration, "minThresholdUnitNonEcn"},
    maxthresholdnonecn{YType::uint32, "maxThresholdNonEcn"},
    maxthresholdunitnonecn{YType::enumeration, "maxThresholdUnitNonEcn"},
    dropavailnonecn{YType::uint8, "dropAvailNonEcn"}
{

    yang_name = "RandDetNonEcn-items"; yang_parent_name = "MatchCMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::~RandDetNonEcnItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_data() const
{
    if (is_presence_container) return true;
    return minthresholdnonecn.is_set
	|| minthresholdunitnonecn.is_set
	|| maxthresholdnonecn.is_set
	|| maxthresholdunitnonecn.is_set
	|| dropavailnonecn.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minthresholdnonecn.yfilter)
	|| ydk::is_set(minthresholdunitnonecn.yfilter)
	|| ydk::is_set(maxthresholdnonecn.yfilter)
	|| ydk::is_set(maxthresholdunitnonecn.yfilter)
	|| ydk::is_set(dropavailnonecn.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RandDetNonEcn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minthresholdnonecn.is_set || is_set(minthresholdnonecn.yfilter)) leaf_name_data.push_back(minthresholdnonecn.get_name_leafdata());
    if (minthresholdunitnonecn.is_set || is_set(minthresholdunitnonecn.yfilter)) leaf_name_data.push_back(minthresholdunitnonecn.get_name_leafdata());
    if (maxthresholdnonecn.is_set || is_set(maxthresholdnonecn.yfilter)) leaf_name_data.push_back(maxthresholdnonecn.get_name_leafdata());
    if (maxthresholdunitnonecn.is_set || is_set(maxthresholdunitnonecn.yfilter)) leaf_name_data.push_back(maxthresholdunitnonecn.get_name_leafdata());
    if (dropavailnonecn.is_set || is_set(dropavailnonecn.yfilter)) leaf_name_data.push_back(dropavailnonecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn = value;
        minthresholdnonecn.value_namespace = name_space;
        minthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn = value;
        minthresholdunitnonecn.value_namespace = name_space;
        minthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn = value;
        maxthresholdnonecn.value_namespace = name_space;
        maxthresholdnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn = value;
        maxthresholdunitnonecn.value_namespace = name_space;
        maxthresholdunitnonecn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn = value;
        dropavailnonecn.value_namespace = name_space;
        dropavailnonecn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minThresholdNonEcn")
    {
        minthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "minThresholdUnitNonEcn")
    {
        minthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdNonEcn")
    {
        maxthresholdnonecn.yfilter = yfilter;
    }
    if(value_path == "maxThresholdUnitNonEcn")
    {
        maxthresholdunitnonecn.yfilter = yfilter;
    }
    if(value_path == "dropAvailNonEcn")
    {
        dropavailnonecn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minThresholdNonEcn" || name == "minThresholdUnitNonEcn" || name == "maxThresholdNonEcn" || name == "maxThresholdUnitNonEcn" || name == "dropAvailNonEcn")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::DescriptionItems()
    :
    val{YType::str, "val"}
{

    yang_name = "Description-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::~DescriptionItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::has_data() const
{
    if (is_presence_container) return true;
    return val.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Description-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtipqosPolicyInstToPMapItems()
    :
    rtipqospolicyinsttopmap_list(this, {"tdn"})
{

    yang_name = "rtipqosPolicyInstToPMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::~RtipqosPolicyInstToPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_operation() const
{
    for (std::size_t index=0; index<rtipqospolicyinsttopmap_list.len(); index++)
    {
        if(rtipqospolicyinsttopmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtipqosPolicyInstToPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtIpqosPolicyInstToPMap-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList>();
        ent_->parent = this;
        rtipqospolicyinsttopmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtipqospolicyinsttopmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtIpqosPolicyInstToPMap-list")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::RtIpqosPolicyInstToPMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtIpqosPolicyInstToPMap-list"; yang_parent_name = "rtipqosPolicyInstToPMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::~RtIpqosPolicyInstToPMapList()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtIpqosPolicyInstToPMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::RtclassMapToPolicyMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtclassMapToPolicyMap-items"; yang_parent_name = "PMapInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::~RtclassMapToPolicyMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtclassMapToPolicyMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::CopyPMapItems()
    :
    lastfrom{YType::str, "lastFrom"},
    lastto{YType::str, "lastTo"}
{

    yang_name = "copyPMap-items"; yang_parent_name = "dflt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::~CopyPMapItems()
{
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::has_data() const
{
    if (is_presence_container) return true;
    return lastfrom.is_set
	|| lastto.is_set;
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lastfrom.yfilter)
	|| ydk::is_set(lastto.yfilter);
}

std::string System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copyPMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lastfrom.is_set || is_set(lastfrom.yfilter)) leaf_name_data.push_back(lastfrom.get_name_leafdata());
    if (lastto.is_set || is_set(lastto.yfilter)) leaf_name_data.push_back(lastto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastFrom")
    {
        lastfrom = value;
        lastfrom.value_namespace = name_space;
        lastfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTo")
    {
        lastto = value;
        lastto.value_namespace = name_space;
        lastto.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastFrom")
    {
        lastfrom.yfilter = yfilter;
    }
    if(value_path == "lastTo")
    {
        lastto.yfilter = yfilter;
    }
}

bool System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastFrom" || name == "lastTo")
        return true;
    return false;
}

System::BdItems::BdItems_::BdItems_()
    :
    bd_list(this, {"fabencap"})
{

    yang_name = "bd-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::BdItems_::~BdItems_()
{
}

bool System::BdItems::BdItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::has_operation() const
{
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::BdItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BD-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList>();
        ent_->parent = this;
        bd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BD-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::BDList()
    :
    fabencap{YType::str, "fabEncap"},
    accencap{YType::str, "accEncap"},
    xconnect{YType::enumeration, "xConnect"},
    fwdmode{YType::str, "fwdMode"},
    bridgemode{YType::enumeration, "bridgeMode"},
    fwdctrl{YType::str, "fwdCtrl"},
    bddefdn{YType::str, "bdDefDn"},
    controllerid{YType::str, "controllerId"},
    bdstate{YType::enumeration, "BdState"},
    bdopername{YType::str, "BdOperName"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"}
        ,
    member_items(std::make_shared<System::BdItems::BdItems_::BDList::MemberItems>())
    , fmgrp_items(std::make_shared<System::BdItems::BdItems_::BDList::FmgrpItems>())
    , db_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems>())
    , vlan_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems>())
    , vxlan_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems>())
    , rsextbd_items(std::make_shared<System::BdItems::BdItems_::BDList::RsextBDItems>())
    , rsbdvsanmap_items(std::make_shared<System::BdItems::BdItems_::BDList::RsbdVsanMapItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::BdItems_::BDList::RtfvDomIfConnItems>())
    , dbgvlanstats_items(std::make_shared<System::BdItems::BdItems_::BDList::DbgVlanStatsItems>())
{
    member_items->parent = this;
    fmgrp_items->parent = this;
    db_items->parent = this;
    vlan_items->parent = this;
    vxlan_items->parent = this;
    rsextbd_items->parent = this;
    rsbdvsanmap_items->parent = this;
    rtfvdomifconn_items->parent = this;
    dbgvlanstats_items->parent = this;

    yang_name = "BD-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::BdItems_::BDList::~BDList()
{
}

bool System::BdItems::BdItems_::BDList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set
	|| accencap.is_set
	|| xconnect.is_set
	|| fwdmode.is_set
	|| bridgemode.is_set
	|| fwdctrl.is_set
	|| bddefdn.is_set
	|| controllerid.is_set
	|| bdstate.is_set
	|| bdopername.is_set
	|| name.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| (member_items !=  nullptr && member_items->has_data())
	|| (fmgrp_items !=  nullptr && fmgrp_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (vxlan_items !=  nullptr && vxlan_items->has_data())
	|| (rsextbd_items !=  nullptr && rsextbd_items->has_data())
	|| (rsbdvsanmap_items !=  nullptr && rsbdvsanmap_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (dbgvlanstats_items !=  nullptr && dbgvlanstats_items->has_data());
}

bool System::BdItems::BdItems_::BDList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(accencap.yfilter)
	|| ydk::is_set(xconnect.yfilter)
	|| ydk::is_set(fwdmode.yfilter)
	|| ydk::is_set(bridgemode.yfilter)
	|| ydk::is_set(fwdctrl.yfilter)
	|| ydk::is_set(bddefdn.yfilter)
	|| ydk::is_set(controllerid.yfilter)
	|| ydk::is_set(bdstate.yfilter)
	|| ydk::is_set(bdopername.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (member_items !=  nullptr && member_items->has_operation())
	|| (fmgrp_items !=  nullptr && fmgrp_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (vxlan_items !=  nullptr && vxlan_items->has_operation())
	|| (rsextbd_items !=  nullptr && rsextbd_items->has_operation())
	|| (rsbdvsanmap_items !=  nullptr && rsbdvsanmap_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (dbgvlanstats_items !=  nullptr && dbgvlanstats_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::BdItems_::BDList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BD-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (accencap.is_set || is_set(accencap.yfilter)) leaf_name_data.push_back(accencap.get_name_leafdata());
    if (xconnect.is_set || is_set(xconnect.yfilter)) leaf_name_data.push_back(xconnect.get_name_leafdata());
    if (fwdmode.is_set || is_set(fwdmode.yfilter)) leaf_name_data.push_back(fwdmode.get_name_leafdata());
    if (bridgemode.is_set || is_set(bridgemode.yfilter)) leaf_name_data.push_back(bridgemode.get_name_leafdata());
    if (fwdctrl.is_set || is_set(fwdctrl.yfilter)) leaf_name_data.push_back(fwdctrl.get_name_leafdata());
    if (bddefdn.is_set || is_set(bddefdn.yfilter)) leaf_name_data.push_back(bddefdn.get_name_leafdata());
    if (controllerid.is_set || is_set(controllerid.yfilter)) leaf_name_data.push_back(controllerid.get_name_leafdata());
    if (bdstate.is_set || is_set(bdstate.yfilter)) leaf_name_data.push_back(bdstate.get_name_leafdata());
    if (bdopername.is_set || is_set(bdopername.yfilter)) leaf_name_data.push_back(bdopername.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-items")
    {
        if(member_items == nullptr)
        {
            member_items = std::make_shared<System::BdItems::BdItems_::BDList::MemberItems>();
        }
        return member_items;
    }

    if(child_yang_name == "fmgrp-items")
    {
        if(fmgrp_items == nullptr)
        {
            fmgrp_items = std::make_shared<System::BdItems::BdItems_::BDList::FmgrpItems>();
        }
        return fmgrp_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "vxlan-items")
    {
        if(vxlan_items == nullptr)
        {
            vxlan_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems>();
        }
        return vxlan_items;
    }

    if(child_yang_name == "rsextBD-items")
    {
        if(rsextbd_items == nullptr)
        {
            rsextbd_items = std::make_shared<System::BdItems::BdItems_::BDList::RsextBDItems>();
        }
        return rsextbd_items;
    }

    if(child_yang_name == "rsbdVsanMap-items")
    {
        if(rsbdvsanmap_items == nullptr)
        {
            rsbdvsanmap_items = std::make_shared<System::BdItems::BdItems_::BDList::RsbdVsanMapItems>();
        }
        return rsbdvsanmap_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::BdItems_::BDList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "dbgVlanStats-items")
    {
        if(dbgvlanstats_items == nullptr)
        {
            dbgvlanstats_items = std::make_shared<System::BdItems::BdItems_::BDList::DbgVlanStatsItems>();
        }
        return dbgvlanstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(member_items != nullptr)
    {
        _children["member-items"] = member_items;
    }

    if(fmgrp_items != nullptr)
    {
        _children["fmgrp-items"] = fmgrp_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(vxlan_items != nullptr)
    {
        _children["vxlan-items"] = vxlan_items;
    }

    if(rsextbd_items != nullptr)
    {
        _children["rsextBD-items"] = rsextbd_items;
    }

    if(rsbdvsanmap_items != nullptr)
    {
        _children["rsbdVsanMap-items"] = rsbdvsanmap_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        _children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(dbgvlanstats_items != nullptr)
    {
        _children["dbgVlanStats-items"] = dbgvlanstats_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accEncap")
    {
        accencap = value;
        accencap.value_namespace = name_space;
        accencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xConnect")
    {
        xconnect = value;
        xconnect.value_namespace = name_space;
        xconnect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdMode")
    {
        fwdmode = value;
        fwdmode.value_namespace = name_space;
        fwdmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgeMode")
    {
        bridgemode = value;
        bridgemode.value_namespace = name_space;
        bridgemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdCtrl")
    {
        fwdctrl = value;
        fwdctrl.value_namespace = name_space;
        fwdctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdDefDn")
    {
        bddefdn = value;
        bddefdn.value_namespace = name_space;
        bddefdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controllerId")
    {
        controllerid = value;
        controllerid.value_namespace = name_space;
        controllerid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BdState")
    {
        bdstate = value;
        bdstate.value_namespace = name_space;
        bdstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BdOperName")
    {
        bdopername = value;
        bdopername.value_namespace = name_space;
        bdopername.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "accEncap")
    {
        accencap.yfilter = yfilter;
    }
    if(value_path == "xConnect")
    {
        xconnect.yfilter = yfilter;
    }
    if(value_path == "fwdMode")
    {
        fwdmode.yfilter = yfilter;
    }
    if(value_path == "bridgeMode")
    {
        bridgemode.yfilter = yfilter;
    }
    if(value_path == "fwdCtrl")
    {
        fwdctrl.yfilter = yfilter;
    }
    if(value_path == "bdDefDn")
    {
        bddefdn.yfilter = yfilter;
    }
    if(value_path == "controllerId")
    {
        controllerid.yfilter = yfilter;
    }
    if(value_path == "BdState")
    {
        bdstate.yfilter = yfilter;
    }
    if(value_path == "BdOperName")
    {
        bdopername.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-items" || name == "fmgrp-items" || name == "db-items" || name == "vlan-items" || name == "vxlan-items" || name == "rsextBD-items" || name == "rsbdVsanMap-items" || name == "rtfvDomIfConn-items" || name == "dbgVlanStats-items" || name == "fabEncap" || name == "accEncap" || name == "xConnect" || name == "fwdMode" || name == "bridgeMode" || name == "fwdCtrl" || name == "bdDefDn" || name == "controllerId" || name == "BdState" || name == "BdOperName" || name == "name" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::MemberItems::MemberItems()
    :
    vlanmemberif_list(this, {"id"})
{

    yang_name = "member-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::MemberItems::~MemberItems()
{
}

bool System::BdItems::BdItems_::BDList::MemberItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanmemberif_list.len(); index++)
    {
        if(vlanmemberif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::MemberItems::has_operation() const
{
    for (std::size_t index=0; index<vlanmemberif_list.len(); index++)
    {
        if(vlanmemberif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::MemberItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::MemberItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::MemberItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanMemberIf-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList>();
        ent_->parent = this;
        vlanmemberif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::MemberItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanmemberif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::MemberItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::MemberItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::MemberItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanMemberIf-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::VlanMemberIfList()
    :
    id{YType::str, "id"},
    vlan{YType::uint32, "vlan"}
{

    yang_name = "VlanMemberIf-list"; yang_parent_name = "member-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::~VlanMemberIfList()
{
}

bool System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vlan.is_set;
}

bool System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanMemberIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vlan")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::FmgrpItems::FmgrpItems()
    :
    grp_list(this, {"addr"})
{

    yang_name = "fmgrp-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::FmgrpItems::~FmgrpItems()
{
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grp_list.len(); index++)
    {
        if(grp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::has_operation() const
{
    for (std::size_t index=0; index<grp_list.len(); index++)
    {
        if(grp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::FmgrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmgrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::FmgrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::FmgrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Grp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::FmgrpItems::GrpList>();
        ent_->parent = this;
        grp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::FmgrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::FmgrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::FmgrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Grp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::GrpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"}
{

    yang_name = "Grp-list"; yang_parent_name = "fmgrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::~GrpList()
{
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set;
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Grp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::FmgrpItems::GrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::~DbItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::VlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vlan-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::~VlanItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList>();
        ent_->parent = this;
        cktep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cktep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    fabencap{YType::str, "fabEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"},
    enfpref{YType::enumeration, "enfPref"},
    pctag{YType::uint32, "pcTag"},
    qosprio{YType::enumeration, "qosPrio"},
    epgdn{YType::str, "epgDn"}
        ,
    mac_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems>())
    , db_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvlaneppatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems>())
{
    mac_items->parent = this;
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| fabencap.is_set
	|| name.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| enfpref.is_set
	|| pctag.is_set
	|| qosprio.is_set
	|| epgdn.is_set
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvlaneppatt_items !=  nullptr && rsvlaneppatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(enfpref.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(qosprio.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvlaneppatt_items !=  nullptr && rsvlaneppatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (enfpref.is_set || is_set(enfpref.yfilter)) leaf_name_data.push_back(enfpref.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (qosprio.is_set || is_set(qosprio.yfilter)) leaf_name_data.push_back(qosprio.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvlanEppAtt-items")
    {
        if(rsvlaneppatt_items == nullptr)
        {
            rsvlaneppatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems>();
        }
        return rsvlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(rtspanspansrctol2cktepatt_items != nullptr)
    {
        _children["rtspanSpanSrcToL2CktEpAtt-items"] = rtspanspansrctol2cktepatt_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        _children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(rsvlaneppatt_items != nullptr)
    {
        _children["rsvlanEppAtt-items"] = rsvlaneppatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enfPref")
    {
        enfpref = value;
        enfpref.value_namespace = name_space;
        enfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPrio")
    {
        qosprio = value;
        qosprio.value_namespace = name_space;
        qosprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "enfPref")
    {
        enfpref.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "qosPrio")
    {
        qosprio.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items" || name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvlanEppAtt-items" || name == "encap" || name == "fabEncap" || name == "name" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacItems()
    :
    macep_list(this, {"mac"})
{

    yang_name = "mac-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::MacEpList()
    :
    mac{YType::str, "mac"},
    if_{YType::str, "if"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
        ,
    rtfvepdefreftol2macep_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>())
{
    rtfvepdefreftol2macep_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| if_.is_set
	|| operst.is_set
	|| name.is_set
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefRefToL2MacEp-items")
    {
        if(rtfvepdefreftol2macep_items == nullptr)
        {
            rtfvepdefreftol2macep_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>();
        }
        return rtfvepdefreftol2macep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvepdefreftol2macep_items != nullptr)
    {
        _children["rtfvEpDefRefToL2MacEp-items"] = rtfvepdefreftol2macep_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefRefToL2MacEp-items" || name == "mac" || name == "if" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtfvEpDefRefToL2MacEpItems()
    :
    rtfvepdefreftol2macep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToL2MacEp-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::~RtfvEpDefRefToL2MacEpItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToL2MacEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToL2MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList>();
        ent_->parent = this;
        rtfvepdefreftol2macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvepdefreftol2macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToL2MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::RtFvEpDefRefToL2MacEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefRefToL2MacEp-list"; yang_parent_name = "rtfvEpDefRefToL2MacEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::~RtFvEpDefRefToL2MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToL2MacEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        ent_->parent = this;
        rtspanspansrctol2cktepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtspanspansrctol2cktepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        ent_->parent = this;
        rtfvdomifconn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvdomifconn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::RsvlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::~RsvlanEppAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::VxlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vxlan-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::~VxlanItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList>();
        ent_->parent = this;
        cktep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cktep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    mcastencap{YType::str, "mcastEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"},
    enfpref{YType::enumeration, "enfPref"},
    pctag{YType::uint32, "pcTag"},
    qosprio{YType::enumeration, "qosPrio"},
    epgdn{YType::str, "epgDn"}
        ,
    db_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvxlaneppatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems>())
{
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvxlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vxlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| mcastencap.is_set
	|| name.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| enfpref.is_set
	|| pctag.is_set
	|| qosprio.is_set
	|| epgdn.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(enfpref.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(qosprio.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (enfpref.is_set || is_set(enfpref.yfilter)) leaf_name_data.push_back(enfpref.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (qosprio.is_set || is_set(qosprio.yfilter)) leaf_name_data.push_back(qosprio.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvxlanEppAtt-items")
    {
        if(rsvxlaneppatt_items == nullptr)
        {
            rsvxlaneppatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems>();
        }
        return rsvxlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(rtspanspansrctol2cktepatt_items != nullptr)
    {
        _children["rtspanSpanSrcToL2CktEpAtt-items"] = rtspanspansrctol2cktepatt_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        _children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(rsvxlaneppatt_items != nullptr)
    {
        _children["rsvxlanEppAtt-items"] = rsvxlaneppatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap = value;
        mcastencap.value_namespace = name_space;
        mcastencap.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enfPref")
    {
        enfpref = value;
        enfpref.value_namespace = name_space;
        enfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPrio")
    {
        qosprio = value;
        qosprio.value_namespace = name_space;
        qosprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "enfPref")
    {
        enfpref.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "qosPrio")
    {
        qosprio.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvxlanEppAtt-items" || name == "encap" || name == "mcastEncap" || name == "name" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        ent_->parent = this;
        rtspanspansrctol2cktepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtspanspansrctol2cktepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        ent_->parent = this;
        rtfvdomifconn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvdomifconn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::RsvxlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvxlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::~RsvxlanEppAttItems()
{
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvxlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsextBDItems::RsextBDItems()
    :
    rsextbd_list(this, {"tdn"})
{

    yang_name = "rsextBD-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsextBDItems::~RsextBDItems()
{
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsextbd_list.len(); index++)
    {
        if(rsextbd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::has_operation() const
{
    for (std::size_t index=0; index<rsextbd_list.len(); index++)
    {
        if(rsextbd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsextBDItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsextBD-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsextBDItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::RsextBDItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsExtBD-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList>();
        ent_->parent = this;
        rsextbd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::RsextBDItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsextbd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::RsextBDItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::RsextBDItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsExtBD-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::RsExtBDList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "RsExtBD-list"; yang_parent_name = "rsextBD-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::~RsExtBDList()
{
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsExtBD-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsbdVsanMapItems()
    :
    rsbdvsanmap_list(this, {"tdn"})
{

    yang_name = "rsbdVsanMap-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::~RsbdVsanMapItems()
{
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsbdvsanmap_list.len(); index++)
    {
        if(rsbdvsanmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::has_operation() const
{
    for (std::size_t index=0; index<rsbdvsanmap_list.len(); index++)
    {
        if(rsbdvsanmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsbdVsanMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsBdVsanMap-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList>();
        ent_->parent = this;
        rsbdvsanmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsbdvsanmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsBdVsanMap-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::RsBdVsanMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    assocoperst{YType::enumeration, "assocOperSt"}
{

    yang_name = "RsBdVsanMap-list"; yang_parent_name = "rsbdVsanMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::~RsBdVsanMapList()
{
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| assocoperst.is_set;
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(assocoperst.yfilter);
}

std::string System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsBdVsanMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (assocoperst.is_set || is_set(assocoperst.yfilter)) leaf_name_data.push_back(assocoperst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assocOperSt")
    {
        assocoperst = value;
        assocoperst.value_namespace = name_space;
        assocoperst.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
    if(value_path == "assocOperSt")
    {
        assocoperst.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "assocOperSt")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto ent_ = std::make_shared<System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        ent_->parent = this;
        rtfvdomifconn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvdomifconn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::BdItems_::BDList::DbgVlanStatsItems::DbgVlanStatsItems()
    :
    inucastoctets{YType::uint64, "inUcastOctets"},
    inucastpkts{YType::uint64, "inUcastPkts"},
    inmcastoctets{YType::uint64, "inMcastOctets"},
    inmcastpkts{YType::uint64, "inMcastPkts"},
    inbcastoctets{YType::uint64, "inBcastOctets"},
    inbcastpkts{YType::uint64, "inBcastPkts"},
    inl3ucastoctets{YType::uint64, "inL3UcastOctets"},
    inl3ucastpkts{YType::uint64, "inL3UcastPkts"},
    outucastoctets{YType::uint64, "outUcastOctets"},
    outucastpkts{YType::uint64, "outUcastPkts"}
{

    yang_name = "dbgVlanStats-items"; yang_parent_name = "BD-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::BdItems_::BDList::DbgVlanStatsItems::~DbgVlanStatsItems()
{
}

bool System::BdItems::BdItems_::BDList::DbgVlanStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return inucastoctets.is_set
	|| inucastpkts.is_set
	|| inmcastoctets.is_set
	|| inmcastpkts.is_set
	|| inbcastoctets.is_set
	|| inbcastpkts.is_set
	|| inl3ucastoctets.is_set
	|| inl3ucastpkts.is_set
	|| outucastoctets.is_set
	|| outucastpkts.is_set;
}

bool System::BdItems::BdItems_::BDList::DbgVlanStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inucastoctets.yfilter)
	|| ydk::is_set(inucastpkts.yfilter)
	|| ydk::is_set(inmcastoctets.yfilter)
	|| ydk::is_set(inmcastpkts.yfilter)
	|| ydk::is_set(inbcastoctets.yfilter)
	|| ydk::is_set(inbcastpkts.yfilter)
	|| ydk::is_set(inl3ucastoctets.yfilter)
	|| ydk::is_set(inl3ucastpkts.yfilter)
	|| ydk::is_set(outucastoctets.yfilter)
	|| ydk::is_set(outucastpkts.yfilter);
}

std::string System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgVlanStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inucastoctets.is_set || is_set(inucastoctets.yfilter)) leaf_name_data.push_back(inucastoctets.get_name_leafdata());
    if (inucastpkts.is_set || is_set(inucastpkts.yfilter)) leaf_name_data.push_back(inucastpkts.get_name_leafdata());
    if (inmcastoctets.is_set || is_set(inmcastoctets.yfilter)) leaf_name_data.push_back(inmcastoctets.get_name_leafdata());
    if (inmcastpkts.is_set || is_set(inmcastpkts.yfilter)) leaf_name_data.push_back(inmcastpkts.get_name_leafdata());
    if (inbcastoctets.is_set || is_set(inbcastoctets.yfilter)) leaf_name_data.push_back(inbcastoctets.get_name_leafdata());
    if (inbcastpkts.is_set || is_set(inbcastpkts.yfilter)) leaf_name_data.push_back(inbcastpkts.get_name_leafdata());
    if (inl3ucastoctets.is_set || is_set(inl3ucastoctets.yfilter)) leaf_name_data.push_back(inl3ucastoctets.get_name_leafdata());
    if (inl3ucastpkts.is_set || is_set(inl3ucastpkts.yfilter)) leaf_name_data.push_back(inl3ucastpkts.get_name_leafdata());
    if (outucastoctets.is_set || is_set(outucastoctets.yfilter)) leaf_name_data.push_back(outucastoctets.get_name_leafdata());
    if (outucastpkts.is_set || is_set(outucastpkts.yfilter)) leaf_name_data.push_back(outucastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::BdItems_::BDList::DbgVlanStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::BdItems_::BDList::DbgVlanStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inUcastOctets")
    {
        inucastoctets = value;
        inucastoctets.value_namespace = name_space;
        inucastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inUcastPkts")
    {
        inucastpkts = value;
        inucastpkts.value_namespace = name_space;
        inucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastOctets")
    {
        inmcastoctets = value;
        inmcastoctets.value_namespace = name_space;
        inmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts = value;
        inmcastpkts.value_namespace = name_space;
        inmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inBcastOctets")
    {
        inbcastoctets = value;
        inbcastoctets.value_namespace = name_space;
        inbcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inBcastPkts")
    {
        inbcastpkts = value;
        inbcastpkts.value_namespace = name_space;
        inbcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inL3UcastOctets")
    {
        inl3ucastoctets = value;
        inl3ucastoctets.value_namespace = name_space;
        inl3ucastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inL3UcastPkts")
    {
        inl3ucastpkts = value;
        inl3ucastpkts.value_namespace = name_space;
        inl3ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outUcastOctets")
    {
        outucastoctets = value;
        outucastoctets.value_namespace = name_space;
        outucastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outUcastPkts")
    {
        outucastpkts = value;
        outucastpkts.value_namespace = name_space;
        outucastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::BdItems_::BDList::DbgVlanStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inUcastOctets")
    {
        inucastoctets.yfilter = yfilter;
    }
    if(value_path == "inUcastPkts")
    {
        inucastpkts.yfilter = yfilter;
    }
    if(value_path == "inMcastOctets")
    {
        inmcastoctets.yfilter = yfilter;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts.yfilter = yfilter;
    }
    if(value_path == "inBcastOctets")
    {
        inbcastoctets.yfilter = yfilter;
    }
    if(value_path == "inBcastPkts")
    {
        inbcastpkts.yfilter = yfilter;
    }
    if(value_path == "inL3UcastOctets")
    {
        inl3ucastoctets.yfilter = yfilter;
    }
    if(value_path == "inL3UcastPkts")
    {
        inl3ucastpkts.yfilter = yfilter;
    }
    if(value_path == "outUcastOctets")
    {
        outucastoctets.yfilter = yfilter;
    }
    if(value_path == "outUcastPkts")
    {
        outucastpkts.yfilter = yfilter;
    }
}

bool System::BdItems::BdItems_::BDList::DbgVlanStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inUcastOctets" || name == "inUcastPkts" || name == "inMcastOctets" || name == "inMcastPkts" || name == "inBcastOctets" || name == "inBcastPkts" || name == "inL3UcastOctets" || name == "inL3UcastPkts" || name == "outUcastOctets" || name == "outUcastPkts")
        return true;
    return false;
}

System::BdItems::VlanItems::VlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vlan-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanItems::~VlanItems()
{
}

bool System::BdItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList>();
        ent_->parent = this;
        cktep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cktep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    fabencap{YType::str, "fabEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"},
    enfpref{YType::enumeration, "enfPref"},
    pctag{YType::uint32, "pcTag"},
    qosprio{YType::enumeration, "qosPrio"},
    epgdn{YType::str, "epgDn"}
        ,
    mac_items(std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems>())
    , db_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvlaneppatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems>())
{
    mac_items->parent = this;
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| fabencap.is_set
	|| name.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| enfpref.is_set
	|| pctag.is_set
	|| qosprio.is_set
	|| epgdn.is_set
	|| (mac_items !=  nullptr && mac_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvlaneppatt_items !=  nullptr && rsvlaneppatt_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(fabencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(enfpref.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(qosprio.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (mac_items !=  nullptr && mac_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvlaneppatt_items !=  nullptr && rsvlaneppatt_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (enfpref.is_set || is_set(enfpref.yfilter)) leaf_name_data.push_back(enfpref.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (qosprio.is_set || is_set(qosprio.yfilter)) leaf_name_data.push_back(qosprio.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems>();
        }
        return mac_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvlanEppAtt-items")
    {
        if(rsvlaneppatt_items == nullptr)
        {
            rsvlaneppatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems>();
        }
        return rsvlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(rtspanspansrctol2cktepatt_items != nullptr)
    {
        _children["rtspanSpanSrcToL2CktEpAtt-items"] = rtspanspansrctol2cktepatt_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        _children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(rsvlaneppatt_items != nullptr)
    {
        _children["rsvlanEppAtt-items"] = rsvlaneppatt_items;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enfPref")
    {
        enfpref = value;
        enfpref.value_namespace = name_space;
        enfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPrio")
    {
        qosprio = value;
        qosprio.value_namespace = name_space;
        qosprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "enfPref")
    {
        enfpref.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "qosPrio")
    {
        qosprio.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::BdItems::VlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-items" || name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvlanEppAtt-items" || name == "encap" || name == "fabEncap" || name == "name" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacItems()
    :
    macep_list(this, {"mac"})
{

    yang_name = "mac-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::~MacItems()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::MacEpList()
    :
    mac{YType::str, "mac"},
    if_{YType::str, "if"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
        ,
    rtfvepdefreftol2macep_items(std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>())
{
    rtfvepdefreftol2macep_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return mac.is_set
	|| if_.is_set
	|| operst.is_set
	|| name.is_set
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtfvepdefreftol2macep_items !=  nullptr && rtfvepdefreftol2macep_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(mac, "mac");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefRefToL2MacEp-items")
    {
        if(rtfvepdefreftol2macep_items == nullptr)
        {
            rtfvepdefreftol2macep_items = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems>();
        }
        return rtfvepdefreftol2macep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvepdefreftol2macep_items != nullptr)
    {
        _children["rtfvEpDefRefToL2MacEp-items"] = rtfvepdefreftol2macep_items;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
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

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
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

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefRefToL2MacEp-items" || name == "mac" || name == "if" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtfvEpDefRefToL2MacEpItems()
    :
    rtfvepdefreftol2macep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToL2MacEp-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::~RtfvEpDefRefToL2MacEpItems()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftol2macep_list.len(); index++)
    {
        if(rtfvepdefreftol2macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToL2MacEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToL2MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList>();
        ent_->parent = this;
        rtfvepdefreftol2macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvepdefreftol2macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToL2MacEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::RtFvEpDefRefToL2MacEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefRefToL2MacEp-list"; yang_parent_name = "rtfvEpDefRefToL2MacEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::~RtFvEpDefRefToL2MacEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToL2MacEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        ent_->parent = this;
        rtspanspansrctol2cktepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtspanspansrctol2cktepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        ent_->parent = this;
        rtfvdomifconn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvdomifconn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::RsvlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::~RsvlanEppAttItems()
{
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::BdItems::VxlanItems::VxlanItems()
    :
    cktep_list(this, {"encap"})
{

    yang_name = "vxlan-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VxlanItems::~VxlanItems()
{
}

bool System::BdItems::VxlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::has_operation() const
{
    for (std::size_t index=0; index<cktep_list.len(); index++)
    {
        if(cktep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VxlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CktEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList>();
        ent_->parent = this;
        cktep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cktep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CktEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::CktEpList()
    :
    encap{YType::str, "encap"},
    mcastencap{YType::str, "mcastEncap"},
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    hwid{YType::uint32, "hwId"},
    mode{YType::enumeration, "mode"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    createts{YType::str, "createTs"},
    ctrl{YType::str, "ctrl"},
    enfpref{YType::enumeration, "enfPref"},
    pctag{YType::uint32, "pcTag"},
    qosprio{YType::enumeration, "qosPrio"},
    epgdn{YType::str, "epgDn"}
        ,
    db_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems>())
    , rtspanspansrctol2cktepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>())
    , rtfvdomifconn_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems>())
    , rsvxlaneppatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems>())
{
    db_items->parent = this;
    rtspanspansrctol2cktepatt_items->parent = this;
    rtfvdomifconn_items->parent = this;
    rsvxlaneppatt_items->parent = this;

    yang_name = "CktEp-list"; yang_parent_name = "vxlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdItems::VxlanItems::CktEpList::~CktEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::has_data() const
{
    if (is_presence_container) return true;
    return encap.is_set
	|| mcastencap.is_set
	|| name.is_set
	|| id.is_set
	|| hwid.is_set
	|| mode.is_set
	|| adminst.is_set
	|| operst.is_set
	|| createts.is_set
	|| ctrl.is_set
	|| enfpref.is_set
	|| pctag.is_set
	|| qosprio.is_set
	|| epgdn.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_data())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_data())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(mcastencap.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hwid.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(enfpref.yfilter)
	|| ydk::is_set(pctag.yfilter)
	|| ydk::is_set(qosprio.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (rtspanspansrctol2cktepatt_items !=  nullptr && rtspanspansrctol2cktepatt_items->has_operation())
	|| (rtfvdomifconn_items !=  nullptr && rtfvdomifconn_items->has_operation())
	|| (rsvxlaneppatt_items !=  nullptr && rsvxlaneppatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bd-items/vxlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdItems::VxlanItems::CktEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CktEp-list";
    ADD_KEY_TOKEN(encap, "encap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (mcastencap.is_set || is_set(mcastencap.yfilter)) leaf_name_data.push_back(mcastencap.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hwid.is_set || is_set(hwid.yfilter)) leaf_name_data.push_back(hwid.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (enfpref.is_set || is_set(enfpref.yfilter)) leaf_name_data.push_back(enfpref.get_name_leafdata());
    if (pctag.is_set || is_set(pctag.yfilter)) leaf_name_data.push_back(pctag.get_name_leafdata());
    if (qosprio.is_set || is_set(qosprio.yfilter)) leaf_name_data.push_back(qosprio.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "rtspanSpanSrcToL2CktEpAtt-items")
    {
        if(rtspanspansrctol2cktepatt_items == nullptr)
        {
            rtspanspansrctol2cktepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems>();
        }
        return rtspanspansrctol2cktepatt_items;
    }

    if(child_yang_name == "rtfvDomIfConn-items")
    {
        if(rtfvdomifconn_items == nullptr)
        {
            rtfvdomifconn_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems>();
        }
        return rtfvdomifconn_items;
    }

    if(child_yang_name == "rsvxlanEppAtt-items")
    {
        if(rsvxlaneppatt_items == nullptr)
        {
            rsvxlaneppatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems>();
        }
        return rsvxlaneppatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(rtspanspansrctol2cktepatt_items != nullptr)
    {
        _children["rtspanSpanSrcToL2CktEpAtt-items"] = rtspanspansrctol2cktepatt_items;
    }

    if(rtfvdomifconn_items != nullptr)
    {
        _children["rtfvDomIfConn-items"] = rtfvdomifconn_items;
    }

    if(rsvxlaneppatt_items != nullptr)
    {
        _children["rsvxlanEppAtt-items"] = rsvxlaneppatt_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap = value;
        mcastencap.value_namespace = name_space;
        mcastencap.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "hwId")
    {
        hwid = value;
        hwid.value_namespace = name_space;
        hwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enfPref")
    {
        enfpref = value;
        enfpref.value_namespace = name_space;
        enfpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcTag")
    {
        pctag = value;
        pctag.value_namespace = name_space;
        pctag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosPrio")
    {
        qosprio = value;
        qosprio.value_namespace = name_space;
        qosprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "mcastEncap")
    {
        mcastencap.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hwId")
    {
        hwid.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "enfPref")
    {
        enfpref.yfilter = yfilter;
    }
    if(value_path == "pcTag")
    {
        pctag.yfilter = yfilter;
    }
    if(value_path == "qosPrio")
    {
        qosprio.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "rtspanSpanSrcToL2CktEpAtt-items" || name == "rtfvDomIfConn-items" || name == "rsvxlanEppAtt-items" || name == "encap" || name == "mcastEncap" || name == "name" || name == "id" || name == "hwId" || name == "mode" || name == "adminSt" || name == "operSt" || name == "createTs" || name == "ctrl" || name == "enfPref" || name == "pcTag" || name == "qosPrio" || name == "epgDn")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::~DbItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    ip_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems>())
    , mac_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems>())
{
    ip_items->parent = this;
    mac_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::~DbList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (mac_items !=  nullptr && mac_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (mac_items !=  nullptr && mac_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "mac-items")
    {
        if(mac_items == nullptr)
        {
            mac_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems>();
        }
        return mac_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(mac_items != nullptr)
    {
        _children["mac-items"] = mac_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "mac-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpItems()
    :
    ipep_list(this, {"addr"})
{

    yang_name = "ip-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::~IpItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<ipep_list.len(); index++)
    {
        if(ipep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "IpEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList>();
        ent_->parent = this;
        ipep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IpEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::IpEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"}
        ,
    rtipeprslttoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>())
    , rtmaceprslttoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>())
{
    rtipeprslttoipepatt_items->parent = this;
    rtmaceprslttoipepatt_items->parent = this;

    yang_name = "IpEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::~IpEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_data())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (rtipeprslttoipepatt_items !=  nullptr && rtipeprslttoipepatt_items->has_operation())
	|| (rtmaceprslttoipepatt_items !=  nullptr && rtmaceprslttoipepatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IpEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtIpEpRslttoIpEpAtt-items")
    {
        if(rtipeprslttoipepatt_items == nullptr)
        {
            rtipeprslttoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems>();
        }
        return rtipeprslttoipepatt_items;
    }

    if(child_yang_name == "rtMacEpRslttoIpEpAtt-items")
    {
        if(rtmaceprslttoipepatt_items == nullptr)
        {
            rtmaceprslttoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems>();
        }
        return rtmaceprslttoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtipeprslttoipepatt_items != nullptr)
    {
        _children["rtIpEpRslttoIpEpAtt-items"] = rtipeprslttoipepatt_items;
    }

    if(rtmaceprslttoipepatt_items != nullptr)
    {
        _children["rtMacEpRslttoIpEpAtt-items"] = rtmaceprslttoipepatt_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtIpEpRslttoIpEpAtt-items" || name == "rtMacEpRslttoIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::RtIpEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtIpEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::~RtIpEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtIpEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::RtMacEpRslttoIpEpAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtMacEpRslttoIpEpAtt-items"; yang_parent_name = "IpEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::~RtMacEpRslttoIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtMacEpRslttoIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacItems()
    :
    macep_list(this, {"addr"})
{

    yang_name = "mac-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::~MacItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_operation() const
{
    for (std::size_t index=0; index<macep_list.len(); index++)
    {
        if(macep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MacEp-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList>();
        ent_->parent = this;
        macep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : macep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MacEp-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::MacEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    ifid{YType::str, "ifId"},
    flags{YType::str, "flags"},
    createts{YType::str, "createTs"}
        ,
    rsmaceptoipepatt_items(std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>())
{
    rsmaceptoipepatt_items->parent = this;

    yang_name = "MacEp-list"; yang_parent_name = "mac-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::~MacEpList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| ifid.is_set
	|| flags.is_set
	|| createts.is_set
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_data());
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| (rsmaceptoipepatt_items !=  nullptr && rsmaceptoipepatt_items->has_operation());
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MacEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsmacEpToIpEpAtt-items")
    {
        if(rsmaceptoipepatt_items == nullptr)
        {
            rsmaceptoipepatt_items = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems>();
        }
        return rsmaceptoipepatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsmaceptoipepatt_items != nullptr)
    {
        _children["rsmacEpToIpEpAtt-items"] = rsmaceptoipepatt_items;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsmacEpToIpEpAtt-items" || name == "addr" || name == "name" || name == "ifId" || name == "flags" || name == "createTs")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsmacEpToIpEpAttItems()
    :
    rsmaceptoipepatt_list(this, {"tdn"})
{

    yang_name = "rsmacEpToIpEpAtt-items"; yang_parent_name = "MacEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::~RsmacEpToIpEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rsmaceptoipepatt_list.len(); index++)
    {
        if(rsmaceptoipepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmacEpToIpEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMacEpToIpEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList>();
        ent_->parent = this;
        rsmaceptoipepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsmaceptoipepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMacEpToIpEpAtt-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::RsMacEpToIpEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsMacEpToIpEpAtt-list"; yang_parent_name = "rsmacEpToIpEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::~RsMacEpToIpEpAttList()
{
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMacEpToIpEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtspanSpanSrcToL2CktEpAttItems()
    :
    rtspanspansrctol2cktepatt_list(this, {"tdn"})
{

    yang_name = "rtspanSpanSrcToL2CktEpAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::~RtspanSpanSrcToL2CktEpAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtspanspansrctol2cktepatt_list.len(); index++)
    {
        if(rtspanspansrctol2cktepatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtspanSpanSrcToL2CktEpAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtSpanSpanSrcToL2CktEpAtt-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList>();
        ent_->parent = this;
        rtspanspansrctol2cktepatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtspanspansrctol2cktepatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtSpanSpanSrcToL2CktEpAtt-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::RtSpanSpanSrcToL2CktEpAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtSpanSpanSrcToL2CktEpAtt-list"; yang_parent_name = "rtspanSpanSrcToL2CktEpAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::~RtSpanSpanSrcToL2CktEpAttList()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtSpanSpanSrcToL2CktEpAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtfvDomIfConnItems()
    :
    rtfvdomifconn_list(this, {"tdn"})
{

    yang_name = "rtfvDomIfConn-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::~RtfvDomIfConnItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvdomifconn_list.len(); index++)
    {
        if(rtfvdomifconn_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvDomIfConn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvDomIfConn-list")
    {
        auto ent_ = std::make_shared<System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList>();
        ent_->parent = this;
        rtfvdomifconn_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvdomifconn_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvDomIfConn-list")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::RtFvDomIfConnList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvDomIfConn-list"; yang_parent_name = "rtfvDomIfConn-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::~RtFvDomIfConnList()
{
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvDomIfConn-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::RsvxlanEppAttItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsvxlanEppAtt-items"; yang_parent_name = "CktEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::~RsvxlanEppAttItems()
{
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set;
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter);
}

std::string System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvxlanEppAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
}

bool System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::TemplateTableItems::TemplateTableItems()
    :
    templateentry_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems>())
{
    templateentry_items->parent = this;

    yang_name = "templateTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::~TemplateTableItems()
{
}

bool System::TemplateTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (templateentry_items !=  nullptr && templateentry_items->has_data());
}

bool System::TemplateTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (templateentry_items !=  nullptr && templateentry_items->has_operation());
}

std::string System::TemplateTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templateTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "templateEntry-items")
    {
        if(templateentry_items == nullptr)
        {
            templateentry_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems>();
        }
        return templateentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(templateentry_items != nullptr)
    {
        _children["templateEntry-items"] = templateentry_items;
    }

    return _children;
}

void System::TemplateTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templateEntry-items")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryItems()
    :
    templateentry_list(this, {"name"})
{

    yang_name = "templateEntry-items"; yang_parent_name = "templateTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::TemplateEntryItems::~TemplateEntryItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<templateentry_list.len(); index++)
    {
        if(templateentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TemplateTableItems::TemplateEntryItems::has_operation() const
{
    for (std::size_t index=0; index<templateentry_list.len(); index++)
    {
        if(templateentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/templateTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::TemplateEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templateEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TemplateEntry-list")
    {
        auto ent_ = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList>();
        ent_->parent = this;
        templateentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : templateentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::TemplateEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::TemplateEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TemplateEntry-list")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::TemplateEntryList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    refcount{YType::uint32, "refCount"}
        ,
    optable_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems>())
{
    optable_items->parent = this;

    yang_name = "TemplateEntry-list"; yang_parent_name = "templateEntry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::~TemplateEntryList()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| description.is_set
	|| refcount.is_set
	|| (optable_items !=  nullptr && optable_items->has_data());
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| (optable_items !=  nullptr && optable_items->has_operation());
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/templateTable-items/templateEntry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TemplateEntry-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opTable-items")
    {
        if(optable_items == nullptr)
        {
            optable_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems>();
        }
        return optable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(optable_items != nullptr)
    {
        _children["opTable-items"] = optable_items;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opTable-items" || name == "name" || name == "description" || name == "refCount")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpTableItems()
    :
    description{YType::str, "description"}
        ,
    opentry_items(std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems>())
{
    opentry_items->parent = this;

    yang_name = "opTable-items"; yang_parent_name = "TemplateEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::~OpTableItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (opentry_items !=  nullptr && opentry_items->has_data());
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (opentry_items !=  nullptr && opentry_items->has_operation());
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "opEntry-items")
    {
        if(opentry_items == nullptr)
        {
            opentry_items = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems>();
        }
        return opentry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(opentry_items != nullptr)
    {
        _children["opEntry-items"] = opentry_items;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opEntry-items" || name == "description")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryItems()
    :
    opentry_list(this, {"operationtype"})
{

    yang_name = "opEntry-items"; yang_parent_name = "opTable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::~OpEntryItems()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<opentry_list.len(); index++)
    {
        if(opentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_operation() const
{
    for (std::size_t index=0; index<opentry_list.len(); index++)
    {
        if(opentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opEntry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "OpEntry-list")
    {
        auto ent_ = std::make_shared<System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList>();
        ent_->parent = this;
        opentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : opentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "OpEntry-list")
        return true;
    return false;
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::OpEntryList()
    :
    operationtype{YType::enumeration, "operationType"},
    templatetype{YType::enumeration, "templateType"},
    substitutestring{YType::str, "substituteString"},
    configstring{YType::str, "configString"},
    description{YType::str, "description"},
    refcount{YType::uint32, "refCount"}
{

    yang_name = "OpEntry-list"; yang_parent_name = "opEntry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::~OpEntryList()
{
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_data() const
{
    if (is_presence_container) return true;
    return operationtype.is_set
	|| templatetype.is_set
	|| substitutestring.is_set
	|| configstring.is_set
	|| description.is_set
	|| refcount.is_set;
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operationtype.yfilter)
	|| ydk::is_set(templatetype.yfilter)
	|| ydk::is_set(substitutestring.yfilter)
	|| ydk::is_set(configstring.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(refcount.yfilter);
}

std::string System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OpEntry-list";
    ADD_KEY_TOKEN(operationtype, "operationType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operationtype.is_set || is_set(operationtype.yfilter)) leaf_name_data.push_back(operationtype.get_name_leafdata());
    if (templatetype.is_set || is_set(templatetype.yfilter)) leaf_name_data.push_back(templatetype.get_name_leafdata());
    if (substitutestring.is_set || is_set(substitutestring.yfilter)) leaf_name_data.push_back(substitutestring.get_name_leafdata());
    if (configstring.is_set || is_set(configstring.yfilter)) leaf_name_data.push_back(configstring.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operationType")
    {
        operationtype = value;
        operationtype.value_namespace = name_space;
        operationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "templateType")
    {
        templatetype = value;
        templatetype.value_namespace = name_space;
        templatetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "substituteString")
    {
        substitutestring = value;
        substitutestring.value_namespace = name_space;
        substitutestring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configString")
    {
        configstring = value;
        configstring.value_namespace = name_space;
        configstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refCount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operationType")
    {
        operationtype.yfilter = yfilter;
    }
    if(value_path == "templateType")
    {
        templatetype.yfilter = yfilter;
    }
    if(value_path == "substituteString")
    {
        substitutestring.yfilter = yfilter;
    }
    if(value_path == "configString")
    {
        configstring.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "refCount")
    {
        refcount.yfilter = yfilter;
    }
}

bool System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operationType" || name == "templateType" || name == "substituteString" || name == "configString" || name == "description" || name == "refCount")
        return true;
    return false;
}

System::FcItems::FcItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    vfc_items(std::make_shared<System::FcItems::VfcItems>())
{
    vfc_items->parent = this;

    yang_name = "fc-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::~FcItems()
{
}

bool System::FcItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (vfc_items !=  nullptr && vfc_items->has_data());
}

bool System::FcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (vfc_items !=  nullptr && vfc_items->has_operation());
}

std::string System::FcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfc-items")
    {
        if(vfc_items == nullptr)
        {
            vfc_items = std::make_shared<System::FcItems::VfcItems>();
        }
        return vfc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vfc_items != nullptr)
    {
        _children["vfc-items"] = vfc_items;
    }

    return _children;
}

void System::FcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfc-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcItems()
    :
    vfcif_list(this, {"id"})
{

    yang_name = "vfc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::VfcItems::~VfcItems()
{
}

bool System::FcItems::VfcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::has_operation() const
{
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::VfcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcIf-list")
    {
        auto ent_ = std::make_shared<System::FcItems::VfcItems::VfcIfList>();
        ent_->parent = this;
        vfcif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfcif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcItems::VfcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcIf-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::VfcIfList()
    :
    id{YType::str, "id"},
    boundif{YType::str, "boundIf"},
    boundmac{YType::str, "boundMac"},
    disablefka{YType::enumeration, "disableFka"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    mode{YType::enumeration, "mode"},
    trunkmode{YType::enumeration, "trunkMode"},
    trunkvsans{YType::str, "trunkVsans"},
    operportvsan{YType::uint32, "operPortVsan"},
    opermode{YType::enumeration, "operMode"},
    operst{YType::str, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    opertrunkmode{YType::enumeration, "operTrunkMode"},
    trunkportupvsanbmp{YType::str, "trunkPortUpVsanBmp"},
    trunkisolatedvsanbmp{YType::str, "trunkIsolatedVsanBmp"},
    allowedvsanbmp{YType::str, "allowedVsanBmp"},
    portwwn{YType::str, "portWwn"},
    lastlinkstchg{YType::str, "lastLinkStChg"}
        ,
    rssrvextifmap_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems>())
    , rtvsanifmap_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems>())
    , rtvrfmbr_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems>())
{
    rssrvextifmap_items->parent = this;
    rtvsanifmap_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "VfcIf-list"; yang_parent_name = "vfc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcItems::VfcItems::VfcIfList::~VfcIfList()
{
}

bool System::FcItems::VfcItems::VfcIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| boundif.is_set
	|| boundmac.is_set
	|| disablefka.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| mode.is_set
	|| trunkmode.is_set
	|| trunkvsans.is_set
	|| operportvsan.is_set
	|| opermode.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| opertrunkmode.is_set
	|| trunkportupvsanbmp.is_set
	|| trunkisolatedvsanbmp.is_set
	|| allowedvsanbmp.is_set
	|| portwwn.is_set
	|| lastlinkstchg.is_set
	|| (rssrvextifmap_items !=  nullptr && rssrvextifmap_items->has_data())
	|| (rtvsanifmap_items !=  nullptr && rtvsanifmap_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::FcItems::VfcItems::VfcIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(boundif.yfilter)
	|| ydk::is_set(boundmac.yfilter)
	|| ydk::is_set(disablefka.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(trunkmode.yfilter)
	|| ydk::is_set(trunkvsans.yfilter)
	|| ydk::is_set(operportvsan.yfilter)
	|| ydk::is_set(opermode.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(opertrunkmode.yfilter)
	|| ydk::is_set(trunkportupvsanbmp.yfilter)
	|| ydk::is_set(trunkisolatedvsanbmp.yfilter)
	|| ydk::is_set(allowedvsanbmp.yfilter)
	|| ydk::is_set(portwwn.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter)
	|| (rssrvextifmap_items !=  nullptr && rssrvextifmap_items->has_operation())
	|| (rtvsanifmap_items !=  nullptr && rtvsanifmap_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::FcItems::VfcItems::VfcIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fc-items/vfc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcItems::VfcItems::VfcIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (boundif.is_set || is_set(boundif.yfilter)) leaf_name_data.push_back(boundif.get_name_leafdata());
    if (boundmac.is_set || is_set(boundmac.yfilter)) leaf_name_data.push_back(boundmac.get_name_leafdata());
    if (disablefka.is_set || is_set(disablefka.yfilter)) leaf_name_data.push_back(disablefka.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (trunkmode.is_set || is_set(trunkmode.yfilter)) leaf_name_data.push_back(trunkmode.get_name_leafdata());
    if (trunkvsans.is_set || is_set(trunkvsans.yfilter)) leaf_name_data.push_back(trunkvsans.get_name_leafdata());
    if (operportvsan.is_set || is_set(operportvsan.yfilter)) leaf_name_data.push_back(operportvsan.get_name_leafdata());
    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (opertrunkmode.is_set || is_set(opertrunkmode.yfilter)) leaf_name_data.push_back(opertrunkmode.get_name_leafdata());
    if (trunkportupvsanbmp.is_set || is_set(trunkportupvsanbmp.yfilter)) leaf_name_data.push_back(trunkportupvsanbmp.get_name_leafdata());
    if (trunkisolatedvsanbmp.is_set || is_set(trunkisolatedvsanbmp.yfilter)) leaf_name_data.push_back(trunkisolatedvsanbmp.get_name_leafdata());
    if (allowedvsanbmp.is_set || is_set(allowedvsanbmp.yfilter)) leaf_name_data.push_back(allowedvsanbmp.get_name_leafdata());
    if (portwwn.is_set || is_set(portwwn.yfilter)) leaf_name_data.push_back(portwwn.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rssrvExtIfMap-items")
    {
        if(rssrvextifmap_items == nullptr)
        {
            rssrvextifmap_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems>();
        }
        return rssrvextifmap_items;
    }

    if(child_yang_name == "rtVsanIfMap-items")
    {
        if(rtvsanifmap_items == nullptr)
        {
            rtvsanifmap_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems>();
        }
        return rtvsanifmap_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rssrvextifmap_items != nullptr)
    {
        _children["rssrvExtIfMap-items"] = rssrvextifmap_items;
    }

    if(rtvsanifmap_items != nullptr)
    {
        _children["rtVsanIfMap-items"] = rtvsanifmap_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::FcItems::VfcItems::VfcIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundIf")
    {
        boundif = value;
        boundif.value_namespace = name_space;
        boundif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundMac")
    {
        boundmac = value;
        boundmac.value_namespace = name_space;
        boundmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableFka")
    {
        disablefka = value;
        disablefka.value_namespace = name_space;
        disablefka.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkMode")
    {
        trunkmode = value;
        trunkmode.value_namespace = name_space;
        trunkmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkVsans")
    {
        trunkvsans = value;
        trunkvsans.value_namespace = name_space;
        trunkvsans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortVsan")
    {
        operportvsan = value;
        operportvsan.value_namespace = name_space;
        operportvsan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operTrunkMode")
    {
        opertrunkmode = value;
        opertrunkmode.value_namespace = name_space;
        opertrunkmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkPortUpVsanBmp")
    {
        trunkportupvsanbmp = value;
        trunkportupvsanbmp.value_namespace = name_space;
        trunkportupvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunkIsolatedVsanBmp")
    {
        trunkisolatedvsanbmp = value;
        trunkisolatedvsanbmp.value_namespace = name_space;
        trunkisolatedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp = value;
        allowedvsanbmp.value_namespace = name_space;
        allowedvsanbmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portWwn")
    {
        portwwn = value;
        portwwn.value_namespace = name_space;
        portwwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "boundIf")
    {
        boundif.yfilter = yfilter;
    }
    if(value_path == "boundMac")
    {
        boundmac.yfilter = yfilter;
    }
    if(value_path == "disableFka")
    {
        disablefka.yfilter = yfilter;
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
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "trunkMode")
    {
        trunkmode.yfilter = yfilter;
    }
    if(value_path == "trunkVsans")
    {
        trunkvsans.yfilter = yfilter;
    }
    if(value_path == "operPortVsan")
    {
        operportvsan.yfilter = yfilter;
    }
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operTrunkMode")
    {
        opertrunkmode.yfilter = yfilter;
    }
    if(value_path == "trunkPortUpVsanBmp")
    {
        trunkportupvsanbmp.yfilter = yfilter;
    }
    if(value_path == "trunkIsolatedVsanBmp")
    {
        trunkisolatedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "allowedVsanBmp")
    {
        allowedvsanbmp.yfilter = yfilter;
    }
    if(value_path == "portWwn")
    {
        portwwn.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rssrvExtIfMap-items" || name == "rtVsanIfMap-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "boundIf" || name == "boundMac" || name == "disableFka" || name == "name" || name == "descr" || name == "adminSt" || name == "mode" || name == "trunkMode" || name == "trunkVsans" || name == "operPortVsan" || name == "operMode" || name == "operSt" || name == "operStQual" || name == "operTrunkMode" || name == "trunkPortUpVsanBmp" || name == "trunkIsolatedVsanBmp" || name == "allowedVsanBmp" || name == "portWwn" || name == "lastLinkStChg")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RssrvExtIfMapItems()
    :
    rssrvextifmap_list(this, {"tdn"})
{

    yang_name = "rssrvExtIfMap-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::~RssrvExtIfMapItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rssrvextifmap_list.len(); index++)
    {
        if(rssrvextifmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_operation() const
{
    for (std::size_t index=0; index<rssrvextifmap_list.len(); index++)
    {
        if(rssrvextifmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rssrvExtIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsSrvExtIfMap-list")
    {
        auto ent_ = std::make_shared<System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList>();
        ent_->parent = this;
        rssrvextifmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rssrvextifmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsSrvExtIfMap-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::RsSrvExtIfMapList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"},
    configstatus{YType::enumeration, "configStatus"}
{

    yang_name = "RsSrvExtIfMap-list"; yang_parent_name = "rssrvExtIfMap-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::~RsSrvExtIfMapList()
{
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| state.is_set
	|| statequal.is_set
	|| ttype.is_set
	|| rtype.is_set
	|| forceresolve.is_set
	|| configstatus.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(statequal.yfilter)
	|| ydk::is_set(ttype.yfilter)
	|| ydk::is_set(rtype.yfilter)
	|| ydk::is_set(forceresolve.yfilter)
	|| ydk::is_set(configstatus.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsSrvExtIfMap-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (statequal.is_set || is_set(statequal.yfilter)) leaf_name_data.push_back(statequal.get_name_leafdata());
    if (ttype.is_set || is_set(ttype.yfilter)) leaf_name_data.push_back(ttype.get_name_leafdata());
    if (rtype.is_set || is_set(rtype.yfilter)) leaf_name_data.push_back(rtype.get_name_leafdata());
    if (forceresolve.is_set || is_set(forceresolve.yfilter)) leaf_name_data.push_back(forceresolve.get_name_leafdata());
    if (configstatus.is_set || is_set(configstatus.yfilter)) leaf_name_data.push_back(configstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateQual")
    {
        statequal = value;
        statequal.value_namespace = name_space;
        statequal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tType")
    {
        ttype = value;
        ttype.value_namespace = name_space;
        ttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rType")
    {
        rtype = value;
        rtype.value_namespace = name_space;
        rtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forceResolve")
    {
        forceresolve = value;
        forceresolve.value_namespace = name_space;
        forceresolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configStatus")
    {
        configstatus = value;
        configstatus.value_namespace = name_space;
        configstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "stateQual")
    {
        statequal.yfilter = yfilter;
    }
    if(value_path == "tType")
    {
        ttype.yfilter = yfilter;
    }
    if(value_path == "rType")
    {
        rtype.yfilter = yfilter;
    }
    if(value_path == "forceResolve")
    {
        forceresolve.yfilter = yfilter;
    }
    if(value_path == "configStatus")
    {
        configstatus.yfilter = yfilter;
    }
}

bool System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve" || name == "configStatus")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::RtVsanIfMapItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtVsanIfMap-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::~RtVsanIfMapItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtVsanIfMap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::get_children() const
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

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::FcoeItems::FcoeItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::FcoeItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "fcoe-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::~FcoeItems()
{
}

bool System::FcoeItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::FcoeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::FcoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcoe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::FcoeItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::FcoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::FcoeItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::FcoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FcoeItems::InstItems::InstItems()
    :
    fipkaintvl{YType::uint32, "fipKaIntvl"},
    enablefex{YType::enumeration, "enableFex"},
    veloopback{YType::enumeration, "veLoopback"},
    fcmap{YType::uint32, "fcMap"},
    fcfprio{YType::uint32, "fcfPrio"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    vfc_items(std::make_shared<System::FcoeItems::InstItems::VfcItems>())
{
    vfc_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "fcoe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::~InstItems()
{
}

bool System::FcoeItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return fipkaintvl.is_set
	|| enablefex.is_set
	|| veloopback.is_set
	|| fcmap.is_set
	|| fcfprio.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (vfc_items !=  nullptr && vfc_items->has_data());
}

bool System::FcoeItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fipkaintvl.yfilter)
	|| ydk::is_set(enablefex.yfilter)
	|| ydk::is_set(veloopback.yfilter)
	|| ydk::is_set(fcmap.yfilter)
	|| ydk::is_set(fcfprio.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (vfc_items !=  nullptr && vfc_items->has_operation());
}

std::string System::FcoeItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fipkaintvl.is_set || is_set(fipkaintvl.yfilter)) leaf_name_data.push_back(fipkaintvl.get_name_leafdata());
    if (enablefex.is_set || is_set(enablefex.yfilter)) leaf_name_data.push_back(enablefex.get_name_leafdata());
    if (veloopback.is_set || is_set(veloopback.yfilter)) leaf_name_data.push_back(veloopback.get_name_leafdata());
    if (fcmap.is_set || is_set(fcmap.yfilter)) leaf_name_data.push_back(fcmap.get_name_leafdata());
    if (fcfprio.is_set || is_set(fcfprio.yfilter)) leaf_name_data.push_back(fcfprio.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfc-items")
    {
        if(vfc_items == nullptr)
        {
            vfc_items = std::make_shared<System::FcoeItems::InstItems::VfcItems>();
        }
        return vfc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vfc_items != nullptr)
    {
        _children["vfc-items"] = vfc_items;
    }

    return _children;
}

void System::FcoeItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl = value;
        fipkaintvl.value_namespace = name_space;
        fipkaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableFex")
    {
        enablefex = value;
        enablefex.value_namespace = name_space;
        enablefex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "veLoopback")
    {
        veloopback = value;
        veloopback.value_namespace = name_space;
        veloopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcMap")
    {
        fcmap = value;
        fcmap.value_namespace = name_space;
        fcmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio = value;
        fcfprio.value_namespace = name_space;
        fcfprio.value_namespace_prefix = name_space_prefix;
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

void System::FcoeItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl.yfilter = yfilter;
    }
    if(value_path == "enableFex")
    {
        enablefex.yfilter = yfilter;
    }
    if(value_path == "veLoopback")
    {
        veloopback.yfilter = yfilter;
    }
    if(value_path == "fcMap")
    {
        fcmap.yfilter = yfilter;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio.yfilter = yfilter;
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

bool System::FcoeItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfc-items" || name == "fipKaIntvl" || name == "enableFex" || name == "veLoopback" || name == "fcMap" || name == "fcfPrio" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcItems()
    :
    vfcif_list(this, {"id"})
{

    yang_name = "vfc-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::VfcItems::~VfcItems()
{
}

bool System::FcoeItems::InstItems::VfcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcoeItems::InstItems::VfcItems::has_operation() const
{
    for (std::size_t index=0; index<vfcif_list.len(); index++)
    {
        if(vfcif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::VfcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcIf-list")
    {
        auto ent_ = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList>();
        ent_->parent = this;
        vfcif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfcif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcoeItems::InstItems::VfcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcoeItems::InstItems::VfcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcoeItems::InstItems::VfcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcIf-list")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::VfcIfList()
    :
    id{YType::str, "id"},
    peermac{YType::str, "peerMac"},
    peerwwn{YType::str, "peerWwn"},
    fipkaintvl{YType::uint32, "fipKaIntvl"},
    fcfprio{YType::uint32, "fcfPrio"},
    mode{YType::str, "mode"}
        ,
    fcid_items(std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems>())
{
    fcid_items->parent = this;

    yang_name = "VfcIf-list"; yang_parent_name = "vfc-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::~VfcIfList()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| peermac.is_set
	|| peerwwn.is_set
	|| fipkaintvl.is_set
	|| fcfprio.is_set
	|| mode.is_set
	|| (fcid_items !=  nullptr && fcid_items->has_data());
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(peermac.yfilter)
	|| ydk::is_set(peerwwn.yfilter)
	|| ydk::is_set(fipkaintvl.yfilter)
	|| ydk::is_set(fcfprio.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (fcid_items !=  nullptr && fcid_items->has_operation());
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fcoe-items/inst-items/vfc-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (peermac.is_set || is_set(peermac.yfilter)) leaf_name_data.push_back(peermac.get_name_leafdata());
    if (peerwwn.is_set || is_set(peerwwn.yfilter)) leaf_name_data.push_back(peerwwn.get_name_leafdata());
    if (fipkaintvl.is_set || is_set(fipkaintvl.yfilter)) leaf_name_data.push_back(fipkaintvl.get_name_leafdata());
    if (fcfprio.is_set || is_set(fcfprio.yfilter)) leaf_name_data.push_back(fcfprio.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fcid-items")
    {
        if(fcid_items == nullptr)
        {
            fcid_items = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems>();
        }
        return fcid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fcid_items != nullptr)
    {
        _children["fcid-items"] = fcid_items;
    }

    return _children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerMac")
    {
        peermac = value;
        peermac.value_namespace = name_space;
        peermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerWwn")
    {
        peerwwn = value;
        peerwwn.value_namespace = name_space;
        peerwwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl = value;
        fipkaintvl.value_namespace = name_space;
        fipkaintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio = value;
        fcfprio.value_namespace = name_space;
        fcfprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "peerMac")
    {
        peermac.yfilter = yfilter;
    }
    if(value_path == "peerWwn")
    {
        peerwwn.yfilter = yfilter;
    }
    if(value_path == "fipKaIntvl")
    {
        fipkaintvl.yfilter = yfilter;
    }
    if(value_path == "fcfPrio")
    {
        fcfprio.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcid-items" || name == "id" || name == "peerMac" || name == "peerWwn" || name == "fipKaIntvl" || name == "fcfPrio" || name == "mode")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::FcidItems()
    :
    vfclogin_list(this, {"fcid"})
{

    yang_name = "fcid-items"; yang_parent_name = "VfcIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::~FcidItems()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfclogin_list.len(); index++)
    {
        if(vfclogin_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_operation() const
{
    for (std::size_t index=0; index<vfclogin_list.len(); index++)
    {
        if(vfclogin_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VfcLogin-list")
    {
        auto ent_ = std::make_shared<System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList>();
        ent_->parent = this;
        vfclogin_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vfclogin_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VfcLogin-list")
        return true;
    return false;
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::VfcLoginList()
    :
    fcid{YType::uint32, "fcId"},
    wwn{YType::str, "wwn"}
{

    yang_name = "VfcLogin-list"; yang_parent_name = "fcid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::~VfcLoginList()
{
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_data() const
{
    if (is_presence_container) return true;
    return fcid.is_set
	|| wwn.is_set;
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fcid.yfilter)
	|| ydk::is_set(wwn.yfilter);
}

std::string System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VfcLogin-list";
    ADD_KEY_TOKEN(fcid, "fcId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fcid.is_set || is_set(fcid.yfilter)) leaf_name_data.push_back(fcid.get_name_leafdata());
    if (wwn.is_set || is_set(wwn.yfilter)) leaf_name_data.push_back(wwn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fcId")
    {
        fcid = value;
        fcid.value_namespace = name_space;
        fcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wwn")
    {
        wwn = value;
        wwn.value_namespace = name_space;
        wwn.value_namespace_prefix = name_space_prefix;
    }
}

void System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fcId")
    {
        fcid.yfilter = yfilter;
    }
    if(value_path == "wwn")
    {
        wwn.yfilter = yfilter;
    }
}

bool System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcId" || name == "wwn")
        return true;
    return false;
}

System::NpvItems::NpvItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::NpvItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "npv-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::~NpvItems()
{
}

bool System::NpvItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NpvItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::NpvItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::NpvItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::NpvItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::NpvItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::NpvItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::NpvItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    srvif_items(std::make_shared<System::NpvItems::InstItems::SrvifItems>())
    , extif_items(std::make_shared<System::NpvItems::InstItems::ExtifItems>())
{
    srvif_items->parent = this;
    extif_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "npv-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::~InstItems()
{
}

bool System::NpvItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (srvif_items !=  nullptr && srvif_items->has_data())
	|| (extif_items !=  nullptr && extif_items->has_data());
}

bool System::NpvItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (srvif_items !=  nullptr && srvif_items->has_operation())
	|| (extif_items !=  nullptr && extif_items->has_operation());
}

std::string System::NpvItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srvif-items")
    {
        if(srvif_items == nullptr)
        {
            srvif_items = std::make_shared<System::NpvItems::InstItems::SrvifItems>();
        }
        return srvif_items;
    }

    if(child_yang_name == "extif-items")
    {
        if(extif_items == nullptr)
        {
            extif_items = std::make_shared<System::NpvItems::InstItems::ExtifItems>();
        }
        return extif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srvif_items != nullptr)
    {
        _children["srvif-items"] = srvif_items;
    }

    if(extif_items != nullptr)
    {
        _children["extif-items"] = extif_items;
    }

    return _children;
}

void System::NpvItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::NpvItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool System::NpvItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srvif-items" || name == "extif-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::NpvItems::InstItems::SrvifItems::SrvifItems()
    :
    srvif_list(this, {"id"})
{

    yang_name = "srvif-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NpvItems::InstItems::SrvifItems::~SrvifItems()
{
}

bool System::NpvItems::InstItems::SrvifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NpvItems::InstItems::SrvifItems::has_operation() const
{
    for (std::size_t index=0; index<srvif_list.len(); index++)
    {
        if(srvif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NpvItems::InstItems::SrvifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/npv-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NpvItems::InstItems::SrvifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srvif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NpvItems::InstItems::SrvifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NpvItems::InstItems::SrvifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SrvIf-list")
    {
        auto ent_ = std::make_shared<System::NpvItems::InstItems::SrvifItems::SrvIfList>();
        ent_->parent = this;
        srvif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NpvItems::InstItems::SrvifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srvif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NpvItems::InstItems::SrvifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NpvItems::InstItems::SrvifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NpvItems::InstItems::SrvifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SrvIf-list")
        return true;
    return false;
}


}
}

