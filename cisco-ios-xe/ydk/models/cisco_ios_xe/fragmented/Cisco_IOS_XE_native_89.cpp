
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_89.hpp"
#include "Cisco_IOS_XE_native_90.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::has_data() const
{
    if (is_presence_container) return true;
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
        ,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::has_data() const
{
    if (is_presence_container) return true;
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"}
{

    yang_name = "multi-area"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
        ,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
        ,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_multipoint != nullptr)
    {
        _children["point-to-multipoint"] = point_to_multipoint;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::has_data() const
{
    if (is_presence_container) return true;
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Ipv4()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    area(this, {"id"})
    , authentication(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication>())
    , bfd(nullptr) // presence node
    , cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost>())
    , database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter>())
    , demand_circuit(nullptr) // presence node
    , flood_reduction(nullptr) // presence node
    , manet(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet>())
    , mtu_ignore(nullptr) // presence node
    , multi_area(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea>())
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network>())
    , prefix_suppression(nullptr) // presence node
    , shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ipv4"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::~Ipv4()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area>();
        ent_->parent = this;
        area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        _children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        _children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        _children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        _children["multi-area"] = multi_area;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        _children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{

    yang_name = "area"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::~Area()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Cost()
    :
    value_{YType::uint32, "value"}
        ,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
        ,
    hysteresis(nullptr) // presence node
    , weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hysteresis != nullptr)
    {
        _children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        _children["weight"] = weight;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
    , latency(nullptr) // presence node
    , resources(nullptr) // presence node
    , throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_data() const
{
    if (is_presence_container) return true;
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_factor != nullptr)
    {
        _children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        _children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        _children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        _children["throughput"] = throughput;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::has_data() const
{
    if (is_presence_container) return true;
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
        ,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_data() const
{
    if (is_presence_container) return true;
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"}
{

    yang_name = "multi-area"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
        ,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
        ,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_multipoint != nullptr)
    {
        _children["point-to-multipoint"] = point_to_multipoint;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_data() const
{
    if (is_presence_container) return true;
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Ipv6()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    area(this, {"id"})
    , authentication(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication>())
    , bfd(nullptr) // presence node
    , cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost>())
    , database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter>())
    , demand_circuit(nullptr) // presence node
    , flood_reduction(nullptr) // presence node
    , manet(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet>())
    , mtu_ignore(nullptr) // presence node
    , multi_area(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea>())
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network>())
    , prefix_suppression(nullptr) // presence node
    , shutdown(nullptr) // presence node
{
    authentication->parent = this;
    cost->parent = this;
    database_filter->parent = this;
    manet->parent = this;
    multi_area->parent = this;
    network->parent = this;

    yang_name = "ipv6"; yang_parent_name = "process-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::~Ipv6()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area>();
        ent_->parent = this;
        area.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        _children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        _children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        _children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        _children["multi-area"] = multi_area;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        _children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        _children["shutdown"] = shutdown;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "bfd" || name == "cost" || name == "database-filter" || name == "demand-circuit" || name == "flood-reduction" || name == "manet" || name == "mtu-ignore" || name == "multi-area" || name == "neighbor" || name == "network" || name == "prefix-suppression" || name == "shutdown" || name == "dead-interval" || name == "hello-interval" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{

    yang_name = "area"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::~Area()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "instance")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{

    yang_name = "authentication"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Cost()
    :
    value_{YType::uint32, "value"}
        ,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
        ,
    hysteresis(nullptr) // presence node
    , weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hysteresis != nullptr)
    {
        _children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        _children["weight"] = weight;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
    , latency(nullptr) // presence node
    , resources(nullptr) // presence node
    , throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_data() const
{
    if (is_presence_container) return true;
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_factor != nullptr)
    {
        _children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        _children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        _children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        _children["throughput"] = throughput;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{

    yang_name = "database-filter"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flood-reduction"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::FloodReduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::has_data() const
{
    if (is_presence_container) return true;
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
        ,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_data() const
{
    if (is_presence_container) return true;
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "mtu-ignore"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"}
{

    yang_name = "multi-area"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost" || name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
        ,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
        ,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_multipoint != nullptr)
    {
        _children["point-to-multipoint"] = point_to_multipoint;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_data() const
{
    if (is_presence_container) return true;
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "shutdown"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::~Shutdown()
{
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
        ,
    ipsec(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Authentication::~Authentication()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "key-chain" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
        ,
    md5(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5>())
    , sha1(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;
    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        _children["sha1"] = sha1;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha1" || name == "spi")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "sha1"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Bfd::~Bfd()
{
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Cost()
    :
    value_{YType::uint32, "value"}
        ,
    dynamic(nullptr) // presence node
{

    yang_name = "cost"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
        ,
    hysteresis(nullptr) // presence node
    , weight(std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hysteresis != nullptr)
    {
        _children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        _children["weight"] = weight;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hysteresis" || name == "weight" || name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "hysteresis"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Hysteresis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
    , latency(nullptr) // presence node
    , resources(nullptr) // presence node
    , throughput(nullptr) // presence node
{

    yang_name = "weight"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_data() const
{
    if (is_presence_container) return true;
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(yfilter)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_factor != nullptr)
    {
        _children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        _children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        _children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        _children["throughput"] = throughput;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "L2-factor" || name == "latency" || name == "resources" || name == "throughput")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "L2-factor"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "latency"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Latency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "resources"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "throughput"; yang_parent_name = "weight"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Cost::Dynamic::Weight::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "demand-circuit"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::DemandCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::DemandCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::DemandCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Encryption()
    :
    null{YType::empty, "null"}
        ,
    ipsec(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "encryption"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::~Encryption()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"},
    esp{YType::empty, "esp"}
        ,
    ipsec_3des(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des>())
    , aes_cbc(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc>())
{
    ipsec_3des->parent = this;
    aes_cbc->parent = this;

    yang_name = "ipsec"; yang_parent_name = "encryption"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::~Ipsec()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return spi.is_set
	|| esp.is_set
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_data())
	|| (aes_cbc !=  nullptr && aes_cbc->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spi.yfilter)
	|| ydk::is_set(esp.yfilter)
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_operation())
	|| (aes_cbc !=  nullptr && aes_cbc->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());
    if (esp.is_set || is_set(esp.yfilter)) leaf_name_data.push_back(esp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec_3des")
    {
        if(ipsec_3des == nullptr)
        {
            ipsec_3des = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des>();
        }
        return ipsec_3des;
    }

    if(child_yang_name == "aes-cbc")
    {
        if(aes_cbc == nullptr)
        {
            aes_cbc = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc>();
        }
        return aes_cbc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipsec_3des != nullptr)
    {
        _children["ipsec_3des"] = ipsec_3des;
    }

    if(aes_cbc != nullptr)
    {
        _children["aes-cbc"] = aes_cbc;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "esp")
    {
        esp = value;
        esp.value_namespace = name_space;
        esp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
    if(value_path == "esp")
    {
        esp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec_3des" || name == "aes-cbc" || name == "spi" || name == "esp")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::Ipsec3des()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString>())
{
    key_string->parent = this;

    yang_name = "ipsec_3des"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::~Ipsec3des()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec_3des";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "ipsec_3des"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc()
    :
    aes_cbc_128(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>())
    , aes_192(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>())
    , aes_256(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>())
{
    aes_cbc_128->parent = this;
    aes_192->parent = this;
    aes_256->parent = this;

    yang_name = "aes-cbc"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::~AesCbc()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_data() const
{
    if (is_presence_container) return true;
    return (aes_cbc_128 !=  nullptr && aes_cbc_128->has_data())
	|| (aes_192 !=  nullptr && aes_192->has_data())
	|| (aes_256 !=  nullptr && aes_256->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_operation() const
{
    return is_set(yfilter)
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_operation())
	|| (aes_192 !=  nullptr && aes_192->has_operation())
	|| (aes_256 !=  nullptr && aes_256->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-cbc-128")
    {
        if(aes_cbc_128 == nullptr)
        {
            aes_cbc_128 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>();
        }
        return aes_cbc_128;
    }

    if(child_yang_name == "aes-192")
    {
        if(aes_192 == nullptr)
        {
            aes_192 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>();
        }
        return aes_192;
    }

    if(child_yang_name == "aes-256")
    {
        if(aes_256 == nullptr)
        {
            aes_256 = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>();
        }
        return aes_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aes_cbc_128 != nullptr)
    {
        _children["aes-cbc-128"] = aes_cbc_128;
    }

    if(aes_192 != nullptr)
    {
        _children["aes-192"] = aes_192;
    }

    if(aes_256 != nullptr)
    {
        _children["aes-256"] = aes_256;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes-cbc-128" || name == "aes-192" || name == "aes-256")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-cbc-128"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-192"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    if (is_presence_container) return true;
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_string != nullptr)
    {
        _children["key-string"] = key_string;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "key-string"; yang_parent_name = "aes-256"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    if (is_presence_container) return true;
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Manet::~Manet()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_data() const
{
    if (is_presence_container) return true;
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_operation() const
{
    return is_set(yfilter)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peering != nullptr)
    {
        _children["peering"] = peering;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Ospfv3::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peering")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
        ,
    cost(std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::~Peering()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_data() const
{
    if (is_presence_container) return true;
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_metrics.yfilter)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.yfilter)) leaf_name_data.push_back(link_metrics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cost != nullptr)
    {
        _children["cost"] = cost;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
        link_metrics.value_namespace = name_space;
        link_metrics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-metrics")
    {
        link_metrics.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost" || name == "link-metrics")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "cost"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_data() const
{
    if (is_presence_container) return true;
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Manet::Peering::Cost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent" || name == "threshold")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::MultiArea::MultiArea()
    :
    id{YType::str, "id"},
    cost{YType::uint32, "cost"}
{

    yang_name = "multi-area"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::MultiArea::~MultiArea()
{
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "cost")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
        ,
    database_filter(std::make_shared<Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Neighbor::~Neighbor()
{
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-filter" || name == "id" || name == "cost" || name == "poll-interval" || name == "priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{

    yang_name = "database-filter"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
        ,
    point_to_multipoint(nullptr) // presence node
{

    yang_name = "network"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Ospfv3::Network::~Network()
{
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(manet.yfilter)
	|| ydk::is_set(non_broadcast.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::PortChannel::Ospfv3::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.yfilter)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(point_to_multipoint != nullptr)
    {
        _children["point-to-multipoint"] = point_to_multipoint;
    }

    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manet")
    {
        manet = value;
        manet.value_namespace = name_space;
        manet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "manet")
    {
        manet.yfilter = yfilter;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point-to-multipoint" || name == "broadcast" || name == "manet" || name == "non-broadcast" || name == "point-to-point")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{

    yang_name = "point-to-multipoint"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_data() const
{
    if (is_presence_container) return true;
    return non_broadcast.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_broadcast.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.yfilter)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
        non_broadcast.value_namespace = name_space;
        non_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::Network::PointToMultipoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-broadcast")
        return true;
    return false;
}

Native::Interface::PortChannel::Ospfv3::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "prefix-suppression"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Ospfv3::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Ospfv3::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Ospfv3::PrefixSuppression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Ospfv3::PrefixSuppression::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Ospfv3::PrefixSuppression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::PortChannel::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
        ,
    mobility(std::make_shared<Native::Interface::PortChannel::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Lisp::~Lisp()
{
}

bool Native::Interface::PortChannel::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::PortChannel::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::PortChannel::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::PortChannel::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    return _children;
}

void Native::Interface::PortChannel::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::PortChannel::Lisp::Mobility::Mobility()
    :
    dynamic_eid(this, {"dynamic_eid_name"})
    , discover(std::make_shared<Native::Interface::PortChannel::Lisp::Mobility::Discover>())
    , liveness(std::make_shared<Native::Interface::PortChannel::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::PortChannel::Lisp::Mobility::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return (discover !=  nullptr && discover->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::PortChannel::Lisp::Mobility::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::PortChannel::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::Lisp::Mobility::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::PortChannel::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::PortChannel::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamic_eid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(discover != nullptr)
    {
        _children["discover"] = discover;
    }

    if(liveness != nullptr)
    {
        _children["liveness"] = liveness;
    }

    return _children;
}

void Native::Interface::PortChannel::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid" || name == "discover" || name == "liveness")
        return true;
    return false;
}

Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"}
        ,
    nbr_proxy_reply(nullptr) // presence node
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    return dynamic_eid_name.is_set
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_data());
}

bool Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_operation());
}

std::string Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(dynamic_eid_name, "dynamic-eid-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-proxy-reply")
    {
        if(nbr_proxy_reply == nullptr)
        {
            nbr_proxy_reply = std::make_shared<Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply>();
        }
        return nbr_proxy_reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbr_proxy_reply != nullptr)
    {
        _children["nbr-proxy-reply"] = nbr_proxy_reply;
    }

    return _children;
}

void Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-proxy-reply" || name == "dynamic-eid-name")
        return true;
    return false;
}

Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::NbrProxyReply()
    :
    requests{YType::uint8, "requests"}
{

    yang_name = "nbr-proxy-reply"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::~NbrProxyReply()
{
}

bool Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set;
}

bool Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-proxy-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Lisp::Mobility::DynamicEid::NbrProxyReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests")
        return true;
    return false;
}

Native::Interface::PortChannel::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::PortChannel::Lisp::Mobility::Discover::has_data() const
{
    if (is_presence_container) return true;
    return arp.is_set;
}

bool Native::Interface::PortChannel::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::PortChannel::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::PortChannel::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::PortChannel::Lisp::Mobility::Liveness::has_data() const
{
    if (is_presence_container) return true;
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::PortChannel::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::PortChannel::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::PortChannel::SpanningTree::SpanningTree()
    :
    bpdufilter{YType::enumeration, "bpdufilter"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    link_type{YType::enumeration, "link-type"},
    port_priority{YType::uint8, "port-priority"}
        ,
    bpduguard(std::make_shared<Native::Interface::PortChannel::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
    , vlan(this, {"vlan_ids"})
    , loopguard(std::make_shared<Native::Interface::PortChannel::SpanningTree::Loopguard>())
    , mst(std::make_shared<Native::Interface::PortChannel::SpanningTree::Mst>())
{
    bpduguard->parent = this;
    loopguard->parent = this;
    mst->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::PortChannel::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return bpdufilter.is_set
	|| cost.is_set
	|| guard.is_set
	|| link_type.is_set
	|| port_priority.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data());
}

bool Native::Interface::PortChannel::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bpdufilter.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation());
}

std::string Native::Interface::PortChannel::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdufilter.is_set || is_set(bpdufilter.yfilter)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Interface::PortChannel::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Interface::PortChannel::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::SpanningTree::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::Interface::PortChannel::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::Interface::PortChannel::SpanningTree::Mst>();
        }
        return mst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(loopguard != nullptr)
    {
        _children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        _children["mst"] = mst;
    }

    return _children;
}

void Native::Interface::PortChannel::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
        bpdufilter.value_namespace = name_space;
        bpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "vlan" || name == "loopguard" || name == "mst" || name == "bpdufilter" || name == "cost" || name == "guard" || name == "link-type" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::PortChannel::SpanningTree::Bpduguard::Bpduguard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Interface::PortChannel::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| enable.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::PortChannel::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable")
        return true;
    return false;
}

Native::Interface::PortChannel::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    trunk{YType::empty, "trunk"},
    edge{YType::empty, "edge"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Interface::PortChannel::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| trunk.is_set
	|| edge.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(edge.yfilter);
}

std::string Native::Interface::PortChannel::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "trunk" || name == "edge")
        return true;
    return false;
}

Native::Interface::PortChannel::SpanningTree::Vlan::Vlan()
    :
    vlan_ids{YType::str, "vlan-ids"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::SpanningTree::Vlan::~Vlan()
{
}

bool Native::Interface::PortChannel::SpanningTree::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan_ids.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_ids.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::PortChannel::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_ids, "vlan-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_ids.is_set || is_set(vlan_ids.yfilter)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
        vlan_ids.value_namespace = name_space;
        vlan_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-ids" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::PortChannel::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::Interface::PortChannel::SpanningTree::Loopguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::PortChannel::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::PortChannel::SpanningTree::Mst::Mst()
    :
    pre_standard{YType::empty, "pre-standard"}
        ,
    mst_instance(this, {"instance"})
{

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::SpanningTree::Mst::~Mst()
{
}

bool Native::Interface::PortChannel::SpanningTree::Mst::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_data())
            return true;
    }
    return pre_standard.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pre_standard.yfilter);
}

std::string Native::Interface::PortChannel::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_standard.is_set || is_set(pre_standard.yfilter)) leaf_name_data.push_back(pre_standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-instance")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::SpanningTree::Mst::MstInstance>();
        ent_->parent = this;
        mst_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mst_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannel::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-standard")
    {
        pre_standard = value;
        pre_standard.value_namespace = name_space;
        pre_standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-standard")
    {
        pre_standard.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-instance" || name == "pre-standard")
        return true;
    return false;
}

Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::MstInstance()
    :
    instance{YType::str, "instance"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "mst-instance"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::~MstInstance()
{
}

bool Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-instance";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::SpanningTree::Mst::MstInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::PortChannel::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    sequence{YType::enumeration, "sequence"},
    pw_class{YType::str, "pw-class"}
{

    yang_name = "xconnect"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Xconnect::~Xconnect()
{
}

bool Native::Interface::PortChannel::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| sequence.is_set
	|| pw_class.is_set;
}

bool Native::Interface::PortChannel::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(pw_class.yfilter);
}

std::string Native::Interface::PortChannel::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "sequence" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::PortChannel::Evpn::Evpn()
    :
    ethernet_segment(this, {"es_value"})
{

    yang_name = "evpn"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Evpn::~Evpn()
{
}

bool Native::Interface::PortChannel::Evpn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::Evpn::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.len(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::PortChannel::Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Evpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-segment")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::Evpn::EthernetSegment>();
        ent_->parent = this;
        ethernet_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Evpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannel::Evpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Evpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Evpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-segment")
        return true;
    return false;
}

Native::Interface::PortChannel::Evpn::EthernetSegment::EthernetSegment()
    :
    es_value{YType::uint16, "es-value"},
    sytem_mac{YType::str, "sytem-mac"}
        ,
    df_election(std::make_shared<Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection>())
    , redundancy(std::make_shared<Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy>())
{
    df_election->parent = this;
    redundancy->parent = this;

    yang_name = "ethernet-segment"; yang_parent_name = "evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Evpn::EthernetSegment::~EthernetSegment()
{
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::has_data() const
{
    if (is_presence_container) return true;
    return es_value.is_set
	|| sytem_mac.is_set
	|| (df_election !=  nullptr && df_election->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(es_value.yfilter)
	|| ydk::is_set(sytem_mac.yfilter)
	|| (df_election !=  nullptr && df_election->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::Interface::PortChannel::Evpn::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";
    ADD_KEY_TOKEN(es_value, "es-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Evpn::EthernetSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (es_value.is_set || is_set(es_value.yfilter)) leaf_name_data.push_back(es_value.get_name_leafdata());
    if (sytem_mac.is_set || is_set(sytem_mac.yfilter)) leaf_name_data.push_back(sytem_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Evpn::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "df-election")
    {
        if(df_election == nullptr)
        {
            df_election = std::make_shared<Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection>();
        }
        return df_election;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Evpn::EthernetSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(df_election != nullptr)
    {
        _children["df-election"] = df_election;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    return _children;
}

void Native::Interface::PortChannel::Evpn::EthernetSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "es-value")
    {
        es_value = value;
        es_value.value_namespace = name_space;
        es_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac = value;
        sytem_mac.value_namespace = name_space;
        sytem_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Evpn::EthernetSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "es-value")
    {
        es_value.yfilter = yfilter;
    }
    if(value_path == "sytem-mac")
    {
        sytem_mac.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-election" || name == "redundancy" || name == "es-value" || name == "sytem-mac")
        return true;
    return false;
}

Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::DfElection()
    :
    wait_time{YType::uint8, "wait-time"}
{

    yang_name = "df-election"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::~DfElection()
{
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::has_data() const
{
    if (is_presence_container) return true;
    return wait_time.is_set;
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-election";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::DfElection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-time")
        return true;
    return false;
}

Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::Redundancy()
    :
    all_active{YType::empty, "all-active"},
    single_active{YType::empty, "single-active"}
{

    yang_name = "redundancy"; yang_parent_name = "ethernet-segment"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::~Redundancy()
{
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::has_data() const
{
    if (is_presence_container) return true;
    return all_active.is_set
	|| single_active.is_set;
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_active.yfilter)
	|| ydk::is_set(single_active.yfilter);
}

std::string Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_active.is_set || is_set(all_active.yfilter)) leaf_name_data.push_back(all_active.get_name_leafdata());
    if (single_active.is_set || is_set(single_active.yfilter)) leaf_name_data.push_back(single_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-active")
    {
        all_active = value;
        all_active.value_namespace = name_space;
        all_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-active")
    {
        single_active = value;
        single_active.value_namespace = name_space;
        single_active.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-active")
    {
        all_active.yfilter = yfilter;
    }
    if(value_path == "single-active")
    {
        single_active.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Evpn::EthernetSegment::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-active" || name == "single-active")
        return true;
    return false;
}

Native::Interface::PortChannel::Dot1x::Dot1x()
    :
    credentials{YType::str, "credentials"},
    max_reauth_req{YType::uint8, "max-reauth-req"},
    max_req{YType::uint8, "max-req"},
    max_start{YType::uint8, "max-start"},
    pae{YType::enumeration, "pae"}
        ,
    authenticator(std::make_shared<Native::Interface::PortChannel::Dot1x::Authenticator>())
    , supplicant(std::make_shared<Native::Interface::PortChannel::Dot1x::Supplicant>())
    , timeout(std::make_shared<Native::Interface::PortChannel::Dot1x::Timeout>())
{
    authenticator->parent = this;
    supplicant->parent = this;
    timeout->parent = this;

    yang_name = "dot1x"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Dot1x::~Dot1x()
{
}

bool Native::Interface::PortChannel::Dot1x::has_data() const
{
    if (is_presence_container) return true;
    return credentials.is_set
	|| max_reauth_req.is_set
	|| max_req.is_set
	|| max_start.is_set
	|| pae.is_set
	|| (authenticator !=  nullptr && authenticator->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Interface::PortChannel::Dot1x::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credentials.yfilter)
	|| ydk::is_set(max_reauth_req.yfilter)
	|| ydk::is_set(max_req.yfilter)
	|| ydk::is_set(max_start.yfilter)
	|| ydk::is_set(pae.yfilter)
	|| (authenticator !=  nullptr && authenticator->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Interface::PortChannel::Dot1x::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Dot1x::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credentials.is_set || is_set(credentials.yfilter)) leaf_name_data.push_back(credentials.get_name_leafdata());
    if (max_reauth_req.is_set || is_set(max_reauth_req.yfilter)) leaf_name_data.push_back(max_reauth_req.get_name_leafdata());
    if (max_req.is_set || is_set(max_req.yfilter)) leaf_name_data.push_back(max_req.get_name_leafdata());
    if (max_start.is_set || is_set(max_start.yfilter)) leaf_name_data.push_back(max_start.get_name_leafdata());
    if (pae.is_set || is_set(pae.yfilter)) leaf_name_data.push_back(pae.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Dot1x::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticator")
    {
        if(authenticator == nullptr)
        {
            authenticator = std::make_shared<Native::Interface::PortChannel::Dot1x::Authenticator>();
        }
        return authenticator;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Interface::PortChannel::Dot1x::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Interface::PortChannel::Dot1x::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Dot1x::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authenticator != nullptr)
    {
        _children["authenticator"] = authenticator;
    }

    if(supplicant != nullptr)
    {
        _children["supplicant"] = supplicant;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void Native::Interface::PortChannel::Dot1x::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credentials")
    {
        credentials = value;
        credentials.value_namespace = name_space;
        credentials.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req = value;
        max_reauth_req.value_namespace = name_space;
        max_reauth_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-req")
    {
        max_req = value;
        max_req.value_namespace = name_space;
        max_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-start")
    {
        max_start = value;
        max_start.value_namespace = name_space;
        max_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pae")
    {
        pae = value;
        pae.value_namespace = name_space;
        pae.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Dot1x::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credentials")
    {
        credentials.yfilter = yfilter;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req.yfilter = yfilter;
    }
    if(value_path == "max-req")
    {
        max_req.yfilter = yfilter;
    }
    if(value_path == "max-start")
    {
        max_start.yfilter = yfilter;
    }
    if(value_path == "pae")
    {
        pae.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Dot1x::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authenticator" || name == "supplicant" || name == "timeout" || name == "credentials" || name == "max-reauth-req" || name == "max-req" || name == "max-start" || name == "pae")
        return true;
    return false;
}

Native::Interface::PortChannel::Dot1x::Authenticator::Authenticator()
    :
    eap(std::make_shared<Native::Interface::PortChannel::Dot1x::Authenticator::Eap>())
{
    eap->parent = this;

    yang_name = "authenticator"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Dot1x::Authenticator::~Authenticator()
{
}

bool Native::Interface::PortChannel::Dot1x::Authenticator::has_data() const
{
    if (is_presence_container) return true;
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::PortChannel::Dot1x::Authenticator::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::PortChannel::Dot1x::Authenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticator";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Dot1x::Authenticator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Dot1x::Authenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::PortChannel::Dot1x::Authenticator::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Dot1x::Authenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    return _children;
}

void Native::Interface::PortChannel::Dot1x::Authenticator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Dot1x::Authenticator::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Dot1x::Authenticator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::PortChannel::Dot1x::Authenticator::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "authenticator"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Dot1x::Authenticator::Eap::~Eap()
{
}

bool Native::Interface::PortChannel::Dot1x::Authenticator::Eap::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::Interface::PortChannel::Dot1x::Authenticator::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::PortChannel::Dot1x::Authenticator::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Dot1x::Authenticator::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Dot1x::Authenticator::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Dot1x::Authenticator::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Dot1x::Authenticator::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Dot1x::Authenticator::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Dot1x::Authenticator::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::PortChannel::Dot1x::Supplicant::Supplicant()
    :
    eap(std::make_shared<Native::Interface::PortChannel::Dot1x::Supplicant::Eap>())
{
    eap->parent = this;

    yang_name = "supplicant"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Dot1x::Supplicant::~Supplicant()
{
}

bool Native::Interface::PortChannel::Dot1x::Supplicant::has_data() const
{
    if (is_presence_container) return true;
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::PortChannel::Dot1x::Supplicant::has_operation() const
{
    return is_set(yfilter)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::PortChannel::Dot1x::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Dot1x::Supplicant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Dot1x::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::PortChannel::Dot1x::Supplicant::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Dot1x::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    return _children;
}

void Native::Interface::PortChannel::Dot1x::Supplicant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Dot1x::Supplicant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Dot1x::Supplicant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::PortChannel::Dot1x::Supplicant::Eap::Eap()
    :
    profile{YType::str, "profile"}
{

    yang_name = "eap"; yang_parent_name = "supplicant"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Dot1x::Supplicant::Eap::~Eap()
{
}

bool Native::Interface::PortChannel::Dot1x::Supplicant::Eap::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Native::Interface::PortChannel::Dot1x::Supplicant::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Interface::PortChannel::Dot1x::Supplicant::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Dot1x::Supplicant::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Dot1x::Supplicant::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Dot1x::Supplicant::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Dot1x::Supplicant::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Dot1x::Supplicant::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Dot1x::Supplicant::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Interface::PortChannel::Dot1x::Timeout::Timeout()
    :
    auth_period{YType::uint16, "auth-period"},
    held_period{YType::uint16, "held-period"},
    quiet_period{YType::uint16, "quiet-period"},
    ratelimit_period{YType::uint16, "ratelimit-period"},
    server_timeout{YType::uint16, "server-timeout"},
    start_period{YType::uint16, "start-period"},
    supp_timeout{YType::uint16, "supp-timeout"},
    tx_period{YType::uint16, "tx-period"}
{

    yang_name = "timeout"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Dot1x::Timeout::~Timeout()
{
}

bool Native::Interface::PortChannel::Dot1x::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return auth_period.is_set
	|| held_period.is_set
	|| quiet_period.is_set
	|| ratelimit_period.is_set
	|| server_timeout.is_set
	|| start_period.is_set
	|| supp_timeout.is_set
	|| tx_period.is_set;
}

bool Native::Interface::PortChannel::Dot1x::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_period.yfilter)
	|| ydk::is_set(held_period.yfilter)
	|| ydk::is_set(quiet_period.yfilter)
	|| ydk::is_set(ratelimit_period.yfilter)
	|| ydk::is_set(server_timeout.yfilter)
	|| ydk::is_set(start_period.yfilter)
	|| ydk::is_set(supp_timeout.yfilter)
	|| ydk::is_set(tx_period.yfilter);
}

std::string Native::Interface::PortChannel::Dot1x::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Dot1x::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_period.is_set || is_set(auth_period.yfilter)) leaf_name_data.push_back(auth_period.get_name_leafdata());
    if (held_period.is_set || is_set(held_period.yfilter)) leaf_name_data.push_back(held_period.get_name_leafdata());
    if (quiet_period.is_set || is_set(quiet_period.yfilter)) leaf_name_data.push_back(quiet_period.get_name_leafdata());
    if (ratelimit_period.is_set || is_set(ratelimit_period.yfilter)) leaf_name_data.push_back(ratelimit_period.get_name_leafdata());
    if (server_timeout.is_set || is_set(server_timeout.yfilter)) leaf_name_data.push_back(server_timeout.get_name_leafdata());
    if (start_period.is_set || is_set(start_period.yfilter)) leaf_name_data.push_back(start_period.get_name_leafdata());
    if (supp_timeout.is_set || is_set(supp_timeout.yfilter)) leaf_name_data.push_back(supp_timeout.get_name_leafdata());
    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Dot1x::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Dot1x::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Dot1x::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-period")
    {
        auth_period = value;
        auth_period.value_namespace = name_space;
        auth_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "held-period")
    {
        held_period = value;
        held_period.value_namespace = name_space;
        held_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "quiet-period")
    {
        quiet_period = value;
        quiet_period.value_namespace = name_space;
        quiet_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period = value;
        ratelimit_period.value_namespace = name_space;
        ratelimit_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-timeout")
    {
        server_timeout = value;
        server_timeout.value_namespace = name_space;
        server_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-period")
    {
        start_period = value;
        start_period.value_namespace = name_space;
        start_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout = value;
        supp_timeout.value_namespace = name_space;
        supp_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Dot1x::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-period")
    {
        auth_period.yfilter = yfilter;
    }
    if(value_path == "held-period")
    {
        held_period.yfilter = yfilter;
    }
    if(value_path == "quiet-period")
    {
        quiet_period.yfilter = yfilter;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period.yfilter = yfilter;
    }
    if(value_path == "server-timeout")
    {
        server_timeout.yfilter = yfilter;
    }
    if(value_path == "start-period")
    {
        start_period.yfilter = yfilter;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout.yfilter = yfilter;
    }
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Dot1x::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-period" || name == "held-period" || name == "quiet-period" || name == "ratelimit-period" || name == "server-timeout" || name == "start-period" || name == "supp-timeout" || name == "tx-period")
        return true;
    return false;
}

Native::Interface::PortChannel::Crypto::Crypto()
    :
    map(std::make_shared<Native::Interface::PortChannel::Crypto::Map>())
    , ipsec(std::make_shared<Native::Interface::PortChannel::Crypto::Ipsec>())
{
    map->parent = this;
    ipsec->parent = this;

    yang_name = "crypto"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Crypto::~Crypto()
{
}

bool Native::Interface::PortChannel::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return (map !=  nullptr && map->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::PortChannel::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::PortChannel::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::PortChannel::Crypto::Map>();
        }
        return map;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::PortChannel::Crypto::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["map"] = map;
    }

    if(ipsec != nullptr)
    {
        _children["ipsec"] = ipsec;
    }

    return _children;
}

void Native::Interface::PortChannel::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "ipsec")
        return true;
    return false;
}

Native::Interface::PortChannel::Crypto::Map::Map()
    :
    tag{YType::str, "tag"},
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Crypto::Map::~Map()
{
}

bool Native::Interface::PortChannel::Crypto::Map::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| redundancy.is_set
	|| stateful.is_set;
}

bool Native::Interface::PortChannel::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter);
}

std::string Native::Interface::PortChannel::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag" || name == "redundancy" || name == "stateful")
        return true;
    return false;
}

Native::Interface::PortChannel::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::PortChannel::Crypto::Ipsec::has_data() const
{
    if (is_presence_container) return true;
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::PortChannel::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::PortChannel::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::PortChannel::AnalysisModule::AnalysisModule()
    :
    monitoring(std::make_shared<Native::Interface::PortChannel::AnalysisModule::Monitoring>())
{
    monitoring->parent = this;

    yang_name = "analysis-module"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::AnalysisModule::~AnalysisModule()
{
}

bool Native::Interface::PortChannel::AnalysisModule::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Interface::PortChannel::AnalysisModule::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Interface::PortChannel::AnalysisModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nam:analysis-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::AnalysisModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::AnalysisModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Interface::PortChannel::AnalysisModule::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::AnalysisModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitoring != nullptr)
    {
        _children["monitoring"] = monitoring;
    }

    return _children;
}

void Native::Interface::PortChannel::AnalysisModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::AnalysisModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::AnalysisModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Interface::PortChannel::AnalysisModule::Monitoring::Monitoring()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "monitoring"; yang_parent_name = "analysis-module"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::AnalysisModule::Monitoring::~Monitoring()
{
}

bool Native::Interface::PortChannel::AnalysisModule::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Interface::PortChannel::AnalysisModule::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Interface::PortChannel::AnalysisModule::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::AnalysisModule::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::AnalysisModule::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::AnalysisModule::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::AnalysisModule::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::AnalysisModule::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::AnalysisModule::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Cts()
    :
    manual(nullptr) // presence node
{

    yang_name = "cts"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Cts::~Cts()
{
}

bool Native::Interface::PortChannel::Cts::has_data() const
{
    if (is_presence_container) return true;
    return (manual !=  nullptr && manual->has_data());
}

bool Native::Interface::PortChannel::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (manual !=  nullptr && manual->has_operation());
}

std::string Native::Interface::PortChannel::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::PortChannel::Cts::Manual>();
        }
        return manual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(manual != nullptr)
    {
        _children["manual"] = manual;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::PortChannel::Cts::Manual::Policy>())
    , sap(std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap>())
    , propagate(std::make_shared<Native::Interface::PortChannel::Cts::Manual::Propagate>())
{
    policy->parent = this;
    sap->parent = this;
    propagate->parent = this;

    yang_name = "manual"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Cts::Manual::~Manual()
{
}

bool Native::Interface::PortChannel::Cts::Manual::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (sap !=  nullptr && sap->has_data())
	|| (propagate !=  nullptr && propagate->has_data());
}

bool Native::Interface::PortChannel::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (sap !=  nullptr && sap->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation());
}

std::string Native::Interface::PortChannel::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap>();
        }
        return sap;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(sap != nullptr)
    {
        _children["sap"] = sap;
    }

    if(propagate != nullptr)
    {
        _children["propagate"] = propagate;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "sap" || name == "propagate")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::PortChannel::Cts::Manual::Policy::Static>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::PortChannel::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::PortChannel::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Policy::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Policy::Static::Static()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "static"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Cts::Manual::Policy::Static::~Static()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Policy::Static::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::PortChannel::Cts::Manual::Policy::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::PortChannel::Cts::Manual::Policy::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Policy::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Policy::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Policy::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Policy::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Cts::Manual::Policy::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Cts::Manual::Policy::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Sap()
    :
    pmk(this, {"word"})
{

    yang_name = "sap"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.len(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::PortChannel::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Sap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        auto ent_ = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap::Pmk>();
        ent_->parent = this;
        pmk.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pmk.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
        ,
    mode_list(std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode_list != nullptr)
    {
        _children["mode-list"] = mode_list;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
    , no_encap(nullptr) // presence node
{

    yang_name = "mode-list"; yang_parent_name = "pmk"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    if (is_presence_container) return true;
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gcm_encrypt != nullptr)
    {
        _children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        _children["no-encap"] = no_encap;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{

    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    if (is_presence_container) return true;
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmac != nullptr)
    {
        _children["gmac"] = gmac;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{

    yang_name = "gmac"; yang_parent_name = "gcm-encrypt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    if (is_presence_container) return true;
    return null.is_set;
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{

    yang_name = "no-encap"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    if (is_presence_container) return true;
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(gmac != nullptr)
    {
        _children["gmac"] = gmac;
    }

    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{

    yang_name = "gmac"; yang_parent_name = "no-encap"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    if (is_presence_container) return true;
    return gcm_encrypt.is_set;
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_encrypt.yfilter);
}

std::string Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.yfilter)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
        gcm_encrypt.value_namespace = name_space;
        gcm_encrypt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt")
        return true;
    return false;
}

Native::Interface::PortChannel::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{

    yang_name = "propagate"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::PortChannel::Cts::Manual::Propagate::has_data() const
{
    if (is_presence_container) return true;
    return sgt.is_set;
}

bool Native::Interface::PortChannel::Cts::Manual::Propagate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::PortChannel::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Cts::Manual::Propagate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Cts::Manual::Propagate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Cts::Manual::Propagate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Cts::Manual::Propagate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Interface::PortChannel::Mvrp::Mvrp()
    :
    mvrp{YType::empty, "mvrp"}
        ,
    registration(std::make_shared<Native::Interface::PortChannel::Mvrp::Registration>())
    , timer(std::make_shared<Native::Interface::PortChannel::Mvrp::Timer>())
{
    registration->parent = this;
    timer->parent = this;

    yang_name = "mvrp"; yang_parent_name = "Port-channel"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Mvrp::~Mvrp()
{
}

bool Native::Interface::PortChannel::Mvrp::has_data() const
{
    if (is_presence_container) return true;
    return mvrp.is_set
	|| (registration !=  nullptr && registration->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::PortChannel::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mvrp.yfilter)
	|| (registration !=  nullptr && registration->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::PortChannel::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mvrp.is_set || is_set(mvrp.yfilter)) leaf_name_data.push_back(mvrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Interface::PortChannel::Mvrp::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::PortChannel::Mvrp::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::PortChannel::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mvrp")
    {
        mvrp = value;
        mvrp.value_namespace = name_space;
        mvrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mvrp")
    {
        mvrp.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registration" || name == "timer" || name == "mvrp")
        return true;
    return false;
}

Native::Interface::PortChannel::Mvrp::Registration::Registration()
    :
    fixed{YType::empty, "fixed"},
    forbidden{YType::empty, "forbidden"},
    normal{YType::empty, "normal"}
{

    yang_name = "registration"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Mvrp::Registration::~Registration()
{
}

bool Native::Interface::PortChannel::Mvrp::Registration::has_data() const
{
    if (is_presence_container) return true;
    return fixed.is_set
	|| forbidden.is_set
	|| normal.is_set;
}

bool Native::Interface::PortChannel::Mvrp::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed.yfilter)
	|| ydk::is_set(forbidden.yfilter)
	|| ydk::is_set(normal.yfilter);
}

std::string Native::Interface::PortChannel::Mvrp::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mvrp::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed.is_set || is_set(fixed.yfilter)) leaf_name_data.push_back(fixed.get_name_leafdata());
    if (forbidden.is_set || is_set(forbidden.yfilter)) leaf_name_data.push_back(forbidden.get_name_leafdata());
    if (normal.is_set || is_set(normal.yfilter)) leaf_name_data.push_back(normal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Mvrp::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Mvrp::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Mvrp::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed")
    {
        fixed = value;
        fixed.value_namespace = name_space;
        fixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forbidden")
    {
        forbidden = value;
        forbidden.value_namespace = name_space;
        forbidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal")
    {
        normal = value;
        normal.value_namespace = name_space;
        normal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mvrp::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed")
    {
        fixed.yfilter = yfilter;
    }
    if(value_path == "forbidden")
    {
        forbidden.yfilter = yfilter;
    }
    if(value_path == "normal")
    {
        normal.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mvrp::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "forbidden" || name == "normal")
        return true;
    return false;
}

Native::Interface::PortChannel::Mvrp::Timer::Timer()
    :
    periodic{YType::empty, "periodic"}
        ,
    join(nullptr) // presence node
    , leave(nullptr) // presence node
    , leave_all(nullptr) // presence node
{

    yang_name = "timer"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::PortChannel::Mvrp::Timer::~Timer()
{
}

bool Native::Interface::PortChannel::Mvrp::Timer::has_data() const
{
    if (is_presence_container) return true;
    return periodic.is_set
	|| (join !=  nullptr && join->has_data())
	|| (leave !=  nullptr && leave->has_data())
	|| (leave_all !=  nullptr && leave_all->has_data());
}

bool Native::Interface::PortChannel::Mvrp::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| (join !=  nullptr && join->has_operation())
	|| (leave !=  nullptr && leave->has_operation())
	|| (leave_all !=  nullptr && leave_all->has_operation());
}

std::string Native::Interface::PortChannel::Mvrp::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mvrp::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Mvrp::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join")
    {
        if(join == nullptr)
        {
            join = std::make_shared<Native::Interface::PortChannel::Mvrp::Timer::Join>();
        }
        return join;
    }

    if(child_yang_name == "leave")
    {
        if(leave == nullptr)
        {
            leave = std::make_shared<Native::Interface::PortChannel::Mvrp::Timer::Leave>();
        }
        return leave;
    }

    if(child_yang_name == "leave-all")
    {
        if(leave_all == nullptr)
        {
            leave_all = std::make_shared<Native::Interface::PortChannel::Mvrp::Timer::LeaveAll>();
        }
        return leave_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Mvrp::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(join != nullptr)
    {
        _children["join"] = join;
    }

    if(leave != nullptr)
    {
        _children["leave"] = leave;
    }

    if(leave_all != nullptr)
    {
        _children["leave-all"] = leave_all;
    }

    return _children;
}

void Native::Interface::PortChannel::Mvrp::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mvrp::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mvrp::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join" || name == "leave" || name == "leave-all" || name == "periodic")
        return true;
    return false;
}

Native::Interface::PortChannel::Mvrp::Timer::Join::Join()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "join"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Mvrp::Timer::Join::~Join()
{
}

bool Native::Interface::PortChannel::Mvrp::Timer::Join::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::PortChannel::Mvrp::Timer::Join::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::PortChannel::Mvrp::Timer::Join::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mvrp::Timer::Join::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Mvrp::Timer::Join::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Mvrp::Timer::Join::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Mvrp::Timer::Join::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mvrp::Timer::Join::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mvrp::Timer::Join::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::PortChannel::Mvrp::Timer::Leave::Leave()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::PortChannel::Mvrp::Timer::Leave::~Leave()
{
}

bool Native::Interface::PortChannel::Mvrp::Timer::Leave::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::PortChannel::Mvrp::Timer::Leave::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::PortChannel::Mvrp::Timer::Leave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::PortChannel::Mvrp::Timer::Leave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::PortChannel::Mvrp::Timer::Leave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::PortChannel::Mvrp::Timer::Leave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::PortChannel::Mvrp::Timer::Leave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::PortChannel::Mvrp::Timer::Leave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::PortChannel::Mvrp::Timer::Leave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Authentication::Ipsec::Sha1::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::Ipsec3des::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::PortChannel::Ospfv3::Neighbor::DatabaseFilter::All::out {0, "out"};

const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::Bpdufilter::disable {0, "disable"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::Bpdufilter::enable {1, "enable"};

const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::Guard::loop {0, "loop"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::Guard::none {1, "none"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::Guard::root {2, "root"};

const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::LinkType::point_to_point {0, "point-to-point"};
const Enum::YLeaf Native::Interface::PortChannel::SpanningTree::LinkType::shared {1, "shared"};

const Enum::YLeaf Native::Interface::PortChannel::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::PortChannel::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::PortChannel::Xconnect::Sequence::both {0, "both"};
const Enum::YLeaf Native::Interface::PortChannel::Xconnect::Sequence::receive {1, "receive"};
const Enum::YLeaf Native::Interface::PortChannel::Xconnect::Sequence::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::PortChannel::Dot1x::Pae::authenticator {0, "authenticator"};
const Enum::YLeaf Native::Interface::PortChannel::Dot1x::Pae::supplicant {1, "supplicant"};
const Enum::YLeaf Native::Interface::PortChannel::Dot1x::Pae::both {2, "both"};

const Enum::YLeaf Native::Interface::PortChannel::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::PortChannel::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::PortChannel::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::PortChannel::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::PortChannel::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};


}
}

