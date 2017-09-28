
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_kim_tpa_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_kim_tpa_cfg {

Tpa::Tpa()
    :
    logging(std::make_shared<Tpa::Logging>())
	,statistics(std::make_shared<Tpa::Statistics>())
	,vrf_names(std::make_shared<Tpa::VrfNames>())
{
    logging->parent = this;
    statistics->parent = this;
    vrf_names->parent = this;

    yang_name = "tpa"; yang_parent_name = "Cisco-IOS-XR-kim-tpa-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Tpa::~Tpa()
{
}

bool Tpa::has_data() const
{
    return (logging !=  nullptr && logging->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (vrf_names !=  nullptr && vrf_names->has_data());
}

bool Tpa::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (vrf_names !=  nullptr && vrf_names->has_operation());
}

std::string Tpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Tpa::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Tpa::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "vrf-names")
    {
        if(vrf_names == nullptr)
        {
            vrf_names = std::make_shared<Tpa::VrfNames>();
        }
        return vrf_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(vrf_names != nullptr)
    {
        children["vrf-names"] = vrf_names;
    }

    return children;
}

void Tpa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Tpa::clone_ptr() const
{
    return std::make_shared<Tpa>();
}

std::string Tpa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Tpa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Tpa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Tpa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Tpa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "statistics" || name == "vrf-names")
        return true;
    return false;
}

Tpa::Logging::Logging()
    :
    kim(std::make_shared<Tpa::Logging::Kim>())
{
    kim->parent = this;

    yang_name = "logging"; yang_parent_name = "tpa"; is_top_level_class = false; has_list_ancestor = false;
}

Tpa::Logging::~Logging()
{
}

bool Tpa::Logging::has_data() const
{
    return (kim !=  nullptr && kim->has_data());
}

bool Tpa::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (kim !=  nullptr && kim->has_operation());
}

std::string Tpa::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kim")
    {
        if(kim == nullptr)
        {
            kim = std::make_shared<Tpa::Logging::Kim>();
        }
        return kim;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(kim != nullptr)
    {
        children["kim"] = kim;
    }

    return children;
}

void Tpa::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kim")
        return true;
    return false;
}

Tpa::Logging::Kim::Kim()
    :
    file_size_max_kb{YType::int32, "file-size-max-kb"},
    rotation_max{YType::int32, "rotation-max"}
{

    yang_name = "kim"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Tpa::Logging::Kim::~Kim()
{
}

bool Tpa::Logging::Kim::has_data() const
{
    return file_size_max_kb.is_set
	|| rotation_max.is_set;
}

bool Tpa::Logging::Kim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(file_size_max_kb.yfilter)
	|| ydk::is_set(rotation_max.yfilter);
}

std::string Tpa::Logging::Kim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::Logging::Kim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::Logging::Kim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (file_size_max_kb.is_set || is_set(file_size_max_kb.yfilter)) leaf_name_data.push_back(file_size_max_kb.get_name_leafdata());
    if (rotation_max.is_set || is_set(rotation_max.yfilter)) leaf_name_data.push_back(rotation_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::Logging::Kim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::Logging::Kim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::Logging::Kim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "file-size-max-kb")
    {
        file_size_max_kb = value;
        file_size_max_kb.value_namespace = name_space;
        file_size_max_kb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotation-max")
    {
        rotation_max = value;
        rotation_max.value_namespace = name_space;
        rotation_max.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::Logging::Kim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "file-size-max-kb")
    {
        file_size_max_kb.yfilter = yfilter;
    }
    if(value_path == "rotation-max")
    {
        rotation_max.yfilter = yfilter;
    }
}

bool Tpa::Logging::Kim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file-size-max-kb" || name == "rotation-max")
        return true;
    return false;
}

Tpa::Statistics::Statistics()
    :
    max_intf_events{YType::int32, "max-intf-events"},
    max_lpts_events{YType::int32, "max-lpts-events"},
    statistics_update_frequency{YType::int32, "statistics-update-frequency"}
{

    yang_name = "statistics"; yang_parent_name = "tpa"; is_top_level_class = false; has_list_ancestor = false;
}

Tpa::Statistics::~Statistics()
{
}

bool Tpa::Statistics::has_data() const
{
    return max_intf_events.is_set
	|| max_lpts_events.is_set
	|| statistics_update_frequency.is_set;
}

bool Tpa::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_intf_events.yfilter)
	|| ydk::is_set(max_lpts_events.yfilter)
	|| ydk::is_set(statistics_update_frequency.yfilter);
}

std::string Tpa::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_intf_events.is_set || is_set(max_intf_events.yfilter)) leaf_name_data.push_back(max_intf_events.get_name_leafdata());
    if (max_lpts_events.is_set || is_set(max_lpts_events.yfilter)) leaf_name_data.push_back(max_lpts_events.get_name_leafdata());
    if (statistics_update_frequency.is_set || is_set(statistics_update_frequency.yfilter)) leaf_name_data.push_back(statistics_update_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-intf-events")
    {
        max_intf_events = value;
        max_intf_events.value_namespace = name_space;
        max_intf_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lpts-events")
    {
        max_lpts_events = value;
        max_lpts_events.value_namespace = name_space;
        max_lpts_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-update-frequency")
    {
        statistics_update_frequency = value;
        statistics_update_frequency.value_namespace = name_space;
        statistics_update_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-intf-events")
    {
        max_intf_events.yfilter = yfilter;
    }
    if(value_path == "max-lpts-events")
    {
        max_lpts_events.yfilter = yfilter;
    }
    if(value_path == "statistics-update-frequency")
    {
        statistics_update_frequency.yfilter = yfilter;
    }
}

bool Tpa::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-intf-events" || name == "max-lpts-events" || name == "statistics-update-frequency")
        return true;
    return false;
}

Tpa::VrfNames::VrfNames()
{

    yang_name = "vrf-names"; yang_parent_name = "tpa"; is_top_level_class = false; has_list_ancestor = false;
}

Tpa::VrfNames::~VrfNames()
{
}

bool Tpa::VrfNames::has_data() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::has_operation() const
{
    for (std::size_t index=0; index<vrf_name.size(); index++)
    {
        if(vrf_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::VrfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-name")
    {
        for(auto const & c : vrf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tpa::VrfNames::VrfName>();
        c->parent = this;
        vrf_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tpa::VrfNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::VrfName()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    address_family(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily>())
	,east_west_names(std::make_shared<Tpa::VrfNames::VrfName::EastWestNames>())
{
    address_family->parent = this;
    east_west_names->parent = this;

    yang_name = "vrf-name"; yang_parent_name = "vrf-names"; is_top_level_class = false; has_list_ancestor = false;
}

Tpa::VrfNames::VrfName::~VrfName()
{
}

bool Tpa::VrfNames::VrfName::has_data() const
{
    return vrf_name.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (east_west_names !=  nullptr && east_west_names->has_data());
}

bool Tpa::VrfNames::VrfName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (east_west_names !=  nullptr && east_west_names->has_operation());
}

std::string Tpa::VrfNames::VrfName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-kim-tpa-cfg:tpa/vrf-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Tpa::VrfNames::VrfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-name" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "east-west-names")
    {
        if(east_west_names == nullptr)
        {
            east_west_names = std::make_shared<Tpa::VrfNames::VrfName::EastWestNames>();
        }
        return east_west_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(east_west_names != nullptr)
    {
        children["east-west-names"] = east_west_names;
    }

    return children;
}

void Tpa::VrfNames::VrfName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "east-west-names" || name == "vrf-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "address-family"; yang_parent_name = "vrf-name"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::AddressFamily::~AddressFamily()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Tpa::VrfNames::VrfName::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::Ipv4()
    :
    default_route{YType::str, "default-route"},
    update_source{YType::str, "update-source"}
    	,
    lpts_allow_entries(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries>())
{
    lpts_allow_entries->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::~Ipv4()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_data() const
{
    return default_route.is_set
	|| update_source.is_set
	|| (lpts_allow_entries !=  nullptr && lpts_allow_entries->has_data());
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(update_source.yfilter)
	|| (lpts_allow_entries !=  nullptr && lpts_allow_entries->has_operation());
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.yfilter)) leaf_name_data.push_back(update_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpts-allow-entries")
    {
        if(lpts_allow_entries == nullptr)
        {
            lpts_allow_entries = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries>();
        }
        return lpts_allow_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lpts_allow_entries != nullptr)
    {
        children["lpts-allow-entries"] = lpts_allow_entries;
    }

    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source")
    {
        update_source = value;
        update_source.value_namespace = name_space;
        update_source.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "update-source")
    {
        update_source.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpts-allow-entries" || name == "default-route" || name == "update-source")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntries()
{

    yang_name = "lpts-allow-entries"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::~LptsAllowEntries()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::has_data() const
{
    for (std::size_t index=0; index<lpts_allow_entry.size(); index++)
    {
        if(lpts_allow_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::has_operation() const
{
    for (std::size_t index=0; index<lpts_allow_entry.size(); index++)
    {
        if(lpts_allow_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-allow-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpts-allow-entry")
    {
        for(auto const & c : lpts_allow_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry>();
        c->parent = this;
        lpts_allow_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lpts_allow_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpts-allow-entry")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::LptsAllowEntry()
    :
    interface_name{YType::str, "interface-name"},
    remote_addr{YType::str, "remote-addr"},
    local_addr{YType::str, "local-addr"},
    remote_port{YType::int32, "remote-port"},
    local_port{YType::int32, "local-port"},
    protocol{YType::int32, "protocol"},
    interface_name_xr{YType::str, "interface-name-xr"},
    local_addr_xr{YType::str, "local-addr-xr"},
    local_port_xr{YType::int32, "local-port-xr"},
    protocol_xr{YType::int32, "protocol-xr"},
    remote_addr_xr{YType::str, "remote-addr-xr"},
    remote_port_xr{YType::int32, "remote-port-xr"}
{

    yang_name = "lpts-allow-entry"; yang_parent_name = "lpts-allow-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::~LptsAllowEntry()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::has_data() const
{
    return interface_name.is_set
	|| remote_addr.is_set
	|| local_addr.is_set
	|| remote_port.is_set
	|| local_port.is_set
	|| protocol.is_set
	|| interface_name_xr.is_set
	|| local_addr_xr.is_set
	|| local_port_xr.is_set
	|| protocol_xr.is_set
	|| remote_addr_xr.is_set
	|| remote_port_xr.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(local_addr_xr.yfilter)
	|| ydk::is_set(local_port_xr.yfilter)
	|| ydk::is_set(protocol_xr.yfilter)
	|| ydk::is_set(remote_addr_xr.yfilter)
	|| ydk::is_set(remote_port_xr.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-allow-entry" <<"[interface-name='" <<interface_name <<"']" <<"[remote-addr='" <<remote_addr <<"']" <<"[local-addr='" <<local_addr <<"']" <<"[remote-port='" <<remote_port <<"']" <<"[local-port='" <<local_port <<"']" <<"[protocol='" <<protocol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (local_addr_xr.is_set || is_set(local_addr_xr.yfilter)) leaf_name_data.push_back(local_addr_xr.get_name_leafdata());
    if (local_port_xr.is_set || is_set(local_port_xr.yfilter)) leaf_name_data.push_back(local_port_xr.get_name_leafdata());
    if (protocol_xr.is_set || is_set(protocol_xr.yfilter)) leaf_name_data.push_back(protocol_xr.get_name_leafdata());
    if (remote_addr_xr.is_set || is_set(remote_addr_xr.yfilter)) leaf_name_data.push_back(remote_addr_xr.get_name_leafdata());
    if (remote_port_xr.is_set || is_set(remote_port_xr.yfilter)) leaf_name_data.push_back(remote_port_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr-xr")
    {
        local_addr_xr = value;
        local_addr_xr.value_namespace = name_space;
        local_addr_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port-xr")
    {
        local_port_xr = value;
        local_port_xr.value_namespace = name_space;
        local_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-xr")
    {
        protocol_xr = value;
        protocol_xr.value_namespace = name_space;
        protocol_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr-xr")
    {
        remote_addr_xr = value;
        remote_addr_xr.value_namespace = name_space;
        remote_addr_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port-xr")
    {
        remote_port_xr = value;
        remote_port_xr.value_namespace = name_space;
        remote_port_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "local-addr-xr")
    {
        local_addr_xr.yfilter = yfilter;
    }
    if(value_path == "local-port-xr")
    {
        local_port_xr.yfilter = yfilter;
    }
    if(value_path == "protocol-xr")
    {
        protocol_xr.yfilter = yfilter;
    }
    if(value_path == "remote-addr-xr")
    {
        remote_addr_xr.yfilter = yfilter;
    }
    if(value_path == "remote-port-xr")
    {
        remote_port_xr.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv4::LptsAllowEntries::LptsAllowEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "remote-addr" || name == "local-addr" || name == "remote-port" || name == "local-port" || name == "protocol" || name == "interface-name-xr" || name == "local-addr-xr" || name == "local-port-xr" || name == "protocol-xr" || name == "remote-addr-xr" || name == "remote-port-xr")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::Ipv6()
    :
    default_route{YType::str, "default-route"},
    update_source{YType::str, "update-source"}
    	,
    lpts_allow_entries(std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries>())
{
    lpts_allow_entries->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::~Ipv6()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_data() const
{
    return default_route.is_set
	|| update_source.is_set
	|| (lpts_allow_entries !=  nullptr && lpts_allow_entries->has_data());
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| ydk::is_set(update_source.yfilter)
	|| (lpts_allow_entries !=  nullptr && lpts_allow_entries->has_operation());
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (update_source.is_set || is_set(update_source.yfilter)) leaf_name_data.push_back(update_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpts-allow-entries")
    {
        if(lpts_allow_entries == nullptr)
        {
            lpts_allow_entries = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries>();
        }
        return lpts_allow_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lpts_allow_entries != nullptr)
    {
        children["lpts-allow-entries"] = lpts_allow_entries;
    }

    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source")
    {
        update_source = value;
        update_source.value_namespace = name_space;
        update_source.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
    if(value_path == "update-source")
    {
        update_source.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpts-allow-entries" || name == "default-route" || name == "update-source")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntries()
{

    yang_name = "lpts-allow-entries"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::~LptsAllowEntries()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::has_data() const
{
    for (std::size_t index=0; index<lpts_allow_entry.size(); index++)
    {
        if(lpts_allow_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::has_operation() const
{
    for (std::size_t index=0; index<lpts_allow_entry.size(); index++)
    {
        if(lpts_allow_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-allow-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lpts-allow-entry")
    {
        for(auto const & c : lpts_allow_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry>();
        c->parent = this;
        lpts_allow_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lpts_allow_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lpts-allow-entry")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::LptsAllowEntry()
    :
    interface_name{YType::str, "interface-name"},
    remote_addr{YType::str, "remote-addr"},
    local_addr{YType::str, "local-addr"},
    remote_port{YType::int32, "remote-port"},
    local_port{YType::int32, "local-port"},
    protocol{YType::int32, "protocol"},
    interface_name_xr{YType::str, "interface-name-xr"},
    local_addr_xr{YType::str, "local-addr-xr"},
    local_port_xr{YType::int32, "local-port-xr"},
    protocol_xr{YType::int32, "protocol-xr"},
    remote_addr_xr{YType::str, "remote-addr-xr"},
    remote_port_xr{YType::int32, "remote-port-xr"}
{

    yang_name = "lpts-allow-entry"; yang_parent_name = "lpts-allow-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::~LptsAllowEntry()
{
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::has_data() const
{
    return interface_name.is_set
	|| remote_addr.is_set
	|| local_addr.is_set
	|| remote_port.is_set
	|| local_port.is_set
	|| protocol.is_set
	|| interface_name_xr.is_set
	|| local_addr_xr.is_set
	|| local_port_xr.is_set
	|| protocol_xr.is_set
	|| remote_addr_xr.is_set
	|| remote_port_xr.is_set;
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(local_addr_xr.yfilter)
	|| ydk::is_set(local_port_xr.yfilter)
	|| ydk::is_set(protocol_xr.yfilter)
	|| ydk::is_set(remote_addr_xr.yfilter)
	|| ydk::is_set(remote_port_xr.yfilter);
}

std::string Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-allow-entry" <<"[interface-name='" <<interface_name <<"']" <<"[remote-addr='" <<remote_addr <<"']" <<"[local-addr='" <<local_addr <<"']" <<"[remote-port='" <<remote_port <<"']" <<"[local-port='" <<local_port <<"']" <<"[protocol='" <<protocol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (local_addr_xr.is_set || is_set(local_addr_xr.yfilter)) leaf_name_data.push_back(local_addr_xr.get_name_leafdata());
    if (local_port_xr.is_set || is_set(local_port_xr.yfilter)) leaf_name_data.push_back(local_port_xr.get_name_leafdata());
    if (protocol_xr.is_set || is_set(protocol_xr.yfilter)) leaf_name_data.push_back(protocol_xr.get_name_leafdata());
    if (remote_addr_xr.is_set || is_set(remote_addr_xr.yfilter)) leaf_name_data.push_back(remote_addr_xr.get_name_leafdata());
    if (remote_port_xr.is_set || is_set(remote_port_xr.yfilter)) leaf_name_data.push_back(remote_port_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr-xr")
    {
        local_addr_xr = value;
        local_addr_xr.value_namespace = name_space;
        local_addr_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port-xr")
    {
        local_port_xr = value;
        local_port_xr.value_namespace = name_space;
        local_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-xr")
    {
        protocol_xr = value;
        protocol_xr.value_namespace = name_space;
        protocol_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr-xr")
    {
        remote_addr_xr = value;
        remote_addr_xr.value_namespace = name_space;
        remote_addr_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port-xr")
    {
        remote_port_xr = value;
        remote_port_xr.value_namespace = name_space;
        remote_port_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "local-addr-xr")
    {
        local_addr_xr.yfilter = yfilter;
    }
    if(value_path == "local-port-xr")
    {
        local_port_xr.yfilter = yfilter;
    }
    if(value_path == "protocol-xr")
    {
        protocol_xr.yfilter = yfilter;
    }
    if(value_path == "remote-addr-xr")
    {
        remote_addr_xr.yfilter = yfilter;
    }
    if(value_path == "remote-port-xr")
    {
        remote_port_xr.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::AddressFamily::Ipv6::LptsAllowEntries::LptsAllowEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "remote-addr" || name == "local-addr" || name == "remote-port" || name == "local-port" || name == "protocol" || name == "interface-name-xr" || name == "local-addr-xr" || name == "local-port-xr" || name == "protocol-xr" || name == "remote-addr-xr" || name == "remote-port-xr")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestNames()
{

    yang_name = "east-west-names"; yang_parent_name = "vrf-name"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::EastWestNames::~EastWestNames()
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_data() const
{
    for (std::size_t index=0; index<east_west_name.size(); index++)
    {
        if(east_west_name[index]->has_data())
            return true;
    }
    return false;
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_operation() const
{
    for (std::size_t index=0; index<east_west_name.size(); index++)
    {
        if(east_west_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Tpa::VrfNames::VrfName::EastWestNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "east-west-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::EastWestNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::EastWestNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "east-west-name")
    {
        for(auto const & c : east_west_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Tpa::VrfNames::VrfName::EastWestNames::EastWestName>();
        c->parent = this;
        east_west_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::EastWestNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : east_west_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Tpa::VrfNames::VrfName::EastWestNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Tpa::VrfNames::VrfName::EastWestNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "east-west-name")
        return true;
    return false;
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestName::EastWestName()
    :
    east_west_name{YType::str, "east-west-name"},
    interface{YType::str, "interface"},
    vrf{YType::str, "vrf"}
{

    yang_name = "east-west-name"; yang_parent_name = "east-west-names"; is_top_level_class = false; has_list_ancestor = true;
}

Tpa::VrfNames::VrfName::EastWestNames::EastWestName::~EastWestName()
{
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_data() const
{
    return east_west_name.is_set
	|| interface.is_set
	|| vrf.is_set;
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(east_west_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "east-west-name" <<"[east-west-name='" <<east_west_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (east_west_name.is_set || is_set(east_west_name.yfilter)) leaf_name_data.push_back(east_west_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Tpa::VrfNames::VrfName::EastWestNames::EastWestName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Tpa::VrfNames::VrfName::EastWestNames::EastWestName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "east-west-name")
    {
        east_west_name = value;
        east_west_name.value_namespace = name_space;
        east_west_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Tpa::VrfNames::VrfName::EastWestNames::EastWestName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "east-west-name")
    {
        east_west_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Tpa::VrfNames::VrfName::EastWestNames::EastWestName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "east-west-name" || name == "interface" || name == "vrf")
        return true;
    return false;
}


}
}
