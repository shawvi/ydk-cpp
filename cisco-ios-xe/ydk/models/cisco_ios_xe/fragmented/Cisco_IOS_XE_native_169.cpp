
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_169.hpp"
#include "Cisco_IOS_XE_native_170.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Vrf()
    :
    global(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::has_data() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "non-global-vrf")
    {
        for(auto const & c : non_global_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf>();
        c->parent = this;
        non_global_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    for (auto const & c : non_global_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "non-global-vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Global()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::NonGlobalVrf()
    :
    name{YType::str, "name"}
    	,
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "non-global-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::~NonGlobalVrf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return name.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-global-vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::~Static_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    not_advertise{YType::empty, "not-advertise"},
    nssa_only{YType::empty, "nssa-only"},
    tag{YType::uint32, "tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::~SummaryPrefix()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| not_advertise.is_set
	|| nssa_only.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "not-advertise" || name == "nssa-only" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Timers()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa>())
	,pacing(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing>())
	,throttle(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle>())
{
    lsa->parent = this;
    pacing->parent = this;
    throttle->parent = this;

    yang_name = "timers"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::~Timers()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (pacing !=  nullptr && pacing->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "pacing")
    {
        if(pacing == nullptr)
        {
            pacing = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing>();
        }
        return pacing;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(pacing != nullptr)
    {
        children["pacing"] = pacing;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "pacing" || name == "throttle")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::Lsa()
    :
    arrival{YType::uint32, "arrival"}
{

    yang_name = "lsa"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::has_data() const
{
    return arrival.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arrival.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.yfilter)) leaf_name_data.push_back(arrival.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arrival")
    {
        arrival = value;
        arrival.value_namespace = name_space;
        arrival.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arrival")
    {
        arrival.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arrival")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    lsa_group{YType::uint32, "lsa-group"},
    retransmission{YType::uint32, "retransmission"}
{

    yang_name = "pacing"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::~Pacing()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::has_data() const
{
    return flood.is_set
	|| lsa_group.is_set
	|| retransmission.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flood.yfilter)
	|| ydk::is_set(lsa_group.yfilter)
	|| ydk::is_set(retransmission.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.yfilter)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.yfilter)) leaf_name_data.push_back(lsa_group.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood")
    {
        flood = value;
        flood.value_namespace = name_space;
        flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group")
    {
        lsa_group = value;
        lsa_group.value_namespace = name_space;
        lsa_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission")
    {
        retransmission = value;
        retransmission.value_namespace = name_space;
        retransmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood")
    {
        flood.yfilter = yfilter;
    }
    if(value_path == "lsa-group")
    {
        lsa_group.yfilter = yfilter;
    }
    if(value_path == "retransmission")
    {
        retransmission.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "lsa-group" || name == "retransmission")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa>())
	,spf(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    spf->parent = this;

    yang_name = "throttle"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::~Throttle()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf>();
        }
        return spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(spf != nullptr)
    {
        children["spf"] = spf;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "spf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::Lsa()
    :
    all(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All>())
{
    all->parent = this;

    yang_name = "lsa"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::All()
    :
    delay{YType::uint32, "delay"},
    max_delay{YType::uint32, "max-delay"},
    min_delay{YType::uint32, "min-delay"}
{

    yang_name = "all"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::~All()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::has_data() const
{
    return delay.is_set
	|| max_delay.is_set
	|| min_delay.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(max_delay.yfilter)
	|| ydk::is_set(min_delay.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "max-delay" || name == "min-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::Spf()
    :
    delay{YType::uint32, "delay"},
    max_delay{YType::uint32, "max-delay"},
    min_delay{YType::uint32, "min-delay"}
{

    yang_name = "spf"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::~Spf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::has_data() const
{
    return delay.is_set
	|| max_delay.is_set
	|| min_delay.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(max_delay.yfilter)
	|| ydk::is_set(min_delay.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "max-delay" || name == "min-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::TrafficShare()
    :
    across_interfaces{YType::empty, "across-interfaces"},
    min{YType::empty, "min"}
{

    yang_name = "traffic-share"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::has_data() const
{
    return across_interfaces.is_set
	|| min.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces" || name == "min")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::TtlSecurity()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::has_data() const
{
    return all_interfaces.is_set
	|| hops.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Vrf()
    :
    vrf{YType::str, "vrf"},
    default_metric{YType::uint32, "default-metric"},
    maximum_paths{YType::uint32, "maximum-paths"},
    nsr{YType::empty, "nsr"},
    router_id{YType::str, "router-id"},
    unicast{YType::empty, "unicast"}
    	,
    authentication(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication>())
	,auto_cost(nullptr) // presence node
	,bfd(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd>())
	,capability(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability>())
	,compatible(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible>())
	,default_information(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation>())
	,disable(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable>())
	,discard_route(nullptr) // presence node
	,distance(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance>())
	,event_log(nullptr) // presence node
	,graceful_restart(nullptr) // presence node
	,interface_id(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId>())
	,log_adjacency_changes(nullptr) // presence node
	,manet(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet>())
	,max_lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa>())
	,max_metric(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric>())
	,passive_interface(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface>())
	,queue_depth(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth>())
	,redistribute(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute>())
	,timers(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers>())
	,traffic_share(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare>())
	,ttl_security(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity>())
{
    authentication->parent = this;
    bfd->parent = this;
    capability->parent = this;
    compatible->parent = this;
    default_information->parent = this;
    disable->parent = this;
    distance->parent = this;
    interface_id->parent = this;
    manet->parent = this;
    max_lsa->parent = this;
    max_metric->parent = this;
    passive_interface->parent = this;
    queue_depth->parent = this;
    redistribute->parent = this;
    timers->parent = this;
    traffic_share->parent = this;
    ttl_security->parent = this;

    yang_name = "vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::~Vrf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return vrf.is_set
	|| default_metric.is_set
	|| maximum_paths.is_set
	|| nsr.is_set
	|| router_id.is_set
	|| unicast.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (compatible !=  nullptr && compatible->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (discard_route !=  nullptr && discard_route->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (event_log !=  nullptr && event_log->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (interface_id !=  nullptr && interface_id->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (max_lsa !=  nullptr && max_lsa->has_data())
	|| (max_metric !=  nullptr && max_metric->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (queue_depth !=  nullptr && queue_depth->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (compatible !=  nullptr && compatible->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (discard_route !=  nullptr && discard_route->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (event_log !=  nullptr && event_log->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (interface_id !=  nullptr && interface_id->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (max_lsa !=  nullptr && max_lsa->has_operation())
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (queue_depth !=  nullptr && queue_depth->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "compatible")
    {
        if(compatible == nullptr)
        {
            compatible = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible>();
        }
        return compatible;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "discard-route")
    {
        if(discard_route == nullptr)
        {
            discard_route = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute>();
        }
        return discard_route;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "interface-id")
    {
        if(interface_id == nullptr)
        {
            interface_id = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId>();
        }
        return interface_id;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "max-lsa")
    {
        if(max_lsa == nullptr)
        {
            max_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa>();
        }
        return max_lsa;
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric>();
        }
        return max_metric;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "queue-depth")
    {
        if(queue_depth == nullptr)
        {
            queue_depth = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth>();
        }
        return queue_depth;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(auto_cost != nullptr)
    {
        children["auto-cost"] = auto_cost;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(compatible != nullptr)
    {
        children["compatible"] = compatible;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(discard_route != nullptr)
    {
        children["discard-route"] = discard_route;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(interface_id != nullptr)
    {
        children["interface-id"] = interface_id;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(max_lsa != nullptr)
    {
        children["max-lsa"] = max_lsa;
    }

    if(max_metric != nullptr)
    {
        children["max-metric"] = max_metric;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(queue_depth != nullptr)
    {
        children["queue-depth"] = queue_depth;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    for (auto const & c : summary_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "auto-cost" || name == "bfd" || name == "capability" || name == "compatible" || name == "default-information" || name == "disable" || name == "discard-route" || name == "distance" || name == "event-log" || name == "graceful-restart" || name == "interface-id" || name == "log-adjacency-changes" || name == "manet" || name == "max-lsa" || name == "max-metric" || name == "passive-interface" || name == "queue-depth" || name == "redistribute" || name == "summary-prefix" || name == "timers" || name == "traffic-share" || name == "ttl-security" || name == "vrf" || name == "default-metric" || name == "maximum-paths" || name == "nsr" || name == "router-id" || name == "unicast")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Area()
    :
    id{YType::str, "id"},
    default_cost{YType::uint32, "default-cost"}
    	,
    authentication(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability>())
	,ipv4_range(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range>())
	,ipv6_range(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range>())
	,nssa(nullptr) // presence node
	,stub(nullptr) // presence node
{
    capability->parent = this;
    ipv4_range->parent = this;
    ipv6_range->parent = this;

    yang_name = "area"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::~Area()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::has_data() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return id.is_set
	|| default_cost.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (ipv4_range !=  nullptr && ipv4_range->has_data())
	|| (ipv6_range !=  nullptr && ipv6_range->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::has_operation() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (ipv4_range !=  nullptr && ipv4_range->has_operation())
	|| (ipv6_range !=  nullptr && ipv6_range->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "filter-list")
    {
        for(auto const & c : filter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-range")
    {
        if(ipv4_range == nullptr)
        {
            ipv4_range = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range>();
        }
        return ipv4_range;
    }

    if(child_yang_name == "ipv6-range")
    {
        if(ipv6_range == nullptr)
        {
            ipv6_range = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range>();
        }
        return ipv6_range;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "sham-link")
    {
        for(auto const & c : sham_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub>();
        }
        return stub;
    }

    if(child_yang_name == "virtual-link")
    {
        for(auto const & c : virtual_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    for (auto const & c : filter_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv4_range != nullptr)
    {
        children["ipv4-range"] = ipv4_range;
    }

    if(ipv6_range != nullptr)
    {
        children["ipv6-range"] = ipv6_range;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    for (auto const & c : sham_link)
    {
        children[c->get_segment_path()] = c;
    }

    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "capability" || name == "filter-list" || name == "ipv4-range" || name == "ipv6-range" || name == "nssa" || name == "sham-link" || name == "stub" || name == "virtual-link" || name == "id" || name == "default-cost")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"}
{

    yang_name = "authentication"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::has_data() const
{
    return message_digest.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_digest.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.yfilter)) leaf_name_data.push_back(message_digest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
        message_digest.value_namespace = name_space;
        message_digest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-digest")
    {
        message_digest.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::Capability()
    :
    default_exclusion{YType::empty, "default-exclusion"}
{

    yang_name = "capability"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::~Capability()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::has_data() const
{
    return default_exclusion.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_exclusion.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_exclusion.is_set || is_set(default_exclusion.yfilter)) leaf_name_data.push_back(default_exclusion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion = value;
        default_exclusion.value_namespace = name_space;
        default_exclusion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-exclusion")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::FilterList()
    :
    in_out{YType::enumeration, "in-out"},
    prefix{YType::str, "prefix"}
{

    yang_name = "filter-list"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::~FilterList()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::has_data() const
{
    return in_out.is_set
	|| prefix.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "prefix")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Ipv4Range()
{

    yang_name = "ipv4-range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::~Ipv4Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::Range()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    advertise{YType::empty, "advertise"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::empty, "not-advertise"}
{

    yang_name = "range"; yang_parent_name = "ipv4-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::~Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| advertise.is_set
	|| cost.is_set
	|| not_advertise.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv4Range::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mask" || name == "advertise" || name == "cost" || name == "not-advertise")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Ipv6Range()
{

    yang_name = "ipv6-range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::~Ipv6Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::Range()
    :
    ip{YType::str, "ip"},
    advertise{YType::empty, "advertise"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::empty, "not-advertise"}
{

    yang_name = "range"; yang_parent_name = "ipv6-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::~Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::has_data() const
{
    return ip.is_set
	|| advertise.is_set
	|| cost.is_set
	|| not_advertise.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Ipv6Range::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "advertise" || name == "cost" || name == "not-advertise")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Nssa()
    :
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_redistribution{YType::empty, "no-redistribution"},
    no_summary{YType::empty, "no-summary"},
    nssa_only{YType::empty, "nssa-only"}
    	,
    default_information_originate(nullptr) // presence node
	,translate(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate>())
{
    translate->parent = this;

    yang_name = "nssa"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::~Nssa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::has_data() const
{
    return no_ext_capability.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_only.is_set
	|| (default_information_originate !=  nullptr && default_information_originate->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (default_information_originate !=  nullptr && default_information_originate->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information-originate")
    {
        if(default_information_originate == nullptr)
        {
            default_information_originate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate>();
        }
        return default_information_originate;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_information_originate != nullptr)
    {
        children["default-information-originate"] = default_information_originate;
    }

    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-information-originate" || name == "translate" || name == "no-ext-capability" || name == "no-redistribution" || name == "no-summary" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::DefaultInformationOriginate()
    :
    metric{YType::int32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_redistribution{YType::empty, "no-redistribution"},
    no_summary{YType::empty, "no-summary"},
    nssa_only{YType::empty, "nssa-only"}
    	,
    translate(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate>())
{
    translate->parent = this;

    yang_name = "default-information-originate"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::~DefaultInformationOriginate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| no_ext_capability.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_only.is_set
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "translate" || name == "metric" || name == "metric-type" || name == "no-ext-capability" || name == "no-redistribution" || name == "no-summary" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Translate()
    :
    type7(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7>())
{
    type7->parent = this;

    yang_name = "translate"; yang_parent_name = "default-information-originate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::~Translate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::has_data() const
{
    return (type7 !=  nullptr && type7->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (type7 !=  nullptr && type7->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type7")
    {
        if(type7 == nullptr)
        {
            type7 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7>();
        }
        return type7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type7 != nullptr)
    {
        children["type7"] = type7;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type7")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::Type7()
    :
    always{YType::empty, "always"},
    suppress_fa{YType::empty, "suppress-fa"}
{

    yang_name = "type7"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::~Type7()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_data() const
{
    return always.is_set
	|| suppress_fa.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(suppress_fa.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (suppress_fa.is_set || is_set(suppress_fa.yfilter)) leaf_name_data.push_back(suppress_fa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa = value;
        suppress_fa.value_namespace = name_space;
        suppress_fa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "suppress-fa")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Translate()
    :
    type7(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7>())
{
    type7->parent = this;

    yang_name = "translate"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::~Translate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::has_data() const
{
    return (type7 !=  nullptr && type7->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (type7 !=  nullptr && type7->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type7")
    {
        if(type7 == nullptr)
        {
            type7 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7>();
        }
        return type7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type7 != nullptr)
    {
        children["type7"] = type7;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type7")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::Type7()
    :
    always{YType::empty, "always"},
    suppress_fa{YType::empty, "suppress-fa"}
{

    yang_name = "type7"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::~Type7()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::has_data() const
{
    return always.is_set
	|| suppress_fa.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(suppress_fa.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (suppress_fa.is_set || is_set(suppress_fa.yfilter)) leaf_name_data.push_back(suppress_fa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa = value;
        suppress_fa.value_namespace = name_space;
        suppress_fa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Nssa::Translate::Type7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "suppress-fa")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::ShamLink()
    :
    source{YType::str, "source"},
    dest{YType::str, "dest"},
    cost{YType::uint16, "cost"}
    	,
    ttl_security(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity>())
{
    ttl_security->parent = this;

    yang_name = "sham-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::~ShamLink()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::has_data() const
{
    return source.is_set
	|| dest.is_set
	|| cost.is_set
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(dest.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[source='" <<source <<"']" <<"[dest='" <<dest <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (dest.is_set || is_set(dest.yfilter)) leaf_name_data.push_back(dest.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest")
    {
        dest = value;
        dest.value_namespace = name_space;
        dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "dest")
    {
        dest.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-security" || name == "source" || name == "dest" || name == "cost")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::ShamLink::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::Stub()
    :
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_summary{YType::empty, "no-summary"}
{

    yang_name = "stub"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::~Stub()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::has_data() const
{
    return no_ext_capability.is_set
	|| no_summary.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_summary.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-ext-capability" || name == "no-summary")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::VirtualLink()
    :
    id{YType::str, "id"}
    	,
    authentication(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication>())
	,authentication_key(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey>())
	,dead_interval(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval>())
	,hello_interval(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval>())
	,retransmit_interval(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval>())
	,topology(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology>())
	,transmit_delay(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay>())
	,ttl_security(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity>())
{
    authentication->parent = this;
    authentication_key->parent = this;
    dead_interval->parent = this;
    hello_interval->parent = this;
    retransmit_interval->parent = this;
    topology->parent = this;
    transmit_delay->parent = this;
    ttl_security->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::~VirtualLink()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return id.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (retransmit_interval !=  nullptr && retransmit_interval->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (transmit_delay !=  nullptr && transmit_delay->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (retransmit_interval !=  nullptr && retransmit_interval->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (transmit_delay !=  nullptr && transmit_delay->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmit-interval")
    {
        if(retransmit_interval == nullptr)
        {
            retransmit_interval = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval>();
        }
        return retransmit_interval;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "transmit-delay")
    {
        if(transmit_delay == nullptr)
        {
            transmit_delay = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay>();
        }
        return transmit_delay;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(dead_interval != nullptr)
    {
        children["dead-interval"] = dead_interval;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(retransmit_interval != nullptr)
    {
        children["retransmit-interval"] = retransmit_interval;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(transmit_delay != nullptr)
    {
        children["transmit-delay"] = transmit_delay;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "authentication-key" || name == "dead-interval" || name == "hello-interval" || name == "message-digest-key" || name == "retransmit-interval" || name == "topology" || name == "transmit-delay" || name == "ttl-security" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::Authentication()
    :
    null{YType::empty, "null"}
    	,
    authentication_key(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey>())
	,key_chain(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain>())
	,message_digest(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest>())
{
    authentication_key->parent = this;
    key_chain->parent = this;
    message_digest->parent = this;

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return null.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (message_digest !=  nullptr && message_digest->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (message_digest !=  nullptr && message_digest->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "message-digest")
    {
        if(message_digest == nullptr)
        {
            message_digest = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest>();
        }
        return message_digest;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(message_digest != nullptr)
    {
        children["message-digest"] = message_digest;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "key-chain" || name == "message-digest" || name == "message-digest-key" || name == "null")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
    	,
    authentication_key(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return name.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "message-digest-key" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::Md5()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigest()
    :
    authentication_key(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "message-digest"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::~MessageDigest()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "message-digest-key")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "message-digest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "message-digest"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::Md5()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::Md5()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::DeadInterval()
    :
    dead_interval_value{YType::uint16, "dead-interval-value"}
{

    yang_name = "dead-interval"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::~DeadInterval()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::has_data() const
{
    return dead_interval_value.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dead_interval_value.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval_value.is_set || is_set(dead_interval_value.yfilter)) leaf_name_data.push_back(dead_interval_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dead-interval-value")
    {
        dead_interval_value = value;
        dead_interval_value.value_namespace = name_space;
        dead_interval_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dead-interval-value")
    {
        dead_interval_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dead-interval-value")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::HelloInterval()
    :
    hello_interval_value{YType::int32, "hello-interval-value"}
{

    yang_name = "hello-interval"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::~HelloInterval()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::has_data() const
{
    return hello_interval_value.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello_interval_value.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_interval_value.is_set || is_set(hello_interval_value.yfilter)) leaf_name_data.push_back(hello_interval_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello-interval-value")
    {
        hello_interval_value = value;
        hello_interval_value.value_namespace = name_space;
        hello_interval_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello-interval-value")
    {
        hello_interval_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-value")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::Md5()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "md5"; yang_parent_name = "message-digest-key"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::RetransmitInterval()
    :
    retransmit_interval_value{YType::uint16, "retransmit-interval-value"}
{

    yang_name = "retransmit-interval"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::~RetransmitInterval()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::has_data() const
{
    return retransmit_interval_value.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmit_interval_value.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmit_interval_value.is_set || is_set(retransmit_interval_value.yfilter)) leaf_name_data.push_back(retransmit_interval_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmit-interval-value")
    {
        retransmit_interval_value = value;
        retransmit_interval_value.value_namespace = name_space;
        retransmit_interval_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmit-interval-value")
    {
        retransmit_interval_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmit-interval-value")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::Topology()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "topology"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::~Topology()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::has_data() const
{
    return disable.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::TransmitDelay()
    :
    transmit_delay_value{YType::uint16, "transmit-delay-value"}
{

    yang_name = "transmit-delay"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::~TransmitDelay()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::has_data() const
{
    return transmit_delay_value.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit_delay_value.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit_delay_value.is_set || is_set(transmit_delay_value.yfilter)) leaf_name_data.push_back(transmit_delay_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit-delay-value")
    {
        transmit_delay_value = value;
        transmit_delay_value.value_namespace = name_space;
        transmit_delay_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit-delay-value")
    {
        transmit_delay_value.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit-delay-value")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::Authentication()
    :
    mode{YType::enumeration, "mode"}
{

    yang_name = "authentication"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::has_data() const
{
    return mode.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::AutoCost()
    :
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{

    yang_name = "auto-cost"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::~AutoCost()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::has_data() const
{
    return reference_bandwidth.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reference-bandwidth")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
{

    yang_name = "bfd"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::~Bfd()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::has_data() const
{
    return all_interfaces.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::Capability()
    :
    capability_type{YType::enumeration, "capability-type"}
{

    yang_name = "capability"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::~Capability()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::has_data() const
{
    return capability_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capability_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_type.is_set || is_set(capability_type.yfilter)) leaf_name_data.push_back(capability_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capability-type")
    {
        capability_type = value;
        capability_type.value_namespace = name_space;
        capability_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capability-type")
    {
        capability_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capability-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::Compatible()
    :
    rfc1583{YType::empty, "rfc1583"},
    rfc1587{YType::empty, "rfc1587"},
    rfc5243{YType::empty, "rfc5243"}
{

    yang_name = "compatible"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::~Compatible()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::has_data() const
{
    return rfc1583.is_set
	|| rfc1587.is_set
	|| rfc5243.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rfc1583.yfilter)
	|| ydk::is_set(rfc1587.yfilter)
	|| ydk::is_set(rfc5243.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compatible";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rfc1583.is_set || is_set(rfc1583.yfilter)) leaf_name_data.push_back(rfc1583.get_name_leafdata());
    if (rfc1587.is_set || is_set(rfc1587.yfilter)) leaf_name_data.push_back(rfc1587.get_name_leafdata());
    if (rfc5243.is_set || is_set(rfc5243.yfilter)) leaf_name_data.push_back(rfc5243.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rfc1583")
    {
        rfc1583 = value;
        rfc1583.value_namespace = name_space;
        rfc1583.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc1587")
    {
        rfc1587 = value;
        rfc1587.value_namespace = name_space;
        rfc1587.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rfc5243")
    {
        rfc5243 = value;
        rfc5243.value_namespace = name_space;
        rfc5243.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rfc1583")
    {
        rfc1583.yfilter = yfilter;
    }
    if(value_path == "rfc1587")
    {
        rfc1587.yfilter = yfilter;
    }
    if(value_path == "rfc5243")
    {
        rfc5243.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rfc1583" || name == "rfc1587" || name == "rfc5243")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::Originate()
    :
    always{YType::empty, "always"},
    metric{YType::uint32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    route_map{YType::str, "route-map"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::has_data() const
{
    return always.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::Disable()
{

    yang_name = "disable"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::~Disable()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::has_data() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::has_operation() const
{
    for (std::size_t index=0; index<passive_interface.size(); index++)
    {
        if(passive_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "passive-interface")
    {
        for(auto const & c : passive_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface>();
        c->parent = this;
        passive_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : passive_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-interface")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::PassiveInterface()
    :
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::DiscardRoute()
    :
    external{YType::empty, "external"},
    internal{YType::empty, "internal"},
    metric{YType::uint32, "metric"}
{

    yang_name = "discard-route"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::~DiscardRoute()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::has_data() const
{
    return external.is_set
	|| internal.is_set
	|| metric.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Distance()
    :
    ospf(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf>())
	,ospf_distance(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance>())
{
    ospf->parent = this;
    ospf_distance->parent = this;

    yang_name = "distance"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::~Distance()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::has_data() const
{
    return (ospf !=  nullptr && ospf->has_data())
	|| (ospf_distance !=  nullptr && ospf_distance->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (ospf_distance !=  nullptr && ospf_distance->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "ospf-distance")
    {
        if(ospf_distance == nullptr)
        {
            ospf_distance = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance>();
        }
        return ospf_distance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(ospf_distance != nullptr)
    {
        children["ospf-distance"] = ospf_distance;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf" || name == "ospf-distance")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::Ospf()
    :
    external{YType::uint32, "external"},
    inter_area{YType::uint32, "inter-area"},
    intra_area{YType::uint32, "intra-area"}
{

    yang_name = "ospf"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::has_data() const
{
    return external.is_set
	|| inter_area.is_set
	|| intra_area.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(inter_area.yfilter)
	|| ydk::is_set(intra_area.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.yfilter)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (intra_area.is_set || is_set(intra_area.yfilter)) leaf_name_data.push_back(intra_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
        inter_area.value_namespace = name_space;
        inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-area")
    {
        intra_area = value;
        intra_area.value_namespace = name_space;
        intra_area.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "inter-area")
    {
        inter_area.yfilter = yfilter;
    }
    if(value_path == "intra-area")
    {
        intra_area.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "inter-area" || name == "intra-area")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::OspfDistance()
    :
    acl_name{YType::str, "acl-name"},
    distance{YType::uint32, "distance"},
    ip{YType::str, "ip"},
    wildcard{YType::str, "wildcard"}
{

    yang_name = "ospf-distance"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::~OspfDistance()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::has_data() const
{
    return acl_name.is_set
	|| distance.is_set
	|| ip.is_set
	|| wildcard.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(wildcard.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "distance" || name == "ip" || name == "wildcard")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::EventLog()
    :
    one_shot{YType::empty, "one-shot"},
    pause{YType::empty, "pause"},
    size{YType::uint32, "size"}
{

    yang_name = "event-log"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::~EventLog()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::has_data() const
{
    return one_shot.is_set
	|| pause.is_set
	|| size.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(one_shot.yfilter)
	|| ydk::is_set(pause.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one_shot.is_set || is_set(one_shot.yfilter)) leaf_name_data.push_back(one_shot.get_name_leafdata());
    if (pause.is_set || is_set(pause.yfilter)) leaf_name_data.push_back(pause.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "one-shot")
    {
        one_shot = value;
        one_shot.value_namespace = name_space;
        one_shot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pause")
    {
        pause = value;
        pause.value_namespace = name_space;
        pause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "one-shot")
    {
        one_shot.yfilter = yfilter;
    }
    if(value_path == "pause")
    {
        pause.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one-shot" || name == "pause" || name == "size")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"},
    restart_interval{YType::uint16, "restart-interval"}
    	,
    helper(nullptr) // presence node
{

    yang_name = "graceful-restart"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::has_data() const
{
    return disable.is_set
	|| restart_interval.is_set
	|| (helper !=  nullptr && helper->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(restart_interval.yfilter)
	|| (helper !=  nullptr && helper->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (restart_interval.is_set || is_set(restart_interval.yfilter)) leaf_name_data.push_back(restart_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper>();
        }
        return helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-interval")
    {
        restart_interval = value;
        restart_interval.value_namespace = name_space;
        restart_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "restart-interval")
    {
        restart_interval.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper" || name == "disable" || name == "restart-interval")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::Helper()
    :
    disable{YType::empty, "disable"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{

    yang_name = "helper"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::~Helper()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::has_data() const
{
    return disable.is_set
	|| strict_lsa_checking.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(strict_lsa_checking.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.yfilter)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
        strict_lsa_checking.value_namespace = name_space;
        strict_lsa_checking.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::GracefulRestart::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "strict-lsa-checking")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::InterfaceId()
    :
    snmp_if_index{YType::empty, "snmp-if-index"}
{

    yang_name = "interface-id"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::~InterfaceId()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::has_data() const
{
    return snmp_if_index.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp_if_index.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp_if_index.is_set || is_set(snmp_if_index.yfilter)) leaf_name_data.push_back(snmp_if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index = value;
        snmp_if_index.value_namespace = name_space;
        snmp_if_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp-if-index")
    {
        snmp_if_index.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp-if-index")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::LogAdjacencyChanges()
    :
    detail{YType::empty, "detail"}
{

    yang_name = "log-adjacency-changes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::~LogAdjacencyChanges()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::has_data() const
{
    return detail.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detail.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-adjacency-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detail.is_set || is_set(detail.yfilter)) leaf_name_data.push_back(detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detail")
    {
        detail = value;
        detail.value_namespace = name_space;
        detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detail")
    {
        detail.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Manet()
    :
    hello{YType::enumeration, "hello"},
    willingness{YType::uint8, "willingness"}
    	,
    cache(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache>())
	,peering(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering>())
{
    cache->parent = this;
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::~Manet()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::has_data() const
{
    return hello.is_set
	|| willingness.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (peering !=  nullptr && peering->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(willingness.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (willingness.is_set || is_set(willingness.yfilter)) leaf_name_data.push_back(willingness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "willingness")
    {
        willingness = value;
        willingness.value_namespace = name_space;
        willingness.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "willingness")
    {
        willingness.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "peering" || name == "hello" || name == "willingness")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::Cache()
    :
    acknowledgement{YType::uint64, "acknowledgement"},
    update{YType::uint64, "update"}
{

    yang_name = "cache"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::~Cache()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::has_data() const
{
    return acknowledgement.is_set
	|| update.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acknowledgement" || name == "update")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Peering()
    :
    selective(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective>())
{
    selective->parent = this;

    yang_name = "peering"; yang_parent_name = "manet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::~Peering()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::has_data() const
{
    return (selective !=  nullptr && selective->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::has_operation() const
{
    return is_set(yfilter)
	|| (selective !=  nullptr && selective->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selective")
    {
        if(selective == nullptr)
        {
            selective = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective>();
        }
        return selective;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(selective != nullptr)
    {
        children["selective"] = selective;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selective")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::Selective()
    :
    disable{YType::empty, "disable"},
    per_interface{YType::empty, "per-interface"},
    redundancy{YType::uint8, "redundancy"}
{

    yang_name = "selective"; yang_parent_name = "peering"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::~Selective()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::has_data() const
{
    return disable.is_set
	|| per_interface.is_set
	|| redundancy.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(per_interface.yfilter)
	|| ydk::is_set(redundancy.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selective";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (per_interface.is_set || is_set(per_interface.yfilter)) leaf_name_data.push_back(per_interface.get_name_leafdata());
    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-interface")
    {
        per_interface = value;
        per_interface.value_namespace = name_space;
        per_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "per-interface")
    {
        per_interface.yfilter = yfilter;
    }
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Peering::Selective::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "per-interface" || name == "redundancy")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::MaxLsa()
    :
    ignore_count{YType::uint32, "ignore-count"},
    ignore_time{YType::uint32, "ignore-time"},
    number{YType::uint32, "number"},
    reset_time{YType::uint32, "reset-time"},
    threshold_value{YType::uint32, "threshold-value"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "max-lsa"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::~MaxLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::has_data() const
{
    return ignore_count.is_set
	|| ignore_time.is_set
	|| number.is_set
	|| reset_time.is_set
	|| threshold_value.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_count.yfilter)
	|| ydk::is_set(ignore_time.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(reset_time.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_count.is_set || is_set(ignore_count.yfilter)) leaf_name_data.push_back(ignore_count.get_name_leafdata());
    if (ignore_time.is_set || is_set(ignore_time.yfilter)) leaf_name_data.push_back(ignore_time.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (reset_time.is_set || is_set(reset_time.yfilter)) leaf_name_data.push_back(reset_time.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-count")
    {
        ignore_count = value;
        ignore_count.value_namespace = name_space;
        ignore_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-time")
    {
        ignore_time = value;
        ignore_time.value_namespace = name_space;
        ignore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-time")
    {
        reset_time = value;
        reset_time.value_namespace = name_space;
        reset_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-count")
    {
        ignore_count.yfilter = yfilter;
    }
    if(value_path == "ignore-time")
    {
        ignore_time.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "reset-time")
    {
        reset_time.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-count" || name == "ignore-time" || name == "number" || name == "reset-time" || name == "threshold-value" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::MaxMetric()
    :
    router_lsa(nullptr) // presence node
{

    yang_name = "max-metric"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::~MaxMetric()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::has_data() const
{
    return (router_lsa !=  nullptr && router_lsa->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| (router_lsa !=  nullptr && router_lsa->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router-lsa")
    {
        if(router_lsa == nullptr)
        {
            router_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa>();
        }
        return router_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router_lsa != nullptr)
    {
        children["router-lsa"] = router_lsa;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-lsa")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::RouterLsa()
    :
    include_stub{YType::empty, "include-stub"}
    	,
    external_lsa(nullptr) // presence node
	,on_startup(nullptr) // presence node
	,summary_lsa(nullptr) // presence node
{

    yang_name = "router-lsa"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::~RouterLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::has_data() const
{
    return include_stub.is_set
	|| (external_lsa !=  nullptr && external_lsa->has_data())
	|| (on_startup !=  nullptr && on_startup->has_data())
	|| (summary_lsa !=  nullptr && summary_lsa->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| (external_lsa !=  nullptr && external_lsa->has_operation())
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (summary_lsa !=  nullptr && summary_lsa->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-lsa")
    {
        if(external_lsa == nullptr)
        {
            external_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa>();
        }
        return external_lsa;
    }

    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "summary-lsa")
    {
        if(summary_lsa == nullptr)
        {
            summary_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa>();
        }
        return summary_lsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_lsa != nullptr)
    {
        children["external-lsa"] = external_lsa;
    }

    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(summary_lsa != nullptr)
    {
        children["summary-lsa"] = summary_lsa;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-lsa" || name == "on-startup" || name == "summary-lsa" || name == "include-stub")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::ExternalLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "external-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::~ExternalLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::has_data() const
{
    return metric.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::OnStartup()
    :
    time{YType::uint32, "time"},
    wait_for_bgp{YType::empty, "wait-for-bgp"}
{

    yang_name = "on-startup"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::~OnStartup()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::has_data() const
{
    return time.is_set
	|| wait_for_bgp.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::Global::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute::Vrf::NonGlobalVrf::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::InOut::in {0, "in"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::FilterList::InOut::out {1, "out"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::Mode::deployment {0, "deployment"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::Mode::normal {1, "normal"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Authentication::Mode::strict {2, "strict"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::CapabilityType::lls {0, "lls"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::CapabilityType::opaque {1, "opaque"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::CapabilityType::transit {2, "transit"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::CapabilityType::vrf_lite {3, "vrf-lite"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Hello::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Manet::Hello::multicast {1, "multicast"};


}
}
