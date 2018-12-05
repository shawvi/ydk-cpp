
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_32.hpp"
#include "Cisco_NX_OS_device_33.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::FmItems::MacsecItems::MacsecItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::MacsecItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "macsec-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MacsecItems::~MacsecItems()
{
}

bool System::FmItems::MacsecItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::MacsecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::MacsecItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MacsecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MacsecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MacsecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::MacsecItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MacsecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::MacsecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::MacsecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::MacsecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::MacsecItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "macsec-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MacsecItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::MacsecItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::MacsecItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::MacsecItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/macsec-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MacsecItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MacsecItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MacsecItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MacsecItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::MacsecItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::MacsecItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::MacsecItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/macsec-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::MacsecItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NpivItems::NpivItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::NpivItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "npiv-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NpivItems::~NpivItems()
{
}

bool System::FmItems::NpivItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::NpivItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::NpivItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NpivItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "npiv-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NpivItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NpivItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::NpivItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NpivItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::NpivItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::NpivItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NpivItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::NpivItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "npiv-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NpivItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::NpivItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::NpivItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::NpivItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/npiv-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NpivItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NpivItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NpivItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::NpivItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NpivItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::NpivItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::NpivItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::NpivItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/npiv-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::NpivItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::Pim6Items::Pim6Items()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::Pim6Items::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "pim6-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Pim6Items::~Pim6Items()
{
}

bool System::FmItems::Pim6Items::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::Pim6Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::Pim6Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Pim6Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim6-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Pim6Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Pim6Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::Pim6Items::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Pim6Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::Pim6Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::Pim6Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::Pim6Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::Pim6Items::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "pim6-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Pim6Items::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::Pim6Items::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::Pim6Items::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::Pim6Items::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim6-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Pim6Items::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Pim6Items::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Pim6Items::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Pim6Items::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::Pim6Items::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::Pim6Items::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::Pim6Items::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/pim6-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::Pim6Items::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::IsisItems::IsisItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::IsisItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "isis-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IsisItems::~IsisItems()
{
}

bool System::FmItems::IsisItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::IsisItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::IsisItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IsisItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IsisItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IsisItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::IsisItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IsisItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::IsisItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::IsisItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::IsisItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::IsisItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "isis-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IsisItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::IsisItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::IsisItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::IsisItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/isis-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IsisItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IsisItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IsisItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::IsisItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IsisItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::IsisItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::IsisItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::IsisItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/isis-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::IsisItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::HwtelemetryItems::HwtelemetryItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    maxinstance{YType::uint32, "maxInstance"}
        ,
    service_items(std::make_shared<System::FmItems::HwtelemetryItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "hwtelemetry-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HwtelemetryItems::~HwtelemetryItems()
{
}

bool System::FmItems::HwtelemetryItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| maxinstance.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::HwtelemetryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(maxinstance.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::HwtelemetryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HwtelemetryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwtelemetry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HwtelemetryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (maxinstance.is_set || is_set(maxinstance.yfilter)) leaf_name_data.push_back(maxinstance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HwtelemetryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::HwtelemetryItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HwtelemetryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::HwtelemetryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "maxInstance")
    {
        maxinstance = value;
        maxinstance.value_namespace = name_space;
        maxinstance.value_namespace_prefix = name_space_prefix;
    }
}

void System::FmItems::HwtelemetryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "maxInstance")
    {
        maxinstance.yfilter = yfilter;
    }
}

bool System::FmItems::HwtelemetryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt" || name == "maxInstance")
        return true;
    return false;
}

System::FmItems::HwtelemetryItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "hwtelemetry-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HwtelemetryItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::HwtelemetryItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::HwtelemetryItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hwtelemetry-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HwtelemetryItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HwtelemetryItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HwtelemetryItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::HwtelemetryItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::HwtelemetryItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::HwtelemetryItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/hwtelemetry-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::HwtelemetryItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PortsecItems::PortsecItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    service_items(std::make_shared<System::FmItems::PortsecItems::ServiceItems>())
{
    service_items->parent = this;

    yang_name = "portsec-items"; yang_parent_name = "fm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PortsecItems::~PortsecItems()
{
}

bool System::FmItems::PortsecItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (service_items !=  nullptr && service_items->has_data());
}

bool System::FmItems::PortsecItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (service_items !=  nullptr && service_items->has_operation());
}

std::string System::FmItems::PortsecItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PortsecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portsec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PortsecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PortsecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-items")
    {
        if(service_items == nullptr)
        {
            service_items = std::make_shared<System::FmItems::PortsecItems::ServiceItems>();
        }
        return service_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PortsecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_items != nullptr)
    {
        _children["service-items"] = service_items;
    }

    return _children;
}

void System::FmItems::PortsecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::FmItems::PortsecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PortsecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::FmItems::PortsecItems::ServiceItems::ServiceItems()
    :
    serviceinstance_list(this, {"id"})
{

    yang_name = "service-items"; yang_parent_name = "portsec-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PortsecItems::ServiceItems::~ServiceItems()
{
}

bool System::FmItems::PortsecItems::ServiceItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FmItems::PortsecItems::ServiceItems::has_operation() const
{
    for (std::size_t index=0; index<serviceinstance_list.len(); index++)
    {
        if(serviceinstance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FmItems::PortsecItems::ServiceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/portsec-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PortsecItems::ServiceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PortsecItems::ServiceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PortsecItems::ServiceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ServiceInstance-list")
    {
        auto ent_ = std::make_shared<System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList>();
        ent_->parent = this;
        serviceinstance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PortsecItems::ServiceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : serviceinstance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FmItems::PortsecItems::ServiceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FmItems::PortsecItems::ServiceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FmItems::PortsecItems::ServiceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ServiceInstance-list")
        return true;
    return false;
}

System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::ServiceInstanceList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "ServiceInstance-list"; yang_parent_name = "service-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::~ServiceInstanceList()
{
}

bool System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set;
}

bool System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fm-items/portsec-items/service-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ServiceInstance-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FmItems::PortsecItems::ServiceItems::ServiceInstanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt")
        return true;
    return false;
}

System::FsetItems::FsetItems()
    :
    featureset_list(this, {"name"})
{

    yang_name = "fset-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FsetItems::~FsetItems()
{
}

bool System::FsetItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<featureset_list.len(); index++)
    {
        if(featureset_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::FsetItems::has_operation() const
{
    for (std::size_t index=0; index<featureset_list.len(); index++)
    {
        if(featureset_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::FsetItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FsetItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fset-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FsetItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FsetItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FeatureSet-list")
    {
        auto ent_ = std::make_shared<System::FsetItems::FeatureSetList>();
        ent_->parent = this;
        featureset_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FsetItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : featureset_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::FsetItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::FsetItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::FsetItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FeatureSet-list")
        return true;
    return false;
}

System::FsetItems::FeatureSetList::FeatureSetList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    force{YType::boolean, "force"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "FeatureSet-list"; yang_parent_name = "fset-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::FsetItems::FeatureSetList::~FeatureSetList()
{
}

bool System::FsetItems::FeatureSetList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| force.is_set
	|| operst.is_set;
}

bool System::FsetItems::FeatureSetList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::FsetItems::FeatureSetList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/fset-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::FsetItems::FeatureSetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FeatureSet-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::FsetItems::FeatureSetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::FsetItems::FeatureSetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::FsetItems::FeatureSetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::FsetItems::FeatureSetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::FsetItems::FeatureSetList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::FsetItems::FeatureSetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "adminSt" || name == "force" || name == "operSt")
        return true;
    return false;
}

System::InstallItems::InstallItems()
    :
    imgpath{YType::str, "imgPath"},
    imgname{YType::str, "imgName"},
    operation_{YType::enumeration, "operation"},
    installtype{YType::enumeration, "installType"},
    biosforce{YType::enumeration, "biosForce"},
    stage{YType::enumeration, "stage"},
    upgerr{YType::enumeration, "upgErr"},
    upgerrstr{YType::str, "upgErrStr"}
        ,
    mod_items(std::make_shared<System::InstallItems::ModItems>())
{
    mod_items->parent = this;

    yang_name = "install-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstallItems::~InstallItems()
{
}

bool System::InstallItems::has_data() const
{
    if (is_presence_container) return true;
    return imgpath.is_set
	|| imgname.is_set
	|| operation_.is_set
	|| installtype.is_set
	|| biosforce.is_set
	|| stage.is_set
	|| upgerr.is_set
	|| upgerrstr.is_set
	|| (mod_items !=  nullptr && mod_items->has_data());
}

bool System::InstallItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(imgpath.yfilter)
	|| ydk::is_set(imgname.yfilter)
	|| ydk::is_set(operation_.yfilter)
	|| ydk::is_set(installtype.yfilter)
	|| ydk::is_set(biosforce.yfilter)
	|| ydk::is_set(stage.yfilter)
	|| ydk::is_set(upgerr.yfilter)
	|| ydk::is_set(upgerrstr.yfilter)
	|| (mod_items !=  nullptr && mod_items->has_operation());
}

std::string System::InstallItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstallItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (imgpath.is_set || is_set(imgpath.yfilter)) leaf_name_data.push_back(imgpath.get_name_leafdata());
    if (imgname.is_set || is_set(imgname.yfilter)) leaf_name_data.push_back(imgname.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());
    if (installtype.is_set || is_set(installtype.yfilter)) leaf_name_data.push_back(installtype.get_name_leafdata());
    if (biosforce.is_set || is_set(biosforce.yfilter)) leaf_name_data.push_back(biosforce.get_name_leafdata());
    if (stage.is_set || is_set(stage.yfilter)) leaf_name_data.push_back(stage.get_name_leafdata());
    if (upgerr.is_set || is_set(upgerr.yfilter)) leaf_name_data.push_back(upgerr.get_name_leafdata());
    if (upgerrstr.is_set || is_set(upgerrstr.yfilter)) leaf_name_data.push_back(upgerrstr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mod-items")
    {
        if(mod_items == nullptr)
        {
            mod_items = std::make_shared<System::InstallItems::ModItems>();
        }
        return mod_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mod_items != nullptr)
    {
        _children["mod-items"] = mod_items;
    }

    return _children;
}

void System::InstallItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "imgPath")
    {
        imgpath = value;
        imgpath.value_namespace = name_space;
        imgpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imgName")
    {
        imgname = value;
        imgname.value_namespace = name_space;
        imgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installType")
    {
        installtype = value;
        installtype.value_namespace = name_space;
        installtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "biosForce")
    {
        biosforce = value;
        biosforce.value_namespace = name_space;
        biosforce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage")
    {
        stage = value;
        stage.value_namespace = name_space;
        stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgErr")
    {
        upgerr = value;
        upgerr.value_namespace = name_space;
        upgerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgErrStr")
    {
        upgerrstr = value;
        upgerrstr.value_namespace = name_space;
        upgerrstr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstallItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "imgPath")
    {
        imgpath.yfilter = yfilter;
    }
    if(value_path == "imgName")
    {
        imgname.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
    if(value_path == "installType")
    {
        installtype.yfilter = yfilter;
    }
    if(value_path == "biosForce")
    {
        biosforce.yfilter = yfilter;
    }
    if(value_path == "stage")
    {
        stage.yfilter = yfilter;
    }
    if(value_path == "upgErr")
    {
        upgerr.yfilter = yfilter;
    }
    if(value_path == "upgErrStr")
    {
        upgerrstr.yfilter = yfilter;
    }
}

bool System::InstallItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mod-items" || name == "imgPath" || name == "imgName" || name == "operation" || name == "installType" || name == "biosForce" || name == "stage" || name == "upgErr" || name == "upgErrStr")
        return true;
    return false;
}

System::InstallItems::ModItems::ModItems()
    :
    installupgtable_list(this, {"module"})
{

    yang_name = "mod-items"; yang_parent_name = "install-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstallItems::ModItems::~ModItems()
{
}

bool System::InstallItems::ModItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<installupgtable_list.len(); index++)
    {
        if(installupgtable_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstallItems::ModItems::has_operation() const
{
    for (std::size_t index=0; index<installupgtable_list.len(); index++)
    {
        if(installupgtable_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstallItems::ModItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/install-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstallItems::ModItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mod-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InstallUpgTable-list")
    {
        auto ent_ = std::make_shared<System::InstallItems::ModItems::InstallUpgTableList>();
        ent_->parent = this;
        installupgtable_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : installupgtable_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstallItems::ModItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstallItems::ModItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstallItems::ModItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InstallUpgTable-list")
        return true;
    return false;
}

System::InstallItems::ModItems::InstallUpgTableList::InstallUpgTableList()
    :
    module{YType::uint32, "module"}
        ,
    modtype_items(std::make_shared<System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems>())
{
    modtype_items->parent = this;

    yang_name = "InstallUpgTable-list"; yang_parent_name = "mod-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::InstallItems::ModItems::InstallUpgTableList::~InstallUpgTableList()
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::has_data() const
{
    if (is_presence_container) return true;
    return module.is_set
	|| (modtype_items !=  nullptr && modtype_items->has_data());
}

bool System::InstallItems::ModItems::InstallUpgTableList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| (modtype_items !=  nullptr && modtype_items->has_operation());
}

std::string System::InstallItems::ModItems::InstallUpgTableList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/install-items/mod-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::InstallItems::ModItems::InstallUpgTableList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InstallUpgTable-list";
    ADD_KEY_TOKEN(module, "module");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::InstallUpgTableList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::InstallUpgTableList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modtype-items")
    {
        if(modtype_items == nullptr)
        {
            modtype_items = std::make_shared<System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems>();
        }
        return modtype_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::InstallUpgTableList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(modtype_items != nullptr)
    {
        _children["modtype-items"] = modtype_items;
    }

    return _children;
}

void System::InstallItems::ModItems::InstallUpgTableList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstallItems::ModItems::InstallUpgTableList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool System::InstallItems::ModItems::InstallUpgTableList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modtype-items" || name == "module")
        return true;
    return false;
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModtypeItems()
    :
    modupgtable_list(this, {"modtype"})
{

    yang_name = "modtype-items"; yang_parent_name = "InstallUpgTable-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::~ModtypeItems()
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<modupgtable_list.len(); index++)
    {
        if(modupgtable_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::has_operation() const
{
    for (std::size_t index=0; index<modupgtable_list.len(); index++)
    {
        if(modupgtable_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modtype-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ModUpgTable-list")
    {
        auto ent_ = std::make_shared<System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList>();
        ent_->parent = this;
        modupgtable_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : modupgtable_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ModUpgTable-list")
        return true;
    return false;
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::ModUpgTableList()
    :
    modtype{YType::enumeration, "modType"},
    module{YType::uint32, "module"},
    runver{YType::str, "runVer"},
    targetver{YType::str, "targetVer"},
    upgreq{YType::enumeration, "upgReq"},
    upgstatus{YType::enumeration, "upgStatus"},
    failstr{YType::str, "failStr"}
{

    yang_name = "ModUpgTable-list"; yang_parent_name = "modtype-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::~ModUpgTableList()
{
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::has_data() const
{
    if (is_presence_container) return true;
    return modtype.is_set
	|| module.is_set
	|| runver.is_set
	|| targetver.is_set
	|| upgreq.is_set
	|| upgstatus.is_set
	|| failstr.is_set;
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modtype.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(runver.yfilter)
	|| ydk::is_set(targetver.yfilter)
	|| ydk::is_set(upgreq.yfilter)
	|| ydk::is_set(upgstatus.yfilter)
	|| ydk::is_set(failstr.yfilter);
}

std::string System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ModUpgTable-list";
    ADD_KEY_TOKEN(modtype, "modType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modtype.is_set || is_set(modtype.yfilter)) leaf_name_data.push_back(modtype.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (runver.is_set || is_set(runver.yfilter)) leaf_name_data.push_back(runver.get_name_leafdata());
    if (targetver.is_set || is_set(targetver.yfilter)) leaf_name_data.push_back(targetver.get_name_leafdata());
    if (upgreq.is_set || is_set(upgreq.yfilter)) leaf_name_data.push_back(upgreq.get_name_leafdata());
    if (upgstatus.is_set || is_set(upgstatus.yfilter)) leaf_name_data.push_back(upgstatus.get_name_leafdata());
    if (failstr.is_set || is_set(failstr.yfilter)) leaf_name_data.push_back(failstr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modType")
    {
        modtype = value;
        modtype.value_namespace = name_space;
        modtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runVer")
    {
        runver = value;
        runver.value_namespace = name_space;
        runver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "targetVer")
    {
        targetver = value;
        targetver.value_namespace = name_space;
        targetver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgReq")
    {
        upgreq = value;
        upgreq.value_namespace = name_space;
        upgreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upgStatus")
    {
        upgstatus = value;
        upgstatus.value_namespace = name_space;
        upgstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failStr")
    {
        failstr = value;
        failstr.value_namespace = name_space;
        failstr.value_namespace_prefix = name_space_prefix;
    }
}

void System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modType")
    {
        modtype.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "runVer")
    {
        runver.yfilter = yfilter;
    }
    if(value_path == "targetVer")
    {
        targetver.yfilter = yfilter;
    }
    if(value_path == "upgReq")
    {
        upgreq.yfilter = yfilter;
    }
    if(value_path == "upgStatus")
    {
        upgstatus.yfilter = yfilter;
    }
    if(value_path == "failStr")
    {
        failstr.yfilter = yfilter;
    }
}

bool System::InstallItems::ModItems::InstallUpgTableList::ModtypeItems::ModUpgTableList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modType" || name == "module" || name == "runVer" || name == "targetVer" || name == "upgReq" || name == "upgStatus" || name == "failStr")
        return true;
    return false;
}

System::IntfItems::IntfItems()
    :
    descr{YType::str, "descr"}
        ,
    phys_items(std::make_shared<System::IntfItems::PhysItems>())
    , aggr_items(std::make_shared<System::IntfItems::AggrItems>())
    , rtd_items(std::make_shared<System::IntfItems::RtdItems>())
    , lb_items(std::make_shared<System::IntfItems::LbItems>())
    , encrtd_items(std::make_shared<System::IntfItems::EncrtdItems>())
    , svi_items(std::make_shared<System::IntfItems::SviItems>())
    , tunnelif_items(std::make_shared<System::IntfItems::TunnelifItems>())
{
    phys_items->parent = this;
    aggr_items->parent = this;
    rtd_items->parent = this;
    lb_items->parent = this;
    encrtd_items->parent = this;
    svi_items->parent = this;
    tunnelif_items->parent = this;

    yang_name = "intf-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::~IntfItems()
{
}

bool System::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (phys_items !=  nullptr && phys_items->has_data())
	|| (aggr_items !=  nullptr && aggr_items->has_data())
	|| (rtd_items !=  nullptr && rtd_items->has_data())
	|| (lb_items !=  nullptr && lb_items->has_data())
	|| (encrtd_items !=  nullptr && encrtd_items->has_data())
	|| (svi_items !=  nullptr && svi_items->has_data())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_data());
}

bool System::IntfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (phys_items !=  nullptr && phys_items->has_operation())
	|| (aggr_items !=  nullptr && aggr_items->has_operation())
	|| (rtd_items !=  nullptr && rtd_items->has_operation())
	|| (lb_items !=  nullptr && lb_items->has_operation())
	|| (encrtd_items !=  nullptr && encrtd_items->has_operation())
	|| (svi_items !=  nullptr && svi_items->has_operation())
	|| (tunnelif_items !=  nullptr && tunnelif_items->has_operation());
}

std::string System::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::IntfItems::PhysItems>();
        }
        return phys_items;
    }

    if(child_yang_name == "aggr-items")
    {
        if(aggr_items == nullptr)
        {
            aggr_items = std::make_shared<System::IntfItems::AggrItems>();
        }
        return aggr_items;
    }

    if(child_yang_name == "rtd-items")
    {
        if(rtd_items == nullptr)
        {
            rtd_items = std::make_shared<System::IntfItems::RtdItems>();
        }
        return rtd_items;
    }

    if(child_yang_name == "lb-items")
    {
        if(lb_items == nullptr)
        {
            lb_items = std::make_shared<System::IntfItems::LbItems>();
        }
        return lb_items;
    }

    if(child_yang_name == "encrtd-items")
    {
        if(encrtd_items == nullptr)
        {
            encrtd_items = std::make_shared<System::IntfItems::EncrtdItems>();
        }
        return encrtd_items;
    }

    if(child_yang_name == "svi-items")
    {
        if(svi_items == nullptr)
        {
            svi_items = std::make_shared<System::IntfItems::SviItems>();
        }
        return svi_items;
    }

    if(child_yang_name == "tunnelif-items")
    {
        if(tunnelif_items == nullptr)
        {
            tunnelif_items = std::make_shared<System::IntfItems::TunnelifItems>();
        }
        return tunnelif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    if(aggr_items != nullptr)
    {
        _children["aggr-items"] = aggr_items;
    }

    if(rtd_items != nullptr)
    {
        _children["rtd-items"] = rtd_items;
    }

    if(lb_items != nullptr)
    {
        _children["lb-items"] = lb_items;
    }

    if(encrtd_items != nullptr)
    {
        _children["encrtd-items"] = encrtd_items;
    }

    if(svi_items != nullptr)
    {
        _children["svi-items"] = svi_items;
    }

    if(tunnelif_items != nullptr)
    {
        _children["tunnelif-items"] = tunnelif_items;
    }

    return _children;
}

void System::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phys-items" || name == "aggr-items" || name == "rtd-items" || name == "lb-items" || name == "encrtd-items" || name == "svi-items" || name == "tunnelif-items" || name == "descr")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysItems()
    :
    physif_list(this, {"id"})
{

    yang_name = "phys-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::PhysItems::~PhysItems()
{
}

bool System::IntfItems::PhysItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::has_operation() const
{
    for (std::size_t index=0; index<physif_list.len(); index++)
    {
        if(physif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::PhysItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PhysIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList>();
        ent_->parent = this;
        physif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::get_children() const
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

void System::IntfItems::PhysItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PhysIf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysIfList()
    :
    id{YType::str, "id"},
    linktransmitreset{YType::enumeration, "linkTransmitReset"},
    linkdebouncelinkup{YType::uint16, "linkDebounceLinkUp"},
    packettimestampstate{YType::enumeration, "packetTimestampState"},
    packettimestampingresssourceid{YType::uint32, "packetTimestampIngressSourceId"},
    packettimestampegresssourceid{YType::uint32, "packetTimestampEgressSourceId"},
    speedgroup{YType::enumeration, "speedGroup"},
    beacon{YType::enumeration, "beacon"},
    voicevlanid{YType::uint16, "voiceVlanId"},
    voicevlantype{YType::enumeration, "voiceVlanType"},
    voiceportcos{YType::int8, "voicePortCos"},
    voiceporttrust{YType::int8, "voicePortTrust"},
    fecmode{YType::enumeration, "FECMode"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    switchingst{YType::enumeration, "switchingSt"},
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
    nfmphysif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::NfmphysifItems>())
    , priorflowctrl_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems>())
    , priorflowctrlwd_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems>())
    , physextd_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems>())
    , eeep_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::EeepItems>())
    , stormctrlp_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::StormctrlpItems>())
    , loadp_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::LoadpItems>())
    , vlanmapping_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems>())
    , vrf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VrfItems>())
    , phys_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_>())
    , hwifdetails_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems>())
    , aggrmbrif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems>())
    , multisiteiftracking_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems>())
    , dom_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems>())
    , rtinbandconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems>())
    , rtextconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtextConfItems>())
    , rtbrconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtbrConfItems>())
    , rtfvnodeportatt_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems>())
    , rtmbrifs_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems>())
    , rtphysrtdconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems>())
    , rtl3encphysrtdconf_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems>())
    , rttunneltunnelmbrifs_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems>())
    , rtlsnodetoif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems>())
    , dbgifin_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfInItems>())
    , dbgifout_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems>())
    , dbgipin_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpInItems>())
    , dbgdot1d_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems>())
    , dbgetherstats_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems>())
    , dbgdot3stats_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems>())
    , dbgifhcin_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems>())
    , dbgifhcout_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems>())
    , dbgipv6ifstats_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems>())
    , dbgifstorm_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems>())
{
    nfmphysif_items->parent = this;
    priorflowctrl_items->parent = this;
    priorflowctrlwd_items->parent = this;
    physextd_items->parent = this;
    eeep_items->parent = this;
    stormctrlp_items->parent = this;
    loadp_items->parent = this;
    vlanmapping_items->parent = this;
    vrf_items->parent = this;
    phys_items->parent = this;
    hwifdetails_items->parent = this;
    aggrmbrif_items->parent = this;
    multisiteiftracking_items->parent = this;
    dom_items->parent = this;
    rtinbandconf_items->parent = this;
    rtextconf_items->parent = this;
    rtbrconf_items->parent = this;
    rtfvnodeportatt_items->parent = this;
    rtmbrifs_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtphysrtdconf_items->parent = this;
    rtl3encphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;
    rttunneltunnelmbrifs_items->parent = this;
    rtlsnodetoif_items->parent = this;
    dbgifin_items->parent = this;
    dbgifout_items->parent = this;
    dbgipin_items->parent = this;
    dbgdot1d_items->parent = this;
    dbgetherstats_items->parent = this;
    dbgdot3stats_items->parent = this;
    dbgifhcin_items->parent = this;
    dbgifhcout_items->parent = this;
    dbgipv6ifstats_items->parent = this;
    dbgifstorm_items->parent = this;

    yang_name = "PhysIf-list"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::PhysItems::PhysIfList::~PhysIfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| linktransmitreset.is_set
	|| linkdebouncelinkup.is_set
	|| packettimestampstate.is_set
	|| packettimestampingresssourceid.is_set
	|| packettimestampegresssourceid.is_set
	|| speedgroup.is_set
	|| beacon.is_set
	|| voicevlanid.is_set
	|| voicevlantype.is_set
	|| voiceportcos.is_set
	|| voiceporttrust.is_set
	|| fecmode.is_set
	|| name.is_set
	|| descr.is_set
	|| switchingst.is_set
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
	|| (nfmphysif_items !=  nullptr && nfmphysif_items->has_data())
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_data())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_data())
	|| (physextd_items !=  nullptr && physextd_items->has_data())
	|| (eeep_items !=  nullptr && eeep_items->has_data())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_data())
	|| (loadp_items !=  nullptr && loadp_items->has_data())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (phys_items !=  nullptr && phys_items->has_data())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_data())
	|| (aggrmbrif_items !=  nullptr && aggrmbrif_items->has_data())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (rtinbandconf_items !=  nullptr && rtinbandconf_items->has_data())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_data())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_data())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_data())
	|| (rtmbrifs_items !=  nullptr && rtmbrifs_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_data())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (rttunneltunnelmbrifs_items !=  nullptr && rttunneltunnelmbrifs_items->has_data())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_data())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_data())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_data())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_data())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_data())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_data())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_data())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_data())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_data())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_data())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(linktransmitreset.yfilter)
	|| ydk::is_set(linkdebouncelinkup.yfilter)
	|| ydk::is_set(packettimestampstate.yfilter)
	|| ydk::is_set(packettimestampingresssourceid.yfilter)
	|| ydk::is_set(packettimestampegresssourceid.yfilter)
	|| ydk::is_set(speedgroup.yfilter)
	|| ydk::is_set(beacon.yfilter)
	|| ydk::is_set(voicevlanid.yfilter)
	|| ydk::is_set(voicevlantype.yfilter)
	|| ydk::is_set(voiceportcos.yfilter)
	|| ydk::is_set(voiceporttrust.yfilter)
	|| ydk::is_set(fecmode.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(switchingst.yfilter)
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
	|| (nfmphysif_items !=  nullptr && nfmphysif_items->has_operation())
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_operation())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_operation())
	|| (physextd_items !=  nullptr && physextd_items->has_operation())
	|| (eeep_items !=  nullptr && eeep_items->has_operation())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_operation())
	|| (loadp_items !=  nullptr && loadp_items->has_operation())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (phys_items !=  nullptr && phys_items->has_operation())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_operation())
	|| (aggrmbrif_items !=  nullptr && aggrmbrif_items->has_operation())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (rtinbandconf_items !=  nullptr && rtinbandconf_items->has_operation())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_operation())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_operation())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_operation())
	|| (rtmbrifs_items !=  nullptr && rtmbrifs_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_operation())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (rttunneltunnelmbrifs_items !=  nullptr && rttunneltunnelmbrifs_items->has_operation())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_operation())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_operation())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_operation())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_operation())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_operation())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_operation())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_operation())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_operation())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_operation())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_operation())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/phys-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::PhysItems::PhysIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PhysIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (linktransmitreset.is_set || is_set(linktransmitreset.yfilter)) leaf_name_data.push_back(linktransmitreset.get_name_leafdata());
    if (linkdebouncelinkup.is_set || is_set(linkdebouncelinkup.yfilter)) leaf_name_data.push_back(linkdebouncelinkup.get_name_leafdata());
    if (packettimestampstate.is_set || is_set(packettimestampstate.yfilter)) leaf_name_data.push_back(packettimestampstate.get_name_leafdata());
    if (packettimestampingresssourceid.is_set || is_set(packettimestampingresssourceid.yfilter)) leaf_name_data.push_back(packettimestampingresssourceid.get_name_leafdata());
    if (packettimestampegresssourceid.is_set || is_set(packettimestampegresssourceid.yfilter)) leaf_name_data.push_back(packettimestampegresssourceid.get_name_leafdata());
    if (speedgroup.is_set || is_set(speedgroup.yfilter)) leaf_name_data.push_back(speedgroup.get_name_leafdata());
    if (beacon.is_set || is_set(beacon.yfilter)) leaf_name_data.push_back(beacon.get_name_leafdata());
    if (voicevlanid.is_set || is_set(voicevlanid.yfilter)) leaf_name_data.push_back(voicevlanid.get_name_leafdata());
    if (voicevlantype.is_set || is_set(voicevlantype.yfilter)) leaf_name_data.push_back(voicevlantype.get_name_leafdata());
    if (voiceportcos.is_set || is_set(voiceportcos.yfilter)) leaf_name_data.push_back(voiceportcos.get_name_leafdata());
    if (voiceporttrust.is_set || is_set(voiceporttrust.yfilter)) leaf_name_data.push_back(voiceporttrust.get_name_leafdata());
    if (fecmode.is_set || is_set(fecmode.yfilter)) leaf_name_data.push_back(fecmode.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (switchingst.is_set || is_set(switchingst.yfilter)) leaf_name_data.push_back(switchingst.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nfmphysif-items")
    {
        if(nfmphysif_items == nullptr)
        {
            nfmphysif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::NfmphysifItems>();
        }
        return nfmphysif_items;
    }

    if(child_yang_name == "priorflowctrl-items")
    {
        if(priorflowctrl_items == nullptr)
        {
            priorflowctrl_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems>();
        }
        return priorflowctrl_items;
    }

    if(child_yang_name == "priorflowctrlwd-items")
    {
        if(priorflowctrlwd_items == nullptr)
        {
            priorflowctrlwd_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems>();
        }
        return priorflowctrlwd_items;
    }

    if(child_yang_name == "physExtd-items")
    {
        if(physextd_items == nullptr)
        {
            physextd_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems>();
        }
        return physextd_items;
    }

    if(child_yang_name == "eeep-items")
    {
        if(eeep_items == nullptr)
        {
            eeep_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::EeepItems>();
        }
        return eeep_items;
    }

    if(child_yang_name == "stormctrlp-items")
    {
        if(stormctrlp_items == nullptr)
        {
            stormctrlp_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::StormctrlpItems>();
        }
        return stormctrlp_items;
    }

    if(child_yang_name == "loadp-items")
    {
        if(loadp_items == nullptr)
        {
            loadp_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::LoadpItems>();
        }
        return loadp_items;
    }

    if(child_yang_name == "vlanmapping-items")
    {
        if(vlanmapping_items == nullptr)
        {
            vlanmapping_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems>();
        }
        return vlanmapping_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "phys-items")
    {
        if(phys_items == nullptr)
        {
            phys_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_>();
        }
        return phys_items;
    }

    if(child_yang_name == "hwifdetails-items")
    {
        if(hwifdetails_items == nullptr)
        {
            hwifdetails_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems>();
        }
        return hwifdetails_items;
    }

    if(child_yang_name == "aggrmbrif-items")
    {
        if(aggrmbrif_items == nullptr)
        {
            aggrmbrif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems>();
        }
        return aggrmbrif_items;
    }

    if(child_yang_name == "multisiteiftracking-items")
    {
        if(multisiteiftracking_items == nullptr)
        {
            multisiteiftracking_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems>();
        }
        return multisiteiftracking_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "rtInbandConf-items")
    {
        if(rtinbandconf_items == nullptr)
        {
            rtinbandconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems>();
        }
        return rtinbandconf_items;
    }

    if(child_yang_name == "rtextConf-items")
    {
        if(rtextconf_items == nullptr)
        {
            rtextconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtextConfItems>();
        }
        return rtextconf_items;
    }

    if(child_yang_name == "rtbrConf-items")
    {
        if(rtbrconf_items == nullptr)
        {
            rtbrconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtbrConfItems>();
        }
        return rtbrconf_items;
    }

    if(child_yang_name == "rtfvNodePortAtt-items")
    {
        if(rtfvnodeportatt_items == nullptr)
        {
            rtfvnodeportatt_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems>();
        }
        return rtfvnodeportatt_items;
    }

    if(child_yang_name == "rtmbrIfs-items")
    {
        if(rtmbrifs_items == nullptr)
        {
            rtmbrifs_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems>();
        }
        return rtmbrifs_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtphysRtdConf-items")
    {
        if(rtphysrtdconf_items == nullptr)
        {
            rtphysrtdconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems>();
        }
        return rtphysrtdconf_items;
    }

    if(child_yang_name == "rtl3EncPhysRtdConf-items")
    {
        if(rtl3encphysrtdconf_items == nullptr)
        {
            rtl3encphysrtdconf_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems>();
        }
        return rtl3encphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "rttunnelTunnelMbrIfs-items")
    {
        if(rttunneltunnelmbrifs_items == nullptr)
        {
            rttunneltunnelmbrifs_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems>();
        }
        return rttunneltunnelmbrifs_items;
    }

    if(child_yang_name == "rtLsNodeToIf-items")
    {
        if(rtlsnodetoif_items == nullptr)
        {
            rtlsnodetoif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems>();
        }
        return rtlsnodetoif_items;
    }

    if(child_yang_name == "dbgIfIn-items")
    {
        if(dbgifin_items == nullptr)
        {
            dbgifin_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfInItems>();
        }
        return dbgifin_items;
    }

    if(child_yang_name == "dbgIfOut-items")
    {
        if(dbgifout_items == nullptr)
        {
            dbgifout_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems>();
        }
        return dbgifout_items;
    }

    if(child_yang_name == "dbgIpIn-items")
    {
        if(dbgipin_items == nullptr)
        {
            dbgipin_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpInItems>();
        }
        return dbgipin_items;
    }

    if(child_yang_name == "dbgDot1d-items")
    {
        if(dbgdot1d_items == nullptr)
        {
            dbgdot1d_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems>();
        }
        return dbgdot1d_items;
    }

    if(child_yang_name == "dbgEtherStats-items")
    {
        if(dbgetherstats_items == nullptr)
        {
            dbgetherstats_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems>();
        }
        return dbgetherstats_items;
    }

    if(child_yang_name == "dbgDot3Stats-items")
    {
        if(dbgdot3stats_items == nullptr)
        {
            dbgdot3stats_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems>();
        }
        return dbgdot3stats_items;
    }

    if(child_yang_name == "dbgIfHCIn-items")
    {
        if(dbgifhcin_items == nullptr)
        {
            dbgifhcin_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems>();
        }
        return dbgifhcin_items;
    }

    if(child_yang_name == "dbgIfHCOut-items")
    {
        if(dbgifhcout_items == nullptr)
        {
            dbgifhcout_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems>();
        }
        return dbgifhcout_items;
    }

    if(child_yang_name == "dbgIpv6IfStats-items")
    {
        if(dbgipv6ifstats_items == nullptr)
        {
            dbgipv6ifstats_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems>();
        }
        return dbgipv6ifstats_items;
    }

    if(child_yang_name == "dbgIfStorm-items")
    {
        if(dbgifstorm_items == nullptr)
        {
            dbgifstorm_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems>();
        }
        return dbgifstorm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nfmphysif_items != nullptr)
    {
        _children["nfmphysif-items"] = nfmphysif_items;
    }

    if(priorflowctrl_items != nullptr)
    {
        _children["priorflowctrl-items"] = priorflowctrl_items;
    }

    if(priorflowctrlwd_items != nullptr)
    {
        _children["priorflowctrlwd-items"] = priorflowctrlwd_items;
    }

    if(physextd_items != nullptr)
    {
        _children["physExtd-items"] = physextd_items;
    }

    if(eeep_items != nullptr)
    {
        _children["eeep-items"] = eeep_items;
    }

    if(stormctrlp_items != nullptr)
    {
        _children["stormctrlp-items"] = stormctrlp_items;
    }

    if(loadp_items != nullptr)
    {
        _children["loadp-items"] = loadp_items;
    }

    if(vlanmapping_items != nullptr)
    {
        _children["vlanmapping-items"] = vlanmapping_items;
    }

    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(phys_items != nullptr)
    {
        _children["phys-items"] = phys_items;
    }

    if(hwifdetails_items != nullptr)
    {
        _children["hwifdetails-items"] = hwifdetails_items;
    }

    if(aggrmbrif_items != nullptr)
    {
        _children["aggrmbrif-items"] = aggrmbrif_items;
    }

    if(multisiteiftracking_items != nullptr)
    {
        _children["multisiteiftracking-items"] = multisiteiftracking_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(rtinbandconf_items != nullptr)
    {
        _children["rtInbandConf-items"] = rtinbandconf_items;
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

    if(rtmbrifs_items != nullptr)
    {
        _children["rtmbrIfs-items"] = rtmbrifs_items;
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

    if(rttunneltunnelmbrifs_items != nullptr)
    {
        _children["rttunnelTunnelMbrIfs-items"] = rttunneltunnelmbrifs_items;
    }

    if(rtlsnodetoif_items != nullptr)
    {
        _children["rtLsNodeToIf-items"] = rtlsnodetoif_items;
    }

    if(dbgifin_items != nullptr)
    {
        _children["dbgIfIn-items"] = dbgifin_items;
    }

    if(dbgifout_items != nullptr)
    {
        _children["dbgIfOut-items"] = dbgifout_items;
    }

    if(dbgipin_items != nullptr)
    {
        _children["dbgIpIn-items"] = dbgipin_items;
    }

    if(dbgdot1d_items != nullptr)
    {
        _children["dbgDot1d-items"] = dbgdot1d_items;
    }

    if(dbgetherstats_items != nullptr)
    {
        _children["dbgEtherStats-items"] = dbgetherstats_items;
    }

    if(dbgdot3stats_items != nullptr)
    {
        _children["dbgDot3Stats-items"] = dbgdot3stats_items;
    }

    if(dbgifhcin_items != nullptr)
    {
        _children["dbgIfHCIn-items"] = dbgifhcin_items;
    }

    if(dbgifhcout_items != nullptr)
    {
        _children["dbgIfHCOut-items"] = dbgifhcout_items;
    }

    if(dbgipv6ifstats_items != nullptr)
    {
        _children["dbgIpv6IfStats-items"] = dbgipv6ifstats_items;
    }

    if(dbgifstorm_items != nullptr)
    {
        _children["dbgIfStorm-items"] = dbgifstorm_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkTransmitReset")
    {
        linktransmitreset = value;
        linktransmitreset.value_namespace = name_space;
        linktransmitreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounceLinkUp")
    {
        linkdebouncelinkup = value;
        linkdebouncelinkup.value_namespace = name_space;
        linkdebouncelinkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetTimestampState")
    {
        packettimestampstate = value;
        packettimestampstate.value_namespace = name_space;
        packettimestampstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetTimestampIngressSourceId")
    {
        packettimestampingresssourceid = value;
        packettimestampingresssourceid.value_namespace = name_space;
        packettimestampingresssourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetTimestampEgressSourceId")
    {
        packettimestampegresssourceid = value;
        packettimestampegresssourceid.value_namespace = name_space;
        packettimestampegresssourceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedGroup")
    {
        speedgroup = value;
        speedgroup.value_namespace = name_space;
        speedgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "beacon")
    {
        beacon = value;
        beacon.value_namespace = name_space;
        beacon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voiceVlanId")
    {
        voicevlanid = value;
        voicevlanid.value_namespace = name_space;
        voicevlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voiceVlanType")
    {
        voicevlantype = value;
        voicevlantype.value_namespace = name_space;
        voicevlantype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voicePortCos")
    {
        voiceportcos = value;
        voiceportcos.value_namespace = name_space;
        voiceportcos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voicePortTrust")
    {
        voiceporttrust = value;
        voiceporttrust.value_namespace = name_space;
        voiceporttrust.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FECMode")
    {
        fecmode = value;
        fecmode.value_namespace = name_space;
        fecmode.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "switchingSt")
    {
        switchingst = value;
        switchingst.value_namespace = name_space;
        switchingst.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::PhysItems::PhysIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "linkTransmitReset")
    {
        linktransmitreset.yfilter = yfilter;
    }
    if(value_path == "linkDebounceLinkUp")
    {
        linkdebouncelinkup.yfilter = yfilter;
    }
    if(value_path == "packetTimestampState")
    {
        packettimestampstate.yfilter = yfilter;
    }
    if(value_path == "packetTimestampIngressSourceId")
    {
        packettimestampingresssourceid.yfilter = yfilter;
    }
    if(value_path == "packetTimestampEgressSourceId")
    {
        packettimestampegresssourceid.yfilter = yfilter;
    }
    if(value_path == "speedGroup")
    {
        speedgroup.yfilter = yfilter;
    }
    if(value_path == "beacon")
    {
        beacon.yfilter = yfilter;
    }
    if(value_path == "voiceVlanId")
    {
        voicevlanid.yfilter = yfilter;
    }
    if(value_path == "voiceVlanType")
    {
        voicevlantype.yfilter = yfilter;
    }
    if(value_path == "voicePortCos")
    {
        voiceportcos.yfilter = yfilter;
    }
    if(value_path == "voicePortTrust")
    {
        voiceporttrust.yfilter = yfilter;
    }
    if(value_path == "FECMode")
    {
        fecmode.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "switchingSt")
    {
        switchingst.yfilter = yfilter;
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

bool System::IntfItems::PhysItems::PhysIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nfmphysif-items" || name == "priorflowctrl-items" || name == "priorflowctrlwd-items" || name == "physExtd-items" || name == "eeep-items" || name == "stormctrlp-items" || name == "loadp-items" || name == "vlanmapping-items" || name == "vrf-items" || name == "phys-items" || name == "hwifdetails-items" || name == "aggrmbrif-items" || name == "multisiteiftracking-items" || name == "dom-items" || name == "rtInbandConf-items" || name == "rtextConf-items" || name == "rtbrConf-items" || name == "rtfvNodePortAtt-items" || name == "rtmbrIfs-items" || name == "rtvrfMbr-items" || name == "rtphysRtdConf-items" || name == "rtl3EncPhysRtdConf-items" || name == "rtnwPathToIf-items" || name == "rttunnelTunnelMbrIfs-items" || name == "rtLsNodeToIf-items" || name == "dbgIfIn-items" || name == "dbgIfOut-items" || name == "dbgIpIn-items" || name == "dbgDot1d-items" || name == "dbgEtherStats-items" || name == "dbgDot3Stats-items" || name == "dbgIfHCIn-items" || name == "dbgIfHCOut-items" || name == "dbgIpv6IfStats-items" || name == "dbgIfStorm-items" || name == "id" || name == "linkTransmitReset" || name == "linkDebounceLinkUp" || name == "packetTimestampState" || name == "packetTimestampIngressSourceId" || name == "packetTimestampEgressSourceId" || name == "speedGroup" || name == "beacon" || name == "voiceVlanId" || name == "voiceVlanType" || name == "voicePortCos" || name == "voicePortTrust" || name == "FECMode" || name == "name" || name == "descr" || name == "switchingSt" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt" || name == "mode" || name == "layer" || name == "mdix" || name == "delay" || name == "linkDebounce" || name == "dot1qEtherType" || name == "bw" || name == "medium" || name == "inhBw" || name == "spanMode" || name == "linkLog" || name == "trunkLog" || name == "routerMac" || name == "portT" || name == "usage" || name == "trunkVlans" || name == "accessVlan" || name == "controllerId" || name == "nativeVlan" || name == "userCfgdFlags")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::NfmphysifItems()
    :
    slicesrcid{YType::uint32, "sliceSrcId"},
    slotnum{YType::uint32, "slotNum"},
    asicnum{YType::uint32, "asicNum"},
    slicenum{YType::uint32, "sliceNum"}
{

    yang_name = "nfmphysif-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::~NfmphysifItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::has_data() const
{
    if (is_presence_container) return true;
    return slicesrcid.is_set
	|| slotnum.is_set
	|| asicnum.is_set
	|| slicenum.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slicesrcid.yfilter)
	|| ydk::is_set(slotnum.yfilter)
	|| ydk::is_set(asicnum.yfilter)
	|| ydk::is_set(slicenum.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nfmphysif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slicesrcid.is_set || is_set(slicesrcid.yfilter)) leaf_name_data.push_back(slicesrcid.get_name_leafdata());
    if (slotnum.is_set || is_set(slotnum.yfilter)) leaf_name_data.push_back(slotnum.get_name_leafdata());
    if (asicnum.is_set || is_set(asicnum.yfilter)) leaf_name_data.push_back(asicnum.get_name_leafdata());
    if (slicenum.is_set || is_set(slicenum.yfilter)) leaf_name_data.push_back(slicenum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sliceSrcId")
    {
        slicesrcid = value;
        slicesrcid.value_namespace = name_space;
        slicesrcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slotNum")
    {
        slotnum = value;
        slotnum.value_namespace = name_space;
        slotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asicNum")
    {
        asicnum = value;
        asicnum.value_namespace = name_space;
        asicnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sliceNum")
    {
        slicenum = value;
        slicenum.value_namespace = name_space;
        slicenum.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sliceSrcId")
    {
        slicesrcid.yfilter = yfilter;
    }
    if(value_path == "slotNum")
    {
        slotnum.yfilter = yfilter;
    }
    if(value_path == "asicNum")
    {
        asicnum.yfilter = yfilter;
    }
    if(value_path == "sliceNum")
    {
        slicenum.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::NfmphysifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sliceSrcId" || name == "slotNum" || name == "asicNum" || name == "sliceNum")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::PriorflowctrlItems()
    :
    mode{YType::uint8, "mode"}
{

    yang_name = "priorflowctrl-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::~PriorflowctrlItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::PriorflowctrlwdItems()
    :
    watchdoginterval{YType::uint8, "watchDogInterval"},
    disableaction{YType::boolean, "disableAction"},
    interfacemutiplier{YType::uint8, "interfaceMutiplier"}
{

    yang_name = "priorflowctrlwd-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::~PriorflowctrlwdItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::has_data() const
{
    if (is_presence_container) return true;
    return watchdoginterval.is_set
	|| disableaction.is_set
	|| interfacemutiplier.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(watchdoginterval.yfilter)
	|| ydk::is_set(disableaction.yfilter)
	|| ydk::is_set(interfacemutiplier.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrlwd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (watchdoginterval.is_set || is_set(watchdoginterval.yfilter)) leaf_name_data.push_back(watchdoginterval.get_name_leafdata());
    if (disableaction.is_set || is_set(disableaction.yfilter)) leaf_name_data.push_back(disableaction.get_name_leafdata());
    if (interfacemutiplier.is_set || is_set(interfacemutiplier.yfilter)) leaf_name_data.push_back(interfacemutiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "watchDogInterval")
    {
        watchdoginterval = value;
        watchdoginterval.value_namespace = name_space;
        watchdoginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableAction")
    {
        disableaction = value;
        disableaction.value_namespace = name_space;
        disableaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceMutiplier")
    {
        interfacemutiplier = value;
        interfacemutiplier.value_namespace = name_space;
        interfacemutiplier.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "watchDogInterval")
    {
        watchdoginterval.yfilter = yfilter;
    }
    if(value_path == "disableAction")
    {
        disableaction.yfilter = yfilter;
    }
    if(value_path == "interfaceMutiplier")
    {
        interfacemutiplier.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PriorflowctrlwdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watchDogInterval" || name == "disableAction" || name == "interfaceMutiplier")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::PhysExtdItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::str, "id"},
    porttypefabric{YType::enumeration, "portTypeFabric"},
    routermacipv6extract{YType::enumeration, "routerMacIpv6Extract"},
    switchportblock{YType::str, "switchportBlock"},
    switchportmaclearn{YType::enumeration, "switchportMacLearn"},
    flowctrl{YType::str, "flowCtrl"},
    stormctrlbcastlevel{YType::str, "stormCtrlBCastLevel"},
    stormctrlbcastpps{YType::uint32, "stormCtrlBCastPPS"},
    stormctrlmcastlevel{YType::str, "stormCtrlMCastLevel"},
    stormctrlmcastpps{YType::uint32, "stormCtrlMCastPPS"},
    stormctrlucastlevel{YType::str, "stormCtrlUCastLevel"},
    stormctrlucastpps{YType::uint32, "stormCtrlUCastPPS"},
    stormctrlact{YType::str, "stormCtrlAct"},
    bufferboost{YType::enumeration, "bufferBoost"},
    switchportvirtualethernetbridge{YType::enumeration, "switchportVirtualEthernetBridge"},
    allowmultitag{YType::enumeration, "allowMultiTag"}
        ,
    rtvrfmbr_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "physExtd-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::~PhysExtdItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| id.is_set
	|| porttypefabric.is_set
	|| routermacipv6extract.is_set
	|| switchportblock.is_set
	|| switchportmaclearn.is_set
	|| flowctrl.is_set
	|| stormctrlbcastlevel.is_set
	|| stormctrlbcastpps.is_set
	|| stormctrlmcastlevel.is_set
	|| stormctrlmcastpps.is_set
	|| stormctrlucastlevel.is_set
	|| stormctrlucastpps.is_set
	|| stormctrlact.is_set
	|| bufferboost.is_set
	|| switchportvirtualethernetbridge.is_set
	|| allowmultitag.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(porttypefabric.yfilter)
	|| ydk::is_set(routermacipv6extract.yfilter)
	|| ydk::is_set(switchportblock.yfilter)
	|| ydk::is_set(switchportmaclearn.yfilter)
	|| ydk::is_set(flowctrl.yfilter)
	|| ydk::is_set(stormctrlbcastlevel.yfilter)
	|| ydk::is_set(stormctrlbcastpps.yfilter)
	|| ydk::is_set(stormctrlmcastlevel.yfilter)
	|| ydk::is_set(stormctrlmcastpps.yfilter)
	|| ydk::is_set(stormctrlucastlevel.yfilter)
	|| ydk::is_set(stormctrlucastpps.yfilter)
	|| ydk::is_set(stormctrlact.yfilter)
	|| ydk::is_set(bufferboost.yfilter)
	|| ydk::is_set(switchportvirtualethernetbridge.yfilter)
	|| ydk::is_set(allowmultitag.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "physExtd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (porttypefabric.is_set || is_set(porttypefabric.yfilter)) leaf_name_data.push_back(porttypefabric.get_name_leafdata());
    if (routermacipv6extract.is_set || is_set(routermacipv6extract.yfilter)) leaf_name_data.push_back(routermacipv6extract.get_name_leafdata());
    if (switchportblock.is_set || is_set(switchportblock.yfilter)) leaf_name_data.push_back(switchportblock.get_name_leafdata());
    if (switchportmaclearn.is_set || is_set(switchportmaclearn.yfilter)) leaf_name_data.push_back(switchportmaclearn.get_name_leafdata());
    if (flowctrl.is_set || is_set(flowctrl.yfilter)) leaf_name_data.push_back(flowctrl.get_name_leafdata());
    if (stormctrlbcastlevel.is_set || is_set(stormctrlbcastlevel.yfilter)) leaf_name_data.push_back(stormctrlbcastlevel.get_name_leafdata());
    if (stormctrlbcastpps.is_set || is_set(stormctrlbcastpps.yfilter)) leaf_name_data.push_back(stormctrlbcastpps.get_name_leafdata());
    if (stormctrlmcastlevel.is_set || is_set(stormctrlmcastlevel.yfilter)) leaf_name_data.push_back(stormctrlmcastlevel.get_name_leafdata());
    if (stormctrlmcastpps.is_set || is_set(stormctrlmcastpps.yfilter)) leaf_name_data.push_back(stormctrlmcastpps.get_name_leafdata());
    if (stormctrlucastlevel.is_set || is_set(stormctrlucastlevel.yfilter)) leaf_name_data.push_back(stormctrlucastlevel.get_name_leafdata());
    if (stormctrlucastpps.is_set || is_set(stormctrlucastpps.yfilter)) leaf_name_data.push_back(stormctrlucastpps.get_name_leafdata());
    if (stormctrlact.is_set || is_set(stormctrlact.yfilter)) leaf_name_data.push_back(stormctrlact.get_name_leafdata());
    if (bufferboost.is_set || is_set(bufferboost.yfilter)) leaf_name_data.push_back(bufferboost.get_name_leafdata());
    if (switchportvirtualethernetbridge.is_set || is_set(switchportvirtualethernetbridge.yfilter)) leaf_name_data.push_back(switchportvirtualethernetbridge.get_name_leafdata());
    if (allowmultitag.is_set || is_set(allowmultitag.yfilter)) leaf_name_data.push_back(allowmultitag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portTypeFabric")
    {
        porttypefabric = value;
        porttypefabric.value_namespace = name_space;
        porttypefabric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract = value;
        routermacipv6extract.value_namespace = name_space;
        routermacipv6extract.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportBlock")
    {
        switchportblock = value;
        switchportblock.value_namespace = name_space;
        switchportblock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportMacLearn")
    {
        switchportmaclearn = value;
        switchportmaclearn.value_namespace = name_space;
        switchportmaclearn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowCtrl")
    {
        flowctrl = value;
        flowctrl.value_namespace = name_space;
        flowctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlBCastLevel")
    {
        stormctrlbcastlevel = value;
        stormctrlbcastlevel.value_namespace = name_space;
        stormctrlbcastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlBCastPPS")
    {
        stormctrlbcastpps = value;
        stormctrlbcastpps.value_namespace = name_space;
        stormctrlbcastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlMCastLevel")
    {
        stormctrlmcastlevel = value;
        stormctrlmcastlevel.value_namespace = name_space;
        stormctrlmcastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlMCastPPS")
    {
        stormctrlmcastpps = value;
        stormctrlmcastpps.value_namespace = name_space;
        stormctrlmcastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlUCastLevel")
    {
        stormctrlucastlevel = value;
        stormctrlucastlevel.value_namespace = name_space;
        stormctrlucastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlUCastPPS")
    {
        stormctrlucastpps = value;
        stormctrlucastpps.value_namespace = name_space;
        stormctrlucastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlAct")
    {
        stormctrlact = value;
        stormctrlact.value_namespace = name_space;
        stormctrlact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferBoost")
    {
        bufferboost = value;
        bufferboost.value_namespace = name_space;
        bufferboost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportVirtualEthernetBridge")
    {
        switchportvirtualethernetbridge = value;
        switchportvirtualethernetbridge.value_namespace = name_space;
        switchportvirtualethernetbridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowMultiTag")
    {
        allowmultitag = value;
        allowmultitag.value_namespace = name_space;
        allowmultitag.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "portTypeFabric")
    {
        porttypefabric.yfilter = yfilter;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract.yfilter = yfilter;
    }
    if(value_path == "switchportBlock")
    {
        switchportblock.yfilter = yfilter;
    }
    if(value_path == "switchportMacLearn")
    {
        switchportmaclearn.yfilter = yfilter;
    }
    if(value_path == "flowCtrl")
    {
        flowctrl.yfilter = yfilter;
    }
    if(value_path == "stormCtrlBCastLevel")
    {
        stormctrlbcastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlBCastPPS")
    {
        stormctrlbcastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlMCastLevel")
    {
        stormctrlmcastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlMCastPPS")
    {
        stormctrlmcastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlUCastLevel")
    {
        stormctrlucastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlUCastPPS")
    {
        stormctrlucastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlAct")
    {
        stormctrlact.yfilter = yfilter;
    }
    if(value_path == "bufferBoost")
    {
        bufferboost.yfilter = yfilter;
    }
    if(value_path == "switchportVirtualEthernetBridge")
    {
        switchportvirtualethernetbridge.yfilter = yfilter;
    }
    if(value_path == "allowMultiTag")
    {
        allowmultitag.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "name" || name == "descr" || name == "id" || name == "portTypeFabric" || name == "routerMacIpv6Extract" || name == "switchportBlock" || name == "switchportMacLearn" || name == "flowCtrl" || name == "stormCtrlBCastLevel" || name == "stormCtrlBCastPPS" || name == "stormCtrlMCastLevel" || name == "stormCtrlMCastPPS" || name == "stormCtrlUCastLevel" || name == "stormCtrlUCastPPS" || name == "stormCtrlAct" || name == "bufferBoost" || name == "switchportVirtualEthernetBridge" || name == "allowMultiTag")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "physExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "physExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::PhysExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::EeepItems::EeepItems()
    :
    eeestate{YType::enumeration, "eeeState"},
    eeelpi{YType::enumeration, "eeeLpi"},
    eeelat{YType::enumeration, "eeeLat"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "eeep-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::EeepItems::~EeepItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::EeepItems::has_data() const
{
    if (is_presence_container) return true;
    return eeestate.is_set
	|| eeelpi.is_set
	|| eeelat.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::EeepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eeestate.yfilter)
	|| ydk::is_set(eeelpi.yfilter)
	|| ydk::is_set(eeelat.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::EeepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::EeepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eeestate.is_set || is_set(eeestate.yfilter)) leaf_name_data.push_back(eeestate.get_name_leafdata());
    if (eeelpi.is_set || is_set(eeelpi.yfilter)) leaf_name_data.push_back(eeelpi.get_name_leafdata());
    if (eeelat.is_set || is_set(eeelat.yfilter)) leaf_name_data.push_back(eeelat.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::EeepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::EeepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::EeepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eeeState")
    {
        eeestate = value;
        eeestate.value_namespace = name_space;
        eeestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeLpi")
    {
        eeelpi = value;
        eeelpi.value_namespace = name_space;
        eeelpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeLat")
    {
        eeelat = value;
        eeelat.value_namespace = name_space;
        eeelat.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::PhysItems::PhysIfList::EeepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eeeState")
    {
        eeestate.yfilter = yfilter;
    }
    if(value_path == "eeeLpi")
    {
        eeelpi.yfilter = yfilter;
    }
    if(value_path == "eeeLat")
    {
        eeelat.yfilter = yfilter;
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

bool System::IntfItems::PhysItems::PhysIfList::EeepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeeState" || name == "eeeLpi" || name == "eeeLat" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::StormctrlpItems()
    :
    type{YType::enumeration, "type"},
    rate{YType::str, "rate"},
    burstrate{YType::str, "burstRate"},
    ratepps{YType::uint32, "ratePps"},
    burstpps{YType::uint32, "burstPps"}
{

    yang_name = "stormctrlp-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::~StormctrlpItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| rate.is_set
	|| burstrate.is_set
	|| ratepps.is_set
	|| burstpps.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(burstrate.yfilter)
	|| ydk::is_set(ratepps.yfilter)
	|| ydk::is_set(burstpps.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stormctrlp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (burstrate.is_set || is_set(burstrate.yfilter)) leaf_name_data.push_back(burstrate.get_name_leafdata());
    if (ratepps.is_set || is_set(ratepps.yfilter)) leaf_name_data.push_back(ratepps.get_name_leafdata());
    if (burstpps.is_set || is_set(burstpps.yfilter)) leaf_name_data.push_back(burstpps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstRate")
    {
        burstrate = value;
        burstrate.value_namespace = name_space;
        burstrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratePps")
    {
        ratepps = value;
        ratepps.value_namespace = name_space;
        ratepps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstPps")
    {
        burstpps = value;
        burstpps.value_namespace = name_space;
        burstpps.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "burstRate")
    {
        burstrate.yfilter = yfilter;
    }
    if(value_path == "ratePps")
    {
        ratepps.yfilter = yfilter;
    }
    if(value_path == "burstPps")
    {
        burstpps.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::StormctrlpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "rate" || name == "burstRate" || name == "ratePps" || name == "burstPps")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::LoadpItems::LoadpItems()
    :
    loadintvl1{YType::uint16, "loadIntvl1"},
    loadintvl2{YType::uint16, "loadIntvl2"},
    loadintvl3{YType::uint16, "loadIntvl3"}
{

    yang_name = "loadp-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::LoadpItems::~LoadpItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::LoadpItems::has_data() const
{
    if (is_presence_container) return true;
    return loadintvl1.is_set
	|| loadintvl2.is_set
	|| loadintvl3.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::LoadpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loadintvl1.yfilter)
	|| ydk::is_set(loadintvl2.yfilter)
	|| ydk::is_set(loadintvl3.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loadintvl1.is_set || is_set(loadintvl1.yfilter)) leaf_name_data.push_back(loadintvl1.get_name_leafdata());
    if (loadintvl2.is_set || is_set(loadintvl2.yfilter)) leaf_name_data.push_back(loadintvl2.get_name_leafdata());
    if (loadintvl3.is_set || is_set(loadintvl3.yfilter)) leaf_name_data.push_back(loadintvl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::LoadpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::LoadpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loadIntvl1")
    {
        loadintvl1 = value;
        loadintvl1.value_namespace = name_space;
        loadintvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2 = value;
        loadintvl2.value_namespace = name_space;
        loadintvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3 = value;
        loadintvl3.value_namespace = name_space;
        loadintvl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::LoadpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loadIntvl1")
    {
        loadintvl1.yfilter = yfilter;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2.yfilter = yfilter;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::LoadpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadIntvl1" || name == "loadIntvl2" || name == "loadIntvl3")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlanmappingItems()
    :
    enabled{YType::boolean, "Enabled"}
        ,
    vlantranslatetable_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems>())
{
    vlantranslatetable_items->parent = this;

    yang_name = "vlanmapping-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::~VlanmappingItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanmapping-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlantranslatetable-items")
    {
        if(vlantranslatetable_items == nullptr)
        {
            vlantranslatetable_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems>();
        }
        return vlantranslatetable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlantranslatetable_items != nullptr)
    {
        _children["vlantranslatetable-items"] = vlantranslatetable_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlantranslatetable-items" || name == "Enabled")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlantranslatetableItems()
    :
    vlan_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "vlantranslatetable-items"; yang_parent_name = "vlanmapping-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::~VlantranslatetableItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlantranslatetable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanItems()
    :
    vlantranslateentry_list(this, {"vlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "vlantranslatetable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::~VlanItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanTranslateEntry-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList>();
        ent_->parent = this;
        vlantranslateentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlantranslateentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanTranslateEntry-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::VlanTranslateEntryList()
    :
    vlanid{YType::str, "vlanid"},
    innervlanid{YType::str, "innervlanid"},
    translatevlanid{YType::str, "translatevlanid"}
{

    yang_name = "VlanTranslateEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::~VlanTranslateEntryList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| innervlanid.is_set
	|| translatevlanid.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(innervlanid.yfilter)
	|| ydk::is_set(translatevlanid.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanTranslateEntry-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (innervlanid.is_set || is_set(innervlanid.yfilter)) leaf_name_data.push_back(innervlanid.get_name_leafdata());
    if (translatevlanid.is_set || is_set(translatevlanid.yfilter)) leaf_name_data.push_back(translatevlanid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "innervlanid")
    {
        innervlanid = value;
        innervlanid.value_namespace = name_space;
        innervlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "translatevlanid")
    {
        translatevlanid = value;
        translatevlanid.value_namespace = name_space;
        translatevlanid.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "innervlanid")
    {
        innervlanid.yfilter = yfilter;
    }
    if(value_path == "translatevlanid")
    {
        translatevlanid.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "innervlanid" || name == "translatevlanid")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::PhysItems_()
    :
    operlinkdebounce{YType::uint16, "operLinkDebounce"},
    sharestate{YType::enumeration, "shareState"},
    operfecmode{YType::enumeration, "operFECMode"},
    cachedusercfgdflags{YType::str, "cachedUserCfgdFlags"},
    ifindex{YType::uint32, "ifIndex"},
    operautoneg{YType::enumeration, "operAutoNeg"},
    opermtu{YType::uint32, "operMtu"},
    adminst{YType::enumeration, "adminSt"},
    operdescr{YType::str, "operDescr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    operstqualcode{YType::uint32, "operStQualCode"},
    opererrdisqual{YType::enumeration, "operErrDisQual"},
    operspeed{YType::enumeration, "operSpeed"},
    opermode{YType::enumeration, "operMode"},
    operduplex{YType::enumeration, "operDuplex"},
    operflowctrl{YType::str, "operFlowCtrl"},
    operphyenst{YType::enumeration, "operPhyEnSt"},
    backplanemac{YType::str, "backplaneMac"},
    operroutermac{YType::str, "operRouterMac"},
    txt{YType::enumeration, "txT"},
    lastlinkstchg{YType::str, "lastLinkStChg"},
    portcfgwaitflags{YType::uint32, "portCfgWaitFlags"},
    accessvlan{YType::str, "accessVlan"},
    nativevlan{YType::str, "nativeVlan"},
    cfgnativevlan{YType::str, "cfgNativeVlan"},
    cfgaccessvlan{YType::str, "cfgAccessVlan"},
    primaryvlan{YType::str, "primaryVlan"},
    operbitset{YType::str, "operBitset"},
    vdcid{YType::uint16, "vdcId"},
    resetctr{YType::uint32, "resetCtr"},
    media{YType::uint32, "media"},
    encap{YType::uint32, "encap"},
    iod{YType::uint64, "iod"},
    allowedvlans{YType::str, "allowedVlans"},
    opervlans{YType::str, "operVlans"},
    errvlans{YType::str, "errVlans"},
    opertrunkstatus{YType::enumeration, "operTrunkStatus"},
    bundleindex{YType::str, "bundleIndex"},
    opermdix{YType::enumeration, "operMdix"},
    currerrindex{YType::uint32, "currErrIndex"},
    lasterrors{YType::str, "lastErrors"},
    errdistimerrunning{YType::boolean, "errDisTimerRunning"},
    bundlebupid{YType::uint32, "bundleBupId"},
    operdcemode{YType::enumeration, "operDceMode"},
    intft{YType::enumeration, "intfT"},
    diags{YType::enumeration, "diags"},
    opereeestate{YType::enumeration, "operEEEState"},
    opereeetxwktime{YType::uint32, "operEEETxWkTime"},
    opereeerxwktime{YType::uint32, "operEEERxWkTime"},
    usercfgdflags{YType::str, "userCfgdFlags"},
    numofsi{YType::uint32, "numOfSI"},
    gport{YType::uint32, "gport"},
    silist{YType::str, "siList"},
    dynamicvlan{YType::boolean, "dynamicVlan"},
    usage{YType::str, "usage"}
        ,
    fcot_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems>())
    , fcotx2_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items>())
    , portcap_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems>())
{
    fcot_items->parent = this;
    fcotx2_items->parent = this;
    portcap_items->parent = this;

    yang_name = "phys-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::~PhysItems_()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::has_data() const
{
    if (is_presence_container) return true;
    return operlinkdebounce.is_set
	|| sharestate.is_set
	|| operfecmode.is_set
	|| cachedusercfgdflags.is_set
	|| ifindex.is_set
	|| operautoneg.is_set
	|| opermtu.is_set
	|| adminst.is_set
	|| operdescr.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| operstqualcode.is_set
	|| opererrdisqual.is_set
	|| operspeed.is_set
	|| opermode.is_set
	|| operduplex.is_set
	|| operflowctrl.is_set
	|| operphyenst.is_set
	|| backplanemac.is_set
	|| operroutermac.is_set
	|| txt.is_set
	|| lastlinkstchg.is_set
	|| portcfgwaitflags.is_set
	|| accessvlan.is_set
	|| nativevlan.is_set
	|| cfgnativevlan.is_set
	|| cfgaccessvlan.is_set
	|| primaryvlan.is_set
	|| operbitset.is_set
	|| vdcid.is_set
	|| resetctr.is_set
	|| media.is_set
	|| encap.is_set
	|| iod.is_set
	|| allowedvlans.is_set
	|| opervlans.is_set
	|| errvlans.is_set
	|| opertrunkstatus.is_set
	|| bundleindex.is_set
	|| opermdix.is_set
	|| currerrindex.is_set
	|| lasterrors.is_set
	|| errdistimerrunning.is_set
	|| bundlebupid.is_set
	|| operdcemode.is_set
	|| intft.is_set
	|| diags.is_set
	|| opereeestate.is_set
	|| opereeetxwktime.is_set
	|| opereeerxwktime.is_set
	|| usercfgdflags.is_set
	|| numofsi.is_set
	|| gport.is_set
	|| silist.is_set
	|| dynamicvlan.is_set
	|| usage.is_set
	|| (fcot_items !=  nullptr && fcot_items->has_data())
	|| (fcotx2_items !=  nullptr && fcotx2_items->has_data())
	|| (portcap_items !=  nullptr && portcap_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operlinkdebounce.yfilter)
	|| ydk::is_set(sharestate.yfilter)
	|| ydk::is_set(operfecmode.yfilter)
	|| ydk::is_set(cachedusercfgdflags.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(operautoneg.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operdescr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(operstqualcode.yfilter)
	|| ydk::is_set(opererrdisqual.yfilter)
	|| ydk::is_set(operspeed.yfilter)
	|| ydk::is_set(opermode.yfilter)
	|| ydk::is_set(operduplex.yfilter)
	|| ydk::is_set(operflowctrl.yfilter)
	|| ydk::is_set(operphyenst.yfilter)
	|| ydk::is_set(backplanemac.yfilter)
	|| ydk::is_set(operroutermac.yfilter)
	|| ydk::is_set(txt.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter)
	|| ydk::is_set(portcfgwaitflags.yfilter)
	|| ydk::is_set(accessvlan.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(cfgnativevlan.yfilter)
	|| ydk::is_set(cfgaccessvlan.yfilter)
	|| ydk::is_set(primaryvlan.yfilter)
	|| ydk::is_set(operbitset.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(resetctr.yfilter)
	|| ydk::is_set(media.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(allowedvlans.yfilter)
	|| ydk::is_set(opervlans.yfilter)
	|| ydk::is_set(errvlans.yfilter)
	|| ydk::is_set(opertrunkstatus.yfilter)
	|| ydk::is_set(bundleindex.yfilter)
	|| ydk::is_set(opermdix.yfilter)
	|| ydk::is_set(currerrindex.yfilter)
	|| ydk::is_set(lasterrors.yfilter)
	|| ydk::is_set(errdistimerrunning.yfilter)
	|| ydk::is_set(bundlebupid.yfilter)
	|| ydk::is_set(operdcemode.yfilter)
	|| ydk::is_set(intft.yfilter)
	|| ydk::is_set(diags.yfilter)
	|| ydk::is_set(opereeestate.yfilter)
	|| ydk::is_set(opereeetxwktime.yfilter)
	|| ydk::is_set(opereeerxwktime.yfilter)
	|| ydk::is_set(usercfgdflags.yfilter)
	|| ydk::is_set(numofsi.yfilter)
	|| ydk::is_set(gport.yfilter)
	|| ydk::is_set(silist.yfilter)
	|| ydk::is_set(dynamicvlan.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| (fcot_items !=  nullptr && fcot_items->has_operation())
	|| (fcotx2_items !=  nullptr && fcotx2_items->has_operation())
	|| (portcap_items !=  nullptr && portcap_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "phys-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operlinkdebounce.is_set || is_set(operlinkdebounce.yfilter)) leaf_name_data.push_back(operlinkdebounce.get_name_leafdata());
    if (sharestate.is_set || is_set(sharestate.yfilter)) leaf_name_data.push_back(sharestate.get_name_leafdata());
    if (operfecmode.is_set || is_set(operfecmode.yfilter)) leaf_name_data.push_back(operfecmode.get_name_leafdata());
    if (cachedusercfgdflags.is_set || is_set(cachedusercfgdflags.yfilter)) leaf_name_data.push_back(cachedusercfgdflags.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (operautoneg.is_set || is_set(operautoneg.yfilter)) leaf_name_data.push_back(operautoneg.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operdescr.is_set || is_set(operdescr.yfilter)) leaf_name_data.push_back(operdescr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (operstqualcode.is_set || is_set(operstqualcode.yfilter)) leaf_name_data.push_back(operstqualcode.get_name_leafdata());
    if (opererrdisqual.is_set || is_set(opererrdisqual.yfilter)) leaf_name_data.push_back(opererrdisqual.get_name_leafdata());
    if (operspeed.is_set || is_set(operspeed.yfilter)) leaf_name_data.push_back(operspeed.get_name_leafdata());
    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());
    if (operduplex.is_set || is_set(operduplex.yfilter)) leaf_name_data.push_back(operduplex.get_name_leafdata());
    if (operflowctrl.is_set || is_set(operflowctrl.yfilter)) leaf_name_data.push_back(operflowctrl.get_name_leafdata());
    if (operphyenst.is_set || is_set(operphyenst.yfilter)) leaf_name_data.push_back(operphyenst.get_name_leafdata());
    if (backplanemac.is_set || is_set(backplanemac.yfilter)) leaf_name_data.push_back(backplanemac.get_name_leafdata());
    if (operroutermac.is_set || is_set(operroutermac.yfilter)) leaf_name_data.push_back(operroutermac.get_name_leafdata());
    if (txt.is_set || is_set(txt.yfilter)) leaf_name_data.push_back(txt.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());
    if (portcfgwaitflags.is_set || is_set(portcfgwaitflags.yfilter)) leaf_name_data.push_back(portcfgwaitflags.get_name_leafdata());
    if (accessvlan.is_set || is_set(accessvlan.yfilter)) leaf_name_data.push_back(accessvlan.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (cfgnativevlan.is_set || is_set(cfgnativevlan.yfilter)) leaf_name_data.push_back(cfgnativevlan.get_name_leafdata());
    if (cfgaccessvlan.is_set || is_set(cfgaccessvlan.yfilter)) leaf_name_data.push_back(cfgaccessvlan.get_name_leafdata());
    if (primaryvlan.is_set || is_set(primaryvlan.yfilter)) leaf_name_data.push_back(primaryvlan.get_name_leafdata());
    if (operbitset.is_set || is_set(operbitset.yfilter)) leaf_name_data.push_back(operbitset.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (resetctr.is_set || is_set(resetctr.yfilter)) leaf_name_data.push_back(resetctr.get_name_leafdata());
    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (allowedvlans.is_set || is_set(allowedvlans.yfilter)) leaf_name_data.push_back(allowedvlans.get_name_leafdata());
    if (opervlans.is_set || is_set(opervlans.yfilter)) leaf_name_data.push_back(opervlans.get_name_leafdata());
    if (errvlans.is_set || is_set(errvlans.yfilter)) leaf_name_data.push_back(errvlans.get_name_leafdata());
    if (opertrunkstatus.is_set || is_set(opertrunkstatus.yfilter)) leaf_name_data.push_back(opertrunkstatus.get_name_leafdata());
    if (bundleindex.is_set || is_set(bundleindex.yfilter)) leaf_name_data.push_back(bundleindex.get_name_leafdata());
    if (opermdix.is_set || is_set(opermdix.yfilter)) leaf_name_data.push_back(opermdix.get_name_leafdata());
    if (currerrindex.is_set || is_set(currerrindex.yfilter)) leaf_name_data.push_back(currerrindex.get_name_leafdata());
    if (lasterrors.is_set || is_set(lasterrors.yfilter)) leaf_name_data.push_back(lasterrors.get_name_leafdata());
    if (errdistimerrunning.is_set || is_set(errdistimerrunning.yfilter)) leaf_name_data.push_back(errdistimerrunning.get_name_leafdata());
    if (bundlebupid.is_set || is_set(bundlebupid.yfilter)) leaf_name_data.push_back(bundlebupid.get_name_leafdata());
    if (operdcemode.is_set || is_set(operdcemode.yfilter)) leaf_name_data.push_back(operdcemode.get_name_leafdata());
    if (intft.is_set || is_set(intft.yfilter)) leaf_name_data.push_back(intft.get_name_leafdata());
    if (diags.is_set || is_set(diags.yfilter)) leaf_name_data.push_back(diags.get_name_leafdata());
    if (opereeestate.is_set || is_set(opereeestate.yfilter)) leaf_name_data.push_back(opereeestate.get_name_leafdata());
    if (opereeetxwktime.is_set || is_set(opereeetxwktime.yfilter)) leaf_name_data.push_back(opereeetxwktime.get_name_leafdata());
    if (opereeerxwktime.is_set || is_set(opereeerxwktime.yfilter)) leaf_name_data.push_back(opereeerxwktime.get_name_leafdata());
    if (usercfgdflags.is_set || is_set(usercfgdflags.yfilter)) leaf_name_data.push_back(usercfgdflags.get_name_leafdata());
    if (numofsi.is_set || is_set(numofsi.yfilter)) leaf_name_data.push_back(numofsi.get_name_leafdata());
    if (gport.is_set || is_set(gport.yfilter)) leaf_name_data.push_back(gport.get_name_leafdata());
    if (silist.is_set || is_set(silist.yfilter)) leaf_name_data.push_back(silist.get_name_leafdata());
    if (dynamicvlan.is_set || is_set(dynamicvlan.yfilter)) leaf_name_data.push_back(dynamicvlan.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fcot-items")
    {
        if(fcot_items == nullptr)
        {
            fcot_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems>();
        }
        return fcot_items;
    }

    if(child_yang_name == "fcotx2-items")
    {
        if(fcotx2_items == nullptr)
        {
            fcotx2_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items>();
        }
        return fcotx2_items;
    }

    if(child_yang_name == "portcap-items")
    {
        if(portcap_items == nullptr)
        {
            portcap_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems>();
        }
        return portcap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fcot_items != nullptr)
    {
        _children["fcot-items"] = fcot_items;
    }

    if(fcotx2_items != nullptr)
    {
        _children["fcotx2-items"] = fcotx2_items;
    }

    if(portcap_items != nullptr)
    {
        _children["portcap-items"] = portcap_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operLinkDebounce")
    {
        operlinkdebounce = value;
        operlinkdebounce.value_namespace = name_space;
        operlinkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shareState")
    {
        sharestate = value;
        sharestate.value_namespace = name_space;
        sharestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operFECMode")
    {
        operfecmode = value;
        operfecmode.value_namespace = name_space;
        operfecmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cachedUserCfgdFlags")
    {
        cachedusercfgdflags = value;
        cachedusercfgdflags.value_namespace = name_space;
        cachedusercfgdflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operAutoNeg")
    {
        operautoneg = value;
        operautoneg.value_namespace = name_space;
        operautoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDescr")
    {
        operdescr = value;
        operdescr.value_namespace = name_space;
        operdescr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operStQualCode")
    {
        operstqualcode = value;
        operstqualcode.value_namespace = name_space;
        operstqualcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErrDisQual")
    {
        opererrdisqual = value;
        opererrdisqual.value_namespace = name_space;
        opererrdisqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSpeed")
    {
        operspeed = value;
        operspeed.value_namespace = name_space;
        operspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDuplex")
    {
        operduplex = value;
        operduplex.value_namespace = name_space;
        operduplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operFlowCtrl")
    {
        operflowctrl = value;
        operflowctrl.value_namespace = name_space;
        operflowctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPhyEnSt")
    {
        operphyenst = value;
        operphyenst.value_namespace = name_space;
        operphyenst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac = value;
        backplanemac.value_namespace = name_space;
        backplanemac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac = value;
        operroutermac.value_namespace = name_space;
        operroutermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txT")
    {
        txt = value;
        txt.value_namespace = name_space;
        txt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCfgWaitFlags")
    {
        portcfgwaitflags = value;
        portcfgwaitflags.value_namespace = name_space;
        portcfgwaitflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessVlan")
    {
        accessvlan = value;
        accessvlan.value_namespace = name_space;
        accessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgNativeVlan")
    {
        cfgnativevlan = value;
        cfgnativevlan.value_namespace = name_space;
        cfgnativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgAccessVlan")
    {
        cfgaccessvlan = value;
        cfgaccessvlan.value_namespace = name_space;
        cfgaccessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryVlan")
    {
        primaryvlan = value;
        primaryvlan.value_namespace = name_space;
        primaryvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBitset")
    {
        operbitset = value;
        operbitset.value_namespace = name_space;
        operbitset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetCtr")
    {
        resetctr = value;
        resetctr.value_namespace = name_space;
        resetctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVlans")
    {
        allowedvlans = value;
        allowedvlans.value_namespace = name_space;
        allowedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operVlans")
    {
        opervlans = value;
        opervlans.value_namespace = name_space;
        opervlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errVlans")
    {
        errvlans = value;
        errvlans.value_namespace = name_space;
        errvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operTrunkStatus")
    {
        opertrunkstatus = value;
        opertrunkstatus.value_namespace = name_space;
        opertrunkstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundleIndex")
    {
        bundleindex = value;
        bundleindex.value_namespace = name_space;
        bundleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMdix")
    {
        opermdix = value;
        opermdix.value_namespace = name_space;
        opermdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex = value;
        currerrindex.value_namespace = name_space;
        currerrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrors")
    {
        lasterrors = value;
        lasterrors.value_namespace = name_space;
        lasterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDisTimerRunning")
    {
        errdistimerrunning = value;
        errdistimerrunning.value_namespace = name_space;
        errdistimerrunning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundleBupId")
    {
        bundlebupid = value;
        bundlebupid.value_namespace = name_space;
        bundlebupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDceMode")
    {
        operdcemode = value;
        operdcemode.value_namespace = name_space;
        operdcemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfT")
    {
        intft = value;
        intft.value_namespace = name_space;
        intft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diags")
    {
        diags = value;
        diags.value_namespace = name_space;
        diags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEEState")
    {
        opereeestate = value;
        opereeestate.value_namespace = name_space;
        opereeestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEETxWkTime")
    {
        opereeetxwktime = value;
        opereeetxwktime.value_namespace = name_space;
        opereeetxwktime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEERxWkTime")
    {
        opereeerxwktime = value;
        opereeerxwktime.value_namespace = name_space;
        opereeerxwktime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags = value;
        usercfgdflags.value_namespace = name_space;
        usercfgdflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numOfSI")
    {
        numofsi = value;
        numofsi.value_namespace = name_space;
        numofsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gport")
    {
        gport = value;
        gport.value_namespace = name_space;
        gport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siList")
    {
        silist = value;
        silist.value_namespace = name_space;
        silist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamicVlan")
    {
        dynamicvlan = value;
        dynamicvlan.value_namespace = name_space;
        dynamicvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operLinkDebounce")
    {
        operlinkdebounce.yfilter = yfilter;
    }
    if(value_path == "shareState")
    {
        sharestate.yfilter = yfilter;
    }
    if(value_path == "operFECMode")
    {
        operfecmode.yfilter = yfilter;
    }
    if(value_path == "cachedUserCfgdFlags")
    {
        cachedusercfgdflags.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "operAutoNeg")
    {
        operautoneg.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operDescr")
    {
        operdescr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operStQualCode")
    {
        operstqualcode.yfilter = yfilter;
    }
    if(value_path == "operErrDisQual")
    {
        opererrdisqual.yfilter = yfilter;
    }
    if(value_path == "operSpeed")
    {
        operspeed.yfilter = yfilter;
    }
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
    if(value_path == "operDuplex")
    {
        operduplex.yfilter = yfilter;
    }
    if(value_path == "operFlowCtrl")
    {
        operflowctrl.yfilter = yfilter;
    }
    if(value_path == "operPhyEnSt")
    {
        operphyenst.yfilter = yfilter;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac.yfilter = yfilter;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac.yfilter = yfilter;
    }
    if(value_path == "txT")
    {
        txt.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
    if(value_path == "portCfgWaitFlags")
    {
        portcfgwaitflags.yfilter = yfilter;
    }
    if(value_path == "accessVlan")
    {
        accessvlan.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "cfgNativeVlan")
    {
        cfgnativevlan.yfilter = yfilter;
    }
    if(value_path == "cfgAccessVlan")
    {
        cfgaccessvlan.yfilter = yfilter;
    }
    if(value_path == "primaryVlan")
    {
        primaryvlan.yfilter = yfilter;
    }
    if(value_path == "operBitset")
    {
        operbitset.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "resetCtr")
    {
        resetctr.yfilter = yfilter;
    }
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "allowedVlans")
    {
        allowedvlans.yfilter = yfilter;
    }
    if(value_path == "operVlans")
    {
        opervlans.yfilter = yfilter;
    }
    if(value_path == "errVlans")
    {
        errvlans.yfilter = yfilter;
    }
    if(value_path == "operTrunkStatus")
    {
        opertrunkstatus.yfilter = yfilter;
    }
    if(value_path == "bundleIndex")
    {
        bundleindex.yfilter = yfilter;
    }
    if(value_path == "operMdix")
    {
        opermdix.yfilter = yfilter;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex.yfilter = yfilter;
    }
    if(value_path == "lastErrors")
    {
        lasterrors.yfilter = yfilter;
    }
    if(value_path == "errDisTimerRunning")
    {
        errdistimerrunning.yfilter = yfilter;
    }
    if(value_path == "bundleBupId")
    {
        bundlebupid.yfilter = yfilter;
    }
    if(value_path == "operDceMode")
    {
        operdcemode.yfilter = yfilter;
    }
    if(value_path == "intfT")
    {
        intft.yfilter = yfilter;
    }
    if(value_path == "diags")
    {
        diags.yfilter = yfilter;
    }
    if(value_path == "operEEEState")
    {
        opereeestate.yfilter = yfilter;
    }
    if(value_path == "operEEETxWkTime")
    {
        opereeetxwktime.yfilter = yfilter;
    }
    if(value_path == "operEEERxWkTime")
    {
        opereeerxwktime.yfilter = yfilter;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags.yfilter = yfilter;
    }
    if(value_path == "numOfSI")
    {
        numofsi.yfilter = yfilter;
    }
    if(value_path == "gport")
    {
        gport.yfilter = yfilter;
    }
    if(value_path == "siList")
    {
        silist.yfilter = yfilter;
    }
    if(value_path == "dynamicVlan")
    {
        dynamicvlan.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fcot-items" || name == "fcotx2-items" || name == "portcap-items" || name == "operLinkDebounce" || name == "shareState" || name == "operFECMode" || name == "cachedUserCfgdFlags" || name == "ifIndex" || name == "operAutoNeg" || name == "operMtu" || name == "adminSt" || name == "operDescr" || name == "operSt" || name == "operStQual" || name == "operStQualCode" || name == "operErrDisQual" || name == "operSpeed" || name == "operMode" || name == "operDuplex" || name == "operFlowCtrl" || name == "operPhyEnSt" || name == "backplaneMac" || name == "operRouterMac" || name == "txT" || name == "lastLinkStChg" || name == "portCfgWaitFlags" || name == "accessVlan" || name == "nativeVlan" || name == "cfgNativeVlan" || name == "cfgAccessVlan" || name == "primaryVlan" || name == "operBitset" || name == "vdcId" || name == "resetCtr" || name == "media" || name == "encap" || name == "iod" || name == "allowedVlans" || name == "operVlans" || name == "errVlans" || name == "operTrunkStatus" || name == "bundleIndex" || name == "operMdix" || name == "currErrIndex" || name == "lastErrors" || name == "errDisTimerRunning" || name == "bundleBupId" || name == "operDceMode" || name == "intfT" || name == "diags" || name == "operEEEState" || name == "operEEETxWkTime" || name == "operEEERxWkTime" || name == "userCfgdFlags" || name == "numOfSI" || name == "gport" || name == "siList" || name == "dynamicVlan" || name == "usage")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::FcotItems()
    :
    partnumber{YType::str, "partNumber"},
    versionid{YType::str, "versionId"},
    description{YType::str, "description"},
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    eid{YType::str, "eid"},
    xcvrid{YType::uint8, "xcvrId"},
    xcvrextid{YType::uint8, "xcvrExtId"},
    connecttype{YType::uint8, "connectType"},
    xcvrcode{YType::str, "xcvrCode"},
    encoding{YType::uint8, "encoding"},
    brin100mhz{YType::uint8, "brIn100MHz"},
    baseresvd1{YType::uint8, "baseResvd1"},
    distinkmfor9u{YType::uint8, "distInKmFor9u"},
    distin100mfor9u{YType::uint8, "distIn100mFor9u"},
    distin10mfor50u{YType::uint8, "distIn10mFor50u"},
    distin10mfor60u{YType::uint8, "distIn10mFor60u"},
    distin1mforcu{YType::uint8, "distIn1mForCu"},
    baseresvd2{YType::uint8, "baseResvd2"},
    vendorname{YType::str, "vendorName"},
    baseresvd3{YType::uint8, "baseResvd3"},
    vendorid{YType::str, "vendorId"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    baseresvd4{YType::str, "baseResvd4"},
    ccid{YType::uint8, "ccid"},
    extoption{YType::str, "extOption"},
    brmaxmargin{YType::uint8, "brMaxMargin"},
    brminmargin{YType::uint8, "brMinMargin"},
    vendorsn{YType::str, "vendorSn"},
    datecode{YType::str, "dateCode"},
    diagmontype{YType::uint8, "diagMonType"},
    enhoption{YType::uint8, "enhOption"},
    sff8472compl{YType::uint8, "sff8472Compl"},
    ccex{YType::uint8, "ccex"},
    vendordata{YType::str, "vendorData"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    fcottype{YType::uint8, "fcotType"},
    gigethcc{YType::uint8, "gigEthCC"},
    fctxtype{YType::uint8, "fCTxType"}
        ,
    lane_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems>())
{
    lane_items->parent = this;

    yang_name = "fcot-items"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::~FcotItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::has_data() const
{
    if (is_presence_container) return true;
    return partnumber.is_set
	|| versionid.is_set
	|| description.is_set
	|| isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| eid.is_set
	|| xcvrid.is_set
	|| xcvrextid.is_set
	|| connecttype.is_set
	|| xcvrcode.is_set
	|| encoding.is_set
	|| brin100mhz.is_set
	|| baseresvd1.is_set
	|| distinkmfor9u.is_set
	|| distin100mfor9u.is_set
	|| distin10mfor50u.is_set
	|| distin10mfor60u.is_set
	|| distin1mforcu.is_set
	|| baseresvd2.is_set
	|| vendorname.is_set
	|| baseresvd3.is_set
	|| vendorid.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| baseresvd4.is_set
	|| ccid.is_set
	|| extoption.is_set
	|| brmaxmargin.is_set
	|| brminmargin.is_set
	|| vendorsn.is_set
	|| datecode.is_set
	|| diagmontype.is_set
	|| enhoption.is_set
	|| sff8472compl.is_set
	|| ccex.is_set
	|| vendordata.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| fcottype.is_set
	|| gigethcc.is_set
	|| fctxtype.is_set
	|| (lane_items !=  nullptr && lane_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(versionid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(xcvrid.yfilter)
	|| ydk::is_set(xcvrextid.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(xcvrcode.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(brin100mhz.yfilter)
	|| ydk::is_set(baseresvd1.yfilter)
	|| ydk::is_set(distinkmfor9u.yfilter)
	|| ydk::is_set(distin100mfor9u.yfilter)
	|| ydk::is_set(distin10mfor50u.yfilter)
	|| ydk::is_set(distin10mfor60u.yfilter)
	|| ydk::is_set(distin1mforcu.yfilter)
	|| ydk::is_set(baseresvd2.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(baseresvd3.yfilter)
	|| ydk::is_set(vendorid.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(baseresvd4.yfilter)
	|| ydk::is_set(ccid.yfilter)
	|| ydk::is_set(extoption.yfilter)
	|| ydk::is_set(brmaxmargin.yfilter)
	|| ydk::is_set(brminmargin.yfilter)
	|| ydk::is_set(vendorsn.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(diagmontype.yfilter)
	|| ydk::is_set(enhoption.yfilter)
	|| ydk::is_set(sff8472compl.yfilter)
	|| ydk::is_set(ccex.yfilter)
	|| ydk::is_set(vendordata.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(fcottype.yfilter)
	|| ydk::is_set(gigethcc.yfilter)
	|| ydk::is_set(fctxtype.yfilter)
	|| (lane_items !=  nullptr && lane_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (versionid.is_set || is_set(versionid.yfilter)) leaf_name_data.push_back(versionid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (xcvrid.is_set || is_set(xcvrid.yfilter)) leaf_name_data.push_back(xcvrid.get_name_leafdata());
    if (xcvrextid.is_set || is_set(xcvrextid.yfilter)) leaf_name_data.push_back(xcvrextid.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (xcvrcode.is_set || is_set(xcvrcode.yfilter)) leaf_name_data.push_back(xcvrcode.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (brin100mhz.is_set || is_set(brin100mhz.yfilter)) leaf_name_data.push_back(brin100mhz.get_name_leafdata());
    if (baseresvd1.is_set || is_set(baseresvd1.yfilter)) leaf_name_data.push_back(baseresvd1.get_name_leafdata());
    if (distinkmfor9u.is_set || is_set(distinkmfor9u.yfilter)) leaf_name_data.push_back(distinkmfor9u.get_name_leafdata());
    if (distin100mfor9u.is_set || is_set(distin100mfor9u.yfilter)) leaf_name_data.push_back(distin100mfor9u.get_name_leafdata());
    if (distin10mfor50u.is_set || is_set(distin10mfor50u.yfilter)) leaf_name_data.push_back(distin10mfor50u.get_name_leafdata());
    if (distin10mfor60u.is_set || is_set(distin10mfor60u.yfilter)) leaf_name_data.push_back(distin10mfor60u.get_name_leafdata());
    if (distin1mforcu.is_set || is_set(distin1mforcu.yfilter)) leaf_name_data.push_back(distin1mforcu.get_name_leafdata());
    if (baseresvd2.is_set || is_set(baseresvd2.yfilter)) leaf_name_data.push_back(baseresvd2.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (baseresvd3.is_set || is_set(baseresvd3.yfilter)) leaf_name_data.push_back(baseresvd3.get_name_leafdata());
    if (vendorid.is_set || is_set(vendorid.yfilter)) leaf_name_data.push_back(vendorid.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (baseresvd4.is_set || is_set(baseresvd4.yfilter)) leaf_name_data.push_back(baseresvd4.get_name_leafdata());
    if (ccid.is_set || is_set(ccid.yfilter)) leaf_name_data.push_back(ccid.get_name_leafdata());
    if (extoption.is_set || is_set(extoption.yfilter)) leaf_name_data.push_back(extoption.get_name_leafdata());
    if (brmaxmargin.is_set || is_set(brmaxmargin.yfilter)) leaf_name_data.push_back(brmaxmargin.get_name_leafdata());
    if (brminmargin.is_set || is_set(brminmargin.yfilter)) leaf_name_data.push_back(brminmargin.get_name_leafdata());
    if (vendorsn.is_set || is_set(vendorsn.yfilter)) leaf_name_data.push_back(vendorsn.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (diagmontype.is_set || is_set(diagmontype.yfilter)) leaf_name_data.push_back(diagmontype.get_name_leafdata());
    if (enhoption.is_set || is_set(enhoption.yfilter)) leaf_name_data.push_back(enhoption.get_name_leafdata());
    if (sff8472compl.is_set || is_set(sff8472compl.yfilter)) leaf_name_data.push_back(sff8472compl.get_name_leafdata());
    if (ccex.is_set || is_set(ccex.yfilter)) leaf_name_data.push_back(ccex.get_name_leafdata());
    if (vendordata.is_set || is_set(vendordata.yfilter)) leaf_name_data.push_back(vendordata.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (fcottype.is_set || is_set(fcottype.yfilter)) leaf_name_data.push_back(fcottype.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());
    if (fctxtype.is_set || is_set(fctxtype.yfilter)) leaf_name_data.push_back(fctxtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lane-items")
    {
        if(lane_items == nullptr)
        {
            lane_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems>();
        }
        return lane_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lane_items != nullptr)
    {
        _children["lane-items"] = lane_items;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "versionId")
    {
        versionid = value;
        versionid.value_namespace = name_space;
        versionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrId")
    {
        xcvrid = value;
        xcvrid.value_namespace = name_space;
        xcvrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid = value;
        xcvrextid.value_namespace = name_space;
        xcvrextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode = value;
        xcvrcode.value_namespace = name_space;
        xcvrcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz = value;
        brin100mhz.value_namespace = name_space;
        brin100mhz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1 = value;
        baseresvd1.value_namespace = name_space;
        baseresvd1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u = value;
        distinkmfor9u.value_namespace = name_space;
        distinkmfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u = value;
        distin100mfor9u.value_namespace = name_space;
        distin100mfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u = value;
        distin10mfor50u.value_namespace = name_space;
        distin10mfor50u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u = value;
        distin10mfor60u.value_namespace = name_space;
        distin10mfor60u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu = value;
        distin1mforcu.value_namespace = name_space;
        distin1mforcu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2 = value;
        baseresvd2.value_namespace = name_space;
        baseresvd2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3 = value;
        baseresvd3.value_namespace = name_space;
        baseresvd3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorId")
    {
        vendorid = value;
        vendorid.value_namespace = name_space;
        vendorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4 = value;
        baseresvd4.value_namespace = name_space;
        baseresvd4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccid")
    {
        ccid = value;
        ccid.value_namespace = name_space;
        ccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extOption")
    {
        extoption = value;
        extoption.value_namespace = name_space;
        extoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin = value;
        brmaxmargin.value_namespace = name_space;
        brmaxmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin = value;
        brminmargin.value_namespace = name_space;
        brminmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSn")
    {
        vendorsn = value;
        vendorsn.value_namespace = name_space;
        vendorsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagMonType")
    {
        diagmontype = value;
        diagmontype.value_namespace = name_space;
        diagmontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhOption")
    {
        enhoption = value;
        enhoption.value_namespace = name_space;
        enhoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sff8472Compl")
    {
        sff8472compl = value;
        sff8472compl.value_namespace = name_space;
        sff8472compl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccex")
    {
        ccex = value;
        ccex.value_namespace = name_space;
        ccex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorData")
    {
        vendordata = value;
        vendordata.value_namespace = name_space;
        vendordata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotType")
    {
        fcottype = value;
        fcottype.value_namespace = name_space;
        fcottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCTxType")
    {
        fctxtype = value;
        fctxtype.value_namespace = name_space;
        fctxtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "versionId")
    {
        versionid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "xcvrId")
    {
        xcvrid.yfilter = yfilter;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz.yfilter = yfilter;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1.yfilter = yfilter;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u.yfilter = yfilter;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu.yfilter = yfilter;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3.yfilter = yfilter;
    }
    if(value_path == "vendorId")
    {
        vendorid.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4.yfilter = yfilter;
    }
    if(value_path == "ccid")
    {
        ccid.yfilter = yfilter;
    }
    if(value_path == "extOption")
    {
        extoption.yfilter = yfilter;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin.yfilter = yfilter;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin.yfilter = yfilter;
    }
    if(value_path == "vendorSn")
    {
        vendorsn.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "diagMonType")
    {
        diagmontype.yfilter = yfilter;
    }
    if(value_path == "enhOption")
    {
        enhoption.yfilter = yfilter;
    }
    if(value_path == "sff8472Compl")
    {
        sff8472compl.yfilter = yfilter;
    }
    if(value_path == "ccex")
    {
        ccex.yfilter = yfilter;
    }
    if(value_path == "vendorData")
    {
        vendordata.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "fcotType")
    {
        fcottype.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
    if(value_path == "fCTxType")
    {
        fctxtype.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lane-items" || name == "partNumber" || name == "versionId" || name == "description" || name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "eid" || name == "xcvrId" || name == "xcvrExtId" || name == "connectType" || name == "xcvrCode" || name == "encoding" || name == "brIn100MHz" || name == "baseResvd1" || name == "distInKmFor9u" || name == "distIn100mFor9u" || name == "distIn10mFor50u" || name == "distIn10mFor60u" || name == "distIn1mForCu" || name == "baseResvd2" || name == "vendorName" || name == "baseResvd3" || name == "vendorId" || name == "vendorPn" || name == "vendorRev" || name == "baseResvd4" || name == "ccid" || name == "extOption" || name == "brMaxMargin" || name == "brMinMargin" || name == "vendorSn" || name == "dateCode" || name == "diagMonType" || name == "enhOption" || name == "sff8472Compl" || name == "ccex" || name == "vendorData" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "fcotType" || name == "gigEthCC" || name == "fCTxType")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::LaneItems()
    :
    fcotsensor_list(this, {"laneid", "sensorid"})
{

    yang_name = "lane-items"; yang_parent_name = "fcot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::~LaneItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fcotsensor_list.len(); index++)
    {
        if(fcotsensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::has_operation() const
{
    for (std::size_t index=0; index<fcotsensor_list.len(); index++)
    {
        if(fcotsensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lane-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FcotSensor-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList>();
        ent_->parent = this;
        fcotsensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fcotsensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FcotSensor-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::FcotSensorList()
    :
    laneid{YType::uint16, "laneId"},
    sensorid{YType::uint16, "sensorId"},
    lanetype{YType::enumeration, "laneType"},
    description{YType::str, "description"},
    unit{YType::str, "unit"},
    value_{YType::str, "value"},
    highalarm{YType::str, "highAlarm"},
    highwarning{YType::str, "highWarning"},
    lowalarm{YType::str, "lowAlarm"},
    lowwarning{YType::str, "lowWarning"},
    max{YType::str, "max"},
    min{YType::str, "min"},
    avg{YType::str, "avg"},
    instant{YType::str, "instant"}
{

    yang_name = "FcotSensor-list"; yang_parent_name = "lane-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::~FcotSensorList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::has_data() const
{
    if (is_presence_container) return true;
    return laneid.is_set
	|| sensorid.is_set
	|| lanetype.is_set
	|| description.is_set
	|| unit.is_set
	|| value_.is_set
	|| highalarm.is_set
	|| highwarning.is_set
	|| lowalarm.is_set
	|| lowwarning.is_set
	|| max.is_set
	|| min.is_set
	|| avg.is_set
	|| instant.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(laneid.yfilter)
	|| ydk::is_set(sensorid.yfilter)
	|| ydk::is_set(lanetype.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(highalarm.yfilter)
	|| ydk::is_set(highwarning.yfilter)
	|| ydk::is_set(lowalarm.yfilter)
	|| ydk::is_set(lowwarning.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(avg.yfilter)
	|| ydk::is_set(instant.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FcotSensor-list";
    ADD_KEY_TOKEN(laneid, "laneId");
    ADD_KEY_TOKEN(sensorid, "sensorId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (laneid.is_set || is_set(laneid.yfilter)) leaf_name_data.push_back(laneid.get_name_leafdata());
    if (sensorid.is_set || is_set(sensorid.yfilter)) leaf_name_data.push_back(sensorid.get_name_leafdata());
    if (lanetype.is_set || is_set(lanetype.yfilter)) leaf_name_data.push_back(lanetype.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (highalarm.is_set || is_set(highalarm.yfilter)) leaf_name_data.push_back(highalarm.get_name_leafdata());
    if (highwarning.is_set || is_set(highwarning.yfilter)) leaf_name_data.push_back(highwarning.get_name_leafdata());
    if (lowalarm.is_set || is_set(lowalarm.yfilter)) leaf_name_data.push_back(lowalarm.get_name_leafdata());
    if (lowwarning.is_set || is_set(lowwarning.yfilter)) leaf_name_data.push_back(lowwarning.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (avg.is_set || is_set(avg.yfilter)) leaf_name_data.push_back(avg.get_name_leafdata());
    if (instant.is_set || is_set(instant.yfilter)) leaf_name_data.push_back(instant.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "laneId")
    {
        laneid = value;
        laneid.value_namespace = name_space;
        laneid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensorId")
    {
        sensorid = value;
        sensorid.value_namespace = name_space;
        sensorid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "laneType")
    {
        lanetype = value;
        lanetype.value_namespace = name_space;
        lanetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highAlarm")
    {
        highalarm = value;
        highalarm.value_namespace = name_space;
        highalarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highWarning")
    {
        highwarning = value;
        highwarning.value_namespace = name_space;
        highwarning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowAlarm")
    {
        lowalarm = value;
        lowalarm.value_namespace = name_space;
        lowalarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowWarning")
    {
        lowwarning = value;
        lowwarning.value_namespace = name_space;
        lowwarning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avg")
    {
        avg = value;
        avg.value_namespace = name_space;
        avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instant")
    {
        instant = value;
        instant.value_namespace = name_space;
        instant.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "laneId")
    {
        laneid.yfilter = yfilter;
    }
    if(value_path == "sensorId")
    {
        sensorid.yfilter = yfilter;
    }
    if(value_path == "laneType")
    {
        lanetype.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "highAlarm")
    {
        highalarm.yfilter = yfilter;
    }
    if(value_path == "highWarning")
    {
        highwarning.yfilter = yfilter;
    }
    if(value_path == "lowAlarm")
    {
        lowalarm.yfilter = yfilter;
    }
    if(value_path == "lowWarning")
    {
        lowwarning.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "avg")
    {
        avg.yfilter = yfilter;
    }
    if(value_path == "instant")
    {
        instant.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::FcotItems::LaneItems::FcotSensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "laneId" || name == "sensorId" || name == "laneType" || name == "description" || name == "unit" || name == "value" || name == "highAlarm" || name == "highWarning" || name == "lowAlarm" || name == "lowWarning" || name == "max" || name == "min" || name == "avg" || name == "instant")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::Fcotx2Items()
    :
    partnumber{YType::str, "partNumber"},
    versionid{YType::str, "versionId"},
    description{YType::str, "description"},
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    eid{YType::str, "eid"},
    xcvrtype{YType::uint8, "xcvrType"},
    connecttype{YType::uint8, "connectType"},
    bitencoding{YType::uint8, "bitEncoding"},
    bitratembps{YType::str, "bitRateMbps"},
    protocoltype{YType::uint8, "protocolType"},
    xgethcode{YType::str, "xgEthCode"},
    sonetsdhcode{YType::str, "sonetSdhCode"},
    xgfccode{YType::str, "xgFcCode"},
    range{YType::str, "range"},
    fibretype{YType::str, "fibreType"},
    wavelench0{YType::str, "waveLenCh0"},
    wavelench1{YType::str, "waveLenCh1"},
    wavelench2{YType::str, "waveLenCh2"},
    wavelench3{YType::str, "waveLenCh3"},
    packageoui{YType::str, "packageOui"},
    vendorname{YType::str, "vendorName"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    vendorserno{YType::str, "vendorSerNo"},
    datecode{YType::str, "dateCode"},
    lotcode{YType::str, "lotCode"},
    fivevstressenv{YType::uint8, "fiveVStressEnv"},
    threethreevstressenv{YType::uint8, "threeThreeVStressEnv"},
    apsstressenv{YType::uint8, "apsStressEnv"},
    normalapsvolt{YType::uint8, "normalApsVolt"},
    diagoptmoncap{YType::uint8, "diagOptMonCap"},
    lowpwrstartupcap{YType::uint8, "lowPwrStartupCap"},
    reserved{YType::uint8, "reserved"},
    checksum{YType::uint8, "checksum"},
    ciscopid{YType::str, "ciscoPid"},
    ciscovid{YType::str, "ciscoVid"},
    ciscosn{YType::str, "ciscoSN"},
    ciscopn{YType::str, "ciscoPN"},
    ciscorev{YType::str, "ciscoRev"},
    extvendorspecific{YType::str, "extVendorSpecific"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    fcottype{YType::uint8, "fcotType"},
    gigethcc{YType::uint8, "gigEthCC"},
    fctxtype{YType::uint8, "fCTxType"}
{

    yang_name = "fcotx2-items"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::~Fcotx2Items()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::has_data() const
{
    if (is_presence_container) return true;
    return partnumber.is_set
	|| versionid.is_set
	|| description.is_set
	|| isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| eid.is_set
	|| xcvrtype.is_set
	|| connecttype.is_set
	|| bitencoding.is_set
	|| bitratembps.is_set
	|| protocoltype.is_set
	|| xgethcode.is_set
	|| sonetsdhcode.is_set
	|| xgfccode.is_set
	|| range.is_set
	|| fibretype.is_set
	|| wavelench0.is_set
	|| wavelench1.is_set
	|| wavelench2.is_set
	|| wavelench3.is_set
	|| packageoui.is_set
	|| vendorname.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| vendorserno.is_set
	|| datecode.is_set
	|| lotcode.is_set
	|| fivevstressenv.is_set
	|| threethreevstressenv.is_set
	|| apsstressenv.is_set
	|| normalapsvolt.is_set
	|| diagoptmoncap.is_set
	|| lowpwrstartupcap.is_set
	|| reserved.is_set
	|| checksum.is_set
	|| ciscopid.is_set
	|| ciscovid.is_set
	|| ciscosn.is_set
	|| ciscopn.is_set
	|| ciscorev.is_set
	|| extvendorspecific.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| fcottype.is_set
	|| gigethcc.is_set
	|| fctxtype.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(versionid.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(eid.yfilter)
	|| ydk::is_set(xcvrtype.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(bitencoding.yfilter)
	|| ydk::is_set(bitratembps.yfilter)
	|| ydk::is_set(protocoltype.yfilter)
	|| ydk::is_set(xgethcode.yfilter)
	|| ydk::is_set(sonetsdhcode.yfilter)
	|| ydk::is_set(xgfccode.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(fibretype.yfilter)
	|| ydk::is_set(wavelench0.yfilter)
	|| ydk::is_set(wavelench1.yfilter)
	|| ydk::is_set(wavelench2.yfilter)
	|| ydk::is_set(wavelench3.yfilter)
	|| ydk::is_set(packageoui.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(vendorserno.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(lotcode.yfilter)
	|| ydk::is_set(fivevstressenv.yfilter)
	|| ydk::is_set(threethreevstressenv.yfilter)
	|| ydk::is_set(apsstressenv.yfilter)
	|| ydk::is_set(normalapsvolt.yfilter)
	|| ydk::is_set(diagoptmoncap.yfilter)
	|| ydk::is_set(lowpwrstartupcap.yfilter)
	|| ydk::is_set(reserved.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(ciscopid.yfilter)
	|| ydk::is_set(ciscovid.yfilter)
	|| ydk::is_set(ciscosn.yfilter)
	|| ydk::is_set(ciscopn.yfilter)
	|| ydk::is_set(ciscorev.yfilter)
	|| ydk::is_set(extvendorspecific.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(fcottype.yfilter)
	|| ydk::is_set(gigethcc.yfilter)
	|| ydk::is_set(fctxtype.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcotx2-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (versionid.is_set || is_set(versionid.yfilter)) leaf_name_data.push_back(versionid.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (eid.is_set || is_set(eid.yfilter)) leaf_name_data.push_back(eid.get_name_leafdata());
    if (xcvrtype.is_set || is_set(xcvrtype.yfilter)) leaf_name_data.push_back(xcvrtype.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (bitencoding.is_set || is_set(bitencoding.yfilter)) leaf_name_data.push_back(bitencoding.get_name_leafdata());
    if (bitratembps.is_set || is_set(bitratembps.yfilter)) leaf_name_data.push_back(bitratembps.get_name_leafdata());
    if (protocoltype.is_set || is_set(protocoltype.yfilter)) leaf_name_data.push_back(protocoltype.get_name_leafdata());
    if (xgethcode.is_set || is_set(xgethcode.yfilter)) leaf_name_data.push_back(xgethcode.get_name_leafdata());
    if (sonetsdhcode.is_set || is_set(sonetsdhcode.yfilter)) leaf_name_data.push_back(sonetsdhcode.get_name_leafdata());
    if (xgfccode.is_set || is_set(xgfccode.yfilter)) leaf_name_data.push_back(xgfccode.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (fibretype.is_set || is_set(fibretype.yfilter)) leaf_name_data.push_back(fibretype.get_name_leafdata());
    if (wavelench0.is_set || is_set(wavelench0.yfilter)) leaf_name_data.push_back(wavelench0.get_name_leafdata());
    if (wavelench1.is_set || is_set(wavelench1.yfilter)) leaf_name_data.push_back(wavelench1.get_name_leafdata());
    if (wavelench2.is_set || is_set(wavelench2.yfilter)) leaf_name_data.push_back(wavelench2.get_name_leafdata());
    if (wavelench3.is_set || is_set(wavelench3.yfilter)) leaf_name_data.push_back(wavelench3.get_name_leafdata());
    if (packageoui.is_set || is_set(packageoui.yfilter)) leaf_name_data.push_back(packageoui.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (vendorserno.is_set || is_set(vendorserno.yfilter)) leaf_name_data.push_back(vendorserno.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (lotcode.is_set || is_set(lotcode.yfilter)) leaf_name_data.push_back(lotcode.get_name_leafdata());
    if (fivevstressenv.is_set || is_set(fivevstressenv.yfilter)) leaf_name_data.push_back(fivevstressenv.get_name_leafdata());
    if (threethreevstressenv.is_set || is_set(threethreevstressenv.yfilter)) leaf_name_data.push_back(threethreevstressenv.get_name_leafdata());
    if (apsstressenv.is_set || is_set(apsstressenv.yfilter)) leaf_name_data.push_back(apsstressenv.get_name_leafdata());
    if (normalapsvolt.is_set || is_set(normalapsvolt.yfilter)) leaf_name_data.push_back(normalapsvolt.get_name_leafdata());
    if (diagoptmoncap.is_set || is_set(diagoptmoncap.yfilter)) leaf_name_data.push_back(diagoptmoncap.get_name_leafdata());
    if (lowpwrstartupcap.is_set || is_set(lowpwrstartupcap.yfilter)) leaf_name_data.push_back(lowpwrstartupcap.get_name_leafdata());
    if (reserved.is_set || is_set(reserved.yfilter)) leaf_name_data.push_back(reserved.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (ciscopid.is_set || is_set(ciscopid.yfilter)) leaf_name_data.push_back(ciscopid.get_name_leafdata());
    if (ciscovid.is_set || is_set(ciscovid.yfilter)) leaf_name_data.push_back(ciscovid.get_name_leafdata());
    if (ciscosn.is_set || is_set(ciscosn.yfilter)) leaf_name_data.push_back(ciscosn.get_name_leafdata());
    if (ciscopn.is_set || is_set(ciscopn.yfilter)) leaf_name_data.push_back(ciscopn.get_name_leafdata());
    if (ciscorev.is_set || is_set(ciscorev.yfilter)) leaf_name_data.push_back(ciscorev.get_name_leafdata());
    if (extvendorspecific.is_set || is_set(extvendorspecific.yfilter)) leaf_name_data.push_back(extvendorspecific.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (fcottype.is_set || is_set(fcottype.yfilter)) leaf_name_data.push_back(fcottype.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());
    if (fctxtype.is_set || is_set(fctxtype.yfilter)) leaf_name_data.push_back(fctxtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "versionId")
    {
        versionid = value;
        versionid.value_namespace = name_space;
        versionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eid")
    {
        eid = value;
        eid.value_namespace = name_space;
        eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrType")
    {
        xcvrtype = value;
        xcvrtype.value_namespace = name_space;
        xcvrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding = value;
        bitencoding.value_namespace = name_space;
        bitencoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps = value;
        bitratembps.value_namespace = name_space;
        bitratembps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolType")
    {
        protocoltype = value;
        protocoltype.value_namespace = name_space;
        protocoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode = value;
        xgethcode.value_namespace = name_space;
        xgethcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode = value;
        sonetsdhcode.value_namespace = name_space;
        sonetsdhcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode = value;
        xgfccode.value_namespace = name_space;
        xgfccode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fibreType")
    {
        fibretype = value;
        fibretype.value_namespace = name_space;
        fibretype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0 = value;
        wavelench0.value_namespace = name_space;
        wavelench0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1 = value;
        wavelench1.value_namespace = name_space;
        wavelench1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2 = value;
        wavelench2.value_namespace = name_space;
        wavelench2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3 = value;
        wavelench3.value_namespace = name_space;
        wavelench3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packageOui")
    {
        packageoui = value;
        packageoui.value_namespace = name_space;
        packageoui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno = value;
        vendorserno.value_namespace = name_space;
        vendorserno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lotCode")
    {
        lotcode = value;
        lotcode.value_namespace = name_space;
        lotcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv = value;
        fivevstressenv.value_namespace = name_space;
        fivevstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threeThreeVStressEnv")
    {
        threethreevstressenv = value;
        threethreevstressenv.value_namespace = name_space;
        threethreevstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "apsStressEnv")
    {
        apsstressenv = value;
        apsstressenv.value_namespace = name_space;
        apsstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normalApsVolt")
    {
        normalapsvolt = value;
        normalapsvolt.value_namespace = name_space;
        normalapsvolt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagOptMonCap")
    {
        diagoptmoncap = value;
        diagoptmoncap.value_namespace = name_space;
        diagoptmoncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lowPwrStartupCap")
    {
        lowpwrstartupcap = value;
        lowpwrstartupcap.value_namespace = name_space;
        lowpwrstartupcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved")
    {
        reserved = value;
        reserved.value_namespace = name_space;
        reserved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid = value;
        ciscopid.value_namespace = name_space;
        ciscopid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid = value;
        ciscovid.value_namespace = name_space;
        ciscovid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn = value;
        ciscosn.value_namespace = name_space;
        ciscosn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn = value;
        ciscopn.value_namespace = name_space;
        ciscopn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev = value;
        ciscorev.value_namespace = name_space;
        ciscorev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific = value;
        extvendorspecific.value_namespace = name_space;
        extvendorspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotType")
    {
        fcottype = value;
        fcottype.value_namespace = name_space;
        fcottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCTxType")
    {
        fctxtype = value;
        fctxtype.value_namespace = name_space;
        fctxtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "versionId")
    {
        versionid.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "eid")
    {
        eid.yfilter = yfilter;
    }
    if(value_path == "xcvrType")
    {
        xcvrtype.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding.yfilter = yfilter;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps.yfilter = yfilter;
    }
    if(value_path == "protocolType")
    {
        protocoltype.yfilter = yfilter;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode.yfilter = yfilter;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode.yfilter = yfilter;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "fibreType")
    {
        fibretype.yfilter = yfilter;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0.yfilter = yfilter;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1.yfilter = yfilter;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2.yfilter = yfilter;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3.yfilter = yfilter;
    }
    if(value_path == "packageOui")
    {
        packageoui.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "lotCode")
    {
        lotcode.yfilter = yfilter;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv.yfilter = yfilter;
    }
    if(value_path == "threeThreeVStressEnv")
    {
        threethreevstressenv.yfilter = yfilter;
    }
    if(value_path == "apsStressEnv")
    {
        apsstressenv.yfilter = yfilter;
    }
    if(value_path == "normalApsVolt")
    {
        normalapsvolt.yfilter = yfilter;
    }
    if(value_path == "diagOptMonCap")
    {
        diagoptmoncap.yfilter = yfilter;
    }
    if(value_path == "lowPwrStartupCap")
    {
        lowpwrstartupcap.yfilter = yfilter;
    }
    if(value_path == "reserved")
    {
        reserved.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid.yfilter = yfilter;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid.yfilter = yfilter;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn.yfilter = yfilter;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn.yfilter = yfilter;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev.yfilter = yfilter;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "fcotType")
    {
        fcottype.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
    if(value_path == "fCTxType")
    {
        fctxtype.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::Fcotx2Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "partNumber" || name == "versionId" || name == "description" || name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "eid" || name == "xcvrType" || name == "connectType" || name == "bitEncoding" || name == "bitRateMbps" || name == "protocolType" || name == "xgEthCode" || name == "sonetSdhCode" || name == "xgFcCode" || name == "range" || name == "fibreType" || name == "waveLenCh0" || name == "waveLenCh1" || name == "waveLenCh2" || name == "waveLenCh3" || name == "packageOui" || name == "vendorName" || name == "vendorPn" || name == "vendorRev" || name == "vendorSerNo" || name == "dateCode" || name == "lotCode" || name == "fiveVStressEnv" || name == "threeThreeVStressEnv" || name == "apsStressEnv" || name == "normalApsVolt" || name == "diagOptMonCap" || name == "lowPwrStartupCap" || name == "reserved" || name == "checksum" || name == "ciscoPid" || name == "ciscoVid" || name == "ciscoSN" || name == "ciscoPN" || name == "ciscoRev" || name == "extVendorSpecific" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "fcotType" || name == "gigEthCC" || name == "fCTxType")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::PortcapItems()
    :
    id{YType::str, "id"},
    speed{YType::str, "speed"},
    duplex{YType::str, "duplex"},
    trunkencap{YType::uint8, "trunkEncap"},
    channel{YType::uint8, "channel"},
    suppression{YType::uint8, "suppression"},
    rxflowcontrol{YType::uint8, "rxFlowControl"},
    txflowcontrol{YType::uint8, "txFlowControl"},
    cosrewrite{YType::uint8, "cosRewrite"},
    tosrewrite{YType::uint8, "tosRewrite"},
    span{YType::uint8, "span"},
    udld{YType::uint8, "udld"},
    autoneg{YType::uint8, "autoneg"},
    linkdebounce{YType::uint8, "linkDebounce"},
    linkdebouncetime{YType::uint8, "linkDebounceTime"},
    fcotcapable{YType::uint8, "fcotCapable"},
    ratemode{YType::uint8, "rateMode"},
    mdix{YType::uint8, "mdix"},
    portgroup{YType::uint8, "portGroup"},
    ctscapable{YType::uint8, "ctsCapable"},
    qosrxprio{YType::uint8, "qosRxPrio"},
    qosrxqueue{YType::uint8, "qosRxQueue"},
    qosrxthold{YType::uint8, "qosRxThold"},
    qostxprio{YType::uint8, "qosTxPrio"},
    qostxqueue{YType::uint8, "qosTxQueue"},
    qostxthold{YType::uint8, "qosTxThold"},
    model{YType::str, "model"},
    type{YType::str, "type"},
    portgrpmbrs{YType::str, "portGrpMbrs"},
    protosupport{YType::uint32, "protoSupport"},
    portcap{YType::uint32, "portCap"},
    eeecapval{YType::uint16, "eeeCapVal"},
    eeewaketimes10g{YType::str, "eeeWakeTimes10g"},
    eeeflapflags{YType::uint16, "eeeFlapFlags"}
{

    yang_name = "portcap-items"; yang_parent_name = "phys-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::~PortcapItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| speed.is_set
	|| duplex.is_set
	|| trunkencap.is_set
	|| channel.is_set
	|| suppression.is_set
	|| rxflowcontrol.is_set
	|| txflowcontrol.is_set
	|| cosrewrite.is_set
	|| tosrewrite.is_set
	|| span.is_set
	|| udld.is_set
	|| autoneg.is_set
	|| linkdebounce.is_set
	|| linkdebouncetime.is_set
	|| fcotcapable.is_set
	|| ratemode.is_set
	|| mdix.is_set
	|| portgroup.is_set
	|| ctscapable.is_set
	|| qosrxprio.is_set
	|| qosrxqueue.is_set
	|| qosrxthold.is_set
	|| qostxprio.is_set
	|| qostxqueue.is_set
	|| qostxthold.is_set
	|| model.is_set
	|| type.is_set
	|| portgrpmbrs.is_set
	|| protosupport.is_set
	|| portcap.is_set
	|| eeecapval.is_set
	|| eeewaketimes10g.is_set
	|| eeeflapflags.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(trunkencap.yfilter)
	|| ydk::is_set(channel.yfilter)
	|| ydk::is_set(suppression.yfilter)
	|| ydk::is_set(rxflowcontrol.yfilter)
	|| ydk::is_set(txflowcontrol.yfilter)
	|| ydk::is_set(cosrewrite.yfilter)
	|| ydk::is_set(tosrewrite.yfilter)
	|| ydk::is_set(span.yfilter)
	|| ydk::is_set(udld.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(linkdebounce.yfilter)
	|| ydk::is_set(linkdebouncetime.yfilter)
	|| ydk::is_set(fcotcapable.yfilter)
	|| ydk::is_set(ratemode.yfilter)
	|| ydk::is_set(mdix.yfilter)
	|| ydk::is_set(portgroup.yfilter)
	|| ydk::is_set(ctscapable.yfilter)
	|| ydk::is_set(qosrxprio.yfilter)
	|| ydk::is_set(qosrxqueue.yfilter)
	|| ydk::is_set(qosrxthold.yfilter)
	|| ydk::is_set(qostxprio.yfilter)
	|| ydk::is_set(qostxqueue.yfilter)
	|| ydk::is_set(qostxthold.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(portgrpmbrs.yfilter)
	|| ydk::is_set(protosupport.yfilter)
	|| ydk::is_set(portcap.yfilter)
	|| ydk::is_set(eeecapval.yfilter)
	|| ydk::is_set(eeewaketimes10g.yfilter)
	|| ydk::is_set(eeeflapflags.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (trunkencap.is_set || is_set(trunkencap.yfilter)) leaf_name_data.push_back(trunkencap.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (suppression.is_set || is_set(suppression.yfilter)) leaf_name_data.push_back(suppression.get_name_leafdata());
    if (rxflowcontrol.is_set || is_set(rxflowcontrol.yfilter)) leaf_name_data.push_back(rxflowcontrol.get_name_leafdata());
    if (txflowcontrol.is_set || is_set(txflowcontrol.yfilter)) leaf_name_data.push_back(txflowcontrol.get_name_leafdata());
    if (cosrewrite.is_set || is_set(cosrewrite.yfilter)) leaf_name_data.push_back(cosrewrite.get_name_leafdata());
    if (tosrewrite.is_set || is_set(tosrewrite.yfilter)) leaf_name_data.push_back(tosrewrite.get_name_leafdata());
    if (span.is_set || is_set(span.yfilter)) leaf_name_data.push_back(span.get_name_leafdata());
    if (udld.is_set || is_set(udld.yfilter)) leaf_name_data.push_back(udld.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (linkdebounce.is_set || is_set(linkdebounce.yfilter)) leaf_name_data.push_back(linkdebounce.get_name_leafdata());
    if (linkdebouncetime.is_set || is_set(linkdebouncetime.yfilter)) leaf_name_data.push_back(linkdebouncetime.get_name_leafdata());
    if (fcotcapable.is_set || is_set(fcotcapable.yfilter)) leaf_name_data.push_back(fcotcapable.get_name_leafdata());
    if (ratemode.is_set || is_set(ratemode.yfilter)) leaf_name_data.push_back(ratemode.get_name_leafdata());
    if (mdix.is_set || is_set(mdix.yfilter)) leaf_name_data.push_back(mdix.get_name_leafdata());
    if (portgroup.is_set || is_set(portgroup.yfilter)) leaf_name_data.push_back(portgroup.get_name_leafdata());
    if (ctscapable.is_set || is_set(ctscapable.yfilter)) leaf_name_data.push_back(ctscapable.get_name_leafdata());
    if (qosrxprio.is_set || is_set(qosrxprio.yfilter)) leaf_name_data.push_back(qosrxprio.get_name_leafdata());
    if (qosrxqueue.is_set || is_set(qosrxqueue.yfilter)) leaf_name_data.push_back(qosrxqueue.get_name_leafdata());
    if (qosrxthold.is_set || is_set(qosrxthold.yfilter)) leaf_name_data.push_back(qosrxthold.get_name_leafdata());
    if (qostxprio.is_set || is_set(qostxprio.yfilter)) leaf_name_data.push_back(qostxprio.get_name_leafdata());
    if (qostxqueue.is_set || is_set(qostxqueue.yfilter)) leaf_name_data.push_back(qostxqueue.get_name_leafdata());
    if (qostxthold.is_set || is_set(qostxthold.yfilter)) leaf_name_data.push_back(qostxthold.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (portgrpmbrs.is_set || is_set(portgrpmbrs.yfilter)) leaf_name_data.push_back(portgrpmbrs.get_name_leafdata());
    if (protosupport.is_set || is_set(protosupport.yfilter)) leaf_name_data.push_back(protosupport.get_name_leafdata());
    if (portcap.is_set || is_set(portcap.yfilter)) leaf_name_data.push_back(portcap.get_name_leafdata());
    if (eeecapval.is_set || is_set(eeecapval.yfilter)) leaf_name_data.push_back(eeecapval.get_name_leafdata());
    if (eeewaketimes10g.is_set || is_set(eeewaketimes10g.yfilter)) leaf_name_data.push_back(eeewaketimes10g.get_name_leafdata());
    if (eeeflapflags.is_set || is_set(eeeflapflags.yfilter)) leaf_name_data.push_back(eeeflapflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "trunkEncap")
    {
        trunkencap = value;
        trunkencap.value_namespace = name_space;
        trunkencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression")
    {
        suppression = value;
        suppression.value_namespace = name_space;
        suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxFlowControl")
    {
        rxflowcontrol = value;
        rxflowcontrol.value_namespace = name_space;
        rxflowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txFlowControl")
    {
        txflowcontrol = value;
        txflowcontrol.value_namespace = name_space;
        txflowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cosRewrite")
    {
        cosrewrite = value;
        cosrewrite.value_namespace = name_space;
        cosrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tosRewrite")
    {
        tosrewrite = value;
        tosrewrite.value_namespace = name_space;
        tosrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span")
    {
        span = value;
        span.value_namespace = name_space;
        span.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udld")
    {
        udld = value;
        udld.value_namespace = name_space;
        udld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoneg")
    {
        autoneg = value;
        autoneg.value_namespace = name_space;
        autoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce = value;
        linkdebounce.value_namespace = name_space;
        linkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounceTime")
    {
        linkdebouncetime = value;
        linkdebouncetime.value_namespace = name_space;
        linkdebouncetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotCapable")
    {
        fcotcapable = value;
        fcotcapable.value_namespace = name_space;
        fcotcapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateMode")
    {
        ratemode = value;
        ratemode.value_namespace = name_space;
        ratemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdix")
    {
        mdix = value;
        mdix.value_namespace = name_space;
        mdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portGroup")
    {
        portgroup = value;
        portgroup.value_namespace = name_space;
        portgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctsCapable")
    {
        ctscapable = value;
        ctscapable.value_namespace = name_space;
        ctscapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxPrio")
    {
        qosrxprio = value;
        qosrxprio.value_namespace = name_space;
        qosrxprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxQueue")
    {
        qosrxqueue = value;
        qosrxqueue.value_namespace = name_space;
        qosrxqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxThold")
    {
        qosrxthold = value;
        qosrxthold.value_namespace = name_space;
        qosrxthold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxPrio")
    {
        qostxprio = value;
        qostxprio.value_namespace = name_space;
        qostxprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxQueue")
    {
        qostxqueue = value;
        qostxqueue.value_namespace = name_space;
        qostxqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxThold")
    {
        qostxthold = value;
        qostxthold.value_namespace = name_space;
        qostxthold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portGrpMbrs")
    {
        portgrpmbrs = value;
        portgrpmbrs.value_namespace = name_space;
        portgrpmbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoSupport")
    {
        protosupport = value;
        protosupport.value_namespace = name_space;
        protosupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCap")
    {
        portcap = value;
        portcap.value_namespace = name_space;
        portcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeCapVal")
    {
        eeecapval = value;
        eeecapval.value_namespace = name_space;
        eeecapval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeWakeTimes10g")
    {
        eeewaketimes10g = value;
        eeewaketimes10g.value_namespace = name_space;
        eeewaketimes10g.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeFlapFlags")
    {
        eeeflapflags = value;
        eeeflapflags.value_namespace = name_space;
        eeeflapflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "trunkEncap")
    {
        trunkencap.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
    if(value_path == "suppression")
    {
        suppression.yfilter = yfilter;
    }
    if(value_path == "rxFlowControl")
    {
        rxflowcontrol.yfilter = yfilter;
    }
    if(value_path == "txFlowControl")
    {
        txflowcontrol.yfilter = yfilter;
    }
    if(value_path == "cosRewrite")
    {
        cosrewrite.yfilter = yfilter;
    }
    if(value_path == "tosRewrite")
    {
        tosrewrite.yfilter = yfilter;
    }
    if(value_path == "span")
    {
        span.yfilter = yfilter;
    }
    if(value_path == "udld")
    {
        udld.yfilter = yfilter;
    }
    if(value_path == "autoneg")
    {
        autoneg.yfilter = yfilter;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce.yfilter = yfilter;
    }
    if(value_path == "linkDebounceTime")
    {
        linkdebouncetime.yfilter = yfilter;
    }
    if(value_path == "fcotCapable")
    {
        fcotcapable.yfilter = yfilter;
    }
    if(value_path == "rateMode")
    {
        ratemode.yfilter = yfilter;
    }
    if(value_path == "mdix")
    {
        mdix.yfilter = yfilter;
    }
    if(value_path == "portGroup")
    {
        portgroup.yfilter = yfilter;
    }
    if(value_path == "ctsCapable")
    {
        ctscapable.yfilter = yfilter;
    }
    if(value_path == "qosRxPrio")
    {
        qosrxprio.yfilter = yfilter;
    }
    if(value_path == "qosRxQueue")
    {
        qosrxqueue.yfilter = yfilter;
    }
    if(value_path == "qosRxThold")
    {
        qosrxthold.yfilter = yfilter;
    }
    if(value_path == "qosTxPrio")
    {
        qostxprio.yfilter = yfilter;
    }
    if(value_path == "qosTxQueue")
    {
        qostxqueue.yfilter = yfilter;
    }
    if(value_path == "qosTxThold")
    {
        qostxthold.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "portGrpMbrs")
    {
        portgrpmbrs.yfilter = yfilter;
    }
    if(value_path == "protoSupport")
    {
        protosupport.yfilter = yfilter;
    }
    if(value_path == "portCap")
    {
        portcap.yfilter = yfilter;
    }
    if(value_path == "eeeCapVal")
    {
        eeecapval.yfilter = yfilter;
    }
    if(value_path == "eeeWakeTimes10g")
    {
        eeewaketimes10g.yfilter = yfilter;
    }
    if(value_path == "eeeFlapFlags")
    {
        eeeflapflags.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::PhysItems_::PortcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "speed" || name == "duplex" || name == "trunkEncap" || name == "channel" || name == "suppression" || name == "rxFlowControl" || name == "txFlowControl" || name == "cosRewrite" || name == "tosRewrite" || name == "span" || name == "udld" || name == "autoneg" || name == "linkDebounce" || name == "linkDebounceTime" || name == "fcotCapable" || name == "rateMode" || name == "mdix" || name == "portGroup" || name == "ctsCapable" || name == "qosRxPrio" || name == "qosRxQueue" || name == "qosRxThold" || name == "qosTxPrio" || name == "qosTxQueue" || name == "qosTxThold" || name == "model" || name == "type" || name == "portGrpMbrs" || name == "protoSupport" || name == "portCap" || name == "eeeCapVal" || name == "eeeWakeTimes10g" || name == "eeeFlapFlags")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::HwifdetailsItems()
    :
    slice{YType::uint32, "slice"},
    sport{YType::uint32, "sPort"},
    vif{YType::uint32, "vif"}
{

    yang_name = "hwifdetails-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::~HwifdetailsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::has_data() const
{
    if (is_presence_container) return true;
    return slice.is_set
	|| sport.is_set
	|| vif.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice.yfilter)
	|| ydk::is_set(sport.yfilter)
	|| ydk::is_set(vif.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwifdetails-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice.is_set || is_set(slice.yfilter)) leaf_name_data.push_back(slice.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());
    if (vif.is_set || is_set(vif.yfilter)) leaf_name_data.push_back(vif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice")
    {
        slice = value;
        slice.value_namespace = name_space;
        slice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPort")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vif")
    {
        vif = value;
        vif.value_namespace = name_space;
        vif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice")
    {
        slice.yfilter = yfilter;
    }
    if(value_path == "sPort")
    {
        sport.yfilter = yfilter;
    }
    if(value_path == "vif")
    {
        vif.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::HwifdetailsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice" || name == "sPort" || name == "vif")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::AggrmbrifItems()
    :
    operst{YType::enumeration, "operSt"},
    channelingst{YType::enumeration, "channelingSt"},
    summoperst{YType::enumeration, "summOperSt"},
    uptime{YType::str, "uptime"},
    flags{YType::str, "flags"},
    bdlportnum{YType::uint32, "bdlPortNum"},
    ltlprogrammed{YType::boolean, "ltlProgrammed"},
    name{YType::str, "name"}
{

    yang_name = "aggrmbrif-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::~AggrmbrifItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| channelingst.is_set
	|| summoperst.is_set
	|| uptime.is_set
	|| flags.is_set
	|| bdlportnum.is_set
	|| ltlprogrammed.is_set
	|| name.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(channelingst.yfilter)
	|| ydk::is_set(summoperst.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(bdlportnum.yfilter)
	|| ydk::is_set(ltlprogrammed.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggrmbrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (channelingst.is_set || is_set(channelingst.yfilter)) leaf_name_data.push_back(channelingst.get_name_leafdata());
    if (summoperst.is_set || is_set(summoperst.yfilter)) leaf_name_data.push_back(summoperst.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (bdlportnum.is_set || is_set(bdlportnum.yfilter)) leaf_name_data.push_back(bdlportnum.get_name_leafdata());
    if (ltlprogrammed.is_set || is_set(ltlprogrammed.yfilter)) leaf_name_data.push_back(ltlprogrammed.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channelingSt")
    {
        channelingst = value;
        channelingst.value_namespace = name_space;
        channelingst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summOperSt")
    {
        summoperst = value;
        summoperst.value_namespace = name_space;
        summoperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdlPortNum")
    {
        bdlportnum = value;
        bdlportnum.value_namespace = name_space;
        bdlportnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ltlProgrammed")
    {
        ltlprogrammed = value;
        ltlprogrammed.value_namespace = name_space;
        ltlprogrammed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "channelingSt")
    {
        channelingst.yfilter = yfilter;
    }
    if(value_path == "summOperSt")
    {
        summoperst.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "bdlPortNum")
    {
        bdlportnum.yfilter = yfilter;
    }
    if(value_path == "ltlProgrammed")
    {
        ltlprogrammed.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::AggrmbrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operSt" || name == "channelingSt" || name == "summOperSt" || name == "uptime" || name == "flags" || name == "bdlPortNum" || name == "ltlProgrammed" || name == "name")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::MultisiteiftrackingItems()
    :
    tracking{YType::enumeration, "tracking"}
{

    yang_name = "multisiteiftracking-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::~MultisiteiftrackingItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::has_data() const
{
    if (is_presence_container) return true;
    return tracking.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multisiteiftracking-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::MultisiteiftrackingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomItems()
    :
    domdef_list(this, {"dompkey"})
{

    yang_name = "dom-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::~DomItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList>();
        ent_->parent = this;
        domdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomDef-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::DomDefList()
    :
    dompkey{YType::str, "domPKey"},
    instrimedcy{YType::enumeration, "instrImedcy"},
    name{YType::str, "name"}
        ,
    rsdomdefns_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems>())
    , rsdomdefnslocal_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems>())
    , rtfvtodomdef_items(std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems>())
{
    rsdomdefns_items->parent = this;
    rsdomdefnslocal_items->parent = this;
    rtfvtodomdef_items->parent = this;

    yang_name = "DomDef-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::~DomDefList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::has_data() const
{
    if (is_presence_container) return true;
    return dompkey.is_set
	|| instrimedcy.is_set
	|| name.is_set
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_data())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_data())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_data());
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dompkey.yfilter)
	|| ydk::is_set(instrimedcy.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_operation())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_operation())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_operation());
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomDef-list";
    ADD_KEY_TOKEN(dompkey, "domPKey");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dompkey.is_set || is_set(dompkey.yfilter)) leaf_name_data.push_back(dompkey.get_name_leafdata());
    if (instrimedcy.is_set || is_set(instrimedcy.yfilter)) leaf_name_data.push_back(instrimedcy.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsdomDefNs-items")
    {
        if(rsdomdefns_items == nullptr)
        {
            rsdomdefns_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems>();
        }
        return rsdomdefns_items;
    }

    if(child_yang_name == "rsdomDefNsLocal-items")
    {
        if(rsdomdefnslocal_items == nullptr)
        {
            rsdomdefnslocal_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems>();
        }
        return rsdomdefnslocal_items;
    }

    if(child_yang_name == "rtfvToDomDef-items")
    {
        if(rtfvtodomdef_items == nullptr)
        {
            rtfvtodomdef_items = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems>();
        }
        return rtfvtodomdef_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsdomDefNs-items" || name == "rsdomDefNsLocal-items" || name == "rtfvToDomDef-items" || name == "domPKey" || name == "instrImedcy" || name == "name")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::RsdomDefNsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNs-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::~RsdomDefNsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::RsdomDefNsLocalItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNsLocal-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::~RsdomDefNsLocalItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNsLocal-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtfvToDomDefItems()
    :
    rtfvtodomdef_list(this, {"tdn"})
{

    yang_name = "rtfvToDomDef-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::~RtfvToDomDefItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToDomDef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToDomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList>();
        ent_->parent = this;
        rtfvtodomdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToDomDef-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::RtFvToDomDefList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvToDomDef-list"; yang_parent_name = "rtfvToDomDef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::~RtFvToDomDefList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToDomDef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::RtInbandConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtInbandConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::~RtInbandConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtInbandConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtInbandConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtextConfItems::RtextConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtextConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtextConfItems::~RtextConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtextConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtextConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtextConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtextConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtextConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtextConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtextConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::RtbrConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtbrConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::~RtbrConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtbrConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtbrConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtfvNodePortAttItems()
    :
    rtfvnodeportatt_list(this, {"tdn"})
{

    yang_name = "rtfvNodePortAtt-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::~RtfvNodePortAttItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvNodePortAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvNodePortAtt-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList>();
        ent_->parent = this;
        rtfvnodeportatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvNodePortAtt-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::RtFvNodePortAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvNodePortAtt-list"; yang_parent_name = "rtfvNodePortAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::~RtFvNodePortAttList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvNodePortAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::RtmbrIfsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtmbrIfs-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::~RtmbrIfsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtmbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::RtphysRtdConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtphysRtdConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::~RtphysRtdConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::Rtl3EncPhysRtdConfItems()
    :
    rtl3encphysrtdconf_list(this, {"tdn"})
{

    yang_name = "rtl3EncPhysRtdConf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::~Rtl3EncPhysRtdConfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_operation() const
{
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtl3EncPhysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtL3EncPhysRtdConf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList>();
        ent_->parent = this;
        rtl3encphysrtdconf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtL3EncPhysRtdConf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::RtL3EncPhysRtdConfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtL3EncPhysRtdConf-list"; yang_parent_name = "rtl3EncPhysRtdConf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::~RtL3EncPhysRtdConfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtL3EncPhysRtdConf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RttunnelTunnelMbrIfsItems()
    :
    rttunneltunnelmbrifs_list(this, {"tdn"})
{

    yang_name = "rttunnelTunnelMbrIfs-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::~RttunnelTunnelMbrIfsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttunneltunnelmbrifs_list.len(); index++)
    {
        if(rttunneltunnelmbrifs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::has_operation() const
{
    for (std::size_t index=0; index<rttunneltunnelmbrifs_list.len(); index++)
    {
        if(rttunneltunnelmbrifs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttunnelTunnelMbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtTunnelTunnelMbrIfs-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList>();
        ent_->parent = this;
        rttunneltunnelmbrifs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttunneltunnelmbrifs_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtTunnelTunnelMbrIfs-list")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::RtTunnelTunnelMbrIfsList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtTunnelTunnelMbrIfs-list"; yang_parent_name = "rttunnelTunnelMbrIfs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::~RtTunnelTunnelMbrIfsList()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtTunnelTunnelMbrIfs-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RttunnelTunnelMbrIfsItems::RtTunnelTunnelMbrIfsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::RtLsNodeToIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtLsNodeToIf-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::~RtLsNodeToIfItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtLsNodeToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::PhysItems::PhysIfList::RtLsNodeToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::DbgIfInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    unknownprotos{YType::uint64, "unknownProtos"},
    unknownetype{YType::uint64, "unknownEtype"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    nobuffer{YType::uint64, "noBuffer"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfIn-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::~DbgIfInItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| unknownprotos.is_set
	|| unknownetype.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| nobuffer.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(unknownprotos.yfilter)
	|| ydk::is_set(unknownetype.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(nobuffer.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (unknownprotos.is_set || is_set(unknownprotos.yfilter)) leaf_name_data.push_back(unknownprotos.get_name_leafdata());
    if (unknownetype.is_set || is_set(unknownetype.yfilter)) leaf_name_data.push_back(unknownetype.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (nobuffer.is_set || is_set(nobuffer.yfilter)) leaf_name_data.push_back(nobuffer.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos = value;
        unknownprotos.value_namespace = name_space;
        unknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype = value;
        unknownetype.value_namespace = name_space;
        unknownetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noBuffer")
    {
        nobuffer = value;
        nobuffer.value_namespace = name_space;
        nobuffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos.yfilter = yfilter;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "noBuffer")
    {
        nobuffer.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "unknownProtos" || name == "unknownEtype" || name == "broadcastPkts" || name == "multicastPkts" || name == "noBuffer" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::DbgIfOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    qlen{YType::uint64, "qLen"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfOut-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::~DbgIfOutItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| qlen.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(qlen.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (qlen.is_set || is_set(qlen.yfilter)) leaf_name_data.push_back(qlen.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qLen")
    {
        qlen = value;
        qlen.value_namespace = name_space;
        qlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "qLen")
    {
        qlen.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "qLen" || name == "broadcastPkts" || name == "multicastPkts" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::DbgIpInItems()
    :
    receives{YType::uint64, "receives"},
    hdrerrors{YType::uint64, "hdrErrors"},
    forwdatagrams{YType::uint64, "forwDatagrams"},
    discards{YType::uint64, "discards"}
{

    yang_name = "dbgIpIn-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::~DbgIpInItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::has_data() const
{
    if (is_presence_container) return true;
    return receives.is_set
	|| hdrerrors.is_set
	|| forwdatagrams.is_set
	|| discards.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receives.yfilter)
	|| ydk::is_set(hdrerrors.yfilter)
	|| ydk::is_set(forwdatagrams.yfilter)
	|| ydk::is_set(discards.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receives.is_set || is_set(receives.yfilter)) leaf_name_data.push_back(receives.get_name_leafdata());
    if (hdrerrors.is_set || is_set(hdrerrors.yfilter)) leaf_name_data.push_back(hdrerrors.get_name_leafdata());
    if (forwdatagrams.is_set || is_set(forwdatagrams.yfilter)) leaf_name_data.push_back(forwdatagrams.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receives")
    {
        receives = value;
        receives.value_namespace = name_space;
        receives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors = value;
        hdrerrors.value_namespace = name_space;
        hdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams = value;
        forwdatagrams.value_namespace = name_space;
        forwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receives")
    {
        receives.yfilter = yfilter;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors.yfilter = yfilter;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receives" || name == "hdrErrors" || name == "forwDatagrams" || name == "discards")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::DbgDot1dItems()
    :
    baseportdelayexceededdiscards{YType::uint64, "basePortDelayExceededDiscards"},
    baseportmtuexceededdiscards{YType::uint64, "basePortMtuExceededDiscards"},
    tpportinframes{YType::uint64, "tpPortInFrames"},
    tpportoutframes{YType::uint64, "tpPortOutFrames"},
    portindiscards{YType::uint64, "portInDiscards"}
{

    yang_name = "dbgDot1d-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::~DbgDot1dItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::has_data() const
{
    if (is_presence_container) return true;
    return baseportdelayexceededdiscards.is_set
	|| baseportmtuexceededdiscards.is_set
	|| tpportinframes.is_set
	|| tpportoutframes.is_set
	|| portindiscards.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(baseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(baseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(tpportinframes.yfilter)
	|| ydk::is_set(tpportoutframes.yfilter)
	|| ydk::is_set(portindiscards.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot1d-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baseportdelayexceededdiscards.is_set || is_set(baseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(baseportdelayexceededdiscards.get_name_leafdata());
    if (baseportmtuexceededdiscards.is_set || is_set(baseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(baseportmtuexceededdiscards.get_name_leafdata());
    if (tpportinframes.is_set || is_set(tpportinframes.yfilter)) leaf_name_data.push_back(tpportinframes.get_name_leafdata());
    if (tpportoutframes.is_set || is_set(tpportoutframes.yfilter)) leaf_name_data.push_back(tpportoutframes.get_name_leafdata());
    if (portindiscards.is_set || is_set(portindiscards.yfilter)) leaf_name_data.push_back(portindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards = value;
        baseportdelayexceededdiscards.value_namespace = name_space;
        baseportdelayexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards = value;
        baseportmtuexceededdiscards.value_namespace = name_space;
        baseportmtuexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes = value;
        tpportinframes.value_namespace = name_space;
        tpportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes = value;
        tpportoutframes.value_namespace = name_space;
        tpportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards = value;
        portindiscards.value_namespace = name_space;
        portindiscards.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes.yfilter = yfilter;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes.yfilter = yfilter;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot1dItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basePortDelayExceededDiscards" || name == "basePortMtuExceededDiscards" || name == "tpPortInFrames" || name == "tpPortOutFrames" || name == "portInDiscards")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::DbgEtherStatsItems()
    :
    dropevents{YType::uint64, "dropEvents"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    undersizepkts{YType::uint64, "undersizePkts"},
    giantpkts{YType::uint64, "giantPkts"},
    stormsupressedpkts{YType::uint64, "stormSupressedPkts"},
    fragments{YType::uint64, "fragments"},
    pkts64octets{YType::uint64, "pkts64Octets"},
    pkts65to127octets{YType::uint64, "pkts65to127Octets"},
    pkts128to255octets{YType::uint64, "pkts128to255Octets"},
    pkts256to511octets{YType::uint64, "pkts256to511Octets"},
    pkts512to1023octets{YType::uint64, "pkts512to1023Octets"},
    pkts1024to1518octets{YType::uint64, "pkts1024to1518Octets"},
    pkts1519to1548octets{YType::uint64, "pkts1519to1548Octets"},
    rxpkts64octets{YType::uint64, "rxPkts64Octets"},
    txpkts64octets{YType::uint64, "txPkts64Octets"},
    rxpkts65to127octets{YType::uint64, "rxPkts65to127Octets"},
    txpkts65to127octets{YType::uint64, "txPkts65to127Octets"},
    rxpkts128to255octets{YType::uint64, "rxPkts128to255Octets"},
    txpkts128to255octets{YType::uint64, "txPkts128to255Octets"},
    rxpkts256to511octets{YType::uint64, "rxPkts256to511Octets"},
    txpkts256to511octets{YType::uint64, "txPkts256to511Octets"},
    rxpkts512to1023octets{YType::uint64, "rxPkts512to1023Octets"},
    txpkts512to1023octets{YType::uint64, "txPkts512to1023Octets"},
    rxpkts1024to1518octets{YType::uint64, "rxPkts1024to1518Octets"},
    txpkts1024to1518octets{YType::uint64, "txPkts1024to1518Octets"},
    rxpkts1519to1548octets{YType::uint64, "rxPkts1519to1548Octets"},
    txpkts1519to1548octets{YType::uint64, "txPkts1519to1548Octets"},
    oversizepkts{YType::uint64, "oversizePkts"},
    jabbers{YType::uint64, "jabbers"},
    octets{YType::uint64, "octets"},
    pkts{YType::uint64, "pkts"},
    collisions{YType::uint64, "collisions"},
    crcalignerrors{YType::uint64, "cRCAlignErrors"},
    txnoerrors{YType::uint64, "tXNoErrors"},
    rxnoerrors{YType::uint64, "rXNoErrors"},
    rxoversizepkts{YType::uint64, "rxOversizePkts"},
    txoversizepkts{YType::uint64, "txOversizePkts"},
    overrun{YType::uint64, "overrun"},
    underrun{YType::uint64, "underrun"},
    ignored{YType::uint64, "ignored"},
    watchdog{YType::uint64, "watchdog"},
    ifdowndrop{YType::uint64, "ifdowndrop"}
{

    yang_name = "dbgEtherStats-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::~DbgEtherStatsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return dropevents.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set
	|| undersizepkts.is_set
	|| giantpkts.is_set
	|| stormsupressedpkts.is_set
	|| fragments.is_set
	|| pkts64octets.is_set
	|| pkts65to127octets.is_set
	|| pkts128to255octets.is_set
	|| pkts256to511octets.is_set
	|| pkts512to1023octets.is_set
	|| pkts1024to1518octets.is_set
	|| pkts1519to1548octets.is_set
	|| rxpkts64octets.is_set
	|| txpkts64octets.is_set
	|| rxpkts65to127octets.is_set
	|| txpkts65to127octets.is_set
	|| rxpkts128to255octets.is_set
	|| txpkts128to255octets.is_set
	|| rxpkts256to511octets.is_set
	|| txpkts256to511octets.is_set
	|| rxpkts512to1023octets.is_set
	|| txpkts512to1023octets.is_set
	|| rxpkts1024to1518octets.is_set
	|| txpkts1024to1518octets.is_set
	|| rxpkts1519to1548octets.is_set
	|| txpkts1519to1548octets.is_set
	|| oversizepkts.is_set
	|| jabbers.is_set
	|| octets.is_set
	|| pkts.is_set
	|| collisions.is_set
	|| crcalignerrors.is_set
	|| txnoerrors.is_set
	|| rxnoerrors.is_set
	|| rxoversizepkts.is_set
	|| txoversizepkts.is_set
	|| overrun.is_set
	|| underrun.is_set
	|| ignored.is_set
	|| watchdog.is_set
	|| ifdowndrop.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropevents.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(undersizepkts.yfilter)
	|| ydk::is_set(giantpkts.yfilter)
	|| ydk::is_set(stormsupressedpkts.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(pkts64octets.yfilter)
	|| ydk::is_set(pkts65to127octets.yfilter)
	|| ydk::is_set(pkts128to255octets.yfilter)
	|| ydk::is_set(pkts256to511octets.yfilter)
	|| ydk::is_set(pkts512to1023octets.yfilter)
	|| ydk::is_set(pkts1024to1518octets.yfilter)
	|| ydk::is_set(pkts1519to1548octets.yfilter)
	|| ydk::is_set(rxpkts64octets.yfilter)
	|| ydk::is_set(txpkts64octets.yfilter)
	|| ydk::is_set(rxpkts65to127octets.yfilter)
	|| ydk::is_set(txpkts65to127octets.yfilter)
	|| ydk::is_set(rxpkts128to255octets.yfilter)
	|| ydk::is_set(txpkts128to255octets.yfilter)
	|| ydk::is_set(rxpkts256to511octets.yfilter)
	|| ydk::is_set(txpkts256to511octets.yfilter)
	|| ydk::is_set(rxpkts512to1023octets.yfilter)
	|| ydk::is_set(txpkts512to1023octets.yfilter)
	|| ydk::is_set(rxpkts1024to1518octets.yfilter)
	|| ydk::is_set(txpkts1024to1518octets.yfilter)
	|| ydk::is_set(rxpkts1519to1548octets.yfilter)
	|| ydk::is_set(txpkts1519to1548octets.yfilter)
	|| ydk::is_set(oversizepkts.yfilter)
	|| ydk::is_set(jabbers.yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(pkts.yfilter)
	|| ydk::is_set(collisions.yfilter)
	|| ydk::is_set(crcalignerrors.yfilter)
	|| ydk::is_set(txnoerrors.yfilter)
	|| ydk::is_set(rxnoerrors.yfilter)
	|| ydk::is_set(rxoversizepkts.yfilter)
	|| ydk::is_set(txoversizepkts.yfilter)
	|| ydk::is_set(overrun.yfilter)
	|| ydk::is_set(underrun.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(watchdog.yfilter)
	|| ydk::is_set(ifdowndrop.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEtherStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropevents.is_set || is_set(dropevents.yfilter)) leaf_name_data.push_back(dropevents.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (undersizepkts.is_set || is_set(undersizepkts.yfilter)) leaf_name_data.push_back(undersizepkts.get_name_leafdata());
    if (giantpkts.is_set || is_set(giantpkts.yfilter)) leaf_name_data.push_back(giantpkts.get_name_leafdata());
    if (stormsupressedpkts.is_set || is_set(stormsupressedpkts.yfilter)) leaf_name_data.push_back(stormsupressedpkts.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (pkts64octets.is_set || is_set(pkts64octets.yfilter)) leaf_name_data.push_back(pkts64octets.get_name_leafdata());
    if (pkts65to127octets.is_set || is_set(pkts65to127octets.yfilter)) leaf_name_data.push_back(pkts65to127octets.get_name_leafdata());
    if (pkts128to255octets.is_set || is_set(pkts128to255octets.yfilter)) leaf_name_data.push_back(pkts128to255octets.get_name_leafdata());
    if (pkts256to511octets.is_set || is_set(pkts256to511octets.yfilter)) leaf_name_data.push_back(pkts256to511octets.get_name_leafdata());
    if (pkts512to1023octets.is_set || is_set(pkts512to1023octets.yfilter)) leaf_name_data.push_back(pkts512to1023octets.get_name_leafdata());
    if (pkts1024to1518octets.is_set || is_set(pkts1024to1518octets.yfilter)) leaf_name_data.push_back(pkts1024to1518octets.get_name_leafdata());
    if (pkts1519to1548octets.is_set || is_set(pkts1519to1548octets.yfilter)) leaf_name_data.push_back(pkts1519to1548octets.get_name_leafdata());
    if (rxpkts64octets.is_set || is_set(rxpkts64octets.yfilter)) leaf_name_data.push_back(rxpkts64octets.get_name_leafdata());
    if (txpkts64octets.is_set || is_set(txpkts64octets.yfilter)) leaf_name_data.push_back(txpkts64octets.get_name_leafdata());
    if (rxpkts65to127octets.is_set || is_set(rxpkts65to127octets.yfilter)) leaf_name_data.push_back(rxpkts65to127octets.get_name_leafdata());
    if (txpkts65to127octets.is_set || is_set(txpkts65to127octets.yfilter)) leaf_name_data.push_back(txpkts65to127octets.get_name_leafdata());
    if (rxpkts128to255octets.is_set || is_set(rxpkts128to255octets.yfilter)) leaf_name_data.push_back(rxpkts128to255octets.get_name_leafdata());
    if (txpkts128to255octets.is_set || is_set(txpkts128to255octets.yfilter)) leaf_name_data.push_back(txpkts128to255octets.get_name_leafdata());
    if (rxpkts256to511octets.is_set || is_set(rxpkts256to511octets.yfilter)) leaf_name_data.push_back(rxpkts256to511octets.get_name_leafdata());
    if (txpkts256to511octets.is_set || is_set(txpkts256to511octets.yfilter)) leaf_name_data.push_back(txpkts256to511octets.get_name_leafdata());
    if (rxpkts512to1023octets.is_set || is_set(rxpkts512to1023octets.yfilter)) leaf_name_data.push_back(rxpkts512to1023octets.get_name_leafdata());
    if (txpkts512to1023octets.is_set || is_set(txpkts512to1023octets.yfilter)) leaf_name_data.push_back(txpkts512to1023octets.get_name_leafdata());
    if (rxpkts1024to1518octets.is_set || is_set(rxpkts1024to1518octets.yfilter)) leaf_name_data.push_back(rxpkts1024to1518octets.get_name_leafdata());
    if (txpkts1024to1518octets.is_set || is_set(txpkts1024to1518octets.yfilter)) leaf_name_data.push_back(txpkts1024to1518octets.get_name_leafdata());
    if (rxpkts1519to1548octets.is_set || is_set(rxpkts1519to1548octets.yfilter)) leaf_name_data.push_back(rxpkts1519to1548octets.get_name_leafdata());
    if (txpkts1519to1548octets.is_set || is_set(txpkts1519to1548octets.yfilter)) leaf_name_data.push_back(txpkts1519to1548octets.get_name_leafdata());
    if (oversizepkts.is_set || is_set(oversizepkts.yfilter)) leaf_name_data.push_back(oversizepkts.get_name_leafdata());
    if (jabbers.is_set || is_set(jabbers.yfilter)) leaf_name_data.push_back(jabbers.get_name_leafdata());
    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (pkts.is_set || is_set(pkts.yfilter)) leaf_name_data.push_back(pkts.get_name_leafdata());
    if (collisions.is_set || is_set(collisions.yfilter)) leaf_name_data.push_back(collisions.get_name_leafdata());
    if (crcalignerrors.is_set || is_set(crcalignerrors.yfilter)) leaf_name_data.push_back(crcalignerrors.get_name_leafdata());
    if (txnoerrors.is_set || is_set(txnoerrors.yfilter)) leaf_name_data.push_back(txnoerrors.get_name_leafdata());
    if (rxnoerrors.is_set || is_set(rxnoerrors.yfilter)) leaf_name_data.push_back(rxnoerrors.get_name_leafdata());
    if (rxoversizepkts.is_set || is_set(rxoversizepkts.yfilter)) leaf_name_data.push_back(rxoversizepkts.get_name_leafdata());
    if (txoversizepkts.is_set || is_set(txoversizepkts.yfilter)) leaf_name_data.push_back(txoversizepkts.get_name_leafdata());
    if (overrun.is_set || is_set(overrun.yfilter)) leaf_name_data.push_back(overrun.get_name_leafdata());
    if (underrun.is_set || is_set(underrun.yfilter)) leaf_name_data.push_back(underrun.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.yfilter)) leaf_name_data.push_back(watchdog.get_name_leafdata());
    if (ifdowndrop.is_set || is_set(ifdowndrop.yfilter)) leaf_name_data.push_back(ifdowndrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropEvents")
    {
        dropevents = value;
        dropevents.value_namespace = name_space;
        dropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts = value;
        undersizepkts.value_namespace = name_space;
        undersizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giantPkts")
    {
        giantpkts = value;
        giantpkts.value_namespace = name_space;
        giantpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts = value;
        stormsupressedpkts.value_namespace = name_space;
        stormsupressedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets = value;
        pkts64octets.value_namespace = name_space;
        pkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets = value;
        pkts65to127octets.value_namespace = name_space;
        pkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets = value;
        pkts128to255octets.value_namespace = name_space;
        pkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets = value;
        pkts256to511octets.value_namespace = name_space;
        pkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets = value;
        pkts512to1023octets.value_namespace = name_space;
        pkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets = value;
        pkts1024to1518octets.value_namespace = name_space;
        pkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets = value;
        pkts1519to1548octets.value_namespace = name_space;
        pkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets = value;
        rxpkts64octets.value_namespace = name_space;
        rxpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets = value;
        txpkts64octets.value_namespace = name_space;
        txpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets = value;
        rxpkts65to127octets.value_namespace = name_space;
        rxpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets = value;
        txpkts65to127octets.value_namespace = name_space;
        txpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets = value;
        rxpkts128to255octets.value_namespace = name_space;
        rxpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets = value;
        txpkts128to255octets.value_namespace = name_space;
        txpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets = value;
        rxpkts256to511octets.value_namespace = name_space;
        rxpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets = value;
        txpkts256to511octets.value_namespace = name_space;
        txpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets = value;
        rxpkts512to1023octets.value_namespace = name_space;
        rxpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets = value;
        txpkts512to1023octets.value_namespace = name_space;
        txpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets = value;
        rxpkts1024to1518octets.value_namespace = name_space;
        rxpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets = value;
        txpkts1024to1518octets.value_namespace = name_space;
        txpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets = value;
        rxpkts1519to1548octets.value_namespace = name_space;
        rxpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets = value;
        txpkts1519to1548octets.value_namespace = name_space;
        txpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts = value;
        oversizepkts.value_namespace = name_space;
        oversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jabbers")
    {
        jabbers = value;
        jabbers.value_namespace = name_space;
        jabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts")
    {
        pkts = value;
        pkts.value_namespace = name_space;
        pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collisions")
    {
        collisions = value;
        collisions.value_namespace = name_space;
        collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors = value;
        crcalignerrors.value_namespace = name_space;
        crcalignerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors = value;
        txnoerrors.value_namespace = name_space;
        txnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors = value;
        rxnoerrors.value_namespace = name_space;
        rxnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts = value;
        rxoversizepkts.value_namespace = name_space;
        rxoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts = value;
        txoversizepkts.value_namespace = name_space;
        txoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overrun")
    {
        overrun = value;
        overrun.value_namespace = name_space;
        overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underrun")
    {
        underrun = value;
        underrun.value_namespace = name_space;
        underrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
        watchdog.value_namespace = name_space;
        watchdog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop = value;
        ifdowndrop.value_namespace = name_space;
        ifdowndrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropEvents")
    {
        dropevents.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts.yfilter = yfilter;
    }
    if(value_path == "giantPkts")
    {
        giantpkts.yfilter = yfilter;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets.yfilter = yfilter;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets.yfilter = yfilter;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts.yfilter = yfilter;
    }
    if(value_path == "jabbers")
    {
        jabbers.yfilter = yfilter;
    }
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "pkts")
    {
        pkts.yfilter = yfilter;
    }
    if(value_path == "collisions")
    {
        collisions.yfilter = yfilter;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors.yfilter = yfilter;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors.yfilter = yfilter;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors.yfilter = yfilter;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts.yfilter = yfilter;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts.yfilter = yfilter;
    }
    if(value_path == "overrun")
    {
        overrun.yfilter = yfilter;
    }
    if(value_path == "underrun")
    {
        underrun.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "watchdog")
    {
        watchdog.yfilter = yfilter;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgEtherStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropEvents" || name == "multicastPkts" || name == "broadcastPkts" || name == "undersizePkts" || name == "giantPkts" || name == "stormSupressedPkts" || name == "fragments" || name == "pkts64Octets" || name == "pkts65to127Octets" || name == "pkts128to255Octets" || name == "pkts256to511Octets" || name == "pkts512to1023Octets" || name == "pkts1024to1518Octets" || name == "pkts1519to1548Octets" || name == "rxPkts64Octets" || name == "txPkts64Octets" || name == "rxPkts65to127Octets" || name == "txPkts65to127Octets" || name == "rxPkts128to255Octets" || name == "txPkts128to255Octets" || name == "rxPkts256to511Octets" || name == "txPkts256to511Octets" || name == "rxPkts512to1023Octets" || name == "txPkts512to1023Octets" || name == "rxPkts1024to1518Octets" || name == "txPkts1024to1518Octets" || name == "rxPkts1519to1548Octets" || name == "txPkts1519to1548Octets" || name == "oversizePkts" || name == "jabbers" || name == "octets" || name == "pkts" || name == "collisions" || name == "cRCAlignErrors" || name == "tXNoErrors" || name == "rXNoErrors" || name == "rxOversizePkts" || name == "txOversizePkts" || name == "overrun" || name == "underrun" || name == "ignored" || name == "watchdog" || name == "ifdowndrop")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::DbgDot3StatsItems()
    :
    alignmenterrors{YType::uint64, "alignmentErrors"},
    fcserrors{YType::uint64, "fCSErrors"},
    singlecollisionframes{YType::uint64, "singleCollisionFrames"},
    multiplecollisionframes{YType::uint64, "multipleCollisionFrames"},
    sqettesterrors{YType::uint64, "sQETTestErrors"},
    deferredtransmissions{YType::uint64, "deferredTransmissions"},
    latecollisions{YType::uint64, "lateCollisions"},
    excessivecollisions{YType::uint64, "excessiveCollisions"},
    internalmactransmiterrors{YType::uint64, "internalMacTransmitErrors"},
    carriersenseerrors{YType::uint64, "carrierSenseErrors"},
    frametoolongs{YType::uint64, "frameTooLongs"},
    internalmacreceiveerrors{YType::uint64, "internalMacReceiveErrors"},
    symbolerrors{YType::uint64, "symbolErrors"},
    controlinunknownopcodes{YType::uint64, "controlInUnknownOpcodes"},
    inpauseframes{YType::uint64, "inPauseFrames"},
    outpauseframes{YType::uint64, "outPauseFrames"},
    lostcarriererrors{YType::uint64, "lostCarrierErrors"},
    nocarriererrors{YType::uint64, "noCarrierErrors"},
    inputdribble{YType::uint64, "inputdribble"},
    babble{YType::uint64, "babble"},
    runts{YType::uint64, "runts"}
{

    yang_name = "dbgDot3Stats-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::~DbgDot3StatsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return alignmenterrors.is_set
	|| fcserrors.is_set
	|| singlecollisionframes.is_set
	|| multiplecollisionframes.is_set
	|| sqettesterrors.is_set
	|| deferredtransmissions.is_set
	|| latecollisions.is_set
	|| excessivecollisions.is_set
	|| internalmactransmiterrors.is_set
	|| carriersenseerrors.is_set
	|| frametoolongs.is_set
	|| internalmacreceiveerrors.is_set
	|| symbolerrors.is_set
	|| controlinunknownopcodes.is_set
	|| inpauseframes.is_set
	|| outpauseframes.is_set
	|| lostcarriererrors.is_set
	|| nocarriererrors.is_set
	|| inputdribble.is_set
	|| babble.is_set
	|| runts.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alignmenterrors.yfilter)
	|| ydk::is_set(fcserrors.yfilter)
	|| ydk::is_set(singlecollisionframes.yfilter)
	|| ydk::is_set(multiplecollisionframes.yfilter)
	|| ydk::is_set(sqettesterrors.yfilter)
	|| ydk::is_set(deferredtransmissions.yfilter)
	|| ydk::is_set(latecollisions.yfilter)
	|| ydk::is_set(excessivecollisions.yfilter)
	|| ydk::is_set(internalmactransmiterrors.yfilter)
	|| ydk::is_set(carriersenseerrors.yfilter)
	|| ydk::is_set(frametoolongs.yfilter)
	|| ydk::is_set(internalmacreceiveerrors.yfilter)
	|| ydk::is_set(symbolerrors.yfilter)
	|| ydk::is_set(controlinunknownopcodes.yfilter)
	|| ydk::is_set(inpauseframes.yfilter)
	|| ydk::is_set(outpauseframes.yfilter)
	|| ydk::is_set(lostcarriererrors.yfilter)
	|| ydk::is_set(nocarriererrors.yfilter)
	|| ydk::is_set(inputdribble.yfilter)
	|| ydk::is_set(babble.yfilter)
	|| ydk::is_set(runts.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot3Stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alignmenterrors.is_set || is_set(alignmenterrors.yfilter)) leaf_name_data.push_back(alignmenterrors.get_name_leafdata());
    if (fcserrors.is_set || is_set(fcserrors.yfilter)) leaf_name_data.push_back(fcserrors.get_name_leafdata());
    if (singlecollisionframes.is_set || is_set(singlecollisionframes.yfilter)) leaf_name_data.push_back(singlecollisionframes.get_name_leafdata());
    if (multiplecollisionframes.is_set || is_set(multiplecollisionframes.yfilter)) leaf_name_data.push_back(multiplecollisionframes.get_name_leafdata());
    if (sqettesterrors.is_set || is_set(sqettesterrors.yfilter)) leaf_name_data.push_back(sqettesterrors.get_name_leafdata());
    if (deferredtransmissions.is_set || is_set(deferredtransmissions.yfilter)) leaf_name_data.push_back(deferredtransmissions.get_name_leafdata());
    if (latecollisions.is_set || is_set(latecollisions.yfilter)) leaf_name_data.push_back(latecollisions.get_name_leafdata());
    if (excessivecollisions.is_set || is_set(excessivecollisions.yfilter)) leaf_name_data.push_back(excessivecollisions.get_name_leafdata());
    if (internalmactransmiterrors.is_set || is_set(internalmactransmiterrors.yfilter)) leaf_name_data.push_back(internalmactransmiterrors.get_name_leafdata());
    if (carriersenseerrors.is_set || is_set(carriersenseerrors.yfilter)) leaf_name_data.push_back(carriersenseerrors.get_name_leafdata());
    if (frametoolongs.is_set || is_set(frametoolongs.yfilter)) leaf_name_data.push_back(frametoolongs.get_name_leafdata());
    if (internalmacreceiveerrors.is_set || is_set(internalmacreceiveerrors.yfilter)) leaf_name_data.push_back(internalmacreceiveerrors.get_name_leafdata());
    if (symbolerrors.is_set || is_set(symbolerrors.yfilter)) leaf_name_data.push_back(symbolerrors.get_name_leafdata());
    if (controlinunknownopcodes.is_set || is_set(controlinunknownopcodes.yfilter)) leaf_name_data.push_back(controlinunknownopcodes.get_name_leafdata());
    if (inpauseframes.is_set || is_set(inpauseframes.yfilter)) leaf_name_data.push_back(inpauseframes.get_name_leafdata());
    if (outpauseframes.is_set || is_set(outpauseframes.yfilter)) leaf_name_data.push_back(outpauseframes.get_name_leafdata());
    if (lostcarriererrors.is_set || is_set(lostcarriererrors.yfilter)) leaf_name_data.push_back(lostcarriererrors.get_name_leafdata());
    if (nocarriererrors.is_set || is_set(nocarriererrors.yfilter)) leaf_name_data.push_back(nocarriererrors.get_name_leafdata());
    if (inputdribble.is_set || is_set(inputdribble.yfilter)) leaf_name_data.push_back(inputdribble.get_name_leafdata());
    if (babble.is_set || is_set(babble.yfilter)) leaf_name_data.push_back(babble.get_name_leafdata());
    if (runts.is_set || is_set(runts.yfilter)) leaf_name_data.push_back(runts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors = value;
        alignmenterrors.value_namespace = name_space;
        alignmenterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors = value;
        fcserrors.value_namespace = name_space;
        fcserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes = value;
        singlecollisionframes.value_namespace = name_space;
        singlecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes = value;
        multiplecollisionframes.value_namespace = name_space;
        multiplecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors = value;
        sqettesterrors.value_namespace = name_space;
        sqettesterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions = value;
        deferredtransmissions.value_namespace = name_space;
        deferredtransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions = value;
        latecollisions.value_namespace = name_space;
        latecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions = value;
        excessivecollisions.value_namespace = name_space;
        excessivecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors = value;
        internalmactransmiterrors.value_namespace = name_space;
        internalmactransmiterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors = value;
        carriersenseerrors.value_namespace = name_space;
        carriersenseerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs = value;
        frametoolongs.value_namespace = name_space;
        frametoolongs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors = value;
        internalmacreceiveerrors.value_namespace = name_space;
        internalmacreceiveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors = value;
        symbolerrors.value_namespace = name_space;
        symbolerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes = value;
        controlinunknownopcodes.value_namespace = name_space;
        controlinunknownopcodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes = value;
        inpauseframes.value_namespace = name_space;
        inpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes = value;
        outpauseframes.value_namespace = name_space;
        outpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors = value;
        lostcarriererrors.value_namespace = name_space;
        lostcarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors = value;
        nocarriererrors.value_namespace = name_space;
        nocarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputdribble")
    {
        inputdribble = value;
        inputdribble.value_namespace = name_space;
        inputdribble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "babble")
    {
        babble = value;
        babble.value_namespace = name_space;
        babble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runts")
    {
        runts = value;
        runts.value_namespace = name_space;
        runts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors.yfilter = yfilter;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors.yfilter = yfilter;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes.yfilter = yfilter;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes.yfilter = yfilter;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors.yfilter = yfilter;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions.yfilter = yfilter;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions.yfilter = yfilter;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions.yfilter = yfilter;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors.yfilter = yfilter;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs.yfilter = yfilter;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors.yfilter = yfilter;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes.yfilter = yfilter;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes.yfilter = yfilter;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes.yfilter = yfilter;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors.yfilter = yfilter;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors.yfilter = yfilter;
    }
    if(value_path == "inputdribble")
    {
        inputdribble.yfilter = yfilter;
    }
    if(value_path == "babble")
    {
        babble.yfilter = yfilter;
    }
    if(value_path == "runts")
    {
        runts.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgDot3StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alignmentErrors" || name == "fCSErrors" || name == "singleCollisionFrames" || name == "multipleCollisionFrames" || name == "sQETTestErrors" || name == "deferredTransmissions" || name == "lateCollisions" || name == "excessiveCollisions" || name == "internalMacTransmitErrors" || name == "carrierSenseErrors" || name == "frameTooLongs" || name == "internalMacReceiveErrors" || name == "symbolErrors" || name == "controlInUnknownOpcodes" || name == "inPauseFrames" || name == "outPauseFrames" || name == "lostCarrierErrors" || name == "noCarrierErrors" || name == "inputdribble" || name == "babble" || name == "runts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::DbgIfHCInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCIn-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::~DbgIfHCInItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::DbgIfHCOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpckts{YType::uint64, "broadcastPckts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCOut-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::~DbgIfHCOutItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpckts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpckts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpckts.is_set || is_set(broadcastpckts.yfilter)) leaf_name_data.push_back(broadcastpckts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts = value;
        broadcastpckts.value_namespace = name_space;
        broadcastpckts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfHCOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPckts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::DbgIpv6IfStatsItems()
    :
    inreceives{YType::uint64, "inReceives"},
    inhdrerrors{YType::uint64, "inHdrErrors"},
    inaddrerrors{YType::uint64, "inAddrErrors"},
    indiscards{YType::uint64, "inDiscards"},
    outforwdatagrams{YType::uint64, "outForwDatagrams"},
    outdiscards{YType::uint64, "outDiscards"},
    inmcastpkts{YType::uint64, "inMcastPkts"},
    outmcastpkts{YType::uint64, "outMcastPkts"}
{

    yang_name = "dbgIpv6IfStats-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::~DbgIpv6IfStatsItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return inreceives.is_set
	|| inhdrerrors.is_set
	|| inaddrerrors.is_set
	|| indiscards.is_set
	|| outforwdatagrams.is_set
	|| outdiscards.is_set
	|| inmcastpkts.is_set
	|| outmcastpkts.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inreceives.yfilter)
	|| ydk::is_set(inhdrerrors.yfilter)
	|| ydk::is_set(inaddrerrors.yfilter)
	|| ydk::is_set(indiscards.yfilter)
	|| ydk::is_set(outforwdatagrams.yfilter)
	|| ydk::is_set(outdiscards.yfilter)
	|| ydk::is_set(inmcastpkts.yfilter)
	|| ydk::is_set(outmcastpkts.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpv6IfStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inreceives.is_set || is_set(inreceives.yfilter)) leaf_name_data.push_back(inreceives.get_name_leafdata());
    if (inhdrerrors.is_set || is_set(inhdrerrors.yfilter)) leaf_name_data.push_back(inhdrerrors.get_name_leafdata());
    if (inaddrerrors.is_set || is_set(inaddrerrors.yfilter)) leaf_name_data.push_back(inaddrerrors.get_name_leafdata());
    if (indiscards.is_set || is_set(indiscards.yfilter)) leaf_name_data.push_back(indiscards.get_name_leafdata());
    if (outforwdatagrams.is_set || is_set(outforwdatagrams.yfilter)) leaf_name_data.push_back(outforwdatagrams.get_name_leafdata());
    if (outdiscards.is_set || is_set(outdiscards.yfilter)) leaf_name_data.push_back(outdiscards.get_name_leafdata());
    if (inmcastpkts.is_set || is_set(inmcastpkts.yfilter)) leaf_name_data.push_back(inmcastpkts.get_name_leafdata());
    if (outmcastpkts.is_set || is_set(outmcastpkts.yfilter)) leaf_name_data.push_back(outmcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inReceives")
    {
        inreceives = value;
        inreceives.value_namespace = name_space;
        inreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors = value;
        inhdrerrors.value_namespace = name_space;
        inhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors = value;
        inaddrerrors.value_namespace = name_space;
        inaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inDiscards")
    {
        indiscards = value;
        indiscards.value_namespace = name_space;
        indiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams = value;
        outforwdatagrams.value_namespace = name_space;
        outforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outDiscards")
    {
        outdiscards = value;
        outdiscards.value_namespace = name_space;
        outdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts = value;
        inmcastpkts.value_namespace = name_space;
        inmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts = value;
        outmcastpkts.value_namespace = name_space;
        outmcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inReceives")
    {
        inreceives.yfilter = yfilter;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors.yfilter = yfilter;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors.yfilter = yfilter;
    }
    if(value_path == "inDiscards")
    {
        indiscards.yfilter = yfilter;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "outDiscards")
    {
        outdiscards.yfilter = yfilter;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts.yfilter = yfilter;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIpv6IfStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inReceives" || name == "inHdrErrors" || name == "inAddrErrors" || name == "inDiscards" || name == "outForwDatagrams" || name == "outDiscards" || name == "inMcastPkts" || name == "outMcastPkts")
        return true;
    return false;
}

System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::DbgIfStormItems()
    :
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIfStorm-items"; yang_parent_name = "PhysIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::~DbgIfStormItems()
{
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::has_data() const
{
    if (is_presence_container) return true;
    return dropbytes.is_set;
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfStorm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::IntfItems::PhysItems::PhysIfList::DbgIfStormItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropBytes")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrItems()
    :
    aggrif_list(this, {"id"})
{

    yang_name = "aggr-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::AggrItems::~AggrItems()
{
}

bool System::IntfItems::AggrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggrif_list.len(); index++)
    {
        if(aggrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::has_operation() const
{
    for (std::size_t index=0; index<aggrif_list.len(); index++)
    {
        if(aggrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::AggrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AggrIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList>();
        ent_->parent = this;
        aggrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::get_children() const
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

void System::IntfItems::AggrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AggrIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrIfList()
    :
    id{YType::str, "id"},
    pcid{YType::uint16, "pcId"},
    pcmode{YType::enumeration, "pcMode"},
    ctrl{YType::str, "ctrl"},
    minlinks{YType::uint32, "minLinks"},
    maxlinks{YType::uint32, "maxLinks"},
    hashdist{YType::enumeration, "hashDist"},
    iod{YType::uint32, "iod"},
    operchannelmode{YType::enumeration, "operChannelMode"},
    lastst{YType::enumeration, "lastSt"},
    laststcause{YType::str, "lastStCause"},
    lasttime{YType::str, "lastTime"},
    createtime{YType::str, "createTime"},
    fop{YType::str, "fop"},
    lastbundletime{YType::str, "lastBundleTime"},
    lastbundlembr{YType::str, "lastBundleMbr"},
    lastunbundletime{YType::str, "lastUnbundleTime"},
    lastunbundlembr{YType::str, "lastUnbundleMbr"},
    suspminlinks{YType::boolean, "suspMinlinks"},
    ltl{YType::uint32, "ltl"},
    lif{YType::uint32, "lif"},
    maxactive{YType::uint32, "maxActive"},
    loaddeferstarttime{YType::str, "loadDeferStartTime"},
    isexplicit{YType::boolean, "isExplicit"},
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
    priorflowctrl_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems>())
    , priorflowctrlwd_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems>())
    , eeep_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::EeepItems>())
    , stormctrlp_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::StormctrlpItems>())
    , loadp_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::LoadpItems>())
    , vrf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VrfItems>())
    , aggrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems>())
    , hwifdetails_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems>())
    , bundleinfo_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::BundleInfoItems>())
    , aggrextd_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems>())
    , vlanmapping_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems>())
    , bndlmbrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems>())
    , multisiteiftracking_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems>())
    , dom_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems>())
    , rtfexbndlgrptoaggrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems>())
    , rtaccbndlgrptoaggrif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems>())
    , rtextconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtextConfItems>())
    , rtbrconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtbrConfItems>())
    , rtvpcconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems>())
    , rtfvnodeportatt_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems>())
    , rsmbrifs_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems>())
    , rslacppolcons_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems>())
    , rtphysrtdconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems>())
    , rtl3encphysrtdconf_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems>())
    , rtlsnodetoif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems>())
    , dbgifin_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfInItems>())
    , dbgifout_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems>())
    , dbgipin_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpInItems>())
    , dbgdot1d_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems>())
    , dbgetherstats_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems>())
    , dbgdot3stats_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems>())
    , dbgifhcin_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems>())
    , dbgifhcout_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems>())
    , dbgipv6ifstats_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems>())
    , dbgifstorm_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems>())
{
    priorflowctrl_items->parent = this;
    priorflowctrlwd_items->parent = this;
    eeep_items->parent = this;
    stormctrlp_items->parent = this;
    loadp_items->parent = this;
    vrf_items->parent = this;
    aggrif_items->parent = this;
    hwifdetails_items->parent = this;
    bundleinfo_items->parent = this;
    aggrextd_items->parent = this;
    vlanmapping_items->parent = this;
    bndlmbrif_items->parent = this;
    multisiteiftracking_items->parent = this;
    dom_items->parent = this;
    rtfexbndlgrptoaggrif_items->parent = this;
    rtaccbndlgrptoaggrif_items->parent = this;
    rtextconf_items->parent = this;
    rtbrconf_items->parent = this;
    rtvpcconf_items->parent = this;
    rtfvnodeportatt_items->parent = this;
    rsmbrifs_items->parent = this;
    rslacppolcons_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtphysrtdconf_items->parent = this;
    rtl3encphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;
    rtlsnodetoif_items->parent = this;
    dbgifin_items->parent = this;
    dbgifout_items->parent = this;
    dbgipin_items->parent = this;
    dbgdot1d_items->parent = this;
    dbgetherstats_items->parent = this;
    dbgdot3stats_items->parent = this;
    dbgifhcin_items->parent = this;
    dbgifhcout_items->parent = this;
    dbgipv6ifstats_items->parent = this;
    dbgifstorm_items->parent = this;

    yang_name = "AggrIf-list"; yang_parent_name = "aggr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::AggrItems::AggrIfList::~AggrIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| pcid.is_set
	|| pcmode.is_set
	|| ctrl.is_set
	|| minlinks.is_set
	|| maxlinks.is_set
	|| hashdist.is_set
	|| iod.is_set
	|| operchannelmode.is_set
	|| lastst.is_set
	|| laststcause.is_set
	|| lasttime.is_set
	|| createtime.is_set
	|| fop.is_set
	|| lastbundletime.is_set
	|| lastbundlembr.is_set
	|| lastunbundletime.is_set
	|| lastunbundlembr.is_set
	|| suspminlinks.is_set
	|| ltl.is_set
	|| lif.is_set
	|| maxactive.is_set
	|| loaddeferstarttime.is_set
	|| isexplicit.is_set
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
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_data())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_data())
	|| (eeep_items !=  nullptr && eeep_items->has_data())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_data())
	|| (loadp_items !=  nullptr && loadp_items->has_data())
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (aggrif_items !=  nullptr && aggrif_items->has_data())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_data())
	|| (bundleinfo_items !=  nullptr && bundleinfo_items->has_data())
	|| (aggrextd_items !=  nullptr && aggrextd_items->has_data())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_data())
	|| (bndlmbrif_items !=  nullptr && bndlmbrif_items->has_data())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (rtfexbndlgrptoaggrif_items !=  nullptr && rtfexbndlgrptoaggrif_items->has_data())
	|| (rtaccbndlgrptoaggrif_items !=  nullptr && rtaccbndlgrptoaggrif_items->has_data())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_data())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_data())
	|| (rtvpcconf_items !=  nullptr && rtvpcconf_items->has_data())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_data())
	|| (rsmbrifs_items !=  nullptr && rsmbrifs_items->has_data())
	|| (rslacppolcons_items !=  nullptr && rslacppolcons_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_data())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_data())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_data())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_data())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_data())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_data())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_data())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_data())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_data())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_data())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_data())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(pcid.yfilter)
	|| ydk::is_set(pcmode.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(minlinks.yfilter)
	|| ydk::is_set(maxlinks.yfilter)
	|| ydk::is_set(hashdist.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(operchannelmode.yfilter)
	|| ydk::is_set(lastst.yfilter)
	|| ydk::is_set(laststcause.yfilter)
	|| ydk::is_set(lasttime.yfilter)
	|| ydk::is_set(createtime.yfilter)
	|| ydk::is_set(fop.yfilter)
	|| ydk::is_set(lastbundletime.yfilter)
	|| ydk::is_set(lastbundlembr.yfilter)
	|| ydk::is_set(lastunbundletime.yfilter)
	|| ydk::is_set(lastunbundlembr.yfilter)
	|| ydk::is_set(suspminlinks.yfilter)
	|| ydk::is_set(ltl.yfilter)
	|| ydk::is_set(lif.yfilter)
	|| ydk::is_set(maxactive.yfilter)
	|| ydk::is_set(loaddeferstarttime.yfilter)
	|| ydk::is_set(isexplicit.yfilter)
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
	|| (priorflowctrl_items !=  nullptr && priorflowctrl_items->has_operation())
	|| (priorflowctrlwd_items !=  nullptr && priorflowctrlwd_items->has_operation())
	|| (eeep_items !=  nullptr && eeep_items->has_operation())
	|| (stormctrlp_items !=  nullptr && stormctrlp_items->has_operation())
	|| (loadp_items !=  nullptr && loadp_items->has_operation())
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (aggrif_items !=  nullptr && aggrif_items->has_operation())
	|| (hwifdetails_items !=  nullptr && hwifdetails_items->has_operation())
	|| (bundleinfo_items !=  nullptr && bundleinfo_items->has_operation())
	|| (aggrextd_items !=  nullptr && aggrextd_items->has_operation())
	|| (vlanmapping_items !=  nullptr && vlanmapping_items->has_operation())
	|| (bndlmbrif_items !=  nullptr && bndlmbrif_items->has_operation())
	|| (multisiteiftracking_items !=  nullptr && multisiteiftracking_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (rtfexbndlgrptoaggrif_items !=  nullptr && rtfexbndlgrptoaggrif_items->has_operation())
	|| (rtaccbndlgrptoaggrif_items !=  nullptr && rtaccbndlgrptoaggrif_items->has_operation())
	|| (rtextconf_items !=  nullptr && rtextconf_items->has_operation())
	|| (rtbrconf_items !=  nullptr && rtbrconf_items->has_operation())
	|| (rtvpcconf_items !=  nullptr && rtvpcconf_items->has_operation())
	|| (rtfvnodeportatt_items !=  nullptr && rtfvnodeportatt_items->has_operation())
	|| (rsmbrifs_items !=  nullptr && rsmbrifs_items->has_operation())
	|| (rslacppolcons_items !=  nullptr && rslacppolcons_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtphysrtdconf_items !=  nullptr && rtphysrtdconf_items->has_operation())
	|| (rtl3encphysrtdconf_items !=  nullptr && rtl3encphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation())
	|| (rtlsnodetoif_items !=  nullptr && rtlsnodetoif_items->has_operation())
	|| (dbgifin_items !=  nullptr && dbgifin_items->has_operation())
	|| (dbgifout_items !=  nullptr && dbgifout_items->has_operation())
	|| (dbgipin_items !=  nullptr && dbgipin_items->has_operation())
	|| (dbgdot1d_items !=  nullptr && dbgdot1d_items->has_operation())
	|| (dbgetherstats_items !=  nullptr && dbgetherstats_items->has_operation())
	|| (dbgdot3stats_items !=  nullptr && dbgdot3stats_items->has_operation())
	|| (dbgifhcin_items !=  nullptr && dbgifhcin_items->has_operation())
	|| (dbgifhcout_items !=  nullptr && dbgifhcout_items->has_operation())
	|| (dbgipv6ifstats_items !=  nullptr && dbgipv6ifstats_items->has_operation())
	|| (dbgifstorm_items !=  nullptr && dbgifstorm_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/aggr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::AggrItems::AggrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AggrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (pcid.is_set || is_set(pcid.yfilter)) leaf_name_data.push_back(pcid.get_name_leafdata());
    if (pcmode.is_set || is_set(pcmode.yfilter)) leaf_name_data.push_back(pcmode.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (minlinks.is_set || is_set(minlinks.yfilter)) leaf_name_data.push_back(minlinks.get_name_leafdata());
    if (maxlinks.is_set || is_set(maxlinks.yfilter)) leaf_name_data.push_back(maxlinks.get_name_leafdata());
    if (hashdist.is_set || is_set(hashdist.yfilter)) leaf_name_data.push_back(hashdist.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (operchannelmode.is_set || is_set(operchannelmode.yfilter)) leaf_name_data.push_back(operchannelmode.get_name_leafdata());
    if (lastst.is_set || is_set(lastst.yfilter)) leaf_name_data.push_back(lastst.get_name_leafdata());
    if (laststcause.is_set || is_set(laststcause.yfilter)) leaf_name_data.push_back(laststcause.get_name_leafdata());
    if (lasttime.is_set || is_set(lasttime.yfilter)) leaf_name_data.push_back(lasttime.get_name_leafdata());
    if (createtime.is_set || is_set(createtime.yfilter)) leaf_name_data.push_back(createtime.get_name_leafdata());
    if (fop.is_set || is_set(fop.yfilter)) leaf_name_data.push_back(fop.get_name_leafdata());
    if (lastbundletime.is_set || is_set(lastbundletime.yfilter)) leaf_name_data.push_back(lastbundletime.get_name_leafdata());
    if (lastbundlembr.is_set || is_set(lastbundlembr.yfilter)) leaf_name_data.push_back(lastbundlembr.get_name_leafdata());
    if (lastunbundletime.is_set || is_set(lastunbundletime.yfilter)) leaf_name_data.push_back(lastunbundletime.get_name_leafdata());
    if (lastunbundlembr.is_set || is_set(lastunbundlembr.yfilter)) leaf_name_data.push_back(lastunbundlembr.get_name_leafdata());
    if (suspminlinks.is_set || is_set(suspminlinks.yfilter)) leaf_name_data.push_back(suspminlinks.get_name_leafdata());
    if (ltl.is_set || is_set(ltl.yfilter)) leaf_name_data.push_back(ltl.get_name_leafdata());
    if (lif.is_set || is_set(lif.yfilter)) leaf_name_data.push_back(lif.get_name_leafdata());
    if (maxactive.is_set || is_set(maxactive.yfilter)) leaf_name_data.push_back(maxactive.get_name_leafdata());
    if (loaddeferstarttime.is_set || is_set(loaddeferstarttime.yfilter)) leaf_name_data.push_back(loaddeferstarttime.get_name_leafdata());
    if (isexplicit.is_set || is_set(isexplicit.yfilter)) leaf_name_data.push_back(isexplicit.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priorflowctrl-items")
    {
        if(priorflowctrl_items == nullptr)
        {
            priorflowctrl_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems>();
        }
        return priorflowctrl_items;
    }

    if(child_yang_name == "priorflowctrlwd-items")
    {
        if(priorflowctrlwd_items == nullptr)
        {
            priorflowctrlwd_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems>();
        }
        return priorflowctrlwd_items;
    }

    if(child_yang_name == "eeep-items")
    {
        if(eeep_items == nullptr)
        {
            eeep_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::EeepItems>();
        }
        return eeep_items;
    }

    if(child_yang_name == "stormctrlp-items")
    {
        if(stormctrlp_items == nullptr)
        {
            stormctrlp_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::StormctrlpItems>();
        }
        return stormctrlp_items;
    }

    if(child_yang_name == "loadp-items")
    {
        if(loadp_items == nullptr)
        {
            loadp_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::LoadpItems>();
        }
        return loadp_items;
    }

    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "aggrif-items")
    {
        if(aggrif_items == nullptr)
        {
            aggrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems>();
        }
        return aggrif_items;
    }

    if(child_yang_name == "hwifdetails-items")
    {
        if(hwifdetails_items == nullptr)
        {
            hwifdetails_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems>();
        }
        return hwifdetails_items;
    }

    if(child_yang_name == "bundleInfo-items")
    {
        if(bundleinfo_items == nullptr)
        {
            bundleinfo_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::BundleInfoItems>();
        }
        return bundleinfo_items;
    }

    if(child_yang_name == "aggrExtd-items")
    {
        if(aggrextd_items == nullptr)
        {
            aggrextd_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems>();
        }
        return aggrextd_items;
    }

    if(child_yang_name == "vlanmapping-items")
    {
        if(vlanmapping_items == nullptr)
        {
            vlanmapping_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems>();
        }
        return vlanmapping_items;
    }

    if(child_yang_name == "bndlmbrif-items")
    {
        if(bndlmbrif_items == nullptr)
        {
            bndlmbrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems>();
        }
        return bndlmbrif_items;
    }

    if(child_yang_name == "multisiteiftracking-items")
    {
        if(multisiteiftracking_items == nullptr)
        {
            multisiteiftracking_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems>();
        }
        return multisiteiftracking_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "rtfexBndlGrpToAggrIf-items")
    {
        if(rtfexbndlgrptoaggrif_items == nullptr)
        {
            rtfexbndlgrptoaggrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems>();
        }
        return rtfexbndlgrptoaggrif_items;
    }

    if(child_yang_name == "rtaccBndlGrpToAggrIf-items")
    {
        if(rtaccbndlgrptoaggrif_items == nullptr)
        {
            rtaccbndlgrptoaggrif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems>();
        }
        return rtaccbndlgrptoaggrif_items;
    }

    if(child_yang_name == "rtextConf-items")
    {
        if(rtextconf_items == nullptr)
        {
            rtextconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtextConfItems>();
        }
        return rtextconf_items;
    }

    if(child_yang_name == "rtbrConf-items")
    {
        if(rtbrconf_items == nullptr)
        {
            rtbrconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtbrConfItems>();
        }
        return rtbrconf_items;
    }

    if(child_yang_name == "rtvpcConf-items")
    {
        if(rtvpcconf_items == nullptr)
        {
            rtvpcconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems>();
        }
        return rtvpcconf_items;
    }

    if(child_yang_name == "rtfvNodePortAtt-items")
    {
        if(rtfvnodeportatt_items == nullptr)
        {
            rtfvnodeportatt_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems>();
        }
        return rtfvnodeportatt_items;
    }

    if(child_yang_name == "rsmbrIfs-items")
    {
        if(rsmbrifs_items == nullptr)
        {
            rsmbrifs_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems>();
        }
        return rsmbrifs_items;
    }

    if(child_yang_name == "rslacpPolCons-items")
    {
        if(rslacppolcons_items == nullptr)
        {
            rslacppolcons_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems>();
        }
        return rslacppolcons_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtphysRtdConf-items")
    {
        if(rtphysrtdconf_items == nullptr)
        {
            rtphysrtdconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems>();
        }
        return rtphysrtdconf_items;
    }

    if(child_yang_name == "rtl3EncPhysRtdConf-items")
    {
        if(rtl3encphysrtdconf_items == nullptr)
        {
            rtl3encphysrtdconf_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems>();
        }
        return rtl3encphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    if(child_yang_name == "rtLsNodeToIf-items")
    {
        if(rtlsnodetoif_items == nullptr)
        {
            rtlsnodetoif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems>();
        }
        return rtlsnodetoif_items;
    }

    if(child_yang_name == "dbgIfIn-items")
    {
        if(dbgifin_items == nullptr)
        {
            dbgifin_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfInItems>();
        }
        return dbgifin_items;
    }

    if(child_yang_name == "dbgIfOut-items")
    {
        if(dbgifout_items == nullptr)
        {
            dbgifout_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems>();
        }
        return dbgifout_items;
    }

    if(child_yang_name == "dbgIpIn-items")
    {
        if(dbgipin_items == nullptr)
        {
            dbgipin_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpInItems>();
        }
        return dbgipin_items;
    }

    if(child_yang_name == "dbgDot1d-items")
    {
        if(dbgdot1d_items == nullptr)
        {
            dbgdot1d_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems>();
        }
        return dbgdot1d_items;
    }

    if(child_yang_name == "dbgEtherStats-items")
    {
        if(dbgetherstats_items == nullptr)
        {
            dbgetherstats_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems>();
        }
        return dbgetherstats_items;
    }

    if(child_yang_name == "dbgDot3Stats-items")
    {
        if(dbgdot3stats_items == nullptr)
        {
            dbgdot3stats_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems>();
        }
        return dbgdot3stats_items;
    }

    if(child_yang_name == "dbgIfHCIn-items")
    {
        if(dbgifhcin_items == nullptr)
        {
            dbgifhcin_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems>();
        }
        return dbgifhcin_items;
    }

    if(child_yang_name == "dbgIfHCOut-items")
    {
        if(dbgifhcout_items == nullptr)
        {
            dbgifhcout_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems>();
        }
        return dbgifhcout_items;
    }

    if(child_yang_name == "dbgIpv6IfStats-items")
    {
        if(dbgipv6ifstats_items == nullptr)
        {
            dbgipv6ifstats_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems>();
        }
        return dbgipv6ifstats_items;
    }

    if(child_yang_name == "dbgIfStorm-items")
    {
        if(dbgifstorm_items == nullptr)
        {
            dbgifstorm_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems>();
        }
        return dbgifstorm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priorflowctrl_items != nullptr)
    {
        _children["priorflowctrl-items"] = priorflowctrl_items;
    }

    if(priorflowctrlwd_items != nullptr)
    {
        _children["priorflowctrlwd-items"] = priorflowctrlwd_items;
    }

    if(eeep_items != nullptr)
    {
        _children["eeep-items"] = eeep_items;
    }

    if(stormctrlp_items != nullptr)
    {
        _children["stormctrlp-items"] = stormctrlp_items;
    }

    if(loadp_items != nullptr)
    {
        _children["loadp-items"] = loadp_items;
    }

    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(aggrif_items != nullptr)
    {
        _children["aggrif-items"] = aggrif_items;
    }

    if(hwifdetails_items != nullptr)
    {
        _children["hwifdetails-items"] = hwifdetails_items;
    }

    if(bundleinfo_items != nullptr)
    {
        _children["bundleInfo-items"] = bundleinfo_items;
    }

    if(aggrextd_items != nullptr)
    {
        _children["aggrExtd-items"] = aggrextd_items;
    }

    if(vlanmapping_items != nullptr)
    {
        _children["vlanmapping-items"] = vlanmapping_items;
    }

    if(bndlmbrif_items != nullptr)
    {
        _children["bndlmbrif-items"] = bndlmbrif_items;
    }

    if(multisiteiftracking_items != nullptr)
    {
        _children["multisiteiftracking-items"] = multisiteiftracking_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(rtfexbndlgrptoaggrif_items != nullptr)
    {
        _children["rtfexBndlGrpToAggrIf-items"] = rtfexbndlgrptoaggrif_items;
    }

    if(rtaccbndlgrptoaggrif_items != nullptr)
    {
        _children["rtaccBndlGrpToAggrIf-items"] = rtaccbndlgrptoaggrif_items;
    }

    if(rtextconf_items != nullptr)
    {
        _children["rtextConf-items"] = rtextconf_items;
    }

    if(rtbrconf_items != nullptr)
    {
        _children["rtbrConf-items"] = rtbrconf_items;
    }

    if(rtvpcconf_items != nullptr)
    {
        _children["rtvpcConf-items"] = rtvpcconf_items;
    }

    if(rtfvnodeportatt_items != nullptr)
    {
        _children["rtfvNodePortAtt-items"] = rtfvnodeportatt_items;
    }

    if(rsmbrifs_items != nullptr)
    {
        _children["rsmbrIfs-items"] = rsmbrifs_items;
    }

    if(rslacppolcons_items != nullptr)
    {
        _children["rslacpPolCons-items"] = rslacppolcons_items;
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

    if(dbgifin_items != nullptr)
    {
        _children["dbgIfIn-items"] = dbgifin_items;
    }

    if(dbgifout_items != nullptr)
    {
        _children["dbgIfOut-items"] = dbgifout_items;
    }

    if(dbgipin_items != nullptr)
    {
        _children["dbgIpIn-items"] = dbgipin_items;
    }

    if(dbgdot1d_items != nullptr)
    {
        _children["dbgDot1d-items"] = dbgdot1d_items;
    }

    if(dbgetherstats_items != nullptr)
    {
        _children["dbgEtherStats-items"] = dbgetherstats_items;
    }

    if(dbgdot3stats_items != nullptr)
    {
        _children["dbgDot3Stats-items"] = dbgdot3stats_items;
    }

    if(dbgifhcin_items != nullptr)
    {
        _children["dbgIfHCIn-items"] = dbgifhcin_items;
    }

    if(dbgifhcout_items != nullptr)
    {
        _children["dbgIfHCOut-items"] = dbgifhcout_items;
    }

    if(dbgipv6ifstats_items != nullptr)
    {
        _children["dbgIpv6IfStats-items"] = dbgipv6ifstats_items;
    }

    if(dbgifstorm_items != nullptr)
    {
        _children["dbgIfStorm-items"] = dbgifstorm_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcId")
    {
        pcid = value;
        pcid.value_namespace = name_space;
        pcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcMode")
    {
        pcmode = value;
        pcmode.value_namespace = name_space;
        pcmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minLinks")
    {
        minlinks = value;
        minlinks.value_namespace = name_space;
        minlinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxLinks")
    {
        maxlinks = value;
        maxlinks.value_namespace = name_space;
        maxlinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashDist")
    {
        hashdist = value;
        hashdist.value_namespace = name_space;
        hashdist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operChannelMode")
    {
        operchannelmode = value;
        operchannelmode.value_namespace = name_space;
        operchannelmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastSt")
    {
        lastst = value;
        lastst.value_namespace = name_space;
        lastst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStCause")
    {
        laststcause = value;
        laststcause.value_namespace = name_space;
        laststcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastTime")
    {
        lasttime = value;
        lasttime.value_namespace = name_space;
        lasttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTime")
    {
        createtime = value;
        createtime.value_namespace = name_space;
        createtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fop")
    {
        fop = value;
        fop.value_namespace = name_space;
        fop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastBundleTime")
    {
        lastbundletime = value;
        lastbundletime.value_namespace = name_space;
        lastbundletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastBundleMbr")
    {
        lastbundlembr = value;
        lastbundlembr.value_namespace = name_space;
        lastbundlembr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastUnbundleTime")
    {
        lastunbundletime = value;
        lastunbundletime.value_namespace = name_space;
        lastunbundletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastUnbundleMbr")
    {
        lastunbundlembr = value;
        lastunbundlembr.value_namespace = name_space;
        lastunbundlembr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspMinlinks")
    {
        suspminlinks = value;
        suspminlinks.value_namespace = name_space;
        suspminlinks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ltl")
    {
        ltl = value;
        ltl.value_namespace = name_space;
        ltl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lif")
    {
        lif = value;
        lif.value_namespace = name_space;
        lif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxActive")
    {
        maxactive = value;
        maxactive.value_namespace = name_space;
        maxactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadDeferStartTime")
    {
        loaddeferstarttime = value;
        loaddeferstarttime.value_namespace = name_space;
        loaddeferstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isExplicit")
    {
        isexplicit = value;
        isexplicit.value_namespace = name_space;
        isexplicit.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::AggrItems::AggrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "pcId")
    {
        pcid.yfilter = yfilter;
    }
    if(value_path == "pcMode")
    {
        pcmode.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "minLinks")
    {
        minlinks.yfilter = yfilter;
    }
    if(value_path == "maxLinks")
    {
        maxlinks.yfilter = yfilter;
    }
    if(value_path == "hashDist")
    {
        hashdist.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "operChannelMode")
    {
        operchannelmode.yfilter = yfilter;
    }
    if(value_path == "lastSt")
    {
        lastst.yfilter = yfilter;
    }
    if(value_path == "lastStCause")
    {
        laststcause.yfilter = yfilter;
    }
    if(value_path == "lastTime")
    {
        lasttime.yfilter = yfilter;
    }
    if(value_path == "createTime")
    {
        createtime.yfilter = yfilter;
    }
    if(value_path == "fop")
    {
        fop.yfilter = yfilter;
    }
    if(value_path == "lastBundleTime")
    {
        lastbundletime.yfilter = yfilter;
    }
    if(value_path == "lastBundleMbr")
    {
        lastbundlembr.yfilter = yfilter;
    }
    if(value_path == "lastUnbundleTime")
    {
        lastunbundletime.yfilter = yfilter;
    }
    if(value_path == "lastUnbundleMbr")
    {
        lastunbundlembr.yfilter = yfilter;
    }
    if(value_path == "suspMinlinks")
    {
        suspminlinks.yfilter = yfilter;
    }
    if(value_path == "ltl")
    {
        ltl.yfilter = yfilter;
    }
    if(value_path == "lif")
    {
        lif.yfilter = yfilter;
    }
    if(value_path == "maxActive")
    {
        maxactive.yfilter = yfilter;
    }
    if(value_path == "loadDeferStartTime")
    {
        loaddeferstarttime.yfilter = yfilter;
    }
    if(value_path == "isExplicit")
    {
        isexplicit.yfilter = yfilter;
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

bool System::IntfItems::AggrItems::AggrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priorflowctrl-items" || name == "priorflowctrlwd-items" || name == "eeep-items" || name == "stormctrlp-items" || name == "loadp-items" || name == "vrf-items" || name == "aggrif-items" || name == "hwifdetails-items" || name == "bundleInfo-items" || name == "aggrExtd-items" || name == "vlanmapping-items" || name == "bndlmbrif-items" || name == "multisiteiftracking-items" || name == "dom-items" || name == "rtfexBndlGrpToAggrIf-items" || name == "rtaccBndlGrpToAggrIf-items" || name == "rtextConf-items" || name == "rtbrConf-items" || name == "rtvpcConf-items" || name == "rtfvNodePortAtt-items" || name == "rsmbrIfs-items" || name == "rslacpPolCons-items" || name == "rtvrfMbr-items" || name == "rtphysRtdConf-items" || name == "rtl3EncPhysRtdConf-items" || name == "rtnwPathToIf-items" || name == "rtLsNodeToIf-items" || name == "dbgIfIn-items" || name == "dbgIfOut-items" || name == "dbgIpIn-items" || name == "dbgDot1d-items" || name == "dbgEtherStats-items" || name == "dbgDot3Stats-items" || name == "dbgIfHCIn-items" || name == "dbgIfHCOut-items" || name == "dbgIpv6IfStats-items" || name == "dbgIfStorm-items" || name == "id" || name == "pcId" || name == "pcMode" || name == "ctrl" || name == "minLinks" || name == "maxLinks" || name == "hashDist" || name == "iod" || name == "operChannelMode" || name == "lastSt" || name == "lastStCause" || name == "lastTime" || name == "createTime" || name == "fop" || name == "lastBundleTime" || name == "lastBundleMbr" || name == "lastUnbundleTime" || name == "lastUnbundleMbr" || name == "suspMinlinks" || name == "ltl" || name == "lif" || name == "maxActive" || name == "loadDeferStartTime" || name == "isExplicit" || name == "name" || name == "descr" || name == "adminSt" || name == "speed" || name == "duplex" || name == "autoNeg" || name == "mtu" || name == "snmpTrapSt" || name == "mode" || name == "layer" || name == "mdix" || name == "delay" || name == "linkDebounce" || name == "dot1qEtherType" || name == "bw" || name == "medium" || name == "inhBw" || name == "spanMode" || name == "linkLog" || name == "trunkLog" || name == "routerMac" || name == "portT" || name == "usage" || name == "trunkVlans" || name == "accessVlan" || name == "controllerId" || name == "nativeVlan" || name == "userCfgdFlags")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::PriorflowctrlItems()
    :
    mode{YType::uint8, "mode"}
{

    yang_name = "priorflowctrl-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::~PriorflowctrlItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::PriorflowctrlwdItems()
    :
    watchdoginterval{YType::uint8, "watchDogInterval"},
    disableaction{YType::boolean, "disableAction"},
    interfacemutiplier{YType::uint8, "interfaceMutiplier"}
{

    yang_name = "priorflowctrlwd-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::~PriorflowctrlwdItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::has_data() const
{
    if (is_presence_container) return true;
    return watchdoginterval.is_set
	|| disableaction.is_set
	|| interfacemutiplier.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(watchdoginterval.yfilter)
	|| ydk::is_set(disableaction.yfilter)
	|| ydk::is_set(interfacemutiplier.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorflowctrlwd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (watchdoginterval.is_set || is_set(watchdoginterval.yfilter)) leaf_name_data.push_back(watchdoginterval.get_name_leafdata());
    if (disableaction.is_set || is_set(disableaction.yfilter)) leaf_name_data.push_back(disableaction.get_name_leafdata());
    if (interfacemutiplier.is_set || is_set(interfacemutiplier.yfilter)) leaf_name_data.push_back(interfacemutiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "watchDogInterval")
    {
        watchdoginterval = value;
        watchdoginterval.value_namespace = name_space;
        watchdoginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disableAction")
    {
        disableaction = value;
        disableaction.value_namespace = name_space;
        disableaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaceMutiplier")
    {
        interfacemutiplier = value;
        interfacemutiplier.value_namespace = name_space;
        interfacemutiplier.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "watchDogInterval")
    {
        watchdoginterval.yfilter = yfilter;
    }
    if(value_path == "disableAction")
    {
        disableaction.yfilter = yfilter;
    }
    if(value_path == "interfaceMutiplier")
    {
        interfacemutiplier.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::PriorflowctrlwdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watchDogInterval" || name == "disableAction" || name == "interfaceMutiplier")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::EeepItems::EeepItems()
    :
    eeestate{YType::enumeration, "eeeState"},
    eeelpi{YType::enumeration, "eeeLpi"},
    eeelat{YType::enumeration, "eeeLat"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "eeep-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::EeepItems::~EeepItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::EeepItems::has_data() const
{
    if (is_presence_container) return true;
    return eeestate.is_set
	|| eeelpi.is_set
	|| eeelat.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::EeepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eeestate.yfilter)
	|| ydk::is_set(eeelpi.yfilter)
	|| ydk::is_set(eeelat.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::EeepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eeep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::EeepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eeestate.is_set || is_set(eeestate.yfilter)) leaf_name_data.push_back(eeestate.get_name_leafdata());
    if (eeelpi.is_set || is_set(eeelpi.yfilter)) leaf_name_data.push_back(eeelpi.get_name_leafdata());
    if (eeelat.is_set || is_set(eeelat.yfilter)) leaf_name_data.push_back(eeelat.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::EeepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::EeepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::EeepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eeeState")
    {
        eeestate = value;
        eeestate.value_namespace = name_space;
        eeestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeLpi")
    {
        eeelpi = value;
        eeelpi.value_namespace = name_space;
        eeelpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeLat")
    {
        eeelat = value;
        eeelat.value_namespace = name_space;
        eeelat.value_namespace_prefix = name_space_prefix;
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

void System::IntfItems::AggrItems::AggrIfList::EeepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eeeState")
    {
        eeestate.yfilter = yfilter;
    }
    if(value_path == "eeeLpi")
    {
        eeelpi.yfilter = yfilter;
    }
    if(value_path == "eeeLat")
    {
        eeelat.yfilter = yfilter;
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

bool System::IntfItems::AggrItems::AggrIfList::EeepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eeeState" || name == "eeeLpi" || name == "eeeLat" || name == "name" || name == "descr")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::StormctrlpItems()
    :
    type{YType::enumeration, "type"},
    rate{YType::str, "rate"},
    burstrate{YType::str, "burstRate"},
    ratepps{YType::uint32, "ratePps"},
    burstpps{YType::uint32, "burstPps"}
{

    yang_name = "stormctrlp-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::~StormctrlpItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| rate.is_set
	|| burstrate.is_set
	|| ratepps.is_set
	|| burstpps.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(burstrate.yfilter)
	|| ydk::is_set(ratepps.yfilter)
	|| ydk::is_set(burstpps.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stormctrlp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (burstrate.is_set || is_set(burstrate.yfilter)) leaf_name_data.push_back(burstrate.get_name_leafdata());
    if (ratepps.is_set || is_set(ratepps.yfilter)) leaf_name_data.push_back(ratepps.get_name_leafdata());
    if (burstpps.is_set || is_set(burstpps.yfilter)) leaf_name_data.push_back(burstpps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstRate")
    {
        burstrate = value;
        burstrate.value_namespace = name_space;
        burstrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratePps")
    {
        ratepps = value;
        ratepps.value_namespace = name_space;
        ratepps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burstPps")
    {
        burstpps = value;
        burstpps.value_namespace = name_space;
        burstpps.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "burstRate")
    {
        burstrate.yfilter = yfilter;
    }
    if(value_path == "ratePps")
    {
        ratepps.yfilter = yfilter;
    }
    if(value_path == "burstPps")
    {
        burstpps.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::StormctrlpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "rate" || name == "burstRate" || name == "ratePps" || name == "burstPps")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::LoadpItems::LoadpItems()
    :
    loadintvl1{YType::uint16, "loadIntvl1"},
    loadintvl2{YType::uint16, "loadIntvl2"},
    loadintvl3{YType::uint16, "loadIntvl3"}
{

    yang_name = "loadp-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::LoadpItems::~LoadpItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::LoadpItems::has_data() const
{
    if (is_presence_container) return true;
    return loadintvl1.is_set
	|| loadintvl2.is_set
	|| loadintvl3.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::LoadpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loadintvl1.yfilter)
	|| ydk::is_set(loadintvl2.yfilter)
	|| ydk::is_set(loadintvl3.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loadintvl1.is_set || is_set(loadintvl1.yfilter)) leaf_name_data.push_back(loadintvl1.get_name_leafdata());
    if (loadintvl2.is_set || is_set(loadintvl2.yfilter)) leaf_name_data.push_back(loadintvl2.get_name_leafdata());
    if (loadintvl3.is_set || is_set(loadintvl3.yfilter)) leaf_name_data.push_back(loadintvl3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::LoadpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::LoadpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loadIntvl1")
    {
        loadintvl1 = value;
        loadintvl1.value_namespace = name_space;
        loadintvl1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2 = value;
        loadintvl2.value_namespace = name_space;
        loadintvl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3 = value;
        loadintvl3.value_namespace = name_space;
        loadintvl3.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::LoadpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loadIntvl1")
    {
        loadintvl1.yfilter = yfilter;
    }
    if(value_path == "loadIntvl2")
    {
        loadintvl2.yfilter = yfilter;
    }
    if(value_path == "loadIntvl3")
    {
        loadintvl3.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::LoadpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loadIntvl1" || name == "loadIntvl2" || name == "loadIntvl3")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::AggrifItems()
    :
    numactiveports{YType::uint16, "numActivePorts"},
    activembrs{YType::str, "activeMbrs"},
    nummbrup{YType::uint8, "numMbrUp"},
    ifindex{YType::uint32, "ifIndex"},
    operautoneg{YType::enumeration, "operAutoNeg"},
    opermtu{YType::uint32, "operMtu"},
    adminst{YType::enumeration, "adminSt"},
    operdescr{YType::str, "operDescr"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    operstqualcode{YType::uint32, "operStQualCode"},
    opererrdisqual{YType::enumeration, "operErrDisQual"},
    operspeed{YType::enumeration, "operSpeed"},
    opermode{YType::enumeration, "operMode"},
    operduplex{YType::enumeration, "operDuplex"},
    operflowctrl{YType::str, "operFlowCtrl"},
    operphyenst{YType::enumeration, "operPhyEnSt"},
    backplanemac{YType::str, "backplaneMac"},
    operroutermac{YType::str, "operRouterMac"},
    txt{YType::enumeration, "txT"},
    lastlinkstchg{YType::str, "lastLinkStChg"},
    portcfgwaitflags{YType::uint32, "portCfgWaitFlags"},
    accessvlan{YType::str, "accessVlan"},
    nativevlan{YType::str, "nativeVlan"},
    cfgnativevlan{YType::str, "cfgNativeVlan"},
    cfgaccessvlan{YType::str, "cfgAccessVlan"},
    primaryvlan{YType::str, "primaryVlan"},
    operbitset{YType::str, "operBitset"},
    vdcid{YType::uint16, "vdcId"},
    resetctr{YType::uint32, "resetCtr"},
    media{YType::uint32, "media"},
    encap{YType::uint32, "encap"},
    iod{YType::uint64, "iod"},
    allowedvlans{YType::str, "allowedVlans"},
    opervlans{YType::str, "operVlans"},
    errvlans{YType::str, "errVlans"},
    opertrunkstatus{YType::enumeration, "operTrunkStatus"},
    bundleindex{YType::str, "bundleIndex"},
    opermdix{YType::enumeration, "operMdix"},
    currerrindex{YType::uint32, "currErrIndex"},
    lasterrors{YType::str, "lastErrors"},
    errdistimerrunning{YType::boolean, "errDisTimerRunning"},
    bundlebupid{YType::uint32, "bundleBupId"},
    operdcemode{YType::enumeration, "operDceMode"},
    intft{YType::enumeration, "intfT"},
    diags{YType::enumeration, "diags"},
    opereeestate{YType::enumeration, "operEEEState"},
    opereeetxwktime{YType::uint32, "operEEETxWkTime"},
    opereeerxwktime{YType::uint32, "operEEERxWkTime"},
    usercfgdflags{YType::str, "userCfgdFlags"},
    numofsi{YType::uint32, "numOfSI"},
    silist{YType::str, "siList"},
    dynamicvlan{YType::boolean, "dynamicVlan"},
    usage{YType::str, "usage"}
        ,
    portcap_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems>())
{
    portcap_items->parent = this;

    yang_name = "aggrif-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::~AggrifItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::has_data() const
{
    if (is_presence_container) return true;
    return numactiveports.is_set
	|| activembrs.is_set
	|| nummbrup.is_set
	|| ifindex.is_set
	|| operautoneg.is_set
	|| opermtu.is_set
	|| adminst.is_set
	|| operdescr.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| operstqualcode.is_set
	|| opererrdisqual.is_set
	|| operspeed.is_set
	|| opermode.is_set
	|| operduplex.is_set
	|| operflowctrl.is_set
	|| operphyenst.is_set
	|| backplanemac.is_set
	|| operroutermac.is_set
	|| txt.is_set
	|| lastlinkstchg.is_set
	|| portcfgwaitflags.is_set
	|| accessvlan.is_set
	|| nativevlan.is_set
	|| cfgnativevlan.is_set
	|| cfgaccessvlan.is_set
	|| primaryvlan.is_set
	|| operbitset.is_set
	|| vdcid.is_set
	|| resetctr.is_set
	|| media.is_set
	|| encap.is_set
	|| iod.is_set
	|| allowedvlans.is_set
	|| opervlans.is_set
	|| errvlans.is_set
	|| opertrunkstatus.is_set
	|| bundleindex.is_set
	|| opermdix.is_set
	|| currerrindex.is_set
	|| lasterrors.is_set
	|| errdistimerrunning.is_set
	|| bundlebupid.is_set
	|| operdcemode.is_set
	|| intft.is_set
	|| diags.is_set
	|| opereeestate.is_set
	|| opereeetxwktime.is_set
	|| opereeerxwktime.is_set
	|| usercfgdflags.is_set
	|| numofsi.is_set
	|| silist.is_set
	|| dynamicvlan.is_set
	|| usage.is_set
	|| (portcap_items !=  nullptr && portcap_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numactiveports.yfilter)
	|| ydk::is_set(activembrs.yfilter)
	|| ydk::is_set(nummbrup.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(operautoneg.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operdescr.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(operstqualcode.yfilter)
	|| ydk::is_set(opererrdisqual.yfilter)
	|| ydk::is_set(operspeed.yfilter)
	|| ydk::is_set(opermode.yfilter)
	|| ydk::is_set(operduplex.yfilter)
	|| ydk::is_set(operflowctrl.yfilter)
	|| ydk::is_set(operphyenst.yfilter)
	|| ydk::is_set(backplanemac.yfilter)
	|| ydk::is_set(operroutermac.yfilter)
	|| ydk::is_set(txt.yfilter)
	|| ydk::is_set(lastlinkstchg.yfilter)
	|| ydk::is_set(portcfgwaitflags.yfilter)
	|| ydk::is_set(accessvlan.yfilter)
	|| ydk::is_set(nativevlan.yfilter)
	|| ydk::is_set(cfgnativevlan.yfilter)
	|| ydk::is_set(cfgaccessvlan.yfilter)
	|| ydk::is_set(primaryvlan.yfilter)
	|| ydk::is_set(operbitset.yfilter)
	|| ydk::is_set(vdcid.yfilter)
	|| ydk::is_set(resetctr.yfilter)
	|| ydk::is_set(media.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(allowedvlans.yfilter)
	|| ydk::is_set(opervlans.yfilter)
	|| ydk::is_set(errvlans.yfilter)
	|| ydk::is_set(opertrunkstatus.yfilter)
	|| ydk::is_set(bundleindex.yfilter)
	|| ydk::is_set(opermdix.yfilter)
	|| ydk::is_set(currerrindex.yfilter)
	|| ydk::is_set(lasterrors.yfilter)
	|| ydk::is_set(errdistimerrunning.yfilter)
	|| ydk::is_set(bundlebupid.yfilter)
	|| ydk::is_set(operdcemode.yfilter)
	|| ydk::is_set(intft.yfilter)
	|| ydk::is_set(diags.yfilter)
	|| ydk::is_set(opereeestate.yfilter)
	|| ydk::is_set(opereeetxwktime.yfilter)
	|| ydk::is_set(opereeerxwktime.yfilter)
	|| ydk::is_set(usercfgdflags.yfilter)
	|| ydk::is_set(numofsi.yfilter)
	|| ydk::is_set(silist.yfilter)
	|| ydk::is_set(dynamicvlan.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| (portcap_items !=  nullptr && portcap_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numactiveports.is_set || is_set(numactiveports.yfilter)) leaf_name_data.push_back(numactiveports.get_name_leafdata());
    if (activembrs.is_set || is_set(activembrs.yfilter)) leaf_name_data.push_back(activembrs.get_name_leafdata());
    if (nummbrup.is_set || is_set(nummbrup.yfilter)) leaf_name_data.push_back(nummbrup.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (operautoneg.is_set || is_set(operautoneg.yfilter)) leaf_name_data.push_back(operautoneg.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operdescr.is_set || is_set(operdescr.yfilter)) leaf_name_data.push_back(operdescr.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (operstqualcode.is_set || is_set(operstqualcode.yfilter)) leaf_name_data.push_back(operstqualcode.get_name_leafdata());
    if (opererrdisqual.is_set || is_set(opererrdisqual.yfilter)) leaf_name_data.push_back(opererrdisqual.get_name_leafdata());
    if (operspeed.is_set || is_set(operspeed.yfilter)) leaf_name_data.push_back(operspeed.get_name_leafdata());
    if (opermode.is_set || is_set(opermode.yfilter)) leaf_name_data.push_back(opermode.get_name_leafdata());
    if (operduplex.is_set || is_set(operduplex.yfilter)) leaf_name_data.push_back(operduplex.get_name_leafdata());
    if (operflowctrl.is_set || is_set(operflowctrl.yfilter)) leaf_name_data.push_back(operflowctrl.get_name_leafdata());
    if (operphyenst.is_set || is_set(operphyenst.yfilter)) leaf_name_data.push_back(operphyenst.get_name_leafdata());
    if (backplanemac.is_set || is_set(backplanemac.yfilter)) leaf_name_data.push_back(backplanemac.get_name_leafdata());
    if (operroutermac.is_set || is_set(operroutermac.yfilter)) leaf_name_data.push_back(operroutermac.get_name_leafdata());
    if (txt.is_set || is_set(txt.yfilter)) leaf_name_data.push_back(txt.get_name_leafdata());
    if (lastlinkstchg.is_set || is_set(lastlinkstchg.yfilter)) leaf_name_data.push_back(lastlinkstchg.get_name_leafdata());
    if (portcfgwaitflags.is_set || is_set(portcfgwaitflags.yfilter)) leaf_name_data.push_back(portcfgwaitflags.get_name_leafdata());
    if (accessvlan.is_set || is_set(accessvlan.yfilter)) leaf_name_data.push_back(accessvlan.get_name_leafdata());
    if (nativevlan.is_set || is_set(nativevlan.yfilter)) leaf_name_data.push_back(nativevlan.get_name_leafdata());
    if (cfgnativevlan.is_set || is_set(cfgnativevlan.yfilter)) leaf_name_data.push_back(cfgnativevlan.get_name_leafdata());
    if (cfgaccessvlan.is_set || is_set(cfgaccessvlan.yfilter)) leaf_name_data.push_back(cfgaccessvlan.get_name_leafdata());
    if (primaryvlan.is_set || is_set(primaryvlan.yfilter)) leaf_name_data.push_back(primaryvlan.get_name_leafdata());
    if (operbitset.is_set || is_set(operbitset.yfilter)) leaf_name_data.push_back(operbitset.get_name_leafdata());
    if (vdcid.is_set || is_set(vdcid.yfilter)) leaf_name_data.push_back(vdcid.get_name_leafdata());
    if (resetctr.is_set || is_set(resetctr.yfilter)) leaf_name_data.push_back(resetctr.get_name_leafdata());
    if (media.is_set || is_set(media.yfilter)) leaf_name_data.push_back(media.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (allowedvlans.is_set || is_set(allowedvlans.yfilter)) leaf_name_data.push_back(allowedvlans.get_name_leafdata());
    if (opervlans.is_set || is_set(opervlans.yfilter)) leaf_name_data.push_back(opervlans.get_name_leafdata());
    if (errvlans.is_set || is_set(errvlans.yfilter)) leaf_name_data.push_back(errvlans.get_name_leafdata());
    if (opertrunkstatus.is_set || is_set(opertrunkstatus.yfilter)) leaf_name_data.push_back(opertrunkstatus.get_name_leafdata());
    if (bundleindex.is_set || is_set(bundleindex.yfilter)) leaf_name_data.push_back(bundleindex.get_name_leafdata());
    if (opermdix.is_set || is_set(opermdix.yfilter)) leaf_name_data.push_back(opermdix.get_name_leafdata());
    if (currerrindex.is_set || is_set(currerrindex.yfilter)) leaf_name_data.push_back(currerrindex.get_name_leafdata());
    if (lasterrors.is_set || is_set(lasterrors.yfilter)) leaf_name_data.push_back(lasterrors.get_name_leafdata());
    if (errdistimerrunning.is_set || is_set(errdistimerrunning.yfilter)) leaf_name_data.push_back(errdistimerrunning.get_name_leafdata());
    if (bundlebupid.is_set || is_set(bundlebupid.yfilter)) leaf_name_data.push_back(bundlebupid.get_name_leafdata());
    if (operdcemode.is_set || is_set(operdcemode.yfilter)) leaf_name_data.push_back(operdcemode.get_name_leafdata());
    if (intft.is_set || is_set(intft.yfilter)) leaf_name_data.push_back(intft.get_name_leafdata());
    if (diags.is_set || is_set(diags.yfilter)) leaf_name_data.push_back(diags.get_name_leafdata());
    if (opereeestate.is_set || is_set(opereeestate.yfilter)) leaf_name_data.push_back(opereeestate.get_name_leafdata());
    if (opereeetxwktime.is_set || is_set(opereeetxwktime.yfilter)) leaf_name_data.push_back(opereeetxwktime.get_name_leafdata());
    if (opereeerxwktime.is_set || is_set(opereeerxwktime.yfilter)) leaf_name_data.push_back(opereeerxwktime.get_name_leafdata());
    if (usercfgdflags.is_set || is_set(usercfgdflags.yfilter)) leaf_name_data.push_back(usercfgdflags.get_name_leafdata());
    if (numofsi.is_set || is_set(numofsi.yfilter)) leaf_name_data.push_back(numofsi.get_name_leafdata());
    if (silist.is_set || is_set(silist.yfilter)) leaf_name_data.push_back(silist.get_name_leafdata());
    if (dynamicvlan.is_set || is_set(dynamicvlan.yfilter)) leaf_name_data.push_back(dynamicvlan.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "portcap-items")
    {
        if(portcap_items == nullptr)
        {
            portcap_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems>();
        }
        return portcap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(portcap_items != nullptr)
    {
        _children["portcap-items"] = portcap_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numActivePorts")
    {
        numactiveports = value;
        numactiveports.value_namespace = name_space;
        numactiveports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeMbrs")
    {
        activembrs = value;
        activembrs.value_namespace = name_space;
        activembrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMbrUp")
    {
        nummbrup = value;
        nummbrup.value_namespace = name_space;
        nummbrup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operAutoNeg")
    {
        operautoneg = value;
        operautoneg.value_namespace = name_space;
        operautoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDescr")
    {
        operdescr = value;
        operdescr.value_namespace = name_space;
        operdescr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "operStQualCode")
    {
        operstqualcode = value;
        operstqualcode.value_namespace = name_space;
        operstqualcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErrDisQual")
    {
        opererrdisqual = value;
        opererrdisqual.value_namespace = name_space;
        opererrdisqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSpeed")
    {
        operspeed = value;
        operspeed.value_namespace = name_space;
        operspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMode")
    {
        opermode = value;
        opermode.value_namespace = name_space;
        opermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDuplex")
    {
        operduplex = value;
        operduplex.value_namespace = name_space;
        operduplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operFlowCtrl")
    {
        operflowctrl = value;
        operflowctrl.value_namespace = name_space;
        operflowctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPhyEnSt")
    {
        operphyenst = value;
        operphyenst.value_namespace = name_space;
        operphyenst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac = value;
        backplanemac.value_namespace = name_space;
        backplanemac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac = value;
        operroutermac.value_namespace = name_space;
        operroutermac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txT")
    {
        txt = value;
        txt.value_namespace = name_space;
        txt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg = value;
        lastlinkstchg.value_namespace = name_space;
        lastlinkstchg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCfgWaitFlags")
    {
        portcfgwaitflags = value;
        portcfgwaitflags.value_namespace = name_space;
        portcfgwaitflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accessVlan")
    {
        accessvlan = value;
        accessvlan.value_namespace = name_space;
        accessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan = value;
        nativevlan.value_namespace = name_space;
        nativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgNativeVlan")
    {
        cfgnativevlan = value;
        cfgnativevlan.value_namespace = name_space;
        cfgnativevlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgAccessVlan")
    {
        cfgaccessvlan = value;
        cfgaccessvlan.value_namespace = name_space;
        cfgaccessvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primaryVlan")
    {
        primaryvlan = value;
        primaryvlan.value_namespace = name_space;
        primaryvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBitset")
    {
        operbitset = value;
        operbitset.value_namespace = name_space;
        operbitset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdcId")
    {
        vdcid = value;
        vdcid.value_namespace = name_space;
        vdcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetCtr")
    {
        resetctr = value;
        resetctr.value_namespace = name_space;
        resetctr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media")
    {
        media = value;
        media.value_namespace = name_space;
        media.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVlans")
    {
        allowedvlans = value;
        allowedvlans.value_namespace = name_space;
        allowedvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operVlans")
    {
        opervlans = value;
        opervlans.value_namespace = name_space;
        opervlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errVlans")
    {
        errvlans = value;
        errvlans.value_namespace = name_space;
        errvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operTrunkStatus")
    {
        opertrunkstatus = value;
        opertrunkstatus.value_namespace = name_space;
        opertrunkstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundleIndex")
    {
        bundleindex = value;
        bundleindex.value_namespace = name_space;
        bundleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMdix")
    {
        opermdix = value;
        opermdix.value_namespace = name_space;
        opermdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex = value;
        currerrindex.value_namespace = name_space;
        currerrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrors")
    {
        lasterrors = value;
        lasterrors.value_namespace = name_space;
        lasterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDisTimerRunning")
    {
        errdistimerrunning = value;
        errdistimerrunning.value_namespace = name_space;
        errdistimerrunning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundleBupId")
    {
        bundlebupid = value;
        bundlebupid.value_namespace = name_space;
        bundlebupid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDceMode")
    {
        operdcemode = value;
        operdcemode.value_namespace = name_space;
        operdcemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intfT")
    {
        intft = value;
        intft.value_namespace = name_space;
        intft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diags")
    {
        diags = value;
        diags.value_namespace = name_space;
        diags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEEState")
    {
        opereeestate = value;
        opereeestate.value_namespace = name_space;
        opereeestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEETxWkTime")
    {
        opereeetxwktime = value;
        opereeetxwktime.value_namespace = name_space;
        opereeetxwktime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operEEERxWkTime")
    {
        opereeerxwktime = value;
        opereeerxwktime.value_namespace = name_space;
        opereeerxwktime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags = value;
        usercfgdflags.value_namespace = name_space;
        usercfgdflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numOfSI")
    {
        numofsi = value;
        numofsi.value_namespace = name_space;
        numofsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siList")
    {
        silist = value;
        silist.value_namespace = name_space;
        silist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamicVlan")
    {
        dynamicvlan = value;
        dynamicvlan.value_namespace = name_space;
        dynamicvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numActivePorts")
    {
        numactiveports.yfilter = yfilter;
    }
    if(value_path == "activeMbrs")
    {
        activembrs.yfilter = yfilter;
    }
    if(value_path == "numMbrUp")
    {
        nummbrup.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "operAutoNeg")
    {
        operautoneg.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operDescr")
    {
        operdescr.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "operStQualCode")
    {
        operstqualcode.yfilter = yfilter;
    }
    if(value_path == "operErrDisQual")
    {
        opererrdisqual.yfilter = yfilter;
    }
    if(value_path == "operSpeed")
    {
        operspeed.yfilter = yfilter;
    }
    if(value_path == "operMode")
    {
        opermode.yfilter = yfilter;
    }
    if(value_path == "operDuplex")
    {
        operduplex.yfilter = yfilter;
    }
    if(value_path == "operFlowCtrl")
    {
        operflowctrl.yfilter = yfilter;
    }
    if(value_path == "operPhyEnSt")
    {
        operphyenst.yfilter = yfilter;
    }
    if(value_path == "backplaneMac")
    {
        backplanemac.yfilter = yfilter;
    }
    if(value_path == "operRouterMac")
    {
        operroutermac.yfilter = yfilter;
    }
    if(value_path == "txT")
    {
        txt.yfilter = yfilter;
    }
    if(value_path == "lastLinkStChg")
    {
        lastlinkstchg.yfilter = yfilter;
    }
    if(value_path == "portCfgWaitFlags")
    {
        portcfgwaitflags.yfilter = yfilter;
    }
    if(value_path == "accessVlan")
    {
        accessvlan.yfilter = yfilter;
    }
    if(value_path == "nativeVlan")
    {
        nativevlan.yfilter = yfilter;
    }
    if(value_path == "cfgNativeVlan")
    {
        cfgnativevlan.yfilter = yfilter;
    }
    if(value_path == "cfgAccessVlan")
    {
        cfgaccessvlan.yfilter = yfilter;
    }
    if(value_path == "primaryVlan")
    {
        primaryvlan.yfilter = yfilter;
    }
    if(value_path == "operBitset")
    {
        operbitset.yfilter = yfilter;
    }
    if(value_path == "vdcId")
    {
        vdcid.yfilter = yfilter;
    }
    if(value_path == "resetCtr")
    {
        resetctr.yfilter = yfilter;
    }
    if(value_path == "media")
    {
        media.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "allowedVlans")
    {
        allowedvlans.yfilter = yfilter;
    }
    if(value_path == "operVlans")
    {
        opervlans.yfilter = yfilter;
    }
    if(value_path == "errVlans")
    {
        errvlans.yfilter = yfilter;
    }
    if(value_path == "operTrunkStatus")
    {
        opertrunkstatus.yfilter = yfilter;
    }
    if(value_path == "bundleIndex")
    {
        bundleindex.yfilter = yfilter;
    }
    if(value_path == "operMdix")
    {
        opermdix.yfilter = yfilter;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex.yfilter = yfilter;
    }
    if(value_path == "lastErrors")
    {
        lasterrors.yfilter = yfilter;
    }
    if(value_path == "errDisTimerRunning")
    {
        errdistimerrunning.yfilter = yfilter;
    }
    if(value_path == "bundleBupId")
    {
        bundlebupid.yfilter = yfilter;
    }
    if(value_path == "operDceMode")
    {
        operdcemode.yfilter = yfilter;
    }
    if(value_path == "intfT")
    {
        intft.yfilter = yfilter;
    }
    if(value_path == "diags")
    {
        diags.yfilter = yfilter;
    }
    if(value_path == "operEEEState")
    {
        opereeestate.yfilter = yfilter;
    }
    if(value_path == "operEEETxWkTime")
    {
        opereeetxwktime.yfilter = yfilter;
    }
    if(value_path == "operEEERxWkTime")
    {
        opereeerxwktime.yfilter = yfilter;
    }
    if(value_path == "userCfgdFlags")
    {
        usercfgdflags.yfilter = yfilter;
    }
    if(value_path == "numOfSI")
    {
        numofsi.yfilter = yfilter;
    }
    if(value_path == "siList")
    {
        silist.yfilter = yfilter;
    }
    if(value_path == "dynamicVlan")
    {
        dynamicvlan.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "portcap-items" || name == "numActivePorts" || name == "activeMbrs" || name == "numMbrUp" || name == "ifIndex" || name == "operAutoNeg" || name == "operMtu" || name == "adminSt" || name == "operDescr" || name == "operSt" || name == "operStQual" || name == "operStQualCode" || name == "operErrDisQual" || name == "operSpeed" || name == "operMode" || name == "operDuplex" || name == "operFlowCtrl" || name == "operPhyEnSt" || name == "backplaneMac" || name == "operRouterMac" || name == "txT" || name == "lastLinkStChg" || name == "portCfgWaitFlags" || name == "accessVlan" || name == "nativeVlan" || name == "cfgNativeVlan" || name == "cfgAccessVlan" || name == "primaryVlan" || name == "operBitset" || name == "vdcId" || name == "resetCtr" || name == "media" || name == "encap" || name == "iod" || name == "allowedVlans" || name == "operVlans" || name == "errVlans" || name == "operTrunkStatus" || name == "bundleIndex" || name == "operMdix" || name == "currErrIndex" || name == "lastErrors" || name == "errDisTimerRunning" || name == "bundleBupId" || name == "operDceMode" || name == "intfT" || name == "diags" || name == "operEEEState" || name == "operEEETxWkTime" || name == "operEEERxWkTime" || name == "userCfgdFlags" || name == "numOfSI" || name == "siList" || name == "dynamicVlan" || name == "usage")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::PortcapItems()
    :
    id{YType::str, "id"},
    speed{YType::str, "speed"},
    duplex{YType::str, "duplex"},
    trunkencap{YType::uint8, "trunkEncap"},
    channel{YType::uint8, "channel"},
    suppression{YType::uint8, "suppression"},
    rxflowcontrol{YType::uint8, "rxFlowControl"},
    txflowcontrol{YType::uint8, "txFlowControl"},
    cosrewrite{YType::uint8, "cosRewrite"},
    tosrewrite{YType::uint8, "tosRewrite"},
    span{YType::uint8, "span"},
    udld{YType::uint8, "udld"},
    autoneg{YType::uint8, "autoneg"},
    linkdebounce{YType::uint8, "linkDebounce"},
    linkdebouncetime{YType::uint8, "linkDebounceTime"},
    fcotcapable{YType::uint8, "fcotCapable"},
    ratemode{YType::uint8, "rateMode"},
    mdix{YType::uint8, "mdix"},
    portgroup{YType::uint8, "portGroup"},
    ctscapable{YType::uint8, "ctsCapable"},
    qosrxprio{YType::uint8, "qosRxPrio"},
    qosrxqueue{YType::uint8, "qosRxQueue"},
    qosrxthold{YType::uint8, "qosRxThold"},
    qostxprio{YType::uint8, "qosTxPrio"},
    qostxqueue{YType::uint8, "qosTxQueue"},
    qostxthold{YType::uint8, "qosTxThold"},
    model{YType::str, "model"},
    type{YType::str, "type"},
    portgrpmbrs{YType::str, "portGrpMbrs"},
    protosupport{YType::uint32, "protoSupport"},
    portcap{YType::uint32, "portCap"},
    eeecapval{YType::uint16, "eeeCapVal"},
    eeewaketimes10g{YType::str, "eeeWakeTimes10g"},
    eeeflapflags{YType::uint16, "eeeFlapFlags"}
{

    yang_name = "portcap-items"; yang_parent_name = "aggrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::~PortcapItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| speed.is_set
	|| duplex.is_set
	|| trunkencap.is_set
	|| channel.is_set
	|| suppression.is_set
	|| rxflowcontrol.is_set
	|| txflowcontrol.is_set
	|| cosrewrite.is_set
	|| tosrewrite.is_set
	|| span.is_set
	|| udld.is_set
	|| autoneg.is_set
	|| linkdebounce.is_set
	|| linkdebouncetime.is_set
	|| fcotcapable.is_set
	|| ratemode.is_set
	|| mdix.is_set
	|| portgroup.is_set
	|| ctscapable.is_set
	|| qosrxprio.is_set
	|| qosrxqueue.is_set
	|| qosrxthold.is_set
	|| qostxprio.is_set
	|| qostxqueue.is_set
	|| qostxthold.is_set
	|| model.is_set
	|| type.is_set
	|| portgrpmbrs.is_set
	|| protosupport.is_set
	|| portcap.is_set
	|| eeecapval.is_set
	|| eeewaketimes10g.is_set
	|| eeeflapflags.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(trunkencap.yfilter)
	|| ydk::is_set(channel.yfilter)
	|| ydk::is_set(suppression.yfilter)
	|| ydk::is_set(rxflowcontrol.yfilter)
	|| ydk::is_set(txflowcontrol.yfilter)
	|| ydk::is_set(cosrewrite.yfilter)
	|| ydk::is_set(tosrewrite.yfilter)
	|| ydk::is_set(span.yfilter)
	|| ydk::is_set(udld.yfilter)
	|| ydk::is_set(autoneg.yfilter)
	|| ydk::is_set(linkdebounce.yfilter)
	|| ydk::is_set(linkdebouncetime.yfilter)
	|| ydk::is_set(fcotcapable.yfilter)
	|| ydk::is_set(ratemode.yfilter)
	|| ydk::is_set(mdix.yfilter)
	|| ydk::is_set(portgroup.yfilter)
	|| ydk::is_set(ctscapable.yfilter)
	|| ydk::is_set(qosrxprio.yfilter)
	|| ydk::is_set(qosrxqueue.yfilter)
	|| ydk::is_set(qosrxthold.yfilter)
	|| ydk::is_set(qostxprio.yfilter)
	|| ydk::is_set(qostxqueue.yfilter)
	|| ydk::is_set(qostxthold.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(portgrpmbrs.yfilter)
	|| ydk::is_set(protosupport.yfilter)
	|| ydk::is_set(portcap.yfilter)
	|| ydk::is_set(eeecapval.yfilter)
	|| ydk::is_set(eeewaketimes10g.yfilter)
	|| ydk::is_set(eeeflapflags.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portcap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (trunkencap.is_set || is_set(trunkencap.yfilter)) leaf_name_data.push_back(trunkencap.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());
    if (suppression.is_set || is_set(suppression.yfilter)) leaf_name_data.push_back(suppression.get_name_leafdata());
    if (rxflowcontrol.is_set || is_set(rxflowcontrol.yfilter)) leaf_name_data.push_back(rxflowcontrol.get_name_leafdata());
    if (txflowcontrol.is_set || is_set(txflowcontrol.yfilter)) leaf_name_data.push_back(txflowcontrol.get_name_leafdata());
    if (cosrewrite.is_set || is_set(cosrewrite.yfilter)) leaf_name_data.push_back(cosrewrite.get_name_leafdata());
    if (tosrewrite.is_set || is_set(tosrewrite.yfilter)) leaf_name_data.push_back(tosrewrite.get_name_leafdata());
    if (span.is_set || is_set(span.yfilter)) leaf_name_data.push_back(span.get_name_leafdata());
    if (udld.is_set || is_set(udld.yfilter)) leaf_name_data.push_back(udld.get_name_leafdata());
    if (autoneg.is_set || is_set(autoneg.yfilter)) leaf_name_data.push_back(autoneg.get_name_leafdata());
    if (linkdebounce.is_set || is_set(linkdebounce.yfilter)) leaf_name_data.push_back(linkdebounce.get_name_leafdata());
    if (linkdebouncetime.is_set || is_set(linkdebouncetime.yfilter)) leaf_name_data.push_back(linkdebouncetime.get_name_leafdata());
    if (fcotcapable.is_set || is_set(fcotcapable.yfilter)) leaf_name_data.push_back(fcotcapable.get_name_leafdata());
    if (ratemode.is_set || is_set(ratemode.yfilter)) leaf_name_data.push_back(ratemode.get_name_leafdata());
    if (mdix.is_set || is_set(mdix.yfilter)) leaf_name_data.push_back(mdix.get_name_leafdata());
    if (portgroup.is_set || is_set(portgroup.yfilter)) leaf_name_data.push_back(portgroup.get_name_leafdata());
    if (ctscapable.is_set || is_set(ctscapable.yfilter)) leaf_name_data.push_back(ctscapable.get_name_leafdata());
    if (qosrxprio.is_set || is_set(qosrxprio.yfilter)) leaf_name_data.push_back(qosrxprio.get_name_leafdata());
    if (qosrxqueue.is_set || is_set(qosrxqueue.yfilter)) leaf_name_data.push_back(qosrxqueue.get_name_leafdata());
    if (qosrxthold.is_set || is_set(qosrxthold.yfilter)) leaf_name_data.push_back(qosrxthold.get_name_leafdata());
    if (qostxprio.is_set || is_set(qostxprio.yfilter)) leaf_name_data.push_back(qostxprio.get_name_leafdata());
    if (qostxqueue.is_set || is_set(qostxqueue.yfilter)) leaf_name_data.push_back(qostxqueue.get_name_leafdata());
    if (qostxthold.is_set || is_set(qostxthold.yfilter)) leaf_name_data.push_back(qostxthold.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (portgrpmbrs.is_set || is_set(portgrpmbrs.yfilter)) leaf_name_data.push_back(portgrpmbrs.get_name_leafdata());
    if (protosupport.is_set || is_set(protosupport.yfilter)) leaf_name_data.push_back(protosupport.get_name_leafdata());
    if (portcap.is_set || is_set(portcap.yfilter)) leaf_name_data.push_back(portcap.get_name_leafdata());
    if (eeecapval.is_set || is_set(eeecapval.yfilter)) leaf_name_data.push_back(eeecapval.get_name_leafdata());
    if (eeewaketimes10g.is_set || is_set(eeewaketimes10g.yfilter)) leaf_name_data.push_back(eeewaketimes10g.get_name_leafdata());
    if (eeeflapflags.is_set || is_set(eeeflapflags.yfilter)) leaf_name_data.push_back(eeeflapflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "trunkEncap")
    {
        trunkencap = value;
        trunkencap.value_namespace = name_space;
        trunkencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression")
    {
        suppression = value;
        suppression.value_namespace = name_space;
        suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxFlowControl")
    {
        rxflowcontrol = value;
        rxflowcontrol.value_namespace = name_space;
        rxflowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txFlowControl")
    {
        txflowcontrol = value;
        txflowcontrol.value_namespace = name_space;
        txflowcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cosRewrite")
    {
        cosrewrite = value;
        cosrewrite.value_namespace = name_space;
        cosrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tosRewrite")
    {
        tosrewrite = value;
        tosrewrite.value_namespace = name_space;
        tosrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "span")
    {
        span = value;
        span.value_namespace = name_space;
        span.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udld")
    {
        udld = value;
        udld.value_namespace = name_space;
        udld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoneg")
    {
        autoneg = value;
        autoneg.value_namespace = name_space;
        autoneg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce = value;
        linkdebounce.value_namespace = name_space;
        linkdebounce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkDebounceTime")
    {
        linkdebouncetime = value;
        linkdebouncetime.value_namespace = name_space;
        linkdebouncetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotCapable")
    {
        fcotcapable = value;
        fcotcapable.value_namespace = name_space;
        fcotcapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateMode")
    {
        ratemode = value;
        ratemode.value_namespace = name_space;
        ratemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdix")
    {
        mdix = value;
        mdix.value_namespace = name_space;
        mdix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portGroup")
    {
        portgroup = value;
        portgroup.value_namespace = name_space;
        portgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctsCapable")
    {
        ctscapable = value;
        ctscapable.value_namespace = name_space;
        ctscapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxPrio")
    {
        qosrxprio = value;
        qosrxprio.value_namespace = name_space;
        qosrxprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxQueue")
    {
        qosrxqueue = value;
        qosrxqueue.value_namespace = name_space;
        qosrxqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosRxThold")
    {
        qosrxthold = value;
        qosrxthold.value_namespace = name_space;
        qosrxthold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxPrio")
    {
        qostxprio = value;
        qostxprio.value_namespace = name_space;
        qostxprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxQueue")
    {
        qostxqueue = value;
        qostxqueue.value_namespace = name_space;
        qostxqueue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosTxThold")
    {
        qostxthold = value;
        qostxthold.value_namespace = name_space;
        qostxthold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portGrpMbrs")
    {
        portgrpmbrs = value;
        portgrpmbrs.value_namespace = name_space;
        portgrpmbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protoSupport")
    {
        protosupport = value;
        protosupport.value_namespace = name_space;
        protosupport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portCap")
    {
        portcap = value;
        portcap.value_namespace = name_space;
        portcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeCapVal")
    {
        eeecapval = value;
        eeecapval.value_namespace = name_space;
        eeecapval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeWakeTimes10g")
    {
        eeewaketimes10g = value;
        eeewaketimes10g.value_namespace = name_space;
        eeewaketimes10g.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eeeFlapFlags")
    {
        eeeflapflags = value;
        eeeflapflags.value_namespace = name_space;
        eeeflapflags.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "trunkEncap")
    {
        trunkencap.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
    if(value_path == "suppression")
    {
        suppression.yfilter = yfilter;
    }
    if(value_path == "rxFlowControl")
    {
        rxflowcontrol.yfilter = yfilter;
    }
    if(value_path == "txFlowControl")
    {
        txflowcontrol.yfilter = yfilter;
    }
    if(value_path == "cosRewrite")
    {
        cosrewrite.yfilter = yfilter;
    }
    if(value_path == "tosRewrite")
    {
        tosrewrite.yfilter = yfilter;
    }
    if(value_path == "span")
    {
        span.yfilter = yfilter;
    }
    if(value_path == "udld")
    {
        udld.yfilter = yfilter;
    }
    if(value_path == "autoneg")
    {
        autoneg.yfilter = yfilter;
    }
    if(value_path == "linkDebounce")
    {
        linkdebounce.yfilter = yfilter;
    }
    if(value_path == "linkDebounceTime")
    {
        linkdebouncetime.yfilter = yfilter;
    }
    if(value_path == "fcotCapable")
    {
        fcotcapable.yfilter = yfilter;
    }
    if(value_path == "rateMode")
    {
        ratemode.yfilter = yfilter;
    }
    if(value_path == "mdix")
    {
        mdix.yfilter = yfilter;
    }
    if(value_path == "portGroup")
    {
        portgroup.yfilter = yfilter;
    }
    if(value_path == "ctsCapable")
    {
        ctscapable.yfilter = yfilter;
    }
    if(value_path == "qosRxPrio")
    {
        qosrxprio.yfilter = yfilter;
    }
    if(value_path == "qosRxQueue")
    {
        qosrxqueue.yfilter = yfilter;
    }
    if(value_path == "qosRxThold")
    {
        qosrxthold.yfilter = yfilter;
    }
    if(value_path == "qosTxPrio")
    {
        qostxprio.yfilter = yfilter;
    }
    if(value_path == "qosTxQueue")
    {
        qostxqueue.yfilter = yfilter;
    }
    if(value_path == "qosTxThold")
    {
        qostxthold.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "portGrpMbrs")
    {
        portgrpmbrs.yfilter = yfilter;
    }
    if(value_path == "protoSupport")
    {
        protosupport.yfilter = yfilter;
    }
    if(value_path == "portCap")
    {
        portcap.yfilter = yfilter;
    }
    if(value_path == "eeeCapVal")
    {
        eeecapval.yfilter = yfilter;
    }
    if(value_path == "eeeWakeTimes10g")
    {
        eeewaketimes10g.yfilter = yfilter;
    }
    if(value_path == "eeeFlapFlags")
    {
        eeeflapflags.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrifItems::PortcapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "speed" || name == "duplex" || name == "trunkEncap" || name == "channel" || name == "suppression" || name == "rxFlowControl" || name == "txFlowControl" || name == "cosRewrite" || name == "tosRewrite" || name == "span" || name == "udld" || name == "autoneg" || name == "linkDebounce" || name == "linkDebounceTime" || name == "fcotCapable" || name == "rateMode" || name == "mdix" || name == "portGroup" || name == "ctsCapable" || name == "qosRxPrio" || name == "qosRxQueue" || name == "qosRxThold" || name == "qosTxPrio" || name == "qosTxQueue" || name == "qosTxThold" || name == "model" || name == "type" || name == "portGrpMbrs" || name == "protoSupport" || name == "portCap" || name == "eeeCapVal" || name == "eeeWakeTimes10g" || name == "eeeFlapFlags")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::HwifdetailsItems()
    :
    slice{YType::uint32, "slice"},
    sport{YType::uint32, "sPort"},
    vif{YType::uint32, "vif"}
{

    yang_name = "hwifdetails-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::~HwifdetailsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::has_data() const
{
    if (is_presence_container) return true;
    return slice.is_set
	|| sport.is_set
	|| vif.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice.yfilter)
	|| ydk::is_set(sport.yfilter)
	|| ydk::is_set(vif.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hwifdetails-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice.is_set || is_set(slice.yfilter)) leaf_name_data.push_back(slice.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());
    if (vif.is_set || is_set(vif.yfilter)) leaf_name_data.push_back(vif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice")
    {
        slice = value;
        slice.value_namespace = name_space;
        slice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sPort")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vif")
    {
        vif = value;
        vif.value_namespace = name_space;
        vif.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice")
    {
        slice.yfilter = yfilter;
    }
    if(value_path == "sPort")
    {
        sport.yfilter = yfilter;
    }
    if(value_path == "vif")
    {
        vif.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::HwifdetailsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice" || name == "sPort" || name == "vif")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::BundleInfoItems()
    :
    opertype{YType::enumeration, "operType"},
    operprotocol{YType::enumeration, "operProtocol"}
{

    yang_name = "bundleInfo-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::~BundleInfoItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::has_data() const
{
    if (is_presence_container) return true;
    return opertype.is_set
	|| operprotocol.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opertype.yfilter)
	|| ydk::is_set(operprotocol.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundleInfo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opertype.is_set || is_set(opertype.yfilter)) leaf_name_data.push_back(opertype.get_name_leafdata());
    if (operprotocol.is_set || is_set(operprotocol.yfilter)) leaf_name_data.push_back(operprotocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operType")
    {
        opertype = value;
        opertype.value_namespace = name_space;
        opertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operProtocol")
    {
        operprotocol = value;
        operprotocol.value_namespace = name_space;
        operprotocol.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operType")
    {
        opertype.yfilter = yfilter;
    }
    if(value_path == "operProtocol")
    {
        operprotocol.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::BundleInfoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operType" || name == "operProtocol")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::AggrExtdItems()
    :
    potype{YType::enumeration, "poType"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    id{YType::str, "id"},
    porttypefabric{YType::enumeration, "portTypeFabric"},
    routermacipv6extract{YType::enumeration, "routerMacIpv6Extract"},
    switchportblock{YType::str, "switchportBlock"},
    switchportmaclearn{YType::enumeration, "switchportMacLearn"},
    flowctrl{YType::str, "flowCtrl"},
    stormctrlbcastlevel{YType::str, "stormCtrlBCastLevel"},
    stormctrlbcastpps{YType::uint32, "stormCtrlBCastPPS"},
    stormctrlmcastlevel{YType::str, "stormCtrlMCastLevel"},
    stormctrlmcastpps{YType::uint32, "stormCtrlMCastPPS"},
    stormctrlucastlevel{YType::str, "stormCtrlUCastLevel"},
    stormctrlucastpps{YType::uint32, "stormCtrlUCastPPS"},
    stormctrlact{YType::str, "stormCtrlAct"},
    bufferboost{YType::enumeration, "bufferBoost"},
    switchportvirtualethernetbridge{YType::enumeration, "switchportVirtualEthernetBridge"},
    allowmultitag{YType::enumeration, "allowMultiTag"}
        ,
    rtvrfmbr_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "aggrExtd-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::~AggrExtdItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::has_data() const
{
    if (is_presence_container) return true;
    return potype.is_set
	|| name.is_set
	|| descr.is_set
	|| id.is_set
	|| porttypefabric.is_set
	|| routermacipv6extract.is_set
	|| switchportblock.is_set
	|| switchportmaclearn.is_set
	|| flowctrl.is_set
	|| stormctrlbcastlevel.is_set
	|| stormctrlbcastpps.is_set
	|| stormctrlmcastlevel.is_set
	|| stormctrlmcastpps.is_set
	|| stormctrlucastlevel.is_set
	|| stormctrlucastpps.is_set
	|| stormctrlact.is_set
	|| bufferboost.is_set
	|| switchportvirtualethernetbridge.is_set
	|| allowmultitag.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(potype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(porttypefabric.yfilter)
	|| ydk::is_set(routermacipv6extract.yfilter)
	|| ydk::is_set(switchportblock.yfilter)
	|| ydk::is_set(switchportmaclearn.yfilter)
	|| ydk::is_set(flowctrl.yfilter)
	|| ydk::is_set(stormctrlbcastlevel.yfilter)
	|| ydk::is_set(stormctrlbcastpps.yfilter)
	|| ydk::is_set(stormctrlmcastlevel.yfilter)
	|| ydk::is_set(stormctrlmcastpps.yfilter)
	|| ydk::is_set(stormctrlucastlevel.yfilter)
	|| ydk::is_set(stormctrlucastpps.yfilter)
	|| ydk::is_set(stormctrlact.yfilter)
	|| ydk::is_set(bufferboost.yfilter)
	|| ydk::is_set(switchportvirtualethernetbridge.yfilter)
	|| ydk::is_set(allowmultitag.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggrExtd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (potype.is_set || is_set(potype.yfilter)) leaf_name_data.push_back(potype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (porttypefabric.is_set || is_set(porttypefabric.yfilter)) leaf_name_data.push_back(porttypefabric.get_name_leafdata());
    if (routermacipv6extract.is_set || is_set(routermacipv6extract.yfilter)) leaf_name_data.push_back(routermacipv6extract.get_name_leafdata());
    if (switchportblock.is_set || is_set(switchportblock.yfilter)) leaf_name_data.push_back(switchportblock.get_name_leafdata());
    if (switchportmaclearn.is_set || is_set(switchportmaclearn.yfilter)) leaf_name_data.push_back(switchportmaclearn.get_name_leafdata());
    if (flowctrl.is_set || is_set(flowctrl.yfilter)) leaf_name_data.push_back(flowctrl.get_name_leafdata());
    if (stormctrlbcastlevel.is_set || is_set(stormctrlbcastlevel.yfilter)) leaf_name_data.push_back(stormctrlbcastlevel.get_name_leafdata());
    if (stormctrlbcastpps.is_set || is_set(stormctrlbcastpps.yfilter)) leaf_name_data.push_back(stormctrlbcastpps.get_name_leafdata());
    if (stormctrlmcastlevel.is_set || is_set(stormctrlmcastlevel.yfilter)) leaf_name_data.push_back(stormctrlmcastlevel.get_name_leafdata());
    if (stormctrlmcastpps.is_set || is_set(stormctrlmcastpps.yfilter)) leaf_name_data.push_back(stormctrlmcastpps.get_name_leafdata());
    if (stormctrlucastlevel.is_set || is_set(stormctrlucastlevel.yfilter)) leaf_name_data.push_back(stormctrlucastlevel.get_name_leafdata());
    if (stormctrlucastpps.is_set || is_set(stormctrlucastpps.yfilter)) leaf_name_data.push_back(stormctrlucastpps.get_name_leafdata());
    if (stormctrlact.is_set || is_set(stormctrlact.yfilter)) leaf_name_data.push_back(stormctrlact.get_name_leafdata());
    if (bufferboost.is_set || is_set(bufferboost.yfilter)) leaf_name_data.push_back(bufferboost.get_name_leafdata());
    if (switchportvirtualethernetbridge.is_set || is_set(switchportvirtualethernetbridge.yfilter)) leaf_name_data.push_back(switchportvirtualethernetbridge.get_name_leafdata());
    if (allowmultitag.is_set || is_set(allowmultitag.yfilter)) leaf_name_data.push_back(allowmultitag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
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

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poType")
    {
        potype = value;
        potype.value_namespace = name_space;
        potype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portTypeFabric")
    {
        porttypefabric = value;
        porttypefabric.value_namespace = name_space;
        porttypefabric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract = value;
        routermacipv6extract.value_namespace = name_space;
        routermacipv6extract.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportBlock")
    {
        switchportblock = value;
        switchportblock.value_namespace = name_space;
        switchportblock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportMacLearn")
    {
        switchportmaclearn = value;
        switchportmaclearn.value_namespace = name_space;
        switchportmaclearn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowCtrl")
    {
        flowctrl = value;
        flowctrl.value_namespace = name_space;
        flowctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlBCastLevel")
    {
        stormctrlbcastlevel = value;
        stormctrlbcastlevel.value_namespace = name_space;
        stormctrlbcastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlBCastPPS")
    {
        stormctrlbcastpps = value;
        stormctrlbcastpps.value_namespace = name_space;
        stormctrlbcastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlMCastLevel")
    {
        stormctrlmcastlevel = value;
        stormctrlmcastlevel.value_namespace = name_space;
        stormctrlmcastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlMCastPPS")
    {
        stormctrlmcastpps = value;
        stormctrlmcastpps.value_namespace = name_space;
        stormctrlmcastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlUCastLevel")
    {
        stormctrlucastlevel = value;
        stormctrlucastlevel.value_namespace = name_space;
        stormctrlucastlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlUCastPPS")
    {
        stormctrlucastpps = value;
        stormctrlucastpps.value_namespace = name_space;
        stormctrlucastpps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormCtrlAct")
    {
        stormctrlact = value;
        stormctrlact.value_namespace = name_space;
        stormctrlact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferBoost")
    {
        bufferboost = value;
        bufferboost.value_namespace = name_space;
        bufferboost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchportVirtualEthernetBridge")
    {
        switchportvirtualethernetbridge = value;
        switchportvirtualethernetbridge.value_namespace = name_space;
        switchportvirtualethernetbridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowMultiTag")
    {
        allowmultitag = value;
        allowmultitag.value_namespace = name_space;
        allowmultitag.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poType")
    {
        potype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "portTypeFabric")
    {
        porttypefabric.yfilter = yfilter;
    }
    if(value_path == "routerMacIpv6Extract")
    {
        routermacipv6extract.yfilter = yfilter;
    }
    if(value_path == "switchportBlock")
    {
        switchportblock.yfilter = yfilter;
    }
    if(value_path == "switchportMacLearn")
    {
        switchportmaclearn.yfilter = yfilter;
    }
    if(value_path == "flowCtrl")
    {
        flowctrl.yfilter = yfilter;
    }
    if(value_path == "stormCtrlBCastLevel")
    {
        stormctrlbcastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlBCastPPS")
    {
        stormctrlbcastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlMCastLevel")
    {
        stormctrlmcastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlMCastPPS")
    {
        stormctrlmcastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlUCastLevel")
    {
        stormctrlucastlevel.yfilter = yfilter;
    }
    if(value_path == "stormCtrlUCastPPS")
    {
        stormctrlucastpps.yfilter = yfilter;
    }
    if(value_path == "stormCtrlAct")
    {
        stormctrlact.yfilter = yfilter;
    }
    if(value_path == "bufferBoost")
    {
        bufferboost.yfilter = yfilter;
    }
    if(value_path == "switchportVirtualEthernetBridge")
    {
        switchportvirtualethernetbridge.yfilter = yfilter;
    }
    if(value_path == "allowMultiTag")
    {
        allowmultitag.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "poType" || name == "name" || name == "descr" || name == "id" || name == "portTypeFabric" || name == "routerMacIpv6Extract" || name == "switchportBlock" || name == "switchportMacLearn" || name == "flowCtrl" || name == "stormCtrlBCastLevel" || name == "stormCtrlBCastPPS" || name == "stormCtrlMCastLevel" || name == "stormCtrlMCastPPS" || name == "stormCtrlUCastLevel" || name == "stormCtrlUCastPPS" || name == "stormCtrlAct" || name == "bufferBoost" || name == "switchportVirtualEthernetBridge" || name == "allowMultiTag")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "aggrExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "aggrExtd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::AggrExtdItems::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlanmappingItems()
    :
    enabled{YType::boolean, "Enabled"}
        ,
    vlantranslatetable_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems>())
{
    vlantranslatetable_items->parent = this;

    yang_name = "vlanmapping-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::~VlanmappingItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (vlantranslatetable_items !=  nullptr && vlantranslatetable_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlanmapping-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlantranslatetable-items")
    {
        if(vlantranslatetable_items == nullptr)
        {
            vlantranslatetable_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems>();
        }
        return vlantranslatetable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlantranslatetable_items != nullptr)
    {
        _children["vlantranslatetable-items"] = vlantranslatetable_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlantranslatetable-items" || name == "Enabled")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlantranslatetableItems()
    :
    vlan_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "vlantranslatetable-items"; yang_parent_name = "vlanmapping-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::~VlantranslatetableItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlantranslatetable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanItems()
    :
    vlantranslateentry_list(this, {"vlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "vlantranslatetable-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::~VlanItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlantranslateentry_list.len(); index++)
    {
        if(vlantranslateentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanTranslateEntry-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList>();
        ent_->parent = this;
        vlantranslateentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlantranslateentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanTranslateEntry-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::VlanTranslateEntryList()
    :
    vlanid{YType::str, "vlanid"},
    innervlanid{YType::str, "innervlanid"},
    translatevlanid{YType::str, "translatevlanid"}
{

    yang_name = "VlanTranslateEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::~VlanTranslateEntryList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| innervlanid.is_set
	|| translatevlanid.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(innervlanid.yfilter)
	|| ydk::is_set(translatevlanid.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanTranslateEntry-list";
    ADD_KEY_TOKEN(vlanid, "vlanid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (innervlanid.is_set || is_set(innervlanid.yfilter)) leaf_name_data.push_back(innervlanid.get_name_leafdata());
    if (translatevlanid.is_set || is_set(translatevlanid.yfilter)) leaf_name_data.push_back(translatevlanid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanid")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "innervlanid")
    {
        innervlanid = value;
        innervlanid.value_namespace = name_space;
        innervlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "translatevlanid")
    {
        translatevlanid = value;
        translatevlanid.value_namespace = name_space;
        translatevlanid.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanid")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "innervlanid")
    {
        innervlanid.yfilter = yfilter;
    }
    if(value_path == "translatevlanid")
    {
        translatevlanid.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::VlanmappingItems::VlantranslatetableItems::VlanItems::VlanTranslateEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanid" || name == "innervlanid" || name == "translatevlanid")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlmbrifItems()
    :
    bndlmbrif_list(this, {"id"})
{

    yang_name = "bndlmbrif-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::~BndlmbrifItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bndlmbrif_list.len(); index++)
    {
        if(bndlmbrif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::has_operation() const
{
    for (std::size_t index=0; index<bndlmbrif_list.len(); index++)
    {
        if(bndlmbrif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bndlmbrif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BndlMbrIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList>();
        ent_->parent = this;
        bndlmbrif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bndlmbrif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BndlMbrIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::BndlMbrIfList()
    :
    id{YType::str, "id"}
{

    yang_name = "BndlMbrIf-list"; yang_parent_name = "bndlmbrif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::~BndlMbrIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BndlMbrIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::BndlmbrifItems::BndlMbrIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::MultisiteiftrackingItems()
    :
    tracking{YType::enumeration, "tracking"}
{

    yang_name = "multisiteiftracking-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::~MultisiteiftrackingItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::has_data() const
{
    if (is_presence_container) return true;
    return tracking.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multisiteiftracking-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking.is_set || is_set(tracking.yfilter)) leaf_name_data.push_back(tracking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking")
    {
        tracking = value;
        tracking.value_namespace = name_space;
        tracking.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking")
    {
        tracking.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::MultisiteiftrackingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomItems()
    :
    domdef_list(this, {"dompkey"})
{

    yang_name = "dom-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::~DomItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::has_operation() const
{
    for (std::size_t index=0; index<domdef_list.len(); index++)
    {
        if(domdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList>();
        ent_->parent = this;
        domdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomDef-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::DomDefList()
    :
    dompkey{YType::str, "domPKey"},
    instrimedcy{YType::enumeration, "instrImedcy"},
    name{YType::str, "name"}
        ,
    rsdomdefns_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems>())
    , rsdomdefnslocal_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems>())
    , rtfvtodomdef_items(std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems>())
{
    rsdomdefns_items->parent = this;
    rsdomdefnslocal_items->parent = this;
    rtfvtodomdef_items->parent = this;

    yang_name = "DomDef-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::~DomDefList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::has_data() const
{
    if (is_presence_container) return true;
    return dompkey.is_set
	|| instrimedcy.is_set
	|| name.is_set
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_data())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_data())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_data());
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dompkey.yfilter)
	|| ydk::is_set(instrimedcy.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rsdomdefns_items !=  nullptr && rsdomdefns_items->has_operation())
	|| (rsdomdefnslocal_items !=  nullptr && rsdomdefnslocal_items->has_operation())
	|| (rtfvtodomdef_items !=  nullptr && rtfvtodomdef_items->has_operation());
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomDef-list";
    ADD_KEY_TOKEN(dompkey, "domPKey");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dompkey.is_set || is_set(dompkey.yfilter)) leaf_name_data.push_back(dompkey.get_name_leafdata());
    if (instrimedcy.is_set || is_set(instrimedcy.yfilter)) leaf_name_data.push_back(instrimedcy.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsdomDefNs-items")
    {
        if(rsdomdefns_items == nullptr)
        {
            rsdomdefns_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems>();
        }
        return rsdomdefns_items;
    }

    if(child_yang_name == "rsdomDefNsLocal-items")
    {
        if(rsdomdefnslocal_items == nullptr)
        {
            rsdomdefnslocal_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems>();
        }
        return rsdomdefnslocal_items;
    }

    if(child_yang_name == "rtfvToDomDef-items")
    {
        if(rtfvtodomdef_items == nullptr)
        {
            rtfvtodomdef_items = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems>();
        }
        return rtfvtodomdef_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsdomDefNs-items" || name == "rsdomDefNsLocal-items" || name == "rtfvToDomDef-items" || name == "domPKey" || name == "instrImedcy" || name == "name")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::RsdomDefNsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNs-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::~RsdomDefNsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::RsdomDefNsLocalItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rsdomDefNsLocal-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::~RsdomDefNsLocalItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsdomDefNsLocal-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RsdomDefNsLocalItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtfvToDomDefItems()
    :
    rtfvtodomdef_list(this, {"tdn"})
{

    yang_name = "rtfvToDomDef-items"; yang_parent_name = "DomDef-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::~RtfvToDomDefItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvtodomdef_list.len(); index++)
    {
        if(rtfvtodomdef_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvToDomDef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvToDomDef-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList>();
        ent_->parent = this;
        rtfvtodomdef_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvToDomDef-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::RtFvToDomDefList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvToDomDef-list"; yang_parent_name = "rtfvToDomDef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::~RtFvToDomDefList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvToDomDef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::DomItems::DomDefList::RtfvToDomDefItems::RtFvToDomDefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::RtfexBndlGrpToAggrIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtfexBndlGrpToAggrIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::~RtfexBndlGrpToAggrIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfexBndlGrpToAggrIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtfexBndlGrpToAggrIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::RtaccBndlGrpToAggrIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtaccBndlGrpToAggrIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::~RtaccBndlGrpToAggrIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaccBndlGrpToAggrIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtaccBndlGrpToAggrIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtextConfItems::RtextConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtextConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtextConfItems::~RtextConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtextConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtextConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtextConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtextConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtextConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtextConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtextConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::RtbrConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtbrConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::~RtbrConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtbrConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtbrConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::RtvpcConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvpcConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::~RtvpcConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvpcConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtvpcConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtfvNodePortAttItems()
    :
    rtfvnodeportatt_list(this, {"tdn"})
{

    yang_name = "rtfvNodePortAtt-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::~RtfvNodePortAttItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvnodeportatt_list.len(); index++)
    {
        if(rtfvnodeportatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvNodePortAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvNodePortAtt-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList>();
        ent_->parent = this;
        rtfvnodeportatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvNodePortAtt-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::RtFvNodePortAttList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvNodePortAtt-list"; yang_parent_name = "rtfvNodePortAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::~RtFvNodePortAttList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvNodePortAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtfvNodePortAttItems::RtFvNodePortAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsmbrIfsItems()
    :
    rsmbrifs_list(this, {"tdn"})
{

    yang_name = "rsmbrIfs-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::~RsmbrIfsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsmbrifs_list.len(); index++)
    {
        if(rsmbrifs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::has_operation() const
{
    for (std::size_t index=0; index<rsmbrifs_list.len(); index++)
    {
        if(rsmbrifs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsmbrIfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsMbrIfs-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList>();
        ent_->parent = this;
        rsmbrifs_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsMbrIfs-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::RsMbrIfsList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    ismbrforce{YType::boolean, "isMbrForce"}
{

    yang_name = "RsMbrIfs-list"; yang_parent_name = "rsmbrIfs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::~RsMbrIfsList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set
	|| ismbrforce.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter)
	|| ydk::is_set(ismbrforce.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsMbrIfs-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());
    if (ismbrforce.is_set || is_set(ismbrforce.yfilter)) leaf_name_data.push_back(ismbrforce.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "isMbrForce")
    {
        ismbrforce = value;
        ismbrforce.value_namespace = name_space;
        ismbrforce.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
    if(value_path == "isMbrForce")
    {
        ismbrforce.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::RsmbrIfsItems::RsMbrIfsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "isMbrForce")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::RslacpPolConsItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rslacpPolCons-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::~RslacpPolConsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslacpPolCons-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RslacpPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::RtphysRtdConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtphysRtdConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::~RtphysRtdConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::Rtl3EncPhysRtdConfItems()
    :
    rtl3encphysrtdconf_list(this, {"tdn"})
{

    yang_name = "rtl3EncPhysRtdConf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::~Rtl3EncPhysRtdConfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_operation() const
{
    for (std::size_t index=0; index<rtl3encphysrtdconf_list.len(); index++)
    {
        if(rtl3encphysrtdconf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtl3EncPhysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtL3EncPhysRtdConf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList>();
        ent_->parent = this;
        rtl3encphysrtdconf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtL3EncPhysRtdConf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::RtL3EncPhysRtdConfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtL3EncPhysRtdConf-list"; yang_parent_name = "rtl3EncPhysRtdConf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::~RtL3EncPhysRtdConfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtL3EncPhysRtdConf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::Rtl3EncPhysRtdConfItems::RtL3EncPhysRtdConfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::RtLsNodeToIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtLsNodeToIf-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::~RtLsNodeToIfItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtLsNodeToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::AggrItems::AggrIfList::RtLsNodeToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::DbgIfInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    unknownprotos{YType::uint64, "unknownProtos"},
    unknownetype{YType::uint64, "unknownEtype"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    nobuffer{YType::uint64, "noBuffer"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfIn-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::~DbgIfInItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| unknownprotos.is_set
	|| unknownetype.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| nobuffer.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(unknownprotos.yfilter)
	|| ydk::is_set(unknownetype.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(nobuffer.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (unknownprotos.is_set || is_set(unknownprotos.yfilter)) leaf_name_data.push_back(unknownprotos.get_name_leafdata());
    if (unknownetype.is_set || is_set(unknownetype.yfilter)) leaf_name_data.push_back(unknownetype.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (nobuffer.is_set || is_set(nobuffer.yfilter)) leaf_name_data.push_back(nobuffer.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos = value;
        unknownprotos.value_namespace = name_space;
        unknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype = value;
        unknownetype.value_namespace = name_space;
        unknownetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noBuffer")
    {
        nobuffer = value;
        nobuffer.value_namespace = name_space;
        nobuffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "unknownProtos")
    {
        unknownprotos.yfilter = yfilter;
    }
    if(value_path == "unknownEtype")
    {
        unknownetype.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "noBuffer")
    {
        nobuffer.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "unknownProtos" || name == "unknownEtype" || name == "broadcastPkts" || name == "multicastPkts" || name == "noBuffer" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::DbgIfOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    nucastpkts{YType::uint64, "nUcastPkts"},
    discards{YType::uint64, "discards"},
    errors{YType::uint64, "errors"},
    qlen{YType::uint64, "qLen"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    rateinterval{YType::uint32, "rateInterval"},
    octetrate{YType::uint64, "octetRate"},
    packetrate{YType::uint64, "packetRate"}
{

    yang_name = "dbgIfOut-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::~DbgIfOutItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| nucastpkts.is_set
	|| discards.is_set
	|| errors.is_set
	|| qlen.is_set
	|| broadcastpkts.is_set
	|| multicastpkts.is_set
	|| rateinterval.is_set
	|| octetrate.is_set
	|| packetrate.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(nucastpkts.yfilter)
	|| ydk::is_set(discards.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(qlen.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(rateinterval.yfilter)
	|| ydk::is_set(octetrate.yfilter)
	|| ydk::is_set(packetrate.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (nucastpkts.is_set || is_set(nucastpkts.yfilter)) leaf_name_data.push_back(nucastpkts.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (qlen.is_set || is_set(qlen.yfilter)) leaf_name_data.push_back(qlen.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (rateinterval.is_set || is_set(rateinterval.yfilter)) leaf_name_data.push_back(rateinterval.get_name_leafdata());
    if (octetrate.is_set || is_set(octetrate.yfilter)) leaf_name_data.push_back(octetrate.get_name_leafdata());
    if (packetrate.is_set || is_set(packetrate.yfilter)) leaf_name_data.push_back(packetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts = value;
        nucastpkts.value_namespace = name_space;
        nucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qLen")
    {
        qlen = value;
        qlen.value_namespace = name_space;
        qlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rateInterval")
    {
        rateinterval = value;
        rateinterval.value_namespace = name_space;
        rateinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octetRate")
    {
        octetrate = value;
        octetrate.value_namespace = name_space;
        octetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packetRate")
    {
        packetrate = value;
        packetrate.value_namespace = name_space;
        packetrate.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "nUcastPkts")
    {
        nucastpkts.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "qLen")
    {
        qlen.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "rateInterval")
    {
        rateinterval.yfilter = yfilter;
    }
    if(value_path == "octetRate")
    {
        octetrate.yfilter = yfilter;
    }
    if(value_path == "packetRate")
    {
        packetrate.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "nUcastPkts" || name == "discards" || name == "errors" || name == "qLen" || name == "broadcastPkts" || name == "multicastPkts" || name == "rateInterval" || name == "octetRate" || name == "packetRate")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::DbgIpInItems()
    :
    receives{YType::uint64, "receives"},
    hdrerrors{YType::uint64, "hdrErrors"},
    forwdatagrams{YType::uint64, "forwDatagrams"},
    discards{YType::uint64, "discards"}
{

    yang_name = "dbgIpIn-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::~DbgIpInItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::has_data() const
{
    if (is_presence_container) return true;
    return receives.is_set
	|| hdrerrors.is_set
	|| forwdatagrams.is_set
	|| discards.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receives.yfilter)
	|| ydk::is_set(hdrerrors.yfilter)
	|| ydk::is_set(forwdatagrams.yfilter)
	|| ydk::is_set(discards.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receives.is_set || is_set(receives.yfilter)) leaf_name_data.push_back(receives.get_name_leafdata());
    if (hdrerrors.is_set || is_set(hdrerrors.yfilter)) leaf_name_data.push_back(hdrerrors.get_name_leafdata());
    if (forwdatagrams.is_set || is_set(forwdatagrams.yfilter)) leaf_name_data.push_back(forwdatagrams.get_name_leafdata());
    if (discards.is_set || is_set(discards.yfilter)) leaf_name_data.push_back(discards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receives")
    {
        receives = value;
        receives.value_namespace = name_space;
        receives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors = value;
        hdrerrors.value_namespace = name_space;
        hdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams = value;
        forwdatagrams.value_namespace = name_space;
        forwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discards")
    {
        discards = value;
        discards.value_namespace = name_space;
        discards.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receives")
    {
        receives.yfilter = yfilter;
    }
    if(value_path == "hdrErrors")
    {
        hdrerrors.yfilter = yfilter;
    }
    if(value_path == "forwDatagrams")
    {
        forwdatagrams.yfilter = yfilter;
    }
    if(value_path == "discards")
    {
        discards.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receives" || name == "hdrErrors" || name == "forwDatagrams" || name == "discards")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::DbgDot1dItems()
    :
    baseportdelayexceededdiscards{YType::uint64, "basePortDelayExceededDiscards"},
    baseportmtuexceededdiscards{YType::uint64, "basePortMtuExceededDiscards"},
    tpportinframes{YType::uint64, "tpPortInFrames"},
    tpportoutframes{YType::uint64, "tpPortOutFrames"},
    portindiscards{YType::uint64, "portInDiscards"}
{

    yang_name = "dbgDot1d-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::~DbgDot1dItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::has_data() const
{
    if (is_presence_container) return true;
    return baseportdelayexceededdiscards.is_set
	|| baseportmtuexceededdiscards.is_set
	|| tpportinframes.is_set
	|| tpportoutframes.is_set
	|| portindiscards.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(baseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(baseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(tpportinframes.yfilter)
	|| ydk::is_set(tpportoutframes.yfilter)
	|| ydk::is_set(portindiscards.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot1d-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (baseportdelayexceededdiscards.is_set || is_set(baseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(baseportdelayexceededdiscards.get_name_leafdata());
    if (baseportmtuexceededdiscards.is_set || is_set(baseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(baseportmtuexceededdiscards.get_name_leafdata());
    if (tpportinframes.is_set || is_set(tpportinframes.yfilter)) leaf_name_data.push_back(tpportinframes.get_name_leafdata());
    if (tpportoutframes.is_set || is_set(tpportoutframes.yfilter)) leaf_name_data.push_back(tpportoutframes.get_name_leafdata());
    if (portindiscards.is_set || is_set(portindiscards.yfilter)) leaf_name_data.push_back(portindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards = value;
        baseportdelayexceededdiscards.value_namespace = name_space;
        baseportdelayexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards = value;
        baseportmtuexceededdiscards.value_namespace = name_space;
        baseportmtuexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes = value;
        tpportinframes.value_namespace = name_space;
        tpportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes = value;
        tpportoutframes.value_namespace = name_space;
        tpportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards = value;
        portindiscards.value_namespace = name_space;
        portindiscards.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basePortDelayExceededDiscards")
    {
        baseportdelayexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "basePortMtuExceededDiscards")
    {
        baseportmtuexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "tpPortInFrames")
    {
        tpportinframes.yfilter = yfilter;
    }
    if(value_path == "tpPortOutFrames")
    {
        tpportoutframes.yfilter = yfilter;
    }
    if(value_path == "portInDiscards")
    {
        portindiscards.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot1dItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basePortDelayExceededDiscards" || name == "basePortMtuExceededDiscards" || name == "tpPortInFrames" || name == "tpPortOutFrames" || name == "portInDiscards")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::DbgEtherStatsItems()
    :
    dropevents{YType::uint64, "dropEvents"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"},
    undersizepkts{YType::uint64, "undersizePkts"},
    giantpkts{YType::uint64, "giantPkts"},
    stormsupressedpkts{YType::uint64, "stormSupressedPkts"},
    fragments{YType::uint64, "fragments"},
    pkts64octets{YType::uint64, "pkts64Octets"},
    pkts65to127octets{YType::uint64, "pkts65to127Octets"},
    pkts128to255octets{YType::uint64, "pkts128to255Octets"},
    pkts256to511octets{YType::uint64, "pkts256to511Octets"},
    pkts512to1023octets{YType::uint64, "pkts512to1023Octets"},
    pkts1024to1518octets{YType::uint64, "pkts1024to1518Octets"},
    pkts1519to1548octets{YType::uint64, "pkts1519to1548Octets"},
    rxpkts64octets{YType::uint64, "rxPkts64Octets"},
    txpkts64octets{YType::uint64, "txPkts64Octets"},
    rxpkts65to127octets{YType::uint64, "rxPkts65to127Octets"},
    txpkts65to127octets{YType::uint64, "txPkts65to127Octets"},
    rxpkts128to255octets{YType::uint64, "rxPkts128to255Octets"},
    txpkts128to255octets{YType::uint64, "txPkts128to255Octets"},
    rxpkts256to511octets{YType::uint64, "rxPkts256to511Octets"},
    txpkts256to511octets{YType::uint64, "txPkts256to511Octets"},
    rxpkts512to1023octets{YType::uint64, "rxPkts512to1023Octets"},
    txpkts512to1023octets{YType::uint64, "txPkts512to1023Octets"},
    rxpkts1024to1518octets{YType::uint64, "rxPkts1024to1518Octets"},
    txpkts1024to1518octets{YType::uint64, "txPkts1024to1518Octets"},
    rxpkts1519to1548octets{YType::uint64, "rxPkts1519to1548Octets"},
    txpkts1519to1548octets{YType::uint64, "txPkts1519to1548Octets"},
    oversizepkts{YType::uint64, "oversizePkts"},
    jabbers{YType::uint64, "jabbers"},
    octets{YType::uint64, "octets"},
    pkts{YType::uint64, "pkts"},
    collisions{YType::uint64, "collisions"},
    crcalignerrors{YType::uint64, "cRCAlignErrors"},
    txnoerrors{YType::uint64, "tXNoErrors"},
    rxnoerrors{YType::uint64, "rXNoErrors"},
    rxoversizepkts{YType::uint64, "rxOversizePkts"},
    txoversizepkts{YType::uint64, "txOversizePkts"},
    overrun{YType::uint64, "overrun"},
    underrun{YType::uint64, "underrun"},
    ignored{YType::uint64, "ignored"},
    watchdog{YType::uint64, "watchdog"},
    ifdowndrop{YType::uint64, "ifdowndrop"}
{

    yang_name = "dbgEtherStats-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::~DbgEtherStatsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return dropevents.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set
	|| undersizepkts.is_set
	|| giantpkts.is_set
	|| stormsupressedpkts.is_set
	|| fragments.is_set
	|| pkts64octets.is_set
	|| pkts65to127octets.is_set
	|| pkts128to255octets.is_set
	|| pkts256to511octets.is_set
	|| pkts512to1023octets.is_set
	|| pkts1024to1518octets.is_set
	|| pkts1519to1548octets.is_set
	|| rxpkts64octets.is_set
	|| txpkts64octets.is_set
	|| rxpkts65to127octets.is_set
	|| txpkts65to127octets.is_set
	|| rxpkts128to255octets.is_set
	|| txpkts128to255octets.is_set
	|| rxpkts256to511octets.is_set
	|| txpkts256to511octets.is_set
	|| rxpkts512to1023octets.is_set
	|| txpkts512to1023octets.is_set
	|| rxpkts1024to1518octets.is_set
	|| txpkts1024to1518octets.is_set
	|| rxpkts1519to1548octets.is_set
	|| txpkts1519to1548octets.is_set
	|| oversizepkts.is_set
	|| jabbers.is_set
	|| octets.is_set
	|| pkts.is_set
	|| collisions.is_set
	|| crcalignerrors.is_set
	|| txnoerrors.is_set
	|| rxnoerrors.is_set
	|| rxoversizepkts.is_set
	|| txoversizepkts.is_set
	|| overrun.is_set
	|| underrun.is_set
	|| ignored.is_set
	|| watchdog.is_set
	|| ifdowndrop.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropevents.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter)
	|| ydk::is_set(undersizepkts.yfilter)
	|| ydk::is_set(giantpkts.yfilter)
	|| ydk::is_set(stormsupressedpkts.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(pkts64octets.yfilter)
	|| ydk::is_set(pkts65to127octets.yfilter)
	|| ydk::is_set(pkts128to255octets.yfilter)
	|| ydk::is_set(pkts256to511octets.yfilter)
	|| ydk::is_set(pkts512to1023octets.yfilter)
	|| ydk::is_set(pkts1024to1518octets.yfilter)
	|| ydk::is_set(pkts1519to1548octets.yfilter)
	|| ydk::is_set(rxpkts64octets.yfilter)
	|| ydk::is_set(txpkts64octets.yfilter)
	|| ydk::is_set(rxpkts65to127octets.yfilter)
	|| ydk::is_set(txpkts65to127octets.yfilter)
	|| ydk::is_set(rxpkts128to255octets.yfilter)
	|| ydk::is_set(txpkts128to255octets.yfilter)
	|| ydk::is_set(rxpkts256to511octets.yfilter)
	|| ydk::is_set(txpkts256to511octets.yfilter)
	|| ydk::is_set(rxpkts512to1023octets.yfilter)
	|| ydk::is_set(txpkts512to1023octets.yfilter)
	|| ydk::is_set(rxpkts1024to1518octets.yfilter)
	|| ydk::is_set(txpkts1024to1518octets.yfilter)
	|| ydk::is_set(rxpkts1519to1548octets.yfilter)
	|| ydk::is_set(txpkts1519to1548octets.yfilter)
	|| ydk::is_set(oversizepkts.yfilter)
	|| ydk::is_set(jabbers.yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(pkts.yfilter)
	|| ydk::is_set(collisions.yfilter)
	|| ydk::is_set(crcalignerrors.yfilter)
	|| ydk::is_set(txnoerrors.yfilter)
	|| ydk::is_set(rxnoerrors.yfilter)
	|| ydk::is_set(rxoversizepkts.yfilter)
	|| ydk::is_set(txoversizepkts.yfilter)
	|| ydk::is_set(overrun.yfilter)
	|| ydk::is_set(underrun.yfilter)
	|| ydk::is_set(ignored.yfilter)
	|| ydk::is_set(watchdog.yfilter)
	|| ydk::is_set(ifdowndrop.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgEtherStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropevents.is_set || is_set(dropevents.yfilter)) leaf_name_data.push_back(dropevents.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());
    if (undersizepkts.is_set || is_set(undersizepkts.yfilter)) leaf_name_data.push_back(undersizepkts.get_name_leafdata());
    if (giantpkts.is_set || is_set(giantpkts.yfilter)) leaf_name_data.push_back(giantpkts.get_name_leafdata());
    if (stormsupressedpkts.is_set || is_set(stormsupressedpkts.yfilter)) leaf_name_data.push_back(stormsupressedpkts.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (pkts64octets.is_set || is_set(pkts64octets.yfilter)) leaf_name_data.push_back(pkts64octets.get_name_leafdata());
    if (pkts65to127octets.is_set || is_set(pkts65to127octets.yfilter)) leaf_name_data.push_back(pkts65to127octets.get_name_leafdata());
    if (pkts128to255octets.is_set || is_set(pkts128to255octets.yfilter)) leaf_name_data.push_back(pkts128to255octets.get_name_leafdata());
    if (pkts256to511octets.is_set || is_set(pkts256to511octets.yfilter)) leaf_name_data.push_back(pkts256to511octets.get_name_leafdata());
    if (pkts512to1023octets.is_set || is_set(pkts512to1023octets.yfilter)) leaf_name_data.push_back(pkts512to1023octets.get_name_leafdata());
    if (pkts1024to1518octets.is_set || is_set(pkts1024to1518octets.yfilter)) leaf_name_data.push_back(pkts1024to1518octets.get_name_leafdata());
    if (pkts1519to1548octets.is_set || is_set(pkts1519to1548octets.yfilter)) leaf_name_data.push_back(pkts1519to1548octets.get_name_leafdata());
    if (rxpkts64octets.is_set || is_set(rxpkts64octets.yfilter)) leaf_name_data.push_back(rxpkts64octets.get_name_leafdata());
    if (txpkts64octets.is_set || is_set(txpkts64octets.yfilter)) leaf_name_data.push_back(txpkts64octets.get_name_leafdata());
    if (rxpkts65to127octets.is_set || is_set(rxpkts65to127octets.yfilter)) leaf_name_data.push_back(rxpkts65to127octets.get_name_leafdata());
    if (txpkts65to127octets.is_set || is_set(txpkts65to127octets.yfilter)) leaf_name_data.push_back(txpkts65to127octets.get_name_leafdata());
    if (rxpkts128to255octets.is_set || is_set(rxpkts128to255octets.yfilter)) leaf_name_data.push_back(rxpkts128to255octets.get_name_leafdata());
    if (txpkts128to255octets.is_set || is_set(txpkts128to255octets.yfilter)) leaf_name_data.push_back(txpkts128to255octets.get_name_leafdata());
    if (rxpkts256to511octets.is_set || is_set(rxpkts256to511octets.yfilter)) leaf_name_data.push_back(rxpkts256to511octets.get_name_leafdata());
    if (txpkts256to511octets.is_set || is_set(txpkts256to511octets.yfilter)) leaf_name_data.push_back(txpkts256to511octets.get_name_leafdata());
    if (rxpkts512to1023octets.is_set || is_set(rxpkts512to1023octets.yfilter)) leaf_name_data.push_back(rxpkts512to1023octets.get_name_leafdata());
    if (txpkts512to1023octets.is_set || is_set(txpkts512to1023octets.yfilter)) leaf_name_data.push_back(txpkts512to1023octets.get_name_leafdata());
    if (rxpkts1024to1518octets.is_set || is_set(rxpkts1024to1518octets.yfilter)) leaf_name_data.push_back(rxpkts1024to1518octets.get_name_leafdata());
    if (txpkts1024to1518octets.is_set || is_set(txpkts1024to1518octets.yfilter)) leaf_name_data.push_back(txpkts1024to1518octets.get_name_leafdata());
    if (rxpkts1519to1548octets.is_set || is_set(rxpkts1519to1548octets.yfilter)) leaf_name_data.push_back(rxpkts1519to1548octets.get_name_leafdata());
    if (txpkts1519to1548octets.is_set || is_set(txpkts1519to1548octets.yfilter)) leaf_name_data.push_back(txpkts1519to1548octets.get_name_leafdata());
    if (oversizepkts.is_set || is_set(oversizepkts.yfilter)) leaf_name_data.push_back(oversizepkts.get_name_leafdata());
    if (jabbers.is_set || is_set(jabbers.yfilter)) leaf_name_data.push_back(jabbers.get_name_leafdata());
    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (pkts.is_set || is_set(pkts.yfilter)) leaf_name_data.push_back(pkts.get_name_leafdata());
    if (collisions.is_set || is_set(collisions.yfilter)) leaf_name_data.push_back(collisions.get_name_leafdata());
    if (crcalignerrors.is_set || is_set(crcalignerrors.yfilter)) leaf_name_data.push_back(crcalignerrors.get_name_leafdata());
    if (txnoerrors.is_set || is_set(txnoerrors.yfilter)) leaf_name_data.push_back(txnoerrors.get_name_leafdata());
    if (rxnoerrors.is_set || is_set(rxnoerrors.yfilter)) leaf_name_data.push_back(rxnoerrors.get_name_leafdata());
    if (rxoversizepkts.is_set || is_set(rxoversizepkts.yfilter)) leaf_name_data.push_back(rxoversizepkts.get_name_leafdata());
    if (txoversizepkts.is_set || is_set(txoversizepkts.yfilter)) leaf_name_data.push_back(txoversizepkts.get_name_leafdata());
    if (overrun.is_set || is_set(overrun.yfilter)) leaf_name_data.push_back(overrun.get_name_leafdata());
    if (underrun.is_set || is_set(underrun.yfilter)) leaf_name_data.push_back(underrun.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.yfilter)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.yfilter)) leaf_name_data.push_back(watchdog.get_name_leafdata());
    if (ifdowndrop.is_set || is_set(ifdowndrop.yfilter)) leaf_name_data.push_back(ifdowndrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropEvents")
    {
        dropevents = value;
        dropevents.value_namespace = name_space;
        dropevents.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts = value;
        undersizepkts.value_namespace = name_space;
        undersizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "giantPkts")
    {
        giantpkts = value;
        giantpkts.value_namespace = name_space;
        giantpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts = value;
        stormsupressedpkts.value_namespace = name_space;
        stormsupressedpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets = value;
        pkts64octets.value_namespace = name_space;
        pkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets = value;
        pkts65to127octets.value_namespace = name_space;
        pkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets = value;
        pkts128to255octets.value_namespace = name_space;
        pkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets = value;
        pkts256to511octets.value_namespace = name_space;
        pkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets = value;
        pkts512to1023octets.value_namespace = name_space;
        pkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets = value;
        pkts1024to1518octets.value_namespace = name_space;
        pkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets = value;
        pkts1519to1548octets.value_namespace = name_space;
        pkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets = value;
        rxpkts64octets.value_namespace = name_space;
        rxpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets = value;
        txpkts64octets.value_namespace = name_space;
        txpkts64octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets = value;
        rxpkts65to127octets.value_namespace = name_space;
        rxpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets = value;
        txpkts65to127octets.value_namespace = name_space;
        txpkts65to127octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets = value;
        rxpkts128to255octets.value_namespace = name_space;
        rxpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets = value;
        txpkts128to255octets.value_namespace = name_space;
        txpkts128to255octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets = value;
        rxpkts256to511octets.value_namespace = name_space;
        rxpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets = value;
        txpkts256to511octets.value_namespace = name_space;
        txpkts256to511octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets = value;
        rxpkts512to1023octets.value_namespace = name_space;
        rxpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets = value;
        txpkts512to1023octets.value_namespace = name_space;
        txpkts512to1023octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets = value;
        rxpkts1024to1518octets.value_namespace = name_space;
        rxpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets = value;
        txpkts1024to1518octets.value_namespace = name_space;
        txpkts1024to1518octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets = value;
        rxpkts1519to1548octets.value_namespace = name_space;
        rxpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets = value;
        txpkts1519to1548octets.value_namespace = name_space;
        txpkts1519to1548octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts = value;
        oversizepkts.value_namespace = name_space;
        oversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jabbers")
    {
        jabbers = value;
        jabbers.value_namespace = name_space;
        jabbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts")
    {
        pkts = value;
        pkts.value_namespace = name_space;
        pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collisions")
    {
        collisions = value;
        collisions.value_namespace = name_space;
        collisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors = value;
        crcalignerrors.value_namespace = name_space;
        crcalignerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors = value;
        txnoerrors.value_namespace = name_space;
        txnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors = value;
        rxnoerrors.value_namespace = name_space;
        rxnoerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts = value;
        rxoversizepkts.value_namespace = name_space;
        rxoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts = value;
        txoversizepkts.value_namespace = name_space;
        txoversizepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overrun")
    {
        overrun = value;
        overrun.value_namespace = name_space;
        overrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "underrun")
    {
        underrun = value;
        underrun.value_namespace = name_space;
        underrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignored")
    {
        ignored = value;
        ignored.value_namespace = name_space;
        ignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
        watchdog.value_namespace = name_space;
        watchdog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop = value;
        ifdowndrop.value_namespace = name_space;
        ifdowndrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropEvents")
    {
        dropevents.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
    if(value_path == "undersizePkts")
    {
        undersizepkts.yfilter = yfilter;
    }
    if(value_path == "giantPkts")
    {
        giantpkts.yfilter = yfilter;
    }
    if(value_path == "stormSupressedPkts")
    {
        stormsupressedpkts.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "pkts64Octets")
    {
        pkts64octets.yfilter = yfilter;
    }
    if(value_path == "pkts65to127Octets")
    {
        pkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "pkts128to255Octets")
    {
        pkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "pkts256to511Octets")
    {
        pkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "pkts512to1023Octets")
    {
        pkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "pkts1024to1518Octets")
    {
        pkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "pkts1519to1548Octets")
    {
        pkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts64Octets")
    {
        rxpkts64octets.yfilter = yfilter;
    }
    if(value_path == "txPkts64Octets")
    {
        txpkts64octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts65to127Octets")
    {
        rxpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "txPkts65to127Octets")
    {
        txpkts65to127octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts128to255Octets")
    {
        rxpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "txPkts128to255Octets")
    {
        txpkts128to255octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts256to511Octets")
    {
        rxpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "txPkts256to511Octets")
    {
        txpkts256to511octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts512to1023Octets")
    {
        rxpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "txPkts512to1023Octets")
    {
        txpkts512to1023octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1024to1518Octets")
    {
        rxpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1024to1518Octets")
    {
        txpkts1024to1518octets.yfilter = yfilter;
    }
    if(value_path == "rxPkts1519to1548Octets")
    {
        rxpkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "txPkts1519to1548Octets")
    {
        txpkts1519to1548octets.yfilter = yfilter;
    }
    if(value_path == "oversizePkts")
    {
        oversizepkts.yfilter = yfilter;
    }
    if(value_path == "jabbers")
    {
        jabbers.yfilter = yfilter;
    }
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "pkts")
    {
        pkts.yfilter = yfilter;
    }
    if(value_path == "collisions")
    {
        collisions.yfilter = yfilter;
    }
    if(value_path == "cRCAlignErrors")
    {
        crcalignerrors.yfilter = yfilter;
    }
    if(value_path == "tXNoErrors")
    {
        txnoerrors.yfilter = yfilter;
    }
    if(value_path == "rXNoErrors")
    {
        rxnoerrors.yfilter = yfilter;
    }
    if(value_path == "rxOversizePkts")
    {
        rxoversizepkts.yfilter = yfilter;
    }
    if(value_path == "txOversizePkts")
    {
        txoversizepkts.yfilter = yfilter;
    }
    if(value_path == "overrun")
    {
        overrun.yfilter = yfilter;
    }
    if(value_path == "underrun")
    {
        underrun.yfilter = yfilter;
    }
    if(value_path == "ignored")
    {
        ignored.yfilter = yfilter;
    }
    if(value_path == "watchdog")
    {
        watchdog.yfilter = yfilter;
    }
    if(value_path == "ifdowndrop")
    {
        ifdowndrop.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgEtherStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropEvents" || name == "multicastPkts" || name == "broadcastPkts" || name == "undersizePkts" || name == "giantPkts" || name == "stormSupressedPkts" || name == "fragments" || name == "pkts64Octets" || name == "pkts65to127Octets" || name == "pkts128to255Octets" || name == "pkts256to511Octets" || name == "pkts512to1023Octets" || name == "pkts1024to1518Octets" || name == "pkts1519to1548Octets" || name == "rxPkts64Octets" || name == "txPkts64Octets" || name == "rxPkts65to127Octets" || name == "txPkts65to127Octets" || name == "rxPkts128to255Octets" || name == "txPkts128to255Octets" || name == "rxPkts256to511Octets" || name == "txPkts256to511Octets" || name == "rxPkts512to1023Octets" || name == "txPkts512to1023Octets" || name == "rxPkts1024to1518Octets" || name == "txPkts1024to1518Octets" || name == "rxPkts1519to1548Octets" || name == "txPkts1519to1548Octets" || name == "oversizePkts" || name == "jabbers" || name == "octets" || name == "pkts" || name == "collisions" || name == "cRCAlignErrors" || name == "tXNoErrors" || name == "rXNoErrors" || name == "rxOversizePkts" || name == "txOversizePkts" || name == "overrun" || name == "underrun" || name == "ignored" || name == "watchdog" || name == "ifdowndrop")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::DbgDot3StatsItems()
    :
    alignmenterrors{YType::uint64, "alignmentErrors"},
    fcserrors{YType::uint64, "fCSErrors"},
    singlecollisionframes{YType::uint64, "singleCollisionFrames"},
    multiplecollisionframes{YType::uint64, "multipleCollisionFrames"},
    sqettesterrors{YType::uint64, "sQETTestErrors"},
    deferredtransmissions{YType::uint64, "deferredTransmissions"},
    latecollisions{YType::uint64, "lateCollisions"},
    excessivecollisions{YType::uint64, "excessiveCollisions"},
    internalmactransmiterrors{YType::uint64, "internalMacTransmitErrors"},
    carriersenseerrors{YType::uint64, "carrierSenseErrors"},
    frametoolongs{YType::uint64, "frameTooLongs"},
    internalmacreceiveerrors{YType::uint64, "internalMacReceiveErrors"},
    symbolerrors{YType::uint64, "symbolErrors"},
    controlinunknownopcodes{YType::uint64, "controlInUnknownOpcodes"},
    inpauseframes{YType::uint64, "inPauseFrames"},
    outpauseframes{YType::uint64, "outPauseFrames"},
    lostcarriererrors{YType::uint64, "lostCarrierErrors"},
    nocarriererrors{YType::uint64, "noCarrierErrors"},
    inputdribble{YType::uint64, "inputdribble"},
    babble{YType::uint64, "babble"},
    runts{YType::uint64, "runts"}
{

    yang_name = "dbgDot3Stats-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::~DbgDot3StatsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::has_data() const
{
    if (is_presence_container) return true;
    return alignmenterrors.is_set
	|| fcserrors.is_set
	|| singlecollisionframes.is_set
	|| multiplecollisionframes.is_set
	|| sqettesterrors.is_set
	|| deferredtransmissions.is_set
	|| latecollisions.is_set
	|| excessivecollisions.is_set
	|| internalmactransmiterrors.is_set
	|| carriersenseerrors.is_set
	|| frametoolongs.is_set
	|| internalmacreceiveerrors.is_set
	|| symbolerrors.is_set
	|| controlinunknownopcodes.is_set
	|| inpauseframes.is_set
	|| outpauseframes.is_set
	|| lostcarriererrors.is_set
	|| nocarriererrors.is_set
	|| inputdribble.is_set
	|| babble.is_set
	|| runts.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alignmenterrors.yfilter)
	|| ydk::is_set(fcserrors.yfilter)
	|| ydk::is_set(singlecollisionframes.yfilter)
	|| ydk::is_set(multiplecollisionframes.yfilter)
	|| ydk::is_set(sqettesterrors.yfilter)
	|| ydk::is_set(deferredtransmissions.yfilter)
	|| ydk::is_set(latecollisions.yfilter)
	|| ydk::is_set(excessivecollisions.yfilter)
	|| ydk::is_set(internalmactransmiterrors.yfilter)
	|| ydk::is_set(carriersenseerrors.yfilter)
	|| ydk::is_set(frametoolongs.yfilter)
	|| ydk::is_set(internalmacreceiveerrors.yfilter)
	|| ydk::is_set(symbolerrors.yfilter)
	|| ydk::is_set(controlinunknownopcodes.yfilter)
	|| ydk::is_set(inpauseframes.yfilter)
	|| ydk::is_set(outpauseframes.yfilter)
	|| ydk::is_set(lostcarriererrors.yfilter)
	|| ydk::is_set(nocarriererrors.yfilter)
	|| ydk::is_set(inputdribble.yfilter)
	|| ydk::is_set(babble.yfilter)
	|| ydk::is_set(runts.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgDot3Stats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alignmenterrors.is_set || is_set(alignmenterrors.yfilter)) leaf_name_data.push_back(alignmenterrors.get_name_leafdata());
    if (fcserrors.is_set || is_set(fcserrors.yfilter)) leaf_name_data.push_back(fcserrors.get_name_leafdata());
    if (singlecollisionframes.is_set || is_set(singlecollisionframes.yfilter)) leaf_name_data.push_back(singlecollisionframes.get_name_leafdata());
    if (multiplecollisionframes.is_set || is_set(multiplecollisionframes.yfilter)) leaf_name_data.push_back(multiplecollisionframes.get_name_leafdata());
    if (sqettesterrors.is_set || is_set(sqettesterrors.yfilter)) leaf_name_data.push_back(sqettesterrors.get_name_leafdata());
    if (deferredtransmissions.is_set || is_set(deferredtransmissions.yfilter)) leaf_name_data.push_back(deferredtransmissions.get_name_leafdata());
    if (latecollisions.is_set || is_set(latecollisions.yfilter)) leaf_name_data.push_back(latecollisions.get_name_leafdata());
    if (excessivecollisions.is_set || is_set(excessivecollisions.yfilter)) leaf_name_data.push_back(excessivecollisions.get_name_leafdata());
    if (internalmactransmiterrors.is_set || is_set(internalmactransmiterrors.yfilter)) leaf_name_data.push_back(internalmactransmiterrors.get_name_leafdata());
    if (carriersenseerrors.is_set || is_set(carriersenseerrors.yfilter)) leaf_name_data.push_back(carriersenseerrors.get_name_leafdata());
    if (frametoolongs.is_set || is_set(frametoolongs.yfilter)) leaf_name_data.push_back(frametoolongs.get_name_leafdata());
    if (internalmacreceiveerrors.is_set || is_set(internalmacreceiveerrors.yfilter)) leaf_name_data.push_back(internalmacreceiveerrors.get_name_leafdata());
    if (symbolerrors.is_set || is_set(symbolerrors.yfilter)) leaf_name_data.push_back(symbolerrors.get_name_leafdata());
    if (controlinunknownopcodes.is_set || is_set(controlinunknownopcodes.yfilter)) leaf_name_data.push_back(controlinunknownopcodes.get_name_leafdata());
    if (inpauseframes.is_set || is_set(inpauseframes.yfilter)) leaf_name_data.push_back(inpauseframes.get_name_leafdata());
    if (outpauseframes.is_set || is_set(outpauseframes.yfilter)) leaf_name_data.push_back(outpauseframes.get_name_leafdata());
    if (lostcarriererrors.is_set || is_set(lostcarriererrors.yfilter)) leaf_name_data.push_back(lostcarriererrors.get_name_leafdata());
    if (nocarriererrors.is_set || is_set(nocarriererrors.yfilter)) leaf_name_data.push_back(nocarriererrors.get_name_leafdata());
    if (inputdribble.is_set || is_set(inputdribble.yfilter)) leaf_name_data.push_back(inputdribble.get_name_leafdata());
    if (babble.is_set || is_set(babble.yfilter)) leaf_name_data.push_back(babble.get_name_leafdata());
    if (runts.is_set || is_set(runts.yfilter)) leaf_name_data.push_back(runts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors = value;
        alignmenterrors.value_namespace = name_space;
        alignmenterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors = value;
        fcserrors.value_namespace = name_space;
        fcserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes = value;
        singlecollisionframes.value_namespace = name_space;
        singlecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes = value;
        multiplecollisionframes.value_namespace = name_space;
        multiplecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors = value;
        sqettesterrors.value_namespace = name_space;
        sqettesterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions = value;
        deferredtransmissions.value_namespace = name_space;
        deferredtransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions = value;
        latecollisions.value_namespace = name_space;
        latecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions = value;
        excessivecollisions.value_namespace = name_space;
        excessivecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors = value;
        internalmactransmiterrors.value_namespace = name_space;
        internalmactransmiterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors = value;
        carriersenseerrors.value_namespace = name_space;
        carriersenseerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs = value;
        frametoolongs.value_namespace = name_space;
        frametoolongs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors = value;
        internalmacreceiveerrors.value_namespace = name_space;
        internalmacreceiveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors = value;
        symbolerrors.value_namespace = name_space;
        symbolerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes = value;
        controlinunknownopcodes.value_namespace = name_space;
        controlinunknownopcodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes = value;
        inpauseframes.value_namespace = name_space;
        inpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes = value;
        outpauseframes.value_namespace = name_space;
        outpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors = value;
        lostcarriererrors.value_namespace = name_space;
        lostcarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors = value;
        nocarriererrors.value_namespace = name_space;
        nocarriererrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputdribble")
    {
        inputdribble = value;
        inputdribble.value_namespace = name_space;
        inputdribble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "babble")
    {
        babble = value;
        babble.value_namespace = name_space;
        babble.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runts")
    {
        runts = value;
        runts.value_namespace = name_space;
        runts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alignmentErrors")
    {
        alignmenterrors.yfilter = yfilter;
    }
    if(value_path == "fCSErrors")
    {
        fcserrors.yfilter = yfilter;
    }
    if(value_path == "singleCollisionFrames")
    {
        singlecollisionframes.yfilter = yfilter;
    }
    if(value_path == "multipleCollisionFrames")
    {
        multiplecollisionframes.yfilter = yfilter;
    }
    if(value_path == "sQETTestErrors")
    {
        sqettesterrors.yfilter = yfilter;
    }
    if(value_path == "deferredTransmissions")
    {
        deferredtransmissions.yfilter = yfilter;
    }
    if(value_path == "lateCollisions")
    {
        latecollisions.yfilter = yfilter;
    }
    if(value_path == "excessiveCollisions")
    {
        excessivecollisions.yfilter = yfilter;
    }
    if(value_path == "internalMacTransmitErrors")
    {
        internalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "carrierSenseErrors")
    {
        carriersenseerrors.yfilter = yfilter;
    }
    if(value_path == "frameTooLongs")
    {
        frametoolongs.yfilter = yfilter;
    }
    if(value_path == "internalMacReceiveErrors")
    {
        internalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "symbolErrors")
    {
        symbolerrors.yfilter = yfilter;
    }
    if(value_path == "controlInUnknownOpcodes")
    {
        controlinunknownopcodes.yfilter = yfilter;
    }
    if(value_path == "inPauseFrames")
    {
        inpauseframes.yfilter = yfilter;
    }
    if(value_path == "outPauseFrames")
    {
        outpauseframes.yfilter = yfilter;
    }
    if(value_path == "lostCarrierErrors")
    {
        lostcarriererrors.yfilter = yfilter;
    }
    if(value_path == "noCarrierErrors")
    {
        nocarriererrors.yfilter = yfilter;
    }
    if(value_path == "inputdribble")
    {
        inputdribble.yfilter = yfilter;
    }
    if(value_path == "babble")
    {
        babble.yfilter = yfilter;
    }
    if(value_path == "runts")
    {
        runts.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgDot3StatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alignmentErrors" || name == "fCSErrors" || name == "singleCollisionFrames" || name == "multipleCollisionFrames" || name == "sQETTestErrors" || name == "deferredTransmissions" || name == "lateCollisions" || name == "excessiveCollisions" || name == "internalMacTransmitErrors" || name == "carrierSenseErrors" || name == "frameTooLongs" || name == "internalMacReceiveErrors" || name == "symbolErrors" || name == "controlInUnknownOpcodes" || name == "inPauseFrames" || name == "outPauseFrames" || name == "lostCarrierErrors" || name == "noCarrierErrors" || name == "inputdribble" || name == "babble" || name == "runts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::DbgIfHCInItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCIn-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::~DbgIfHCInItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCIn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCInItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::DbgIfHCOutItems()
    :
    octets{YType::uint64, "octets"},
    ucastpkts{YType::uint64, "ucastPkts"},
    multicastpkts{YType::uint64, "multicastPkts"},
    broadcastpckts{YType::uint64, "broadcastPckts"},
    broadcastpkts{YType::uint64, "broadcastPkts"}
{

    yang_name = "dbgIfHCOut-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::~DbgIfHCOutItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::has_data() const
{
    if (is_presence_container) return true;
    return octets.is_set
	|| ucastpkts.is_set
	|| multicastpkts.is_set
	|| broadcastpckts.is_set
	|| broadcastpkts.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(octets.yfilter)
	|| ydk::is_set(ucastpkts.yfilter)
	|| ydk::is_set(multicastpkts.yfilter)
	|| ydk::is_set(broadcastpckts.yfilter)
	|| ydk::is_set(broadcastpkts.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfHCOut-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (octets.is_set || is_set(octets.yfilter)) leaf_name_data.push_back(octets.get_name_leafdata());
    if (ucastpkts.is_set || is_set(ucastpkts.yfilter)) leaf_name_data.push_back(ucastpkts.get_name_leafdata());
    if (multicastpkts.is_set || is_set(multicastpkts.yfilter)) leaf_name_data.push_back(multicastpkts.get_name_leafdata());
    if (broadcastpckts.is_set || is_set(broadcastpckts.yfilter)) leaf_name_data.push_back(broadcastpckts.get_name_leafdata());
    if (broadcastpkts.is_set || is_set(broadcastpkts.yfilter)) leaf_name_data.push_back(broadcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "octets")
    {
        octets = value;
        octets.value_namespace = name_space;
        octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts = value;
        ucastpkts.value_namespace = name_space;
        ucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts = value;
        multicastpkts.value_namespace = name_space;
        multicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts = value;
        broadcastpckts.value_namespace = name_space;
        broadcastpckts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts = value;
        broadcastpkts.value_namespace = name_space;
        broadcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "octets")
    {
        octets.yfilter = yfilter;
    }
    if(value_path == "ucastPkts")
    {
        ucastpkts.yfilter = yfilter;
    }
    if(value_path == "multicastPkts")
    {
        multicastpkts.yfilter = yfilter;
    }
    if(value_path == "broadcastPckts")
    {
        broadcastpckts.yfilter = yfilter;
    }
    if(value_path == "broadcastPkts")
    {
        broadcastpkts.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfHCOutItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "octets" || name == "ucastPkts" || name == "multicastPkts" || name == "broadcastPckts" || name == "broadcastPkts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::DbgIpv6IfStatsItems()
    :
    inreceives{YType::uint64, "inReceives"},
    inhdrerrors{YType::uint64, "inHdrErrors"},
    inaddrerrors{YType::uint64, "inAddrErrors"},
    indiscards{YType::uint64, "inDiscards"},
    outforwdatagrams{YType::uint64, "outForwDatagrams"},
    outdiscards{YType::uint64, "outDiscards"},
    inmcastpkts{YType::uint64, "inMcastPkts"},
    outmcastpkts{YType::uint64, "outMcastPkts"}
{

    yang_name = "dbgIpv6IfStats-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::~DbgIpv6IfStatsItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::has_data() const
{
    if (is_presence_container) return true;
    return inreceives.is_set
	|| inhdrerrors.is_set
	|| inaddrerrors.is_set
	|| indiscards.is_set
	|| outforwdatagrams.is_set
	|| outdiscards.is_set
	|| inmcastpkts.is_set
	|| outmcastpkts.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inreceives.yfilter)
	|| ydk::is_set(inhdrerrors.yfilter)
	|| ydk::is_set(inaddrerrors.yfilter)
	|| ydk::is_set(indiscards.yfilter)
	|| ydk::is_set(outforwdatagrams.yfilter)
	|| ydk::is_set(outdiscards.yfilter)
	|| ydk::is_set(inmcastpkts.yfilter)
	|| ydk::is_set(outmcastpkts.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIpv6IfStats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inreceives.is_set || is_set(inreceives.yfilter)) leaf_name_data.push_back(inreceives.get_name_leafdata());
    if (inhdrerrors.is_set || is_set(inhdrerrors.yfilter)) leaf_name_data.push_back(inhdrerrors.get_name_leafdata());
    if (inaddrerrors.is_set || is_set(inaddrerrors.yfilter)) leaf_name_data.push_back(inaddrerrors.get_name_leafdata());
    if (indiscards.is_set || is_set(indiscards.yfilter)) leaf_name_data.push_back(indiscards.get_name_leafdata());
    if (outforwdatagrams.is_set || is_set(outforwdatagrams.yfilter)) leaf_name_data.push_back(outforwdatagrams.get_name_leafdata());
    if (outdiscards.is_set || is_set(outdiscards.yfilter)) leaf_name_data.push_back(outdiscards.get_name_leafdata());
    if (inmcastpkts.is_set || is_set(inmcastpkts.yfilter)) leaf_name_data.push_back(inmcastpkts.get_name_leafdata());
    if (outmcastpkts.is_set || is_set(outmcastpkts.yfilter)) leaf_name_data.push_back(outmcastpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inReceives")
    {
        inreceives = value;
        inreceives.value_namespace = name_space;
        inreceives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors = value;
        inhdrerrors.value_namespace = name_space;
        inhdrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors = value;
        inaddrerrors.value_namespace = name_space;
        inaddrerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inDiscards")
    {
        indiscards = value;
        indiscards.value_namespace = name_space;
        indiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams = value;
        outforwdatagrams.value_namespace = name_space;
        outforwdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outDiscards")
    {
        outdiscards = value;
        outdiscards.value_namespace = name_space;
        outdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts = value;
        inmcastpkts.value_namespace = name_space;
        inmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts = value;
        outmcastpkts.value_namespace = name_space;
        outmcastpkts.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inReceives")
    {
        inreceives.yfilter = yfilter;
    }
    if(value_path == "inHdrErrors")
    {
        inhdrerrors.yfilter = yfilter;
    }
    if(value_path == "inAddrErrors")
    {
        inaddrerrors.yfilter = yfilter;
    }
    if(value_path == "inDiscards")
    {
        indiscards.yfilter = yfilter;
    }
    if(value_path == "outForwDatagrams")
    {
        outforwdatagrams.yfilter = yfilter;
    }
    if(value_path == "outDiscards")
    {
        outdiscards.yfilter = yfilter;
    }
    if(value_path == "inMcastPkts")
    {
        inmcastpkts.yfilter = yfilter;
    }
    if(value_path == "outMcastPkts")
    {
        outmcastpkts.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIpv6IfStatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inReceives" || name == "inHdrErrors" || name == "inAddrErrors" || name == "inDiscards" || name == "outForwDatagrams" || name == "outDiscards" || name == "inMcastPkts" || name == "outMcastPkts")
        return true;
    return false;
}

System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::DbgIfStormItems()
    :
    dropbytes{YType::uint64, "dropBytes"}
{

    yang_name = "dbgIfStorm-items"; yang_parent_name = "AggrIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::~DbgIfStormItems()
{
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::has_data() const
{
    if (is_presence_container) return true;
    return dropbytes.is_set;
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropbytes.yfilter);
}

std::string System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgIfStorm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropbytes.is_set || is_set(dropbytes.yfilter)) leaf_name_data.push_back(dropbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropBytes")
    {
        dropbytes = value;
        dropbytes.value_namespace = name_space;
        dropbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropBytes")
    {
        dropbytes.yfilter = yfilter;
    }
}

bool System::IntfItems::AggrItems::AggrIfList::DbgIfStormItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropBytes")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdItems()
    :
    rtdif_list(this, {"id"})
{

    yang_name = "rtd-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::RtdItems::~RtdItems()
{
}

bool System::IntfItems::RtdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtdif_list.len(); index++)
    {
        if(rtdif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::RtdItems::has_operation() const
{
    for (std::size_t index=0; index<rtdif_list.len(); index++)
    {
        if(rtdif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::RtdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::RtdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtdIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::RtdItems::RtdIfList>();
        ent_->parent = this;
        rtdif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtdif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::RtdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::RtdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::RtdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtdIf-list")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtdIfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    rtpseudoif_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems>())
    , rsphysrtdconf_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems>())
{
    rtpseudoif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rsphysrtdconf_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "RtdIf-list"; yang_parent_name = "rtd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::RtdItems::RtdIfList::~RtdIfList()
{
}

bool System::IntfItems::RtdItems::RtdIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rsphysrtdconf_items !=  nullptr && rsphysrtdconf_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::RtdItems::RtdIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rsphysrtdconf_items !=  nullptr && rsphysrtdconf_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::RtdItems::RtdIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/rtd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::RtdItems::RtdIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtdIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rsphysRtdConf-items")
    {
        if(rsphysrtdconf_items == nullptr)
        {
            rsphysrtdconf_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems>();
        }
        return rsphysrtdconf_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rsphysrtdconf_items != nullptr)
    {
        _children["rsphysRtdConf-items"] = rsphysrtdconf_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
}

void System::IntfItems::RtdItems::RtdIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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
}

bool System::IntfItems::RtdItems::RtdIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpseudoIf-items" || name == "rtvrfMbr-items" || name == "rsphysRtdConf-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::RtpseudoIfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtpseudoIf-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::~RtpseudoIfItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpseudoIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::RtdItems::RtdIfList::RtpseudoIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::RtdItems::RtdIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::RsphysRtdConfItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"},
    state{YType::enumeration, "state"},
    statequal{YType::enumeration, "stateQual"},
    ttype{YType::enumeration, "tType"},
    rtype{YType::enumeration, "rType"},
    forceresolve{YType::boolean, "forceResolve"}
{

    yang_name = "rsphysRtdConf-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::~RsphysRtdConfItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::has_data() const
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

bool System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::has_operation() const
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

std::string System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsphysRtdConf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::RtdItems::RtdIfList::RsphysRtdConfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl" || name == "state" || name == "stateQual" || name == "tType" || name == "rType" || name == "forceResolve")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "RtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::get_children() const
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

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::IntfItems::RtdItems::RtdIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::IntfItems::LbItems::LbItems()
    :
    lbrtdif_list(this, {"id"})
{

    yang_name = "lb-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::LbItems::~LbItems()
{
}

bool System::IntfItems::LbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lbrtdif_list.len(); index++)
    {
        if(lbrtdif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::IntfItems::LbItems::has_operation() const
{
    for (std::size_t index=0; index<lbrtdif_list.len(); index++)
    {
        if(lbrtdif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::IntfItems::LbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::LbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LbRtdIf-list")
    {
        auto ent_ = std::make_shared<System::IntfItems::LbItems::LbRtdIfList>();
        ent_->parent = this;
        lbrtdif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lbrtdif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::IntfItems::LbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::IntfItems::LbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::IntfItems::LbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LbRtdIf-list")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::LbRtdIfList()
    :
    id{YType::str, "id"},
    linklog{YType::enumeration, "linkLog"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vrf_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::VrfItems>())
    , lbrtdif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems>())
    , rtpseudoif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems>())
    , rtopersourceinterface_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems>())
    , rtvrfmbr_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems>())
    , rsprotlbif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems>())
    , rslbiftolocale_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems>())
    , rslbiftooutref_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems>())
    , rtnwpathtoif_items(std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems>())
{
    vrf_items->parent = this;
    lbrtdif_items->parent = this;
    rtpseudoif_items->parent = this;
    rtopersourceinterface_items->parent = this;
    rtvrfmbr_items->parent = this;
    rsprotlbif_items->parent = this;
    rslbiftolocale_items->parent = this;
    rslbiftooutref_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "LbRtdIf-list"; yang_parent_name = "lb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::IntfItems::LbItems::LbRtdIfList::~LbRtdIfList()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| linklog.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vrf_items !=  nullptr && vrf_items->has_data())
	|| (lbrtdif_items !=  nullptr && lbrtdif_items->has_data())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_data())
	|| (rtopersourceinterface_items !=  nullptr && rtopersourceinterface_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rsprotlbif_items !=  nullptr && rsprotlbif_items->has_data())
	|| (rslbiftolocale_items !=  nullptr && rslbiftolocale_items->has_data())
	|| (rslbiftooutref_items !=  nullptr && rslbiftooutref_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::IntfItems::LbItems::LbRtdIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(linklog.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vrf_items !=  nullptr && vrf_items->has_operation())
	|| (lbrtdif_items !=  nullptr && lbrtdif_items->has_operation())
	|| (rtpseudoif_items !=  nullptr && rtpseudoif_items->has_operation())
	|| (rtopersourceinterface_items !=  nullptr && rtopersourceinterface_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rsprotlbif_items !=  nullptr && rsprotlbif_items->has_operation())
	|| (rslbiftolocale_items !=  nullptr && rslbiftolocale_items->has_operation())
	|| (rslbiftooutref_items !=  nullptr && rslbiftooutref_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::IntfItems::LbItems::LbRtdIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/intf-items/lb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::IntfItems::LbItems::LbRtdIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LbRtdIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (linklog.is_set || is_set(linklog.yfilter)) leaf_name_data.push_back(linklog.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-items")
    {
        if(vrf_items == nullptr)
        {
            vrf_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::VrfItems>();
        }
        return vrf_items;
    }

    if(child_yang_name == "lbrtdif-items")
    {
        if(lbrtdif_items == nullptr)
        {
            lbrtdif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems>();
        }
        return lbrtdif_items;
    }

    if(child_yang_name == "rtpseudoIf-items")
    {
        if(rtpseudoif_items == nullptr)
        {
            rtpseudoif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtpseudoIfItems>();
        }
        return rtpseudoif_items;
    }

    if(child_yang_name == "rtoperSourceInterface-items")
    {
        if(rtopersourceinterface_items == nullptr)
        {
            rtopersourceinterface_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtoperSourceInterfaceItems>();
        }
        return rtopersourceinterface_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rsprotLbIf-items")
    {
        if(rsprotlbif_items == nullptr)
        {
            rsprotlbif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RsprotLbIfItems>();
        }
        return rsprotlbif_items;
    }

    if(child_yang_name == "rslbIfToLocale-items")
    {
        if(rslbiftolocale_items == nullptr)
        {
            rslbiftolocale_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToLocaleItems>();
        }
        return rslbiftolocale_items;
    }

    if(child_yang_name == "rslbIfToOutRef-items")
    {
        if(rslbiftooutref_items == nullptr)
        {
            rslbiftooutref_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RslbIfToOutRefItems>();
        }
        return rslbiftooutref_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::IntfItems::LbItems::LbRtdIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf_items != nullptr)
    {
        _children["vrf-items"] = vrf_items;
    }

    if(lbrtdif_items != nullptr)
    {
        _children["lbrtdif-items"] = lbrtdif_items;
    }

    if(rtpseudoif_items != nullptr)
    {
        _children["rtpseudoIf-items"] = rtpseudoif_items;
    }

    if(rtopersourceinterface_items != nullptr)
    {
        _children["rtoperSourceInterface-items"] = rtopersourceinterface_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rsprotlbif_items != nullptr)
    {
        _children["rsprotLbIf-items"] = rsprotlbif_items;
    }

    if(rslbiftolocale_items != nullptr)
    {
        _children["rslbIfToLocale-items"] = rslbiftolocale_items;
    }

    if(rslbiftooutref_items != nullptr)
    {
        _children["rslbIfToOutRef-items"] = rslbiftooutref_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkLog")
    {
        linklog = value;
        linklog.value_namespace = name_space;
        linklog.value_namespace_prefix = name_space_prefix;
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
}

void System::IntfItems::LbItems::LbRtdIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "linkLog")
    {
        linklog.yfilter = yfilter;
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
}

bool System::IntfItems::LbItems::LbRtdIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-items" || name == "lbrtdif-items" || name == "rtpseudoIf-items" || name == "rtoperSourceInterface-items" || name == "rtvrfMbr-items" || name == "rsprotLbIf-items" || name == "rslbIfToLocale-items" || name == "rslbIfToOutRef-items" || name == "rtnwPathToIf-items" || name == "id" || name == "linkLog" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::VrfItems::VrfItems()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::VrfItems::~VrfItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::VrfItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::VrfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::VrfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::VrfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::VrfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::VrfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::LbrtdifItems()
    :
    ifindex{YType::uint32, "ifIndex"},
    iod{YType::uint64, "iod"},
    operst{YType::enumeration, "operSt"},
    opermtu{YType::uint32, "operMtu"},
    operdescr{YType::str, "operDescr"},
    operstqual{YType::enumeration, "operStQual"},
    currerrindex{YType::uint32, "currErrIndex"},
    lasterrors{YType::str, "lastErrors"},
    operbitset{YType::str, "operBitset"}
{

    yang_name = "lbrtdif-items"; yang_parent_name = "LbRtdIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::~LbrtdifItems()
{
}

bool System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| iod.is_set
	|| operst.is_set
	|| opermtu.is_set
	|| operdescr.is_set
	|| operstqual.is_set
	|| currerrindex.is_set
	|| lasterrors.is_set
	|| operbitset.is_set;
}

bool System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(iod.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opermtu.yfilter)
	|| ydk::is_set(operdescr.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(currerrindex.yfilter)
	|| ydk::is_set(lasterrors.yfilter)
	|| ydk::is_set(operbitset.yfilter);
}

std::string System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbrtdif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (iod.is_set || is_set(iod.yfilter)) leaf_name_data.push_back(iod.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opermtu.is_set || is_set(opermtu.yfilter)) leaf_name_data.push_back(opermtu.get_name_leafdata());
    if (operdescr.is_set || is_set(operdescr.yfilter)) leaf_name_data.push_back(operdescr.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (currerrindex.is_set || is_set(currerrindex.yfilter)) leaf_name_data.push_back(currerrindex.get_name_leafdata());
    if (lasterrors.is_set || is_set(lasterrors.yfilter)) leaf_name_data.push_back(lasterrors.get_name_leafdata());
    if (operbitset.is_set || is_set(operbitset.yfilter)) leaf_name_data.push_back(operbitset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iod")
    {
        iod = value;
        iod.value_namespace = name_space;
        iod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operMtu")
    {
        opermtu = value;
        opermtu.value_namespace = name_space;
        opermtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDescr")
    {
        operdescr = value;
        operdescr.value_namespace = name_space;
        operdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex = value;
        currerrindex.value_namespace = name_space;
        currerrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastErrors")
    {
        lasterrors = value;
        lasterrors.value_namespace = name_space;
        lasterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBitset")
    {
        operbitset = value;
        operbitset.value_namespace = name_space;
        operbitset.value_namespace_prefix = name_space_prefix;
    }
}

void System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "iod")
    {
        iod.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operMtu")
    {
        opermtu.yfilter = yfilter;
    }
    if(value_path == "operDescr")
    {
        operdescr.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "currErrIndex")
    {
        currerrindex.yfilter = yfilter;
    }
    if(value_path == "lastErrors")
    {
        lasterrors.yfilter = yfilter;
    }
    if(value_path == "operBitset")
    {
        operbitset.yfilter = yfilter;
    }
}

bool System::IntfItems::LbItems::LbRtdIfList::LbrtdifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "iod" || name == "operSt" || name == "operMtu" || name == "operDescr" || name == "operStQual" || name == "currErrIndex" || name == "lastErrors" || name == "operBitset")
        return true;
    return false;
}


}
}

