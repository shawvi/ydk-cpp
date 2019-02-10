
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_42.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_43.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| usable.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(usable.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        _children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count_ = 0;
    for (auto ent_ : segment_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable")
    {
        usable = value;
        usable.value_namespace = name_space;
        usable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "usable")
    {
        usable.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::AttrSet()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
        ,
    prefix_sid_attr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap>())
    , community(this, {})
    , extended_community(this, {})
    , unknown_attribute(this, {})
    , cluster(this, {})
    , l2tpv3_cookie(this, {})
    , connector_value(this, {})
    , pmsi_value(this, {})
    , ls_attr(this, {})
    , pe_distinguisher_label(this, {})
    , large_community(this, {})
{
    prefix_sid_attr->parent = this;
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-attr")
    {
        if(prefix_sid_attr == nullptr)
        {
            prefix_sid_attr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr>();
        }
        return prefix_sid_attr;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_attr != nullptr)
    {
        _children["prefix-sid-attr"] = prefix_sid_attr;
    }

    if(tunnel_encap != nullptr)
    {
        _children["tunnel-encap"] = tunnel_encap;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cluster.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2tpv3_cookie.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : connector_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ls_attr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_distinguisher_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : large_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-attr" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidAttr()
    :
    prefix_sid_tlv(this, {})
{

    yang_name = "prefix-sid-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::~PrefixSidAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-tlv")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv>();
        ent_->parent = this;
        prefix_sid_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-tlv")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| usable.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(usable.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        _children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count_ = 0;
    for (auto ent_ : segment_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable")
    {
        usable = value;
        usable.value_namespace = name_space;
        usable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "usable")
    {
        usable.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttributesAfterPolicyOut()
    :
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"},
    rnh_type{YType::uint16, "rnh-type"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"}
        ,
    common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes>())
    , attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet>())
    , rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr>())
    , ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp>())
{
    common_attributes->parent = this;
    attr_set->parent = this;
    rnh_addr->parent = this;
    ribrnh_ip->parent = this;

    yang_name = "attributes-after-policy-out"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::~AttributesAfterPolicyOut()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::has_data() const
{
    if (is_presence_container) return true;
    return is_as_path2_byte.is_set
	|| is_application_gateway_present.is_set
	|| is_attr_set_present.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| is_rnh_present.is_set
	|| is_ribrnh_present.is_set
	|| attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| vpn_distinguisher.is_set
	|| rnh_type.is_set
	|| rnh_len.is_set
	|| rnh_addr_len.is_set
	|| ribrnh_table.is_set
	|| ribrnh_mac.is_set
	|| ribrnhip_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnh_encap.is_set
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes-after-policy-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr>();
        }
        return rnh_addr;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_attributes != nullptr)
    {
        _children["common-attributes"] = common_attributes;
    }

    if(attr_set != nullptr)
    {
        _children["attr-set"] = attr_set;
    }

    if(rnh_addr != nullptr)
    {
        _children["rnh-addr"] = rnh_addr;
    }

    if(ribrnh_ip != nullptr)
    {
        _children["ribrnh-ip"] = ribrnh_ip;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-attributes" || name == "attr-set" || name == "rnh-addr" || name == "ribrnh-ip" || name == "is-as-path2-byte" || name == "is-application-gateway-present" || name == "is-attr-set-present" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "is-rnh-present" || name == "is-ribrnh-present" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-recover-sec" || name == "vpn-distinguisher" || name == "rnh-type" || name == "rnh-len" || name == "rnh-addr-len" || name == "ribrnh-table" || name == "ribrnh-mac" || name == "ribrnhip-table" || name == "ribrnh-vni" || name == "ribrnh-encap")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::CommonAttributes()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
        ,
    prefix_sid_attr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap>())
    , community(this, {})
    , extended_community(this, {})
    , unknown_attribute(this, {})
    , cluster(this, {})
    , l2tpv3_cookie(this, {})
    , connector_value(this, {})
    , pmsi_value(this, {})
    , ls_attr(this, {})
    , pe_distinguisher_label(this, {})
    , large_community(this, {})
{
    prefix_sid_attr->parent = this;
    tunnel_encap->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attributes-after-policy-out"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-attr")
    {
        if(prefix_sid_attr == nullptr)
        {
            prefix_sid_attr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr>();
        }
        return prefix_sid_attr;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_attr != nullptr)
    {
        _children["prefix-sid-attr"] = prefix_sid_attr;
    }

    if(tunnel_encap != nullptr)
    {
        _children["tunnel-encap"] = tunnel_encap;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cluster.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2tpv3_cookie.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : connector_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ls_attr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_distinguisher_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : large_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-attr" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidAttr()
    :
    prefix_sid_tlv(this, {})
{

    yang_name = "prefix-sid-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::~PrefixSidAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-tlv")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv>();
        ent_->parent = this;
        prefix_sid_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-tlv")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| usable.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(usable.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        _children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count_ = 0;
    for (auto ent_ : segment_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable")
    {
        usable = value;
        usable.value_namespace = name_space;
        usable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "usable")
    {
        usable.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::AttrSet()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
        ,
    prefix_sid_attr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap>())
    , community(this, {})
    , extended_community(this, {})
    , unknown_attribute(this, {})
    , cluster(this, {})
    , l2tpv3_cookie(this, {})
    , connector_value(this, {})
    , pmsi_value(this, {})
    , ls_attr(this, {})
    , pe_distinguisher_label(this, {})
    , large_community(this, {})
{
    prefix_sid_attr->parent = this;
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-out"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-attr")
    {
        if(prefix_sid_attr == nullptr)
        {
            prefix_sid_attr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr>();
        }
        return prefix_sid_attr;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_attr != nullptr)
    {
        _children["prefix-sid-attr"] = prefix_sid_attr;
    }

    if(tunnel_encap != nullptr)
    {
        _children["tunnel-encap"] = tunnel_encap;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cluster.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2tpv3_cookie.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : connector_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ls_attr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_distinguisher_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : large_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-attr" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidAttr()
    :
    prefix_sid_tlv(this, {})
{

    yang_name = "prefix-sid-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::~PrefixSidAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-tlv")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv>();
        ent_->parent = this;
        prefix_sid_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-tlv")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| usable.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(usable.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        _children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count_ = 0;
    for (auto ent_ : segment_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable")
    {
        usable = value;
        usable.value_namespace = name_space;
        usable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "usable")
    {
        usable.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-out"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-out"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::Convergence()
    :
    af_name{YType::enumeration, "af-name"},
    has_converged{YType::boolean, "has-converged"},
    are_write_queues_empty{YType::boolean, "are-write-queues-empty"}
{

    yang_name = "convergence"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::~Convergence()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| has_converged.is_set
	|| are_write_queues_empty.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(has_converged.yfilter)
	|| ydk::is_set(are_write_queues_empty.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (has_converged.is_set || is_set(has_converged.yfilter)) leaf_name_data.push_back(has_converged.get_name_leafdata());
    if (are_write_queues_empty.is_set || is_set(are_write_queues_empty.yfilter)) leaf_name_data.push_back(are_write_queues_empty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-converged")
    {
        has_converged = value;
        has_converged.value_namespace = name_space;
        has_converged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-write-queues-empty")
    {
        are_write_queues_empty = value;
        are_write_queues_empty.value_namespace = name_space;
        are_write_queues_empty.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "has-converged")
    {
        has_converged.yfilter = yfilter;
    }
    if(value_path == "are-write-queues-empty")
    {
        are_write_queues_empty.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "has-converged" || name == "are-write-queues-empty")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::AfProcessInfo()
    :
    af_name{YType::enumeration, "af-name"},
    process_instance{YType::uint8, "process-instance"},
    vrf_name{YType::str, "vrf-name"},
    vrf_totals{YType::boolean, "vrf-totals"}
        ,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global>())
    , vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_>())
    , performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics>())
{
    global->parent = this;
    vrf->parent = this;
    performance_statistics->parent = this;

    yang_name = "af-process-info"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::~AfProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| process_instance.is_set
	|| vrf_name.is_set
	|| vrf_totals.is_set
	|| (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(process_instance.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_totals.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-process-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (process_instance.is_set || is_set(process_instance.yfilter)) leaf_name_data.push_back(process_instance.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_totals.is_set || is_set(vrf_totals.yfilter)) leaf_name_data.push_back(vrf_totals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_>();
        }
        return vrf;
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(performance_statistics != nullptr)
    {
        _children["performance-statistics"] = performance_statistics;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance")
    {
        process_instance = value;
        process_instance.value_namespace = name_space;
        process_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals = value;
        vrf_totals.value_namespace = name_space;
        vrf_totals.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "process-instance")
    {
        process_instance.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf" || name == "performance-statistics" || name == "af-name" || name == "process-instance" || name == "vrf-name" || name == "vrf-totals")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::Global()
    :
    router_state{YType::enumeration, "router-state"},
    table_version{YType::uint32, "table-version"},
    version_wrapped{YType::uint32, "version-wrapped"},
    version_wrapped_tid{YType::uint32, "version-wrapped-tid"},
    max_active_pelem_version{YType::uint32, "max-active-pelem-version"},
    merged_table_version{YType::uint32, "merged-table-version"},
    route_download_go_active_done_pending{YType::uint32, "route-download-go-active-done-pending"},
    rib_brib_received_version{YType::uint32, "rib-brib-received-version"},
    table_brib_version{YType::uint32, "table-brib-version"},
    label_version{YType::uint32, "label-version"},
    import_version{YType::uint32, "import-version"},
    standby_version{YType::uint32, "standby-version"},
    send_version{YType::uint32, "send-version"},
    num_init_sync_pfx{YType::uint32, "num-init-sync-pfx"},
    max_label_stack_depth_v4_next_hop{YType::uint32, "max-label-stack-depth-v4-next-hop"},
    max_label_stack_depth_v6_next_hop{YType::uint32, "max-label-stack-depth-v6-next-hop"},
    local_networks_num{YType::uint32, "local-networks-num"},
    local_networks_memory{YType::uint32, "local-networks-memory"},
    local_networks_malloced_num{YType::uint32, "local-networks-malloced-num"},
    local_networks_freed_num{YType::uint32, "local-networks-freed-num"},
    local_paths_num{YType::uint32, "local-paths-num"},
    local_paths_memory{YType::uint32, "local-paths-memory"},
    local_paths_malloced_num{YType::uint32, "local-paths-malloced-num"},
    local_paths_freed_num{YType::uint32, "local-paths-freed-num"},
    imported_paths_num{YType::uint32, "imported-paths-num"},
    imported_paths_memory{YType::uint32, "imported-paths-memory"},
    networks_num{YType::uint32, "networks-num"},
    networks_memory{YType::uint32, "networks-memory"},
    networks_malloced_num{YType::uint32, "networks-malloced-num"},
    networks_freed_num{YType::uint32, "networks-freed-num"},
    paths_num{YType::uint32, "paths-num"},
    paths_memory{YType::uint32, "paths-memory"},
    paths_malloced_num{YType::uint32, "paths-malloced-num"},
    paths_freed_num{YType::uint32, "paths-freed-num"},
    path_elems_num{YType::uint32, "path-elems-num"},
    path_elems_memory{YType::uint32, "path-elems-memory"},
    path_elems_malloced_num{YType::uint32, "path-elems-malloced-num"},
    path_elems_freed_num{YType::uint32, "path-elems-freed-num"},
    label_last_trigger{YType::uint64, "label-last-trigger"},
    last_label_version{YType::uint32, "last-label-version"},
    label_bgp_version{YType::uint32, "label-bgp-version"},
    label_triggers{YType::uint32, "label-triggers"},
    rib_last_trigger{YType::uint64, "rib-last-trigger"},
    last_rib_version{YType::uint32, "last-rib-version"},
    rib_bgp_version{YType::uint32, "rib-bgp-version"},
    rib_triggers{YType::uint32, "rib-triggers"},
    import_last_trigger{YType::uint64, "import-last-trigger"},
    last_import_version{YType::uint32, "last-import-version"},
    import_bgp_version{YType::uint32, "import-bgp-version"},
    import_triggers{YType::uint32, "import-triggers"},
    update_gen_last_trigger{YType::uint64, "update-gen-last-trigger"},
    update_gen_bgp_version{YType::uint32, "update-gen-bgp-version"},
    update_triggers{YType::uint32, "update-triggers"},
    total_r_ds_num{YType::uint32, "total-r-ds-num"},
    total_remote_r_ds_num{YType::uint32, "total-remote-r-ds-num"},
    total_same_r_ds_num{YType::uint32, "total-same-r-ds-num"},
    malloced_rd_count{YType::uint32, "malloced-rd-count"},
    freed_rd_count{YType::uint32, "freed-rd-count"},
    rd_memory{YType::uint32, "rd-memory"},
    multipath_network_entry_count{YType::uint32, "multipath-network-entry-count"},
    multipath_network_entry_memory{YType::uint32, "multipath-network-entry-memory"},
    multipath_paths_count{YType::uint32, "multipath-paths-count"},
    multipath_paths_memory{YType::uint32, "multipath-paths-memory"},
    update_wait_install_enabled{YType::uint32, "update-wait-install-enabled"},
    rib_acked_table_version{YType::uint32, "rib-acked-table-version"},
    rib_ack_requests{YType::uint32, "rib-ack-requests"},
    rib_acks_received{YType::uint32, "rib-acks-received"},
    rib_slow_acks{YType::uint32, "rib-slow-acks"}
        ,
    version_wrap_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec>())
    , version_wrap_start_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec>())
    , version_wrap_done_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec>())
    , trigger_rib(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib>())
    , trigger_import(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport>())
    , trigger_update(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate>())
    , trigger_label(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel>())
    , rib_install(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall>())
{
    version_wrap_time_spec->parent = this;
    version_wrap_start_time_spec->parent = this;
    version_wrap_done_time_spec->parent = this;
    trigger_rib->parent = this;
    trigger_import->parent = this;
    trigger_update->parent = this;
    trigger_label->parent = this;
    rib_install->parent = this;

    yang_name = "global"; yang_parent_name = "af-process-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::has_data() const
{
    if (is_presence_container) return true;
    return router_state.is_set
	|| table_version.is_set
	|| version_wrapped.is_set
	|| version_wrapped_tid.is_set
	|| max_active_pelem_version.is_set
	|| merged_table_version.is_set
	|| route_download_go_active_done_pending.is_set
	|| rib_brib_received_version.is_set
	|| table_brib_version.is_set
	|| label_version.is_set
	|| import_version.is_set
	|| standby_version.is_set
	|| send_version.is_set
	|| num_init_sync_pfx.is_set
	|| max_label_stack_depth_v4_next_hop.is_set
	|| max_label_stack_depth_v6_next_hop.is_set
	|| local_networks_num.is_set
	|| local_networks_memory.is_set
	|| local_networks_malloced_num.is_set
	|| local_networks_freed_num.is_set
	|| local_paths_num.is_set
	|| local_paths_memory.is_set
	|| local_paths_malloced_num.is_set
	|| local_paths_freed_num.is_set
	|| imported_paths_num.is_set
	|| imported_paths_memory.is_set
	|| networks_num.is_set
	|| networks_memory.is_set
	|| networks_malloced_num.is_set
	|| networks_freed_num.is_set
	|| paths_num.is_set
	|| paths_memory.is_set
	|| paths_malloced_num.is_set
	|| paths_freed_num.is_set
	|| path_elems_num.is_set
	|| path_elems_memory.is_set
	|| path_elems_malloced_num.is_set
	|| path_elems_freed_num.is_set
	|| label_last_trigger.is_set
	|| last_label_version.is_set
	|| label_bgp_version.is_set
	|| label_triggers.is_set
	|| rib_last_trigger.is_set
	|| last_rib_version.is_set
	|| rib_bgp_version.is_set
	|| rib_triggers.is_set
	|| import_last_trigger.is_set
	|| last_import_version.is_set
	|| import_bgp_version.is_set
	|| import_triggers.is_set
	|| update_gen_last_trigger.is_set
	|| update_gen_bgp_version.is_set
	|| update_triggers.is_set
	|| total_r_ds_num.is_set
	|| total_remote_r_ds_num.is_set
	|| total_same_r_ds_num.is_set
	|| malloced_rd_count.is_set
	|| freed_rd_count.is_set
	|| rd_memory.is_set
	|| multipath_network_entry_count.is_set
	|| multipath_network_entry_memory.is_set
	|| multipath_paths_count.is_set
	|| multipath_paths_memory.is_set
	|| update_wait_install_enabled.is_set
	|| rib_acked_table_version.is_set
	|| rib_ack_requests.is_set
	|| rib_acks_received.is_set
	|| rib_slow_acks.is_set
	|| (version_wrap_time_spec !=  nullptr && version_wrap_time_spec->has_data())
	|| (version_wrap_start_time_spec !=  nullptr && version_wrap_start_time_spec->has_data())
	|| (version_wrap_done_time_spec !=  nullptr && version_wrap_done_time_spec->has_data())
	|| (trigger_rib !=  nullptr && trigger_rib->has_data())
	|| (trigger_import !=  nullptr && trigger_import->has_data())
	|| (trigger_update !=  nullptr && trigger_update->has_data())
	|| (trigger_label !=  nullptr && trigger_label->has_data())
	|| (rib_install !=  nullptr && rib_install->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_state.yfilter)
	|| ydk::is_set(table_version.yfilter)
	|| ydk::is_set(version_wrapped.yfilter)
	|| ydk::is_set(version_wrapped_tid.yfilter)
	|| ydk::is_set(max_active_pelem_version.yfilter)
	|| ydk::is_set(merged_table_version.yfilter)
	|| ydk::is_set(route_download_go_active_done_pending.yfilter)
	|| ydk::is_set(rib_brib_received_version.yfilter)
	|| ydk::is_set(table_brib_version.yfilter)
	|| ydk::is_set(label_version.yfilter)
	|| ydk::is_set(import_version.yfilter)
	|| ydk::is_set(standby_version.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(num_init_sync_pfx.yfilter)
	|| ydk::is_set(max_label_stack_depth_v4_next_hop.yfilter)
	|| ydk::is_set(max_label_stack_depth_v6_next_hop.yfilter)
	|| ydk::is_set(local_networks_num.yfilter)
	|| ydk::is_set(local_networks_memory.yfilter)
	|| ydk::is_set(local_networks_malloced_num.yfilter)
	|| ydk::is_set(local_networks_freed_num.yfilter)
	|| ydk::is_set(local_paths_num.yfilter)
	|| ydk::is_set(local_paths_memory.yfilter)
	|| ydk::is_set(local_paths_malloced_num.yfilter)
	|| ydk::is_set(local_paths_freed_num.yfilter)
	|| ydk::is_set(imported_paths_num.yfilter)
	|| ydk::is_set(imported_paths_memory.yfilter)
	|| ydk::is_set(networks_num.yfilter)
	|| ydk::is_set(networks_memory.yfilter)
	|| ydk::is_set(networks_malloced_num.yfilter)
	|| ydk::is_set(networks_freed_num.yfilter)
	|| ydk::is_set(paths_num.yfilter)
	|| ydk::is_set(paths_memory.yfilter)
	|| ydk::is_set(paths_malloced_num.yfilter)
	|| ydk::is_set(paths_freed_num.yfilter)
	|| ydk::is_set(path_elems_num.yfilter)
	|| ydk::is_set(path_elems_memory.yfilter)
	|| ydk::is_set(path_elems_malloced_num.yfilter)
	|| ydk::is_set(path_elems_freed_num.yfilter)
	|| ydk::is_set(label_last_trigger.yfilter)
	|| ydk::is_set(last_label_version.yfilter)
	|| ydk::is_set(label_bgp_version.yfilter)
	|| ydk::is_set(label_triggers.yfilter)
	|| ydk::is_set(rib_last_trigger.yfilter)
	|| ydk::is_set(last_rib_version.yfilter)
	|| ydk::is_set(rib_bgp_version.yfilter)
	|| ydk::is_set(rib_triggers.yfilter)
	|| ydk::is_set(import_last_trigger.yfilter)
	|| ydk::is_set(last_import_version.yfilter)
	|| ydk::is_set(import_bgp_version.yfilter)
	|| ydk::is_set(import_triggers.yfilter)
	|| ydk::is_set(update_gen_last_trigger.yfilter)
	|| ydk::is_set(update_gen_bgp_version.yfilter)
	|| ydk::is_set(update_triggers.yfilter)
	|| ydk::is_set(total_r_ds_num.yfilter)
	|| ydk::is_set(total_remote_r_ds_num.yfilter)
	|| ydk::is_set(total_same_r_ds_num.yfilter)
	|| ydk::is_set(malloced_rd_count.yfilter)
	|| ydk::is_set(freed_rd_count.yfilter)
	|| ydk::is_set(rd_memory.yfilter)
	|| ydk::is_set(multipath_network_entry_count.yfilter)
	|| ydk::is_set(multipath_network_entry_memory.yfilter)
	|| ydk::is_set(multipath_paths_count.yfilter)
	|| ydk::is_set(multipath_paths_memory.yfilter)
	|| ydk::is_set(update_wait_install_enabled.yfilter)
	|| ydk::is_set(rib_acked_table_version.yfilter)
	|| ydk::is_set(rib_ack_requests.yfilter)
	|| ydk::is_set(rib_acks_received.yfilter)
	|| ydk::is_set(rib_slow_acks.yfilter)
	|| (version_wrap_time_spec !=  nullptr && version_wrap_time_spec->has_operation())
	|| (version_wrap_start_time_spec !=  nullptr && version_wrap_start_time_spec->has_operation())
	|| (version_wrap_done_time_spec !=  nullptr && version_wrap_done_time_spec->has_operation())
	|| (trigger_rib !=  nullptr && trigger_rib->has_operation())
	|| (trigger_import !=  nullptr && trigger_import->has_operation())
	|| (trigger_update !=  nullptr && trigger_update->has_operation())
	|| (trigger_label !=  nullptr && trigger_label->has_operation())
	|| (rib_install !=  nullptr && rib_install->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_state.is_set || is_set(router_state.yfilter)) leaf_name_data.push_back(router_state.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.yfilter)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (version_wrapped.is_set || is_set(version_wrapped.yfilter)) leaf_name_data.push_back(version_wrapped.get_name_leafdata());
    if (version_wrapped_tid.is_set || is_set(version_wrapped_tid.yfilter)) leaf_name_data.push_back(version_wrapped_tid.get_name_leafdata());
    if (max_active_pelem_version.is_set || is_set(max_active_pelem_version.yfilter)) leaf_name_data.push_back(max_active_pelem_version.get_name_leafdata());
    if (merged_table_version.is_set || is_set(merged_table_version.yfilter)) leaf_name_data.push_back(merged_table_version.get_name_leafdata());
    if (route_download_go_active_done_pending.is_set || is_set(route_download_go_active_done_pending.yfilter)) leaf_name_data.push_back(route_download_go_active_done_pending.get_name_leafdata());
    if (rib_brib_received_version.is_set || is_set(rib_brib_received_version.yfilter)) leaf_name_data.push_back(rib_brib_received_version.get_name_leafdata());
    if (table_brib_version.is_set || is_set(table_brib_version.yfilter)) leaf_name_data.push_back(table_brib_version.get_name_leafdata());
    if (label_version.is_set || is_set(label_version.yfilter)) leaf_name_data.push_back(label_version.get_name_leafdata());
    if (import_version.is_set || is_set(import_version.yfilter)) leaf_name_data.push_back(import_version.get_name_leafdata());
    if (standby_version.is_set || is_set(standby_version.yfilter)) leaf_name_data.push_back(standby_version.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (num_init_sync_pfx.is_set || is_set(num_init_sync_pfx.yfilter)) leaf_name_data.push_back(num_init_sync_pfx.get_name_leafdata());
    if (max_label_stack_depth_v4_next_hop.is_set || is_set(max_label_stack_depth_v4_next_hop.yfilter)) leaf_name_data.push_back(max_label_stack_depth_v4_next_hop.get_name_leafdata());
    if (max_label_stack_depth_v6_next_hop.is_set || is_set(max_label_stack_depth_v6_next_hop.yfilter)) leaf_name_data.push_back(max_label_stack_depth_v6_next_hop.get_name_leafdata());
    if (local_networks_num.is_set || is_set(local_networks_num.yfilter)) leaf_name_data.push_back(local_networks_num.get_name_leafdata());
    if (local_networks_memory.is_set || is_set(local_networks_memory.yfilter)) leaf_name_data.push_back(local_networks_memory.get_name_leafdata());
    if (local_networks_malloced_num.is_set || is_set(local_networks_malloced_num.yfilter)) leaf_name_data.push_back(local_networks_malloced_num.get_name_leafdata());
    if (local_networks_freed_num.is_set || is_set(local_networks_freed_num.yfilter)) leaf_name_data.push_back(local_networks_freed_num.get_name_leafdata());
    if (local_paths_num.is_set || is_set(local_paths_num.yfilter)) leaf_name_data.push_back(local_paths_num.get_name_leafdata());
    if (local_paths_memory.is_set || is_set(local_paths_memory.yfilter)) leaf_name_data.push_back(local_paths_memory.get_name_leafdata());
    if (local_paths_malloced_num.is_set || is_set(local_paths_malloced_num.yfilter)) leaf_name_data.push_back(local_paths_malloced_num.get_name_leafdata());
    if (local_paths_freed_num.is_set || is_set(local_paths_freed_num.yfilter)) leaf_name_data.push_back(local_paths_freed_num.get_name_leafdata());
    if (imported_paths_num.is_set || is_set(imported_paths_num.yfilter)) leaf_name_data.push_back(imported_paths_num.get_name_leafdata());
    if (imported_paths_memory.is_set || is_set(imported_paths_memory.yfilter)) leaf_name_data.push_back(imported_paths_memory.get_name_leafdata());
    if (networks_num.is_set || is_set(networks_num.yfilter)) leaf_name_data.push_back(networks_num.get_name_leafdata());
    if (networks_memory.is_set || is_set(networks_memory.yfilter)) leaf_name_data.push_back(networks_memory.get_name_leafdata());
    if (networks_malloced_num.is_set || is_set(networks_malloced_num.yfilter)) leaf_name_data.push_back(networks_malloced_num.get_name_leafdata());
    if (networks_freed_num.is_set || is_set(networks_freed_num.yfilter)) leaf_name_data.push_back(networks_freed_num.get_name_leafdata());
    if (paths_num.is_set || is_set(paths_num.yfilter)) leaf_name_data.push_back(paths_num.get_name_leafdata());
    if (paths_memory.is_set || is_set(paths_memory.yfilter)) leaf_name_data.push_back(paths_memory.get_name_leafdata());
    if (paths_malloced_num.is_set || is_set(paths_malloced_num.yfilter)) leaf_name_data.push_back(paths_malloced_num.get_name_leafdata());
    if (paths_freed_num.is_set || is_set(paths_freed_num.yfilter)) leaf_name_data.push_back(paths_freed_num.get_name_leafdata());
    if (path_elems_num.is_set || is_set(path_elems_num.yfilter)) leaf_name_data.push_back(path_elems_num.get_name_leafdata());
    if (path_elems_memory.is_set || is_set(path_elems_memory.yfilter)) leaf_name_data.push_back(path_elems_memory.get_name_leafdata());
    if (path_elems_malloced_num.is_set || is_set(path_elems_malloced_num.yfilter)) leaf_name_data.push_back(path_elems_malloced_num.get_name_leafdata());
    if (path_elems_freed_num.is_set || is_set(path_elems_freed_num.yfilter)) leaf_name_data.push_back(path_elems_freed_num.get_name_leafdata());
    if (label_last_trigger.is_set || is_set(label_last_trigger.yfilter)) leaf_name_data.push_back(label_last_trigger.get_name_leafdata());
    if (last_label_version.is_set || is_set(last_label_version.yfilter)) leaf_name_data.push_back(last_label_version.get_name_leafdata());
    if (label_bgp_version.is_set || is_set(label_bgp_version.yfilter)) leaf_name_data.push_back(label_bgp_version.get_name_leafdata());
    if (label_triggers.is_set || is_set(label_triggers.yfilter)) leaf_name_data.push_back(label_triggers.get_name_leafdata());
    if (rib_last_trigger.is_set || is_set(rib_last_trigger.yfilter)) leaf_name_data.push_back(rib_last_trigger.get_name_leafdata());
    if (last_rib_version.is_set || is_set(last_rib_version.yfilter)) leaf_name_data.push_back(last_rib_version.get_name_leafdata());
    if (rib_bgp_version.is_set || is_set(rib_bgp_version.yfilter)) leaf_name_data.push_back(rib_bgp_version.get_name_leafdata());
    if (rib_triggers.is_set || is_set(rib_triggers.yfilter)) leaf_name_data.push_back(rib_triggers.get_name_leafdata());
    if (import_last_trigger.is_set || is_set(import_last_trigger.yfilter)) leaf_name_data.push_back(import_last_trigger.get_name_leafdata());
    if (last_import_version.is_set || is_set(last_import_version.yfilter)) leaf_name_data.push_back(last_import_version.get_name_leafdata());
    if (import_bgp_version.is_set || is_set(import_bgp_version.yfilter)) leaf_name_data.push_back(import_bgp_version.get_name_leafdata());
    if (import_triggers.is_set || is_set(import_triggers.yfilter)) leaf_name_data.push_back(import_triggers.get_name_leafdata());
    if (update_gen_last_trigger.is_set || is_set(update_gen_last_trigger.yfilter)) leaf_name_data.push_back(update_gen_last_trigger.get_name_leafdata());
    if (update_gen_bgp_version.is_set || is_set(update_gen_bgp_version.yfilter)) leaf_name_data.push_back(update_gen_bgp_version.get_name_leafdata());
    if (update_triggers.is_set || is_set(update_triggers.yfilter)) leaf_name_data.push_back(update_triggers.get_name_leafdata());
    if (total_r_ds_num.is_set || is_set(total_r_ds_num.yfilter)) leaf_name_data.push_back(total_r_ds_num.get_name_leafdata());
    if (total_remote_r_ds_num.is_set || is_set(total_remote_r_ds_num.yfilter)) leaf_name_data.push_back(total_remote_r_ds_num.get_name_leafdata());
    if (total_same_r_ds_num.is_set || is_set(total_same_r_ds_num.yfilter)) leaf_name_data.push_back(total_same_r_ds_num.get_name_leafdata());
    if (malloced_rd_count.is_set || is_set(malloced_rd_count.yfilter)) leaf_name_data.push_back(malloced_rd_count.get_name_leafdata());
    if (freed_rd_count.is_set || is_set(freed_rd_count.yfilter)) leaf_name_data.push_back(freed_rd_count.get_name_leafdata());
    if (rd_memory.is_set || is_set(rd_memory.yfilter)) leaf_name_data.push_back(rd_memory.get_name_leafdata());
    if (multipath_network_entry_count.is_set || is_set(multipath_network_entry_count.yfilter)) leaf_name_data.push_back(multipath_network_entry_count.get_name_leafdata());
    if (multipath_network_entry_memory.is_set || is_set(multipath_network_entry_memory.yfilter)) leaf_name_data.push_back(multipath_network_entry_memory.get_name_leafdata());
    if (multipath_paths_count.is_set || is_set(multipath_paths_count.yfilter)) leaf_name_data.push_back(multipath_paths_count.get_name_leafdata());
    if (multipath_paths_memory.is_set || is_set(multipath_paths_memory.yfilter)) leaf_name_data.push_back(multipath_paths_memory.get_name_leafdata());
    if (update_wait_install_enabled.is_set || is_set(update_wait_install_enabled.yfilter)) leaf_name_data.push_back(update_wait_install_enabled.get_name_leafdata());
    if (rib_acked_table_version.is_set || is_set(rib_acked_table_version.yfilter)) leaf_name_data.push_back(rib_acked_table_version.get_name_leafdata());
    if (rib_ack_requests.is_set || is_set(rib_ack_requests.yfilter)) leaf_name_data.push_back(rib_ack_requests.get_name_leafdata());
    if (rib_acks_received.is_set || is_set(rib_acks_received.yfilter)) leaf_name_data.push_back(rib_acks_received.get_name_leafdata());
    if (rib_slow_acks.is_set || is_set(rib_slow_acks.yfilter)) leaf_name_data.push_back(rib_slow_acks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version-wrap-time-spec")
    {
        if(version_wrap_time_spec == nullptr)
        {
            version_wrap_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec>();
        }
        return version_wrap_time_spec;
    }

    if(child_yang_name == "version-wrap-start-time-spec")
    {
        if(version_wrap_start_time_spec == nullptr)
        {
            version_wrap_start_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec>();
        }
        return version_wrap_start_time_spec;
    }

    if(child_yang_name == "version-wrap-done-time-spec")
    {
        if(version_wrap_done_time_spec == nullptr)
        {
            version_wrap_done_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec>();
        }
        return version_wrap_done_time_spec;
    }

    if(child_yang_name == "trigger-rib")
    {
        if(trigger_rib == nullptr)
        {
            trigger_rib = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib>();
        }
        return trigger_rib;
    }

    if(child_yang_name == "trigger-import")
    {
        if(trigger_import == nullptr)
        {
            trigger_import = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport>();
        }
        return trigger_import;
    }

    if(child_yang_name == "trigger-update")
    {
        if(trigger_update == nullptr)
        {
            trigger_update = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate>();
        }
        return trigger_update;
    }

    if(child_yang_name == "trigger-label")
    {
        if(trigger_label == nullptr)
        {
            trigger_label = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel>();
        }
        return trigger_label;
    }

    if(child_yang_name == "rib-install")
    {
        if(rib_install == nullptr)
        {
            rib_install = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall>();
        }
        return rib_install;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(version_wrap_time_spec != nullptr)
    {
        _children["version-wrap-time-spec"] = version_wrap_time_spec;
    }

    if(version_wrap_start_time_spec != nullptr)
    {
        _children["version-wrap-start-time-spec"] = version_wrap_start_time_spec;
    }

    if(version_wrap_done_time_spec != nullptr)
    {
        _children["version-wrap-done-time-spec"] = version_wrap_done_time_spec;
    }

    if(trigger_rib != nullptr)
    {
        _children["trigger-rib"] = trigger_rib;
    }

    if(trigger_import != nullptr)
    {
        _children["trigger-import"] = trigger_import;
    }

    if(trigger_update != nullptr)
    {
        _children["trigger-update"] = trigger_update;
    }

    if(trigger_label != nullptr)
    {
        _children["trigger-label"] = trigger_label;
    }

    if(rib_install != nullptr)
    {
        _children["rib-install"] = rib_install;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-state")
    {
        router_state = value;
        router_state.value_namespace = name_space;
        router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-version")
    {
        table_version = value;
        table_version.value_namespace = name_space;
        table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-wrapped")
    {
        version_wrapped = value;
        version_wrapped.value_namespace = name_space;
        version_wrapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-wrapped-tid")
    {
        version_wrapped_tid = value;
        version_wrapped_tid.value_namespace = name_space;
        version_wrapped_tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-active-pelem-version")
    {
        max_active_pelem_version = value;
        max_active_pelem_version.value_namespace = name_space;
        max_active_pelem_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merged-table-version")
    {
        merged_table_version = value;
        merged_table_version.value_namespace = name_space;
        merged_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-download-go-active-done-pending")
    {
        route_download_go_active_done_pending = value;
        route_download_go_active_done_pending.value_namespace = name_space;
        route_download_go_active_done_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-brib-received-version")
    {
        rib_brib_received_version = value;
        rib_brib_received_version.value_namespace = name_space;
        rib_brib_received_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version = value;
        table_brib_version.value_namespace = name_space;
        table_brib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-version")
    {
        label_version = value;
        label_version.value_namespace = name_space;
        label_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-version")
    {
        import_version = value;
        import_version.value_namespace = name_space;
        import_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-version")
    {
        standby_version = value;
        standby_version.value_namespace = name_space;
        standby_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-init-sync-pfx")
    {
        num_init_sync_pfx = value;
        num_init_sync_pfx.value_namespace = name_space;
        num_init_sync_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-stack-depth-v4-next-hop")
    {
        max_label_stack_depth_v4_next_hop = value;
        max_label_stack_depth_v4_next_hop.value_namespace = name_space;
        max_label_stack_depth_v4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-stack-depth-v6-next-hop")
    {
        max_label_stack_depth_v6_next_hop = value;
        max_label_stack_depth_v6_next_hop.value_namespace = name_space;
        max_label_stack_depth_v6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-num")
    {
        local_networks_num = value;
        local_networks_num.value_namespace = name_space;
        local_networks_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-memory")
    {
        local_networks_memory = value;
        local_networks_memory.value_namespace = name_space;
        local_networks_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-malloced-num")
    {
        local_networks_malloced_num = value;
        local_networks_malloced_num.value_namespace = name_space;
        local_networks_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-freed-num")
    {
        local_networks_freed_num = value;
        local_networks_freed_num.value_namespace = name_space;
        local_networks_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-num")
    {
        local_paths_num = value;
        local_paths_num.value_namespace = name_space;
        local_paths_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-memory")
    {
        local_paths_memory = value;
        local_paths_memory.value_namespace = name_space;
        local_paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-malloced-num")
    {
        local_paths_malloced_num = value;
        local_paths_malloced_num.value_namespace = name_space;
        local_paths_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-freed-num")
    {
        local_paths_freed_num = value;
        local_paths_freed_num.value_namespace = name_space;
        local_paths_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-paths-num")
    {
        imported_paths_num = value;
        imported_paths_num.value_namespace = name_space;
        imported_paths_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-paths-memory")
    {
        imported_paths_memory = value;
        imported_paths_memory.value_namespace = name_space;
        imported_paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-num")
    {
        networks_num = value;
        networks_num.value_namespace = name_space;
        networks_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-memory")
    {
        networks_memory = value;
        networks_memory.value_namespace = name_space;
        networks_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-malloced-num")
    {
        networks_malloced_num = value;
        networks_malloced_num.value_namespace = name_space;
        networks_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-freed-num")
    {
        networks_freed_num = value;
        networks_freed_num.value_namespace = name_space;
        networks_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-num")
    {
        paths_num = value;
        paths_num.value_namespace = name_space;
        paths_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-memory")
    {
        paths_memory = value;
        paths_memory.value_namespace = name_space;
        paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-malloced-num")
    {
        paths_malloced_num = value;
        paths_malloced_num.value_namespace = name_space;
        paths_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-freed-num")
    {
        paths_freed_num = value;
        paths_freed_num.value_namespace = name_space;
        paths_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-num")
    {
        path_elems_num = value;
        path_elems_num.value_namespace = name_space;
        path_elems_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-memory")
    {
        path_elems_memory = value;
        path_elems_memory.value_namespace = name_space;
        path_elems_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-malloced-num")
    {
        path_elems_malloced_num = value;
        path_elems_malloced_num.value_namespace = name_space;
        path_elems_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-freed-num")
    {
        path_elems_freed_num = value;
        path_elems_freed_num.value_namespace = name_space;
        path_elems_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-last-trigger")
    {
        label_last_trigger = value;
        label_last_trigger.value_namespace = name_space;
        label_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-label-version")
    {
        last_label_version = value;
        last_label_version.value_namespace = name_space;
        last_label_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-bgp-version")
    {
        label_bgp_version = value;
        label_bgp_version.value_namespace = name_space;
        label_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-triggers")
    {
        label_triggers = value;
        label_triggers.value_namespace = name_space;
        label_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-last-trigger")
    {
        rib_last_trigger = value;
        rib_last_trigger.value_namespace = name_space;
        rib_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-version")
    {
        last_rib_version = value;
        last_rib_version.value_namespace = name_space;
        last_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-bgp-version")
    {
        rib_bgp_version = value;
        rib_bgp_version.value_namespace = name_space;
        rib_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-triggers")
    {
        rib_triggers = value;
        rib_triggers.value_namespace = name_space;
        rib_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-last-trigger")
    {
        import_last_trigger = value;
        import_last_trigger.value_namespace = name_space;
        import_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-import-version")
    {
        last_import_version = value;
        last_import_version.value_namespace = name_space;
        last_import_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-bgp-version")
    {
        import_bgp_version = value;
        import_bgp_version.value_namespace = name_space;
        import_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-triggers")
    {
        import_triggers = value;
        import_triggers.value_namespace = name_space;
        import_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-gen-last-trigger")
    {
        update_gen_last_trigger = value;
        update_gen_last_trigger.value_namespace = name_space;
        update_gen_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-gen-bgp-version")
    {
        update_gen_bgp_version = value;
        update_gen_bgp_version.value_namespace = name_space;
        update_gen_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-triggers")
    {
        update_triggers = value;
        update_triggers.value_namespace = name_space;
        update_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-r-ds-num")
    {
        total_r_ds_num = value;
        total_r_ds_num.value_namespace = name_space;
        total_r_ds_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-r-ds-num")
    {
        total_remote_r_ds_num = value;
        total_remote_r_ds_num.value_namespace = name_space;
        total_remote_r_ds_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-same-r-ds-num")
    {
        total_same_r_ds_num = value;
        total_same_r_ds_num.value_namespace = name_space;
        total_same_r_ds_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-rd-count")
    {
        malloced_rd_count = value;
        malloced_rd_count.value_namespace = name_space;
        malloced_rd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-rd-count")
    {
        freed_rd_count = value;
        freed_rd_count.value_namespace = name_space;
        freed_rd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-memory")
    {
        rd_memory = value;
        rd_memory.value_namespace = name_space;
        rd_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-network-entry-count")
    {
        multipath_network_entry_count = value;
        multipath_network_entry_count.value_namespace = name_space;
        multipath_network_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-network-entry-memory")
    {
        multipath_network_entry_memory = value;
        multipath_network_entry_memory.value_namespace = name_space;
        multipath_network_entry_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-paths-count")
    {
        multipath_paths_count = value;
        multipath_paths_count.value_namespace = name_space;
        multipath_paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-paths-memory")
    {
        multipath_paths_memory = value;
        multipath_paths_memory.value_namespace = name_space;
        multipath_paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-wait-install-enabled")
    {
        update_wait_install_enabled = value;
        update_wait_install_enabled.value_namespace = name_space;
        update_wait_install_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-acked-table-version")
    {
        rib_acked_table_version = value;
        rib_acked_table_version.value_namespace = name_space;
        rib_acked_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-ack-requests")
    {
        rib_ack_requests = value;
        rib_ack_requests.value_namespace = name_space;
        rib_ack_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-acks-received")
    {
        rib_acks_received = value;
        rib_acks_received.value_namespace = name_space;
        rib_acks_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-slow-acks")
    {
        rib_slow_acks = value;
        rib_slow_acks.value_namespace = name_space;
        rib_slow_acks.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-state")
    {
        router_state.yfilter = yfilter;
    }
    if(value_path == "table-version")
    {
        table_version.yfilter = yfilter;
    }
    if(value_path == "version-wrapped")
    {
        version_wrapped.yfilter = yfilter;
    }
    if(value_path == "version-wrapped-tid")
    {
        version_wrapped_tid.yfilter = yfilter;
    }
    if(value_path == "max-active-pelem-version")
    {
        max_active_pelem_version.yfilter = yfilter;
    }
    if(value_path == "merged-table-version")
    {
        merged_table_version.yfilter = yfilter;
    }
    if(value_path == "route-download-go-active-done-pending")
    {
        route_download_go_active_done_pending.yfilter = yfilter;
    }
    if(value_path == "rib-brib-received-version")
    {
        rib_brib_received_version.yfilter = yfilter;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version.yfilter = yfilter;
    }
    if(value_path == "label-version")
    {
        label_version.yfilter = yfilter;
    }
    if(value_path == "import-version")
    {
        import_version.yfilter = yfilter;
    }
    if(value_path == "standby-version")
    {
        standby_version.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "num-init-sync-pfx")
    {
        num_init_sync_pfx.yfilter = yfilter;
    }
    if(value_path == "max-label-stack-depth-v4-next-hop")
    {
        max_label_stack_depth_v4_next_hop.yfilter = yfilter;
    }
    if(value_path == "max-label-stack-depth-v6-next-hop")
    {
        max_label_stack_depth_v6_next_hop.yfilter = yfilter;
    }
    if(value_path == "local-networks-num")
    {
        local_networks_num.yfilter = yfilter;
    }
    if(value_path == "local-networks-memory")
    {
        local_networks_memory.yfilter = yfilter;
    }
    if(value_path == "local-networks-malloced-num")
    {
        local_networks_malloced_num.yfilter = yfilter;
    }
    if(value_path == "local-networks-freed-num")
    {
        local_networks_freed_num.yfilter = yfilter;
    }
    if(value_path == "local-paths-num")
    {
        local_paths_num.yfilter = yfilter;
    }
    if(value_path == "local-paths-memory")
    {
        local_paths_memory.yfilter = yfilter;
    }
    if(value_path == "local-paths-malloced-num")
    {
        local_paths_malloced_num.yfilter = yfilter;
    }
    if(value_path == "local-paths-freed-num")
    {
        local_paths_freed_num.yfilter = yfilter;
    }
    if(value_path == "imported-paths-num")
    {
        imported_paths_num.yfilter = yfilter;
    }
    if(value_path == "imported-paths-memory")
    {
        imported_paths_memory.yfilter = yfilter;
    }
    if(value_path == "networks-num")
    {
        networks_num.yfilter = yfilter;
    }
    if(value_path == "networks-memory")
    {
        networks_memory.yfilter = yfilter;
    }
    if(value_path == "networks-malloced-num")
    {
        networks_malloced_num.yfilter = yfilter;
    }
    if(value_path == "networks-freed-num")
    {
        networks_freed_num.yfilter = yfilter;
    }
    if(value_path == "paths-num")
    {
        paths_num.yfilter = yfilter;
    }
    if(value_path == "paths-memory")
    {
        paths_memory.yfilter = yfilter;
    }
    if(value_path == "paths-malloced-num")
    {
        paths_malloced_num.yfilter = yfilter;
    }
    if(value_path == "paths-freed-num")
    {
        paths_freed_num.yfilter = yfilter;
    }
    if(value_path == "path-elems-num")
    {
        path_elems_num.yfilter = yfilter;
    }
    if(value_path == "path-elems-memory")
    {
        path_elems_memory.yfilter = yfilter;
    }
    if(value_path == "path-elems-malloced-num")
    {
        path_elems_malloced_num.yfilter = yfilter;
    }
    if(value_path == "path-elems-freed-num")
    {
        path_elems_freed_num.yfilter = yfilter;
    }
    if(value_path == "label-last-trigger")
    {
        label_last_trigger.yfilter = yfilter;
    }
    if(value_path == "last-label-version")
    {
        last_label_version.yfilter = yfilter;
    }
    if(value_path == "label-bgp-version")
    {
        label_bgp_version.yfilter = yfilter;
    }
    if(value_path == "label-triggers")
    {
        label_triggers.yfilter = yfilter;
    }
    if(value_path == "rib-last-trigger")
    {
        rib_last_trigger.yfilter = yfilter;
    }
    if(value_path == "last-rib-version")
    {
        last_rib_version.yfilter = yfilter;
    }
    if(value_path == "rib-bgp-version")
    {
        rib_bgp_version.yfilter = yfilter;
    }
    if(value_path == "rib-triggers")
    {
        rib_triggers.yfilter = yfilter;
    }
    if(value_path == "import-last-trigger")
    {
        import_last_trigger.yfilter = yfilter;
    }
    if(value_path == "last-import-version")
    {
        last_import_version.yfilter = yfilter;
    }
    if(value_path == "import-bgp-version")
    {
        import_bgp_version.yfilter = yfilter;
    }
    if(value_path == "import-triggers")
    {
        import_triggers.yfilter = yfilter;
    }
    if(value_path == "update-gen-last-trigger")
    {
        update_gen_last_trigger.yfilter = yfilter;
    }
    if(value_path == "update-gen-bgp-version")
    {
        update_gen_bgp_version.yfilter = yfilter;
    }
    if(value_path == "update-triggers")
    {
        update_triggers.yfilter = yfilter;
    }
    if(value_path == "total-r-ds-num")
    {
        total_r_ds_num.yfilter = yfilter;
    }
    if(value_path == "total-remote-r-ds-num")
    {
        total_remote_r_ds_num.yfilter = yfilter;
    }
    if(value_path == "total-same-r-ds-num")
    {
        total_same_r_ds_num.yfilter = yfilter;
    }
    if(value_path == "malloced-rd-count")
    {
        malloced_rd_count.yfilter = yfilter;
    }
    if(value_path == "freed-rd-count")
    {
        freed_rd_count.yfilter = yfilter;
    }
    if(value_path == "rd-memory")
    {
        rd_memory.yfilter = yfilter;
    }
    if(value_path == "multipath-network-entry-count")
    {
        multipath_network_entry_count.yfilter = yfilter;
    }
    if(value_path == "multipath-network-entry-memory")
    {
        multipath_network_entry_memory.yfilter = yfilter;
    }
    if(value_path == "multipath-paths-count")
    {
        multipath_paths_count.yfilter = yfilter;
    }
    if(value_path == "multipath-paths-memory")
    {
        multipath_paths_memory.yfilter = yfilter;
    }
    if(value_path == "update-wait-install-enabled")
    {
        update_wait_install_enabled.yfilter = yfilter;
    }
    if(value_path == "rib-acked-table-version")
    {
        rib_acked_table_version.yfilter = yfilter;
    }
    if(value_path == "rib-ack-requests")
    {
        rib_ack_requests.yfilter = yfilter;
    }
    if(value_path == "rib-acks-received")
    {
        rib_acks_received.yfilter = yfilter;
    }
    if(value_path == "rib-slow-acks")
    {
        rib_slow_acks.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version-wrap-time-spec" || name == "version-wrap-start-time-spec" || name == "version-wrap-done-time-spec" || name == "trigger-rib" || name == "trigger-import" || name == "trigger-update" || name == "trigger-label" || name == "rib-install" || name == "router-state" || name == "table-version" || name == "version-wrapped" || name == "version-wrapped-tid" || name == "max-active-pelem-version" || name == "merged-table-version" || name == "route-download-go-active-done-pending" || name == "rib-brib-received-version" || name == "table-brib-version" || name == "label-version" || name == "import-version" || name == "standby-version" || name == "send-version" || name == "num-init-sync-pfx" || name == "max-label-stack-depth-v4-next-hop" || name == "max-label-stack-depth-v6-next-hop" || name == "local-networks-num" || name == "local-networks-memory" || name == "local-networks-malloced-num" || name == "local-networks-freed-num" || name == "local-paths-num" || name == "local-paths-memory" || name == "local-paths-malloced-num" || name == "local-paths-freed-num" || name == "imported-paths-num" || name == "imported-paths-memory" || name == "networks-num" || name == "networks-memory" || name == "networks-malloced-num" || name == "networks-freed-num" || name == "paths-num" || name == "paths-memory" || name == "paths-malloced-num" || name == "paths-freed-num" || name == "path-elems-num" || name == "path-elems-memory" || name == "path-elems-malloced-num" || name == "path-elems-freed-num" || name == "label-last-trigger" || name == "last-label-version" || name == "label-bgp-version" || name == "label-triggers" || name == "rib-last-trigger" || name == "last-rib-version" || name == "rib-bgp-version" || name == "rib-triggers" || name == "import-last-trigger" || name == "last-import-version" || name == "import-bgp-version" || name == "import-triggers" || name == "update-gen-last-trigger" || name == "update-gen-bgp-version" || name == "update-triggers" || name == "total-r-ds-num" || name == "total-remote-r-ds-num" || name == "total-same-r-ds-num" || name == "malloced-rd-count" || name == "freed-rd-count" || name == "rd-memory" || name == "multipath-network-entry-count" || name == "multipath-network-entry-memory" || name == "multipath-paths-count" || name == "multipath-paths-memory" || name == "update-wait-install-enabled" || name == "rib-acked-table-version" || name == "rib-ack-requests" || name == "rib-acks-received" || name == "rib-slow-acks")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::VersionWrapTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "version-wrap-time-spec"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::~VersionWrapTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-wrap-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::VersionWrapStartTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "version-wrap-start-time-spec"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::~VersionWrapStartTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-wrap-start-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::VersionWrapDoneTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "version-wrap-done-time-spec"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::~VersionWrapDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-wrap-done-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::TriggerRib()
    :
    triggers{YType::uint32, "triggers"}
        ,
    statistic(this, {})
{

    yang_name = "trigger-rib"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::~TriggerRib()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::has_operation() const
{
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic>();
        ent_->parent = this;
        statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::Statistic()
    :
    trigger_version{YType::uint32, "trigger-version"},
    trigger_table_version{YType::uint32, "trigger-table-version"}
        ,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-rib"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::has_data() const
{
    if (is_presence_container) return true;
    return trigger_version.is_set
	|| trigger_table_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());
    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_time_spec != nullptr)
    {
        _children["trigger-time-spec"] = trigger_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-version" || name == "trigger-table-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::TriggerImport()
    :
    triggers{YType::uint32, "triggers"}
        ,
    statistic(this, {})
{

    yang_name = "trigger-import"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::~TriggerImport()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::has_operation() const
{
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic>();
        ent_->parent = this;
        statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::Statistic()
    :
    trigger_version{YType::uint32, "trigger-version"},
    trigger_table_version{YType::uint32, "trigger-table-version"}
        ,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-import"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::has_data() const
{
    if (is_presence_container) return true;
    return trigger_version.is_set
	|| trigger_table_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());
    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_time_spec != nullptr)
    {
        _children["trigger-time-spec"] = trigger_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-version" || name == "trigger-table-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::TriggerUpdate()
    :
    triggers{YType::uint32, "triggers"}
        ,
    statistic(this, {})
{

    yang_name = "trigger-update"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::~TriggerUpdate()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::has_operation() const
{
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic>();
        ent_->parent = this;
        statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::Statistic()
    :
    trigger_version{YType::uint32, "trigger-version"},
    trigger_table_version{YType::uint32, "trigger-table-version"}
        ,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-update"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::has_data() const
{
    if (is_presence_container) return true;
    return trigger_version.is_set
	|| trigger_table_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());
    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_time_spec != nullptr)
    {
        _children["trigger-time-spec"] = trigger_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-version" || name == "trigger-table-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::TriggerLabel()
    :
    triggers{YType::uint32, "triggers"}
        ,
    statistic(this, {})
{

    yang_name = "trigger-label"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::~TriggerLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::has_operation() const
{
    for (std::size_t index=0; index<statistic.len(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic>();
        ent_->parent = this;
        statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::Statistic()
    :
    trigger_version{YType::uint32, "trigger-version"},
    trigger_table_version{YType::uint32, "trigger-table-version"}
        ,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-label"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::has_data() const
{
    if (is_presence_container) return true;
    return trigger_version.is_set
	|| trigger_table_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());
    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_time_spec != nullptr)
    {
        _children["trigger-time-spec"] = trigger_time_spec;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-version" || name == "trigger-table-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::RibInstall()
    :
    installed_count{YType::uint32, "installed-count"},
    modified_count{YType::uint32, "modified-count"},
    skipped_count{YType::uint32, "skipped-count"},
    withdrawn_count{YType::uint32, "withdrawn-count"},
    start_version{YType::uint32, "start-version"},
    target_version{YType::uint32, "target-version"}
        ,
    update_time(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime>())
    , install_time(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime>())
{
    update_time->parent = this;
    install_time->parent = this;

    yang_name = "rib-install"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::~RibInstall()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::has_data() const
{
    if (is_presence_container) return true;
    return installed_count.is_set
	|| modified_count.is_set
	|| skipped_count.is_set
	|| withdrawn_count.is_set
	|| start_version.is_set
	|| target_version.is_set
	|| (update_time !=  nullptr && update_time->has_data())
	|| (install_time !=  nullptr && install_time->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(installed_count.yfilter)
	|| ydk::is_set(modified_count.yfilter)
	|| ydk::is_set(skipped_count.yfilter)
	|| ydk::is_set(withdrawn_count.yfilter)
	|| ydk::is_set(start_version.yfilter)
	|| ydk::is_set(target_version.yfilter)
	|| (update_time !=  nullptr && update_time->has_operation())
	|| (install_time !=  nullptr && install_time->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (installed_count.is_set || is_set(installed_count.yfilter)) leaf_name_data.push_back(installed_count.get_name_leafdata());
    if (modified_count.is_set || is_set(modified_count.yfilter)) leaf_name_data.push_back(modified_count.get_name_leafdata());
    if (skipped_count.is_set || is_set(skipped_count.yfilter)) leaf_name_data.push_back(skipped_count.get_name_leafdata());
    if (withdrawn_count.is_set || is_set(withdrawn_count.yfilter)) leaf_name_data.push_back(withdrawn_count.get_name_leafdata());
    if (start_version.is_set || is_set(start_version.yfilter)) leaf_name_data.push_back(start_version.get_name_leafdata());
    if (target_version.is_set || is_set(target_version.yfilter)) leaf_name_data.push_back(target_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-time")
    {
        if(update_time == nullptr)
        {
            update_time = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime>();
        }
        return update_time;
    }

    if(child_yang_name == "install-time")
    {
        if(install_time == nullptr)
        {
            install_time = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime>();
        }
        return install_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_time != nullptr)
    {
        _children["update-time"] = update_time;
    }

    if(install_time != nullptr)
    {
        _children["install-time"] = install_time;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "installed-count")
    {
        installed_count = value;
        installed_count.value_namespace = name_space;
        installed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modified-count")
    {
        modified_count = value;
        modified_count.value_namespace = name_space;
        modified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped-count")
    {
        skipped_count = value;
        skipped_count.value_namespace = name_space;
        skipped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdrawn-count")
    {
        withdrawn_count = value;
        withdrawn_count.value_namespace = name_space;
        withdrawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-version")
    {
        start_version = value;
        start_version.value_namespace = name_space;
        start_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-version")
    {
        target_version = value;
        target_version.value_namespace = name_space;
        target_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "installed-count")
    {
        installed_count.yfilter = yfilter;
    }
    if(value_path == "modified-count")
    {
        modified_count.yfilter = yfilter;
    }
    if(value_path == "skipped-count")
    {
        skipped_count.yfilter = yfilter;
    }
    if(value_path == "withdrawn-count")
    {
        withdrawn_count.yfilter = yfilter;
    }
    if(value_path == "start-version")
    {
        start_version.yfilter = yfilter;
    }
    if(value_path == "target-version")
    {
        target_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-time" || name == "install-time" || name == "installed-count" || name == "modified-count" || name == "skipped-count" || name == "withdrawn-count" || name == "start-version" || name == "target-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::UpdateTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "update-time"; yang_parent_name = "rib-install"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::~UpdateTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::InstallTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "install-time"; yang_parent_name = "rib-install"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::~InstallTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::Vrf_()
    :
    network_entry_count{YType::uint32, "network-entry-count"},
    paths_count{YType::uint32, "paths-count"},
    imported_paths{YType::uint32, "imported-paths"},
    local_paths{YType::uint32, "local-paths"},
    path_elems_count{YType::uint32, "path-elems-count"},
    path_memory{YType::uint32, "path-memory"},
    imported_path_memory{YType::uint32, "imported-path-memory"},
    local_path_memory{YType::uint32, "local-path-memory"},
    prefix_memory{YType::uint32, "prefix-memory"},
    path_elem_memory{YType::uint32, "path-elem-memory"},
    received_path_count{YType::uint32, "received-path-count"},
    history_path_count{YType::uint32, "history-path-count"},
    damped_path_count{YType::uint32, "damped-path-count"},
    malloced_prefix_count{YType::uint32, "malloced-prefix-count"},
    freed_prefix_count{YType::uint32, "freed-prefix-count"},
    malloced_path_count{YType::uint32, "malloced-path-count"},
    freed_path_count{YType::uint32, "freed-path-count"},
    malloced_path_elem_count{YType::uint32, "malloced-path-elem-count"},
    freed_path_elem_count{YType::uint32, "freed-path-elem-count"},
    any_ebgp_neighbor_missing_policy{YType::boolean, "any-ebgp-neighbor-missing-policy"},
    attribute_download{YType::boolean, "attribute-download"},
    route_target_download{YType::boolean, "route-target-download"},
    srms_prefix_sid{YType::boolean, "srms-prefix-sid"},
    add_path_install_enable{YType::boolean, "add-path-install-enable"},
    add_path_install_disable{YType::boolean, "add-path-install-disable"},
    best_external{YType::boolean, "best-external"},
    best_external_disable{YType::boolean, "best-external-disable"},
    label_retain{YType::boolean, "label-retain"},
    label_retainvalue{YType::uint32, "label-retainvalue"},
    tbl_bitf_size{YType::uint16, "tbl-bitf-size"},
    tbl_chunk_bitf_size{YType::uint16, "tbl-chunk-bitf-size"},
    is_route_reflector{YType::boolean, "is-route-reflector"},
    asbr{YType::boolean, "asbr"},
    retain_rt_all{YType::boolean, "retain-rt-all"},
    ibgp_nexthop_self_count{YType::uint32, "ibgp-nexthop-self-count"},
    use_igpsr_label{YType::boolean, "use-igpsr-label"},
    bmp_network_entry_count{YType::uint32, "bmp-network-entry-count"},
    bmp_paths_count{YType::uint32, "bmp-paths-count"},
    bmp_prefix_memory{YType::uint32, "bmp-prefix-memory"},
    bmp_path_memory{YType::uint32, "bmp-path-memory"}
{

    yang_name = "vrf"; yang_parent_name = "af-process-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return network_entry_count.is_set
	|| paths_count.is_set
	|| imported_paths.is_set
	|| local_paths.is_set
	|| path_elems_count.is_set
	|| path_memory.is_set
	|| imported_path_memory.is_set
	|| local_path_memory.is_set
	|| prefix_memory.is_set
	|| path_elem_memory.is_set
	|| received_path_count.is_set
	|| history_path_count.is_set
	|| damped_path_count.is_set
	|| malloced_prefix_count.is_set
	|| freed_prefix_count.is_set
	|| malloced_path_count.is_set
	|| freed_path_count.is_set
	|| malloced_path_elem_count.is_set
	|| freed_path_elem_count.is_set
	|| any_ebgp_neighbor_missing_policy.is_set
	|| attribute_download.is_set
	|| route_target_download.is_set
	|| srms_prefix_sid.is_set
	|| add_path_install_enable.is_set
	|| add_path_install_disable.is_set
	|| best_external.is_set
	|| best_external_disable.is_set
	|| label_retain.is_set
	|| label_retainvalue.is_set
	|| tbl_bitf_size.is_set
	|| tbl_chunk_bitf_size.is_set
	|| is_route_reflector.is_set
	|| asbr.is_set
	|| retain_rt_all.is_set
	|| ibgp_nexthop_self_count.is_set
	|| use_igpsr_label.is_set
	|| bmp_network_entry_count.is_set
	|| bmp_paths_count.is_set
	|| bmp_prefix_memory.is_set
	|| bmp_path_memory.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_entry_count.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(imported_paths.yfilter)
	|| ydk::is_set(local_paths.yfilter)
	|| ydk::is_set(path_elems_count.yfilter)
	|| ydk::is_set(path_memory.yfilter)
	|| ydk::is_set(imported_path_memory.yfilter)
	|| ydk::is_set(local_path_memory.yfilter)
	|| ydk::is_set(prefix_memory.yfilter)
	|| ydk::is_set(path_elem_memory.yfilter)
	|| ydk::is_set(received_path_count.yfilter)
	|| ydk::is_set(history_path_count.yfilter)
	|| ydk::is_set(damped_path_count.yfilter)
	|| ydk::is_set(malloced_prefix_count.yfilter)
	|| ydk::is_set(freed_prefix_count.yfilter)
	|| ydk::is_set(malloced_path_count.yfilter)
	|| ydk::is_set(freed_path_count.yfilter)
	|| ydk::is_set(malloced_path_elem_count.yfilter)
	|| ydk::is_set(freed_path_elem_count.yfilter)
	|| ydk::is_set(any_ebgp_neighbor_missing_policy.yfilter)
	|| ydk::is_set(attribute_download.yfilter)
	|| ydk::is_set(route_target_download.yfilter)
	|| ydk::is_set(srms_prefix_sid.yfilter)
	|| ydk::is_set(add_path_install_enable.yfilter)
	|| ydk::is_set(add_path_install_disable.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(best_external_disable.yfilter)
	|| ydk::is_set(label_retain.yfilter)
	|| ydk::is_set(label_retainvalue.yfilter)
	|| ydk::is_set(tbl_bitf_size.yfilter)
	|| ydk::is_set(tbl_chunk_bitf_size.yfilter)
	|| ydk::is_set(is_route_reflector.yfilter)
	|| ydk::is_set(asbr.yfilter)
	|| ydk::is_set(retain_rt_all.yfilter)
	|| ydk::is_set(ibgp_nexthop_self_count.yfilter)
	|| ydk::is_set(use_igpsr_label.yfilter)
	|| ydk::is_set(bmp_network_entry_count.yfilter)
	|| ydk::is_set(bmp_paths_count.yfilter)
	|| ydk::is_set(bmp_prefix_memory.yfilter)
	|| ydk::is_set(bmp_path_memory.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_entry_count.is_set || is_set(network_entry_count.yfilter)) leaf_name_data.push_back(network_entry_count.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (imported_paths.is_set || is_set(imported_paths.yfilter)) leaf_name_data.push_back(imported_paths.get_name_leafdata());
    if (local_paths.is_set || is_set(local_paths.yfilter)) leaf_name_data.push_back(local_paths.get_name_leafdata());
    if (path_elems_count.is_set || is_set(path_elems_count.yfilter)) leaf_name_data.push_back(path_elems_count.get_name_leafdata());
    if (path_memory.is_set || is_set(path_memory.yfilter)) leaf_name_data.push_back(path_memory.get_name_leafdata());
    if (imported_path_memory.is_set || is_set(imported_path_memory.yfilter)) leaf_name_data.push_back(imported_path_memory.get_name_leafdata());
    if (local_path_memory.is_set || is_set(local_path_memory.yfilter)) leaf_name_data.push_back(local_path_memory.get_name_leafdata());
    if (prefix_memory.is_set || is_set(prefix_memory.yfilter)) leaf_name_data.push_back(prefix_memory.get_name_leafdata());
    if (path_elem_memory.is_set || is_set(path_elem_memory.yfilter)) leaf_name_data.push_back(path_elem_memory.get_name_leafdata());
    if (received_path_count.is_set || is_set(received_path_count.yfilter)) leaf_name_data.push_back(received_path_count.get_name_leafdata());
    if (history_path_count.is_set || is_set(history_path_count.yfilter)) leaf_name_data.push_back(history_path_count.get_name_leafdata());
    if (damped_path_count.is_set || is_set(damped_path_count.yfilter)) leaf_name_data.push_back(damped_path_count.get_name_leafdata());
    if (malloced_prefix_count.is_set || is_set(malloced_prefix_count.yfilter)) leaf_name_data.push_back(malloced_prefix_count.get_name_leafdata());
    if (freed_prefix_count.is_set || is_set(freed_prefix_count.yfilter)) leaf_name_data.push_back(freed_prefix_count.get_name_leafdata());
    if (malloced_path_count.is_set || is_set(malloced_path_count.yfilter)) leaf_name_data.push_back(malloced_path_count.get_name_leafdata());
    if (freed_path_count.is_set || is_set(freed_path_count.yfilter)) leaf_name_data.push_back(freed_path_count.get_name_leafdata());
    if (malloced_path_elem_count.is_set || is_set(malloced_path_elem_count.yfilter)) leaf_name_data.push_back(malloced_path_elem_count.get_name_leafdata());
    if (freed_path_elem_count.is_set || is_set(freed_path_elem_count.yfilter)) leaf_name_data.push_back(freed_path_elem_count.get_name_leafdata());
    if (any_ebgp_neighbor_missing_policy.is_set || is_set(any_ebgp_neighbor_missing_policy.yfilter)) leaf_name_data.push_back(any_ebgp_neighbor_missing_policy.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.yfilter)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (route_target_download.is_set || is_set(route_target_download.yfilter)) leaf_name_data.push_back(route_target_download.get_name_leafdata());
    if (srms_prefix_sid.is_set || is_set(srms_prefix_sid.yfilter)) leaf_name_data.push_back(srms_prefix_sid.get_name_leafdata());
    if (add_path_install_enable.is_set || is_set(add_path_install_enable.yfilter)) leaf_name_data.push_back(add_path_install_enable.get_name_leafdata());
    if (add_path_install_disable.is_set || is_set(add_path_install_disable.yfilter)) leaf_name_data.push_back(add_path_install_disable.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (best_external_disable.is_set || is_set(best_external_disable.yfilter)) leaf_name_data.push_back(best_external_disable.get_name_leafdata());
    if (label_retain.is_set || is_set(label_retain.yfilter)) leaf_name_data.push_back(label_retain.get_name_leafdata());
    if (label_retainvalue.is_set || is_set(label_retainvalue.yfilter)) leaf_name_data.push_back(label_retainvalue.get_name_leafdata());
    if (tbl_bitf_size.is_set || is_set(tbl_bitf_size.yfilter)) leaf_name_data.push_back(tbl_bitf_size.get_name_leafdata());
    if (tbl_chunk_bitf_size.is_set || is_set(tbl_chunk_bitf_size.yfilter)) leaf_name_data.push_back(tbl_chunk_bitf_size.get_name_leafdata());
    if (is_route_reflector.is_set || is_set(is_route_reflector.yfilter)) leaf_name_data.push_back(is_route_reflector.get_name_leafdata());
    if (asbr.is_set || is_set(asbr.yfilter)) leaf_name_data.push_back(asbr.get_name_leafdata());
    if (retain_rt_all.is_set || is_set(retain_rt_all.yfilter)) leaf_name_data.push_back(retain_rt_all.get_name_leafdata());
    if (ibgp_nexthop_self_count.is_set || is_set(ibgp_nexthop_self_count.yfilter)) leaf_name_data.push_back(ibgp_nexthop_self_count.get_name_leafdata());
    if (use_igpsr_label.is_set || is_set(use_igpsr_label.yfilter)) leaf_name_data.push_back(use_igpsr_label.get_name_leafdata());
    if (bmp_network_entry_count.is_set || is_set(bmp_network_entry_count.yfilter)) leaf_name_data.push_back(bmp_network_entry_count.get_name_leafdata());
    if (bmp_paths_count.is_set || is_set(bmp_paths_count.yfilter)) leaf_name_data.push_back(bmp_paths_count.get_name_leafdata());
    if (bmp_prefix_memory.is_set || is_set(bmp_prefix_memory.yfilter)) leaf_name_data.push_back(bmp_prefix_memory.get_name_leafdata());
    if (bmp_path_memory.is_set || is_set(bmp_path_memory.yfilter)) leaf_name_data.push_back(bmp_path_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-entry-count")
    {
        network_entry_count = value;
        network_entry_count.value_namespace = name_space;
        network_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-paths")
    {
        imported_paths = value;
        imported_paths.value_namespace = name_space;
        imported_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths")
    {
        local_paths = value;
        local_paths.value_namespace = name_space;
        local_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-count")
    {
        path_elems_count = value;
        path_elems_count.value_namespace = name_space;
        path_elems_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-memory")
    {
        path_memory = value;
        path_memory.value_namespace = name_space;
        path_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-path-memory")
    {
        imported_path_memory = value;
        imported_path_memory.value_namespace = name_space;
        imported_path_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-path-memory")
    {
        local_path_memory = value;
        local_path_memory.value_namespace = name_space;
        local_path_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-memory")
    {
        prefix_memory = value;
        prefix_memory.value_namespace = name_space;
        prefix_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elem-memory")
    {
        path_elem_memory = value;
        path_elem_memory.value_namespace = name_space;
        path_elem_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-path-count")
    {
        received_path_count = value;
        received_path_count.value_namespace = name_space;
        received_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-path-count")
    {
        history_path_count = value;
        history_path_count.value_namespace = name_space;
        history_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damped-path-count")
    {
        damped_path_count = value;
        damped_path_count.value_namespace = name_space;
        damped_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-prefix-count")
    {
        malloced_prefix_count = value;
        malloced_prefix_count.value_namespace = name_space;
        malloced_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-prefix-count")
    {
        freed_prefix_count = value;
        freed_prefix_count.value_namespace = name_space;
        freed_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-path-count")
    {
        malloced_path_count = value;
        malloced_path_count.value_namespace = name_space;
        malloced_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-path-count")
    {
        freed_path_count = value;
        freed_path_count.value_namespace = name_space;
        freed_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-path-elem-count")
    {
        malloced_path_elem_count = value;
        malloced_path_elem_count.value_namespace = name_space;
        malloced_path_elem_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-path-elem-count")
    {
        freed_path_elem_count = value;
        freed_path_elem_count.value_namespace = name_space;
        freed_path_elem_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-ebgp-neighbor-missing-policy")
    {
        any_ebgp_neighbor_missing_policy = value;
        any_ebgp_neighbor_missing_policy.value_namespace = name_space;
        any_ebgp_neighbor_missing_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
        attribute_download.value_namespace = name_space;
        attribute_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-download")
    {
        route_target_download = value;
        route_target_download.value_namespace = name_space;
        route_target_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srms-prefix-sid")
    {
        srms_prefix_sid = value;
        srms_prefix_sid.value_namespace = name_space;
        srms_prefix_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-path-install-enable")
    {
        add_path_install_enable = value;
        add_path_install_enable.value_namespace = name_space;
        add_path_install_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-path-install-disable")
    {
        add_path_install_disable = value;
        add_path_install_disable.value_namespace = name_space;
        add_path_install_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external-disable")
    {
        best_external_disable = value;
        best_external_disable.value_namespace = name_space;
        best_external_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-retain")
    {
        label_retain = value;
        label_retain.value_namespace = name_space;
        label_retain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-retainvalue")
    {
        label_retainvalue = value;
        label_retainvalue.value_namespace = name_space;
        label_retainvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-bitf-size")
    {
        tbl_bitf_size = value;
        tbl_bitf_size.value_namespace = name_space;
        tbl_bitf_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-chunk-bitf-size")
    {
        tbl_chunk_bitf_size = value;
        tbl_chunk_bitf_size.value_namespace = name_space;
        tbl_chunk_bitf_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-reflector")
    {
        is_route_reflector = value;
        is_route_reflector.value_namespace = name_space;
        is_route_reflector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asbr")
    {
        asbr = value;
        asbr.value_namespace = name_space;
        asbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retain-rt-all")
    {
        retain_rt_all = value;
        retain_rt_all.value_namespace = name_space;
        retain_rt_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibgp-nexthop-self-count")
    {
        ibgp_nexthop_self_count = value;
        ibgp_nexthop_self_count.value_namespace = name_space;
        ibgp_nexthop_self_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label = value;
        use_igpsr_label.value_namespace = name_space;
        use_igpsr_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-network-entry-count")
    {
        bmp_network_entry_count = value;
        bmp_network_entry_count.value_namespace = name_space;
        bmp_network_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-paths-count")
    {
        bmp_paths_count = value;
        bmp_paths_count.value_namespace = name_space;
        bmp_paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-prefix-memory")
    {
        bmp_prefix_memory = value;
        bmp_prefix_memory.value_namespace = name_space;
        bmp_prefix_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-path-memory")
    {
        bmp_path_memory = value;
        bmp_path_memory.value_namespace = name_space;
        bmp_path_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-entry-count")
    {
        network_entry_count.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "imported-paths")
    {
        imported_paths.yfilter = yfilter;
    }
    if(value_path == "local-paths")
    {
        local_paths.yfilter = yfilter;
    }
    if(value_path == "path-elems-count")
    {
        path_elems_count.yfilter = yfilter;
    }
    if(value_path == "path-memory")
    {
        path_memory.yfilter = yfilter;
    }
    if(value_path == "imported-path-memory")
    {
        imported_path_memory.yfilter = yfilter;
    }
    if(value_path == "local-path-memory")
    {
        local_path_memory.yfilter = yfilter;
    }
    if(value_path == "prefix-memory")
    {
        prefix_memory.yfilter = yfilter;
    }
    if(value_path == "path-elem-memory")
    {
        path_elem_memory.yfilter = yfilter;
    }
    if(value_path == "received-path-count")
    {
        received_path_count.yfilter = yfilter;
    }
    if(value_path == "history-path-count")
    {
        history_path_count.yfilter = yfilter;
    }
    if(value_path == "damped-path-count")
    {
        damped_path_count.yfilter = yfilter;
    }
    if(value_path == "malloced-prefix-count")
    {
        malloced_prefix_count.yfilter = yfilter;
    }
    if(value_path == "freed-prefix-count")
    {
        freed_prefix_count.yfilter = yfilter;
    }
    if(value_path == "malloced-path-count")
    {
        malloced_path_count.yfilter = yfilter;
    }
    if(value_path == "freed-path-count")
    {
        freed_path_count.yfilter = yfilter;
    }
    if(value_path == "malloced-path-elem-count")
    {
        malloced_path_elem_count.yfilter = yfilter;
    }
    if(value_path == "freed-path-elem-count")
    {
        freed_path_elem_count.yfilter = yfilter;
    }
    if(value_path == "any-ebgp-neighbor-missing-policy")
    {
        any_ebgp_neighbor_missing_policy.yfilter = yfilter;
    }
    if(value_path == "attribute-download")
    {
        attribute_download.yfilter = yfilter;
    }
    if(value_path == "route-target-download")
    {
        route_target_download.yfilter = yfilter;
    }
    if(value_path == "srms-prefix-sid")
    {
        srms_prefix_sid.yfilter = yfilter;
    }
    if(value_path == "add-path-install-enable")
    {
        add_path_install_enable.yfilter = yfilter;
    }
    if(value_path == "add-path-install-disable")
    {
        add_path_install_disable.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "best-external-disable")
    {
        best_external_disable.yfilter = yfilter;
    }
    if(value_path == "label-retain")
    {
        label_retain.yfilter = yfilter;
    }
    if(value_path == "label-retainvalue")
    {
        label_retainvalue.yfilter = yfilter;
    }
    if(value_path == "tbl-bitf-size")
    {
        tbl_bitf_size.yfilter = yfilter;
    }
    if(value_path == "tbl-chunk-bitf-size")
    {
        tbl_chunk_bitf_size.yfilter = yfilter;
    }
    if(value_path == "is-route-reflector")
    {
        is_route_reflector.yfilter = yfilter;
    }
    if(value_path == "asbr")
    {
        asbr.yfilter = yfilter;
    }
    if(value_path == "retain-rt-all")
    {
        retain_rt_all.yfilter = yfilter;
    }
    if(value_path == "ibgp-nexthop-self-count")
    {
        ibgp_nexthop_self_count.yfilter = yfilter;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label.yfilter = yfilter;
    }
    if(value_path == "bmp-network-entry-count")
    {
        bmp_network_entry_count.yfilter = yfilter;
    }
    if(value_path == "bmp-paths-count")
    {
        bmp_paths_count.yfilter = yfilter;
    }
    if(value_path == "bmp-prefix-memory")
    {
        bmp_prefix_memory.yfilter = yfilter;
    }
    if(value_path == "bmp-path-memory")
    {
        bmp_path_memory.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-entry-count" || name == "paths-count" || name == "imported-paths" || name == "local-paths" || name == "path-elems-count" || name == "path-memory" || name == "imported-path-memory" || name == "local-path-memory" || name == "prefix-memory" || name == "path-elem-memory" || name == "received-path-count" || name == "history-path-count" || name == "damped-path-count" || name == "malloced-prefix-count" || name == "freed-prefix-count" || name == "malloced-path-count" || name == "freed-path-count" || name == "malloced-path-elem-count" || name == "freed-path-elem-count" || name == "any-ebgp-neighbor-missing-policy" || name == "attribute-download" || name == "route-target-download" || name == "srms-prefix-sid" || name == "add-path-install-enable" || name == "add-path-install-disable" || name == "best-external" || name == "best-external-disable" || name == "label-retain" || name == "label-retainvalue" || name == "tbl-bitf-size" || name == "tbl-chunk-bitf-size" || name == "is-route-reflector" || name == "asbr" || name == "retain-rt-all" || name == "ibgp-nexthop-self-count" || name == "use-igpsr-label" || name == "bmp-network-entry-count" || name == "bmp-paths-count" || name == "bmp-prefix-memory" || name == "bmp-path-memory")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::PerformanceStatistics()
    :
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global>())
    , vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_>())
{
    global->parent = this;
    vrf->parent = this;

    yang_name = "performance-statistics"; yang_parent_name = "af-process-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::Global()
    :
    has_converged{YType::boolean, "has-converged"},
    first_nbr_up_time{YType::uint32, "first-nbr-up-time"},
    total_pim_install{YType::uint32, "total-pim-install"},
    total_pim_callbacks{YType::uint32, "total-pim-callbacks"},
    total_pim_callback_batch{YType::uint32, "total-pim-callback-batch"}
        ,
    mode_enter_time(this, {})
    , total_pim_install_add(this, {})
    , total_pim_install_del(this, {})
    , total_pim_callback_add(this, {})
    , total_pim_callback_del(this, {})
    , total_pim_callback_add_local(this, {})
    , total_pim_callback_del_local(this, {})
{

    yang_name = "global"; yang_parent_name = "performance-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mode_enter_time.len(); index++)
    {
        if(mode_enter_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_add.len(); index++)
    {
        if(total_pim_install_add[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_del.len(); index++)
    {
        if(total_pim_install_del[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add.len(); index++)
    {
        if(total_pim_callback_add[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del.len(); index++)
    {
        if(total_pim_callback_del[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add_local.len(); index++)
    {
        if(total_pim_callback_add_local[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del_local.len(); index++)
    {
        if(total_pim_callback_del_local[index]->has_data())
            return true;
    }
    return has_converged.is_set
	|| first_nbr_up_time.is_set
	|| total_pim_install.is_set
	|| total_pim_callbacks.is_set
	|| total_pim_callback_batch.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::has_operation() const
{
    for (std::size_t index=0; index<mode_enter_time.len(); index++)
    {
        if(mode_enter_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_add.len(); index++)
    {
        if(total_pim_install_add[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_del.len(); index++)
    {
        if(total_pim_install_del[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add.len(); index++)
    {
        if(total_pim_callback_add[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del.len(); index++)
    {
        if(total_pim_callback_del[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add_local.len(); index++)
    {
        if(total_pim_callback_add_local[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del_local.len(); index++)
    {
        if(total_pim_callback_del_local[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(has_converged.yfilter)
	|| ydk::is_set(first_nbr_up_time.yfilter)
	|| ydk::is_set(total_pim_install.yfilter)
	|| ydk::is_set(total_pim_callbacks.yfilter)
	|| ydk::is_set(total_pim_callback_batch.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_converged.is_set || is_set(has_converged.yfilter)) leaf_name_data.push_back(has_converged.get_name_leafdata());
    if (first_nbr_up_time.is_set || is_set(first_nbr_up_time.yfilter)) leaf_name_data.push_back(first_nbr_up_time.get_name_leafdata());
    if (total_pim_install.is_set || is_set(total_pim_install.yfilter)) leaf_name_data.push_back(total_pim_install.get_name_leafdata());
    if (total_pim_callbacks.is_set || is_set(total_pim_callbacks.yfilter)) leaf_name_data.push_back(total_pim_callbacks.get_name_leafdata());
    if (total_pim_callback_batch.is_set || is_set(total_pim_callback_batch.yfilter)) leaf_name_data.push_back(total_pim_callback_batch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-enter-time")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime>();
        ent_->parent = this;
        mode_enter_time.append(ent_);
        return ent_;
    }

    if(child_yang_name == "total-pim-install-add")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd>();
        ent_->parent = this;
        total_pim_install_add.append(ent_);
        return ent_;
    }

    if(child_yang_name == "total-pim-install-del")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel>();
        ent_->parent = this;
        total_pim_install_del.append(ent_);
        return ent_;
    }

    if(child_yang_name == "total-pim-callback-add")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd>();
        ent_->parent = this;
        total_pim_callback_add.append(ent_);
        return ent_;
    }

    if(child_yang_name == "total-pim-callback-del")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel>();
        ent_->parent = this;
        total_pim_callback_del.append(ent_);
        return ent_;
    }

    if(child_yang_name == "total-pim-callback-add-local")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal>();
        ent_->parent = this;
        total_pim_callback_add_local.append(ent_);
        return ent_;
    }

    if(child_yang_name == "total-pim-callback-del-local")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal>();
        ent_->parent = this;
        total_pim_callback_del_local.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mode_enter_time.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : total_pim_install_add.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : total_pim_install_del.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : total_pim_callback_add.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : total_pim_callback_del.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : total_pim_callback_add_local.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : total_pim_callback_del_local.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "has-converged")
    {
        has_converged = value;
        has_converged.value_namespace = name_space;
        has_converged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-nbr-up-time")
    {
        first_nbr_up_time = value;
        first_nbr_up_time.value_namespace = name_space;
        first_nbr_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pim-install")
    {
        total_pim_install = value;
        total_pim_install.value_namespace = name_space;
        total_pim_install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pim-callbacks")
    {
        total_pim_callbacks = value;
        total_pim_callbacks.value_namespace = name_space;
        total_pim_callbacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pim-callback-batch")
    {
        total_pim_callback_batch = value;
        total_pim_callback_batch.value_namespace = name_space;
        total_pim_callback_batch.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "has-converged")
    {
        has_converged.yfilter = yfilter;
    }
    if(value_path == "first-nbr-up-time")
    {
        first_nbr_up_time.yfilter = yfilter;
    }
    if(value_path == "total-pim-install")
    {
        total_pim_install.yfilter = yfilter;
    }
    if(value_path == "total-pim-callbacks")
    {
        total_pim_callbacks.yfilter = yfilter;
    }
    if(value_path == "total-pim-callback-batch")
    {
        total_pim_callback_batch.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-enter-time" || name == "total-pim-install-add" || name == "total-pim-install-del" || name == "total-pim-callback-add" || name == "total-pim-callback-del" || name == "total-pim-callback-add-local" || name == "total-pim-callback-del-local" || name == "has-converged" || name == "first-nbr-up-time" || name == "total-pim-install" || name == "total-pim-callbacks" || name == "total-pim-callback-batch")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::ModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mode-enter-time"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::~ModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-enter-time";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::TotalPimInstallAdd()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-install-add"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::~TotalPimInstallAdd()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-install-add";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::TotalPimInstallDel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-install-del"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::~TotalPimInstallDel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-install-del";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::TotalPimCallbackAdd()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-add"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::~TotalPimCallbackAdd()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-add";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::TotalPimCallbackDel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-del"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::~TotalPimCallbackDel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-del";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::TotalPimCallbackAddLocal()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-add-local"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::~TotalPimCallbackAddLocal()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-add-local";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::TotalPimCallbackDelLocal()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-del-local"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::~TotalPimCallbackDelLocal()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-del-local";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::Vrf_()
    :
    update_generation_calls{YType::uint32, "update-generation-calls"},
    update_generation_prefixes_count{YType::uint32, "update-generation-prefixes-count"},
    update_generation_be_prefixes_count{YType::uint32, "update-generation-be-prefixes-count"},
    update_generation_messages_count{YType::uint32, "update-generation-messages-count"},
    update_generation_time{YType::uint32, "update-generation-time"},
    rib_update_calls{YType::uint32, "rib-update-calls"},
    rib_update_time{YType::uint32, "rib-update-time"},
    prefixes_sent_to_rib{YType::uint32, "prefixes-sent-to-rib"},
    prefixes_resent_to_rib{YType::uint32, "prefixes-resent-to-rib"},
    prefixes_not_sent_to_rib{YType::uint32, "prefixes-not-sent-to-rib"},
    prefixes_removed_from_rib{YType::uint32, "prefixes-removed-from-rib"},
    attributes_sent_to_rib{YType::uint32, "attributes-sent-to-rib"},
    attributes_removed_from_rib{YType::uint32, "attributes-removed-from-rib"},
    attributes_recover_from_rib{YType::uint32, "attributes-recover-from-rib"},
    scanner_runs{YType::uint32, "scanner-runs"},
    scanner_time{YType::uint32, "scanner-time"},
    rib_tbl_del_calls{YType::uint32, "rib-tbl-del-calls"},
    rib_tbl_invalid_calls{YType::uint32, "rib-tbl-invalid-calls"},
    rib_tbl_skip_calls{YType::uint32, "rib-tbl-skip-calls"},
    rib_tbl_local_label{YType::uint32, "rib-tbl-local-label"},
    rib_tbl_retry{YType::uint32, "rib-tbl-retry"},
    time_last_update_sent{YType::uint32, "time-last-update-sent"},
    is_rib_table_full{YType::boolean, "is-rib-table-full"},
    rib_table_full_version{YType::uint32, "rib-table-full-version"},
    first_rib_table_full_version{YType::uint32, "first-rib-table-full-version"},
    last_rib_table_full_version{YType::uint32, "last-rib-table-full-version"},
    last_rib_table_full_age{YType::uint32, "last-rib-table-full-age"},
    first_rib_table_has_space_version{YType::uint32, "first-rib-table-has-space-version"},
    last_rib_table_has_space_version{YType::uint32, "last-rib-table-has-space-version"},
    last_rib_table_has_space_age{YType::uint32, "last-rib-table-has-space-age"},
    rib_trigger{YType::boolean, "rib-trigger"},
    vrf_flags{YType::uint32, "vrf-flags"},
    label_calls{YType::uint32, "label-calls"},
    label_time{YType::uint32, "label-time"},
    label_rewrite_count{YType::uint32, "label-rewrite-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_added_count{YType::uint32, "label-added-count"},
    import_calls{YType::uint32, "import-calls"},
    import_time{YType::uint32, "import-time"},
    import_src_net_processed_count{YType::uint32, "import-src-net-processed-count"},
    import_dest_net_processed_count{YType::uint32, "import-dest-net-processed-count"},
    import_added_path_count{YType::uint32, "import-added-path-count"},
    import_removed_path_count{YType::uint32, "import-removed-path-count"},
    import_replaced_path_count{YType::uint32, "import-replaced-path-count"},
    update_group_count{YType::uint32, "update-group-count"},
    subgroup_count{YType::uint32, "subgroup-count"}
        ,
    time_rib_coverged(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged>())
    , time_rib_down(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown>())
    , first_rib_table_full_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp>())
    , last_rib_table_full_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp>())
    , first_rib_table_has_space_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp>())
    , last_rib_table_has_space_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp>())
    , time_label_retain(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain>())
{
    time_rib_coverged->parent = this;
    time_rib_down->parent = this;
    first_rib_table_full_timestamp->parent = this;
    last_rib_table_full_timestamp->parent = this;
    first_rib_table_has_space_timestamp->parent = this;
    last_rib_table_has_space_timestamp->parent = this;
    time_label_retain->parent = this;

    yang_name = "vrf"; yang_parent_name = "performance-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return update_generation_calls.is_set
	|| update_generation_prefixes_count.is_set
	|| update_generation_be_prefixes_count.is_set
	|| update_generation_messages_count.is_set
	|| update_generation_time.is_set
	|| rib_update_calls.is_set
	|| rib_update_time.is_set
	|| prefixes_sent_to_rib.is_set
	|| prefixes_resent_to_rib.is_set
	|| prefixes_not_sent_to_rib.is_set
	|| prefixes_removed_from_rib.is_set
	|| attributes_sent_to_rib.is_set
	|| attributes_removed_from_rib.is_set
	|| attributes_recover_from_rib.is_set
	|| scanner_runs.is_set
	|| scanner_time.is_set
	|| rib_tbl_del_calls.is_set
	|| rib_tbl_invalid_calls.is_set
	|| rib_tbl_skip_calls.is_set
	|| rib_tbl_local_label.is_set
	|| rib_tbl_retry.is_set
	|| time_last_update_sent.is_set
	|| is_rib_table_full.is_set
	|| rib_table_full_version.is_set
	|| first_rib_table_full_version.is_set
	|| last_rib_table_full_version.is_set
	|| last_rib_table_full_age.is_set
	|| first_rib_table_has_space_version.is_set
	|| last_rib_table_has_space_version.is_set
	|| last_rib_table_has_space_age.is_set
	|| rib_trigger.is_set
	|| vrf_flags.is_set
	|| label_calls.is_set
	|| label_time.is_set
	|| label_rewrite_count.is_set
	|| label_release_count.is_set
	|| label_added_count.is_set
	|| import_calls.is_set
	|| import_time.is_set
	|| import_src_net_processed_count.is_set
	|| import_dest_net_processed_count.is_set
	|| import_added_path_count.is_set
	|| import_removed_path_count.is_set
	|| import_replaced_path_count.is_set
	|| update_group_count.is_set
	|| subgroup_count.is_set
	|| (time_rib_coverged !=  nullptr && time_rib_coverged->has_data())
	|| (time_rib_down !=  nullptr && time_rib_down->has_data())
	|| (first_rib_table_full_timestamp !=  nullptr && first_rib_table_full_timestamp->has_data())
	|| (last_rib_table_full_timestamp !=  nullptr && last_rib_table_full_timestamp->has_data())
	|| (first_rib_table_has_space_timestamp !=  nullptr && first_rib_table_has_space_timestamp->has_data())
	|| (last_rib_table_has_space_timestamp !=  nullptr && last_rib_table_has_space_timestamp->has_data())
	|| (time_label_retain !=  nullptr && time_label_retain->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_generation_calls.yfilter)
	|| ydk::is_set(update_generation_prefixes_count.yfilter)
	|| ydk::is_set(update_generation_be_prefixes_count.yfilter)
	|| ydk::is_set(update_generation_messages_count.yfilter)
	|| ydk::is_set(update_generation_time.yfilter)
	|| ydk::is_set(rib_update_calls.yfilter)
	|| ydk::is_set(rib_update_time.yfilter)
	|| ydk::is_set(prefixes_sent_to_rib.yfilter)
	|| ydk::is_set(prefixes_resent_to_rib.yfilter)
	|| ydk::is_set(prefixes_not_sent_to_rib.yfilter)
	|| ydk::is_set(prefixes_removed_from_rib.yfilter)
	|| ydk::is_set(attributes_sent_to_rib.yfilter)
	|| ydk::is_set(attributes_removed_from_rib.yfilter)
	|| ydk::is_set(attributes_recover_from_rib.yfilter)
	|| ydk::is_set(scanner_runs.yfilter)
	|| ydk::is_set(scanner_time.yfilter)
	|| ydk::is_set(rib_tbl_del_calls.yfilter)
	|| ydk::is_set(rib_tbl_invalid_calls.yfilter)
	|| ydk::is_set(rib_tbl_skip_calls.yfilter)
	|| ydk::is_set(rib_tbl_local_label.yfilter)
	|| ydk::is_set(rib_tbl_retry.yfilter)
	|| ydk::is_set(time_last_update_sent.yfilter)
	|| ydk::is_set(is_rib_table_full.yfilter)
	|| ydk::is_set(rib_table_full_version.yfilter)
	|| ydk::is_set(first_rib_table_full_version.yfilter)
	|| ydk::is_set(last_rib_table_full_version.yfilter)
	|| ydk::is_set(last_rib_table_full_age.yfilter)
	|| ydk::is_set(first_rib_table_has_space_version.yfilter)
	|| ydk::is_set(last_rib_table_has_space_version.yfilter)
	|| ydk::is_set(last_rib_table_has_space_age.yfilter)
	|| ydk::is_set(rib_trigger.yfilter)
	|| ydk::is_set(vrf_flags.yfilter)
	|| ydk::is_set(label_calls.yfilter)
	|| ydk::is_set(label_time.yfilter)
	|| ydk::is_set(label_rewrite_count.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_added_count.yfilter)
	|| ydk::is_set(import_calls.yfilter)
	|| ydk::is_set(import_time.yfilter)
	|| ydk::is_set(import_src_net_processed_count.yfilter)
	|| ydk::is_set(import_dest_net_processed_count.yfilter)
	|| ydk::is_set(import_added_path_count.yfilter)
	|| ydk::is_set(import_removed_path_count.yfilter)
	|| ydk::is_set(import_replaced_path_count.yfilter)
	|| ydk::is_set(update_group_count.yfilter)
	|| ydk::is_set(subgroup_count.yfilter)
	|| (time_rib_coverged !=  nullptr && time_rib_coverged->has_operation())
	|| (time_rib_down !=  nullptr && time_rib_down->has_operation())
	|| (first_rib_table_full_timestamp !=  nullptr && first_rib_table_full_timestamp->has_operation())
	|| (last_rib_table_full_timestamp !=  nullptr && last_rib_table_full_timestamp->has_operation())
	|| (first_rib_table_has_space_timestamp !=  nullptr && first_rib_table_has_space_timestamp->has_operation())
	|| (last_rib_table_has_space_timestamp !=  nullptr && last_rib_table_has_space_timestamp->has_operation())
	|| (time_label_retain !=  nullptr && time_label_retain->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_generation_calls.is_set || is_set(update_generation_calls.yfilter)) leaf_name_data.push_back(update_generation_calls.get_name_leafdata());
    if (update_generation_prefixes_count.is_set || is_set(update_generation_prefixes_count.yfilter)) leaf_name_data.push_back(update_generation_prefixes_count.get_name_leafdata());
    if (update_generation_be_prefixes_count.is_set || is_set(update_generation_be_prefixes_count.yfilter)) leaf_name_data.push_back(update_generation_be_prefixes_count.get_name_leafdata());
    if (update_generation_messages_count.is_set || is_set(update_generation_messages_count.yfilter)) leaf_name_data.push_back(update_generation_messages_count.get_name_leafdata());
    if (update_generation_time.is_set || is_set(update_generation_time.yfilter)) leaf_name_data.push_back(update_generation_time.get_name_leafdata());
    if (rib_update_calls.is_set || is_set(rib_update_calls.yfilter)) leaf_name_data.push_back(rib_update_calls.get_name_leafdata());
    if (rib_update_time.is_set || is_set(rib_update_time.yfilter)) leaf_name_data.push_back(rib_update_time.get_name_leafdata());
    if (prefixes_sent_to_rib.is_set || is_set(prefixes_sent_to_rib.yfilter)) leaf_name_data.push_back(prefixes_sent_to_rib.get_name_leafdata());
    if (prefixes_resent_to_rib.is_set || is_set(prefixes_resent_to_rib.yfilter)) leaf_name_data.push_back(prefixes_resent_to_rib.get_name_leafdata());
    if (prefixes_not_sent_to_rib.is_set || is_set(prefixes_not_sent_to_rib.yfilter)) leaf_name_data.push_back(prefixes_not_sent_to_rib.get_name_leafdata());
    if (prefixes_removed_from_rib.is_set || is_set(prefixes_removed_from_rib.yfilter)) leaf_name_data.push_back(prefixes_removed_from_rib.get_name_leafdata());
    if (attributes_sent_to_rib.is_set || is_set(attributes_sent_to_rib.yfilter)) leaf_name_data.push_back(attributes_sent_to_rib.get_name_leafdata());
    if (attributes_removed_from_rib.is_set || is_set(attributes_removed_from_rib.yfilter)) leaf_name_data.push_back(attributes_removed_from_rib.get_name_leafdata());
    if (attributes_recover_from_rib.is_set || is_set(attributes_recover_from_rib.yfilter)) leaf_name_data.push_back(attributes_recover_from_rib.get_name_leafdata());
    if (scanner_runs.is_set || is_set(scanner_runs.yfilter)) leaf_name_data.push_back(scanner_runs.get_name_leafdata());
    if (scanner_time.is_set || is_set(scanner_time.yfilter)) leaf_name_data.push_back(scanner_time.get_name_leafdata());
    if (rib_tbl_del_calls.is_set || is_set(rib_tbl_del_calls.yfilter)) leaf_name_data.push_back(rib_tbl_del_calls.get_name_leafdata());
    if (rib_tbl_invalid_calls.is_set || is_set(rib_tbl_invalid_calls.yfilter)) leaf_name_data.push_back(rib_tbl_invalid_calls.get_name_leafdata());
    if (rib_tbl_skip_calls.is_set || is_set(rib_tbl_skip_calls.yfilter)) leaf_name_data.push_back(rib_tbl_skip_calls.get_name_leafdata());
    if (rib_tbl_local_label.is_set || is_set(rib_tbl_local_label.yfilter)) leaf_name_data.push_back(rib_tbl_local_label.get_name_leafdata());
    if (rib_tbl_retry.is_set || is_set(rib_tbl_retry.yfilter)) leaf_name_data.push_back(rib_tbl_retry.get_name_leafdata());
    if (time_last_update_sent.is_set || is_set(time_last_update_sent.yfilter)) leaf_name_data.push_back(time_last_update_sent.get_name_leafdata());
    if (is_rib_table_full.is_set || is_set(is_rib_table_full.yfilter)) leaf_name_data.push_back(is_rib_table_full.get_name_leafdata());
    if (rib_table_full_version.is_set || is_set(rib_table_full_version.yfilter)) leaf_name_data.push_back(rib_table_full_version.get_name_leafdata());
    if (first_rib_table_full_version.is_set || is_set(first_rib_table_full_version.yfilter)) leaf_name_data.push_back(first_rib_table_full_version.get_name_leafdata());
    if (last_rib_table_full_version.is_set || is_set(last_rib_table_full_version.yfilter)) leaf_name_data.push_back(last_rib_table_full_version.get_name_leafdata());
    if (last_rib_table_full_age.is_set || is_set(last_rib_table_full_age.yfilter)) leaf_name_data.push_back(last_rib_table_full_age.get_name_leafdata());
    if (first_rib_table_has_space_version.is_set || is_set(first_rib_table_has_space_version.yfilter)) leaf_name_data.push_back(first_rib_table_has_space_version.get_name_leafdata());
    if (last_rib_table_has_space_version.is_set || is_set(last_rib_table_has_space_version.yfilter)) leaf_name_data.push_back(last_rib_table_has_space_version.get_name_leafdata());
    if (last_rib_table_has_space_age.is_set || is_set(last_rib_table_has_space_age.yfilter)) leaf_name_data.push_back(last_rib_table_has_space_age.get_name_leafdata());
    if (rib_trigger.is_set || is_set(rib_trigger.yfilter)) leaf_name_data.push_back(rib_trigger.get_name_leafdata());
    if (vrf_flags.is_set || is_set(vrf_flags.yfilter)) leaf_name_data.push_back(vrf_flags.get_name_leafdata());
    if (label_calls.is_set || is_set(label_calls.yfilter)) leaf_name_data.push_back(label_calls.get_name_leafdata());
    if (label_time.is_set || is_set(label_time.yfilter)) leaf_name_data.push_back(label_time.get_name_leafdata());
    if (label_rewrite_count.is_set || is_set(label_rewrite_count.yfilter)) leaf_name_data.push_back(label_rewrite_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_added_count.is_set || is_set(label_added_count.yfilter)) leaf_name_data.push_back(label_added_count.get_name_leafdata());
    if (import_calls.is_set || is_set(import_calls.yfilter)) leaf_name_data.push_back(import_calls.get_name_leafdata());
    if (import_time.is_set || is_set(import_time.yfilter)) leaf_name_data.push_back(import_time.get_name_leafdata());
    if (import_src_net_processed_count.is_set || is_set(import_src_net_processed_count.yfilter)) leaf_name_data.push_back(import_src_net_processed_count.get_name_leafdata());
    if (import_dest_net_processed_count.is_set || is_set(import_dest_net_processed_count.yfilter)) leaf_name_data.push_back(import_dest_net_processed_count.get_name_leafdata());
    if (import_added_path_count.is_set || is_set(import_added_path_count.yfilter)) leaf_name_data.push_back(import_added_path_count.get_name_leafdata());
    if (import_removed_path_count.is_set || is_set(import_removed_path_count.yfilter)) leaf_name_data.push_back(import_removed_path_count.get_name_leafdata());
    if (import_replaced_path_count.is_set || is_set(import_replaced_path_count.yfilter)) leaf_name_data.push_back(import_replaced_path_count.get_name_leafdata());
    if (update_group_count.is_set || is_set(update_group_count.yfilter)) leaf_name_data.push_back(update_group_count.get_name_leafdata());
    if (subgroup_count.is_set || is_set(subgroup_count.yfilter)) leaf_name_data.push_back(subgroup_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time-rib-coverged")
    {
        if(time_rib_coverged == nullptr)
        {
            time_rib_coverged = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged>();
        }
        return time_rib_coverged;
    }

    if(child_yang_name == "time-rib-down")
    {
        if(time_rib_down == nullptr)
        {
            time_rib_down = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown>();
        }
        return time_rib_down;
    }

    if(child_yang_name == "first-rib-table-full-timestamp")
    {
        if(first_rib_table_full_timestamp == nullptr)
        {
            first_rib_table_full_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp>();
        }
        return first_rib_table_full_timestamp;
    }

    if(child_yang_name == "last-rib-table-full-timestamp")
    {
        if(last_rib_table_full_timestamp == nullptr)
        {
            last_rib_table_full_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp>();
        }
        return last_rib_table_full_timestamp;
    }

    if(child_yang_name == "first-rib-table-has-space-timestamp")
    {
        if(first_rib_table_has_space_timestamp == nullptr)
        {
            first_rib_table_has_space_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp>();
        }
        return first_rib_table_has_space_timestamp;
    }

    if(child_yang_name == "last-rib-table-has-space-timestamp")
    {
        if(last_rib_table_has_space_timestamp == nullptr)
        {
            last_rib_table_has_space_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp>();
        }
        return last_rib_table_has_space_timestamp;
    }

    if(child_yang_name == "time-label-retain")
    {
        if(time_label_retain == nullptr)
        {
            time_label_retain = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain>();
        }
        return time_label_retain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(time_rib_coverged != nullptr)
    {
        _children["time-rib-coverged"] = time_rib_coverged;
    }

    if(time_rib_down != nullptr)
    {
        _children["time-rib-down"] = time_rib_down;
    }

    if(first_rib_table_full_timestamp != nullptr)
    {
        _children["first-rib-table-full-timestamp"] = first_rib_table_full_timestamp;
    }

    if(last_rib_table_full_timestamp != nullptr)
    {
        _children["last-rib-table-full-timestamp"] = last_rib_table_full_timestamp;
    }

    if(first_rib_table_has_space_timestamp != nullptr)
    {
        _children["first-rib-table-has-space-timestamp"] = first_rib_table_has_space_timestamp;
    }

    if(last_rib_table_has_space_timestamp != nullptr)
    {
        _children["last-rib-table-has-space-timestamp"] = last_rib_table_has_space_timestamp;
    }

    if(time_label_retain != nullptr)
    {
        _children["time-label-retain"] = time_label_retain;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-generation-calls")
    {
        update_generation_calls = value;
        update_generation_calls.value_namespace = name_space;
        update_generation_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-prefixes-count")
    {
        update_generation_prefixes_count = value;
        update_generation_prefixes_count.value_namespace = name_space;
        update_generation_prefixes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-be-prefixes-count")
    {
        update_generation_be_prefixes_count = value;
        update_generation_be_prefixes_count.value_namespace = name_space;
        update_generation_be_prefixes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-messages-count")
    {
        update_generation_messages_count = value;
        update_generation_messages_count.value_namespace = name_space;
        update_generation_messages_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-time")
    {
        update_generation_time = value;
        update_generation_time.value_namespace = name_space;
        update_generation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-calls")
    {
        rib_update_calls = value;
        rib_update_calls.value_namespace = name_space;
        rib_update_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-time")
    {
        rib_update_time = value;
        rib_update_time.value_namespace = name_space;
        rib_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-sent-to-rib")
    {
        prefixes_sent_to_rib = value;
        prefixes_sent_to_rib.value_namespace = name_space;
        prefixes_sent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-resent-to-rib")
    {
        prefixes_resent_to_rib = value;
        prefixes_resent_to_rib.value_namespace = name_space;
        prefixes_resent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-not-sent-to-rib")
    {
        prefixes_not_sent_to_rib = value;
        prefixes_not_sent_to_rib.value_namespace = name_space;
        prefixes_not_sent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-removed-from-rib")
    {
        prefixes_removed_from_rib = value;
        prefixes_removed_from_rib.value_namespace = name_space;
        prefixes_removed_from_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes-sent-to-rib")
    {
        attributes_sent_to_rib = value;
        attributes_sent_to_rib.value_namespace = name_space;
        attributes_sent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes-removed-from-rib")
    {
        attributes_removed_from_rib = value;
        attributes_removed_from_rib.value_namespace = name_space;
        attributes_removed_from_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes-recover-from-rib")
    {
        attributes_recover_from_rib = value;
        attributes_recover_from_rib.value_namespace = name_space;
        attributes_recover_from_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scanner-runs")
    {
        scanner_runs = value;
        scanner_runs.value_namespace = name_space;
        scanner_runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scanner-time")
    {
        scanner_time = value;
        scanner_time.value_namespace = name_space;
        scanner_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-del-calls")
    {
        rib_tbl_del_calls = value;
        rib_tbl_del_calls.value_namespace = name_space;
        rib_tbl_del_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-invalid-calls")
    {
        rib_tbl_invalid_calls = value;
        rib_tbl_invalid_calls.value_namespace = name_space;
        rib_tbl_invalid_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-skip-calls")
    {
        rib_tbl_skip_calls = value;
        rib_tbl_skip_calls.value_namespace = name_space;
        rib_tbl_skip_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-local-label")
    {
        rib_tbl_local_label = value;
        rib_tbl_local_label.value_namespace = name_space;
        rib_tbl_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-retry")
    {
        rib_tbl_retry = value;
        rib_tbl_retry.value_namespace = name_space;
        rib_tbl_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-last-update-sent")
    {
        time_last_update_sent = value;
        time_last_update_sent.value_namespace = name_space;
        time_last_update_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-table-full")
    {
        is_rib_table_full = value;
        is_rib_table_full.value_namespace = name_space;
        is_rib_table_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-full-version")
    {
        rib_table_full_version = value;
        rib_table_full_version.value_namespace = name_space;
        rib_table_full_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-rib-table-full-version")
    {
        first_rib_table_full_version = value;
        first_rib_table_full_version.value_namespace = name_space;
        first_rib_table_full_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-full-version")
    {
        last_rib_table_full_version = value;
        last_rib_table_full_version.value_namespace = name_space;
        last_rib_table_full_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-full-age")
    {
        last_rib_table_full_age = value;
        last_rib_table_full_age.value_namespace = name_space;
        last_rib_table_full_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-rib-table-has-space-version")
    {
        first_rib_table_has_space_version = value;
        first_rib_table_has_space_version.value_namespace = name_space;
        first_rib_table_has_space_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-has-space-version")
    {
        last_rib_table_has_space_version = value;
        last_rib_table_has_space_version.value_namespace = name_space;
        last_rib_table_has_space_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-has-space-age")
    {
        last_rib_table_has_space_age = value;
        last_rib_table_has_space_age.value_namespace = name_space;
        last_rib_table_has_space_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-trigger")
    {
        rib_trigger = value;
        rib_trigger.value_namespace = name_space;
        rib_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-flags")
    {
        vrf_flags = value;
        vrf_flags.value_namespace = name_space;
        vrf_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-calls")
    {
        label_calls = value;
        label_calls.value_namespace = name_space;
        label_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-time")
    {
        label_time = value;
        label_time.value_namespace = name_space;
        label_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-rewrite-count")
    {
        label_rewrite_count = value;
        label_rewrite_count.value_namespace = name_space;
        label_rewrite_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
        label_release_count.value_namespace = name_space;
        label_release_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-added-count")
    {
        label_added_count = value;
        label_added_count.value_namespace = name_space;
        label_added_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-calls")
    {
        import_calls = value;
        import_calls.value_namespace = name_space;
        import_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-time")
    {
        import_time = value;
        import_time.value_namespace = name_space;
        import_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-src-net-processed-count")
    {
        import_src_net_processed_count = value;
        import_src_net_processed_count.value_namespace = name_space;
        import_src_net_processed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-dest-net-processed-count")
    {
        import_dest_net_processed_count = value;
        import_dest_net_processed_count.value_namespace = name_space;
        import_dest_net_processed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-added-path-count")
    {
        import_added_path_count = value;
        import_added_path_count.value_namespace = name_space;
        import_added_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-removed-path-count")
    {
        import_removed_path_count = value;
        import_removed_path_count.value_namespace = name_space;
        import_removed_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-replaced-path-count")
    {
        import_replaced_path_count = value;
        import_replaced_path_count.value_namespace = name_space;
        import_replaced_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-count")
    {
        update_group_count = value;
        update_group_count.value_namespace = name_space;
        update_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subgroup-count")
    {
        subgroup_count = value;
        subgroup_count.value_namespace = name_space;
        subgroup_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-generation-calls")
    {
        update_generation_calls.yfilter = yfilter;
    }
    if(value_path == "update-generation-prefixes-count")
    {
        update_generation_prefixes_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-be-prefixes-count")
    {
        update_generation_be_prefixes_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-messages-count")
    {
        update_generation_messages_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-time")
    {
        update_generation_time.yfilter = yfilter;
    }
    if(value_path == "rib-update-calls")
    {
        rib_update_calls.yfilter = yfilter;
    }
    if(value_path == "rib-update-time")
    {
        rib_update_time.yfilter = yfilter;
    }
    if(value_path == "prefixes-sent-to-rib")
    {
        prefixes_sent_to_rib.yfilter = yfilter;
    }
    if(value_path == "prefixes-resent-to-rib")
    {
        prefixes_resent_to_rib.yfilter = yfilter;
    }
    if(value_path == "prefixes-not-sent-to-rib")
    {
        prefixes_not_sent_to_rib.yfilter = yfilter;
    }
    if(value_path == "prefixes-removed-from-rib")
    {
        prefixes_removed_from_rib.yfilter = yfilter;
    }
    if(value_path == "attributes-sent-to-rib")
    {
        attributes_sent_to_rib.yfilter = yfilter;
    }
    if(value_path == "attributes-removed-from-rib")
    {
        attributes_removed_from_rib.yfilter = yfilter;
    }
    if(value_path == "attributes-recover-from-rib")
    {
        attributes_recover_from_rib.yfilter = yfilter;
    }
    if(value_path == "scanner-runs")
    {
        scanner_runs.yfilter = yfilter;
    }
    if(value_path == "scanner-time")
    {
        scanner_time.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-del-calls")
    {
        rib_tbl_del_calls.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-invalid-calls")
    {
        rib_tbl_invalid_calls.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-skip-calls")
    {
        rib_tbl_skip_calls.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-local-label")
    {
        rib_tbl_local_label.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-retry")
    {
        rib_tbl_retry.yfilter = yfilter;
    }
    if(value_path == "time-last-update-sent")
    {
        time_last_update_sent.yfilter = yfilter;
    }
    if(value_path == "is-rib-table-full")
    {
        is_rib_table_full.yfilter = yfilter;
    }
    if(value_path == "rib-table-full-version")
    {
        rib_table_full_version.yfilter = yfilter;
    }
    if(value_path == "first-rib-table-full-version")
    {
        first_rib_table_full_version.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-full-version")
    {
        last_rib_table_full_version.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-full-age")
    {
        last_rib_table_full_age.yfilter = yfilter;
    }
    if(value_path == "first-rib-table-has-space-version")
    {
        first_rib_table_has_space_version.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-has-space-version")
    {
        last_rib_table_has_space_version.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-has-space-age")
    {
        last_rib_table_has_space_age.yfilter = yfilter;
    }
    if(value_path == "rib-trigger")
    {
        rib_trigger.yfilter = yfilter;
    }
    if(value_path == "vrf-flags")
    {
        vrf_flags.yfilter = yfilter;
    }
    if(value_path == "label-calls")
    {
        label_calls.yfilter = yfilter;
    }
    if(value_path == "label-time")
    {
        label_time.yfilter = yfilter;
    }
    if(value_path == "label-rewrite-count")
    {
        label_rewrite_count.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-added-count")
    {
        label_added_count.yfilter = yfilter;
    }
    if(value_path == "import-calls")
    {
        import_calls.yfilter = yfilter;
    }
    if(value_path == "import-time")
    {
        import_time.yfilter = yfilter;
    }
    if(value_path == "import-src-net-processed-count")
    {
        import_src_net_processed_count.yfilter = yfilter;
    }
    if(value_path == "import-dest-net-processed-count")
    {
        import_dest_net_processed_count.yfilter = yfilter;
    }
    if(value_path == "import-added-path-count")
    {
        import_added_path_count.yfilter = yfilter;
    }
    if(value_path == "import-removed-path-count")
    {
        import_removed_path_count.yfilter = yfilter;
    }
    if(value_path == "import-replaced-path-count")
    {
        import_replaced_path_count.yfilter = yfilter;
    }
    if(value_path == "update-group-count")
    {
        update_group_count.yfilter = yfilter;
    }
    if(value_path == "subgroup-count")
    {
        subgroup_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-rib-coverged" || name == "time-rib-down" || name == "first-rib-table-full-timestamp" || name == "last-rib-table-full-timestamp" || name == "first-rib-table-has-space-timestamp" || name == "last-rib-table-has-space-timestamp" || name == "time-label-retain" || name == "update-generation-calls" || name == "update-generation-prefixes-count" || name == "update-generation-be-prefixes-count" || name == "update-generation-messages-count" || name == "update-generation-time" || name == "rib-update-calls" || name == "rib-update-time" || name == "prefixes-sent-to-rib" || name == "prefixes-resent-to-rib" || name == "prefixes-not-sent-to-rib" || name == "prefixes-removed-from-rib" || name == "attributes-sent-to-rib" || name == "attributes-removed-from-rib" || name == "attributes-recover-from-rib" || name == "scanner-runs" || name == "scanner-time" || name == "rib-tbl-del-calls" || name == "rib-tbl-invalid-calls" || name == "rib-tbl-skip-calls" || name == "rib-tbl-local-label" || name == "rib-tbl-retry" || name == "time-last-update-sent" || name == "is-rib-table-full" || name == "rib-table-full-version" || name == "first-rib-table-full-version" || name == "last-rib-table-full-version" || name == "last-rib-table-full-age" || name == "first-rib-table-has-space-version" || name == "last-rib-table-has-space-version" || name == "last-rib-table-has-space-age" || name == "rib-trigger" || name == "vrf-flags" || name == "label-calls" || name == "label-time" || name == "label-rewrite-count" || name == "label-release-count" || name == "label-added-count" || name == "import-calls" || name == "import-time" || name == "import-src-net-processed-count" || name == "import-dest-net-processed-count" || name == "import-added-path-count" || name == "import-removed-path-count" || name == "import-replaced-path-count" || name == "update-group-count" || name == "subgroup-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::TimeRibCoverged()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "time-rib-coverged"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::~TimeRibCoverged()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-rib-coverged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::TimeRibDown()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "time-rib-down"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::~TimeRibDown()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-rib-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::FirstRibTableFullTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-rib-table-full-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::~FirstRibTableFullTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-table-full-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::LastRibTableFullTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-rib-table-full-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::~LastRibTableFullTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-table-full-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::FirstRibTableHasSpaceTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-rib-table-has-space-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::~FirstRibTableHasSpaceTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-table-has-space-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::LastRibTableHasSpaceTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-rib-table-has-space-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::~LastRibTableHasSpaceTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-table-has-space-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::TimeLabelRetain()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "time-label-retain"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::~TimeLabelRetain()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-label-retain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::PathUsedTable()
    :
    path(this, {})
{

    yang_name = "path-used-table"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::~PathUsedTable()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-used-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::Path()
    :
    rd{YType::str, "rd"},
    network{YType::str, "network"},
    prefix_length{YType::uint32, "prefix-length"},
    neighbor_address{YType::str, "neighbor-address"},
    route_type{YType::enumeration, "route-type"},
    source_rd{YType::str, "source-rd"},
    orig_source_rd{YType::str, "orig-source-rd"},
    path_id{YType::uint32, "path-id"},
    no_path{YType::boolean, "no-path"},
    af_name{YType::enumeration, "af-name"},
    process_instance_id{YType::uint8, "process-instance-id"},
    label_oor{YType::boolean, "label-oor"},
    label_oor_version{YType::uint32, "label-oor-version"},
    label_fail{YType::boolean, "label-fail"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_route_distinguisher{YType::str, "source-route-distinguisher"},
    original_source_route_distinguisher{YType::str, "original-source-route-distinguisher"},
    prefix_version{YType::uint32, "prefix-version"},
    vrf_name{YType::str, "vrf-name"},
    source_vrf_name{YType::str, "source-vrf-name"},
    srcaf_name{YType::enumeration, "srcaf-name"}
        ,
    advertised_neighbor(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor>())
    , path_information(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation>())
    , attributes_after_policy_in(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AttributesAfterPolicyIn>())
{
    advertised_neighbor->parent = this;
    path_information->parent = this;
    attributes_after_policy_in->parent = this;

    yang_name = "path"; yang_parent_name = "path-used-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::~Path()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| network.is_set
	|| prefix_length.is_set
	|| neighbor_address.is_set
	|| route_type.is_set
	|| source_rd.is_set
	|| orig_source_rd.is_set
	|| path_id.is_set
	|| no_path.is_set
	|| af_name.is_set
	|| process_instance_id.is_set
	|| label_oor.is_set
	|| label_oor_version.is_set
	|| label_fail.is_set
	|| route_distinguisher.is_set
	|| source_route_distinguisher.is_set
	|| original_source_route_distinguisher.is_set
	|| prefix_version.is_set
	|| vrf_name.is_set
	|| source_vrf_name.is_set
	|| srcaf_name.is_set
	|| (advertised_neighbor !=  nullptr && advertised_neighbor->has_data())
	|| (path_information !=  nullptr && path_information->has_data())
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(source_rd.yfilter)
	|| ydk::is_set(orig_source_rd.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(no_path.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(label_oor.yfilter)
	|| ydk::is_set(label_oor_version.yfilter)
	|| ydk::is_set(label_fail.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(source_route_distinguisher.yfilter)
	|| ydk::is_set(original_source_route_distinguisher.yfilter)
	|| ydk::is_set(prefix_version.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(source_vrf_name.yfilter)
	|| ydk::is_set(srcaf_name.yfilter)
	|| (advertised_neighbor !=  nullptr && advertised_neighbor->has_operation())
	|| (path_information !=  nullptr && path_information->has_operation())
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (source_rd.is_set || is_set(source_rd.yfilter)) leaf_name_data.push_back(source_rd.get_name_leafdata());
    if (orig_source_rd.is_set || is_set(orig_source_rd.yfilter)) leaf_name_data.push_back(orig_source_rd.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (no_path.is_set || is_set(no_path.yfilter)) leaf_name_data.push_back(no_path.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.yfilter)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (label_oor_version.is_set || is_set(label_oor_version.yfilter)) leaf_name_data.push_back(label_oor_version.get_name_leafdata());
    if (label_fail.is_set || is_set(label_fail.yfilter)) leaf_name_data.push_back(label_fail.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_route_distinguisher.is_set || is_set(source_route_distinguisher.yfilter)) leaf_name_data.push_back(source_route_distinguisher.get_name_leafdata());
    if (original_source_route_distinguisher.is_set || is_set(original_source_route_distinguisher.yfilter)) leaf_name_data.push_back(original_source_route_distinguisher.get_name_leafdata());
    if (prefix_version.is_set || is_set(prefix_version.yfilter)) leaf_name_data.push_back(prefix_version.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_vrf_name.is_set || is_set(source_vrf_name.yfilter)) leaf_name_data.push_back(source_vrf_name.get_name_leafdata());
    if (srcaf_name.is_set || is_set(srcaf_name.yfilter)) leaf_name_data.push_back(srcaf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertised-neighbor")
    {
        if(advertised_neighbor == nullptr)
        {
            advertised_neighbor = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor>();
        }
        return advertised_neighbor;
    }

    if(child_yang_name == "path-information")
    {
        if(path_information == nullptr)
        {
            path_information = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation>();
        }
        return path_information;
    }

    if(child_yang_name == "attributes-after-policy-in")
    {
        if(attributes_after_policy_in == nullptr)
        {
            attributes_after_policy_in = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AttributesAfterPolicyIn>();
        }
        return attributes_after_policy_in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertised_neighbor != nullptr)
    {
        _children["advertised-neighbor"] = advertised_neighbor;
    }

    if(path_information != nullptr)
    {
        _children["path-information"] = path_information;
    }

    if(attributes_after_policy_in != nullptr)
    {
        _children["attributes-after-policy-in"] = attributes_after_policy_in;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-rd")
    {
        source_rd = value;
        source_rd.value_namespace = name_space;
        source_rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orig-source-rd")
    {
        orig_source_rd = value;
        orig_source_rd.value_namespace = name_space;
        orig_source_rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-path")
    {
        no_path = value;
        no_path.value_namespace = name_space;
        no_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
        label_oor.value_namespace = name_space;
        label_oor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-oor-version")
    {
        label_oor_version = value;
        label_oor_version.value_namespace = name_space;
        label_oor_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-fail")
    {
        label_fail = value;
        label_fail.value_namespace = name_space;
        label_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route-distinguisher")
    {
        source_route_distinguisher = value;
        source_route_distinguisher.value_namespace = name_space;
        source_route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-source-route-distinguisher")
    {
        original_source_route_distinguisher = value;
        original_source_route_distinguisher.value_namespace = name_space;
        original_source_route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-version")
    {
        prefix_version = value;
        prefix_version.value_namespace = name_space;
        prefix_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vrf-name")
    {
        source_vrf_name = value;
        source_vrf_name.value_namespace = name_space;
        source_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcaf-name")
    {
        srcaf_name = value;
        srcaf_name.value_namespace = name_space;
        srcaf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "source-rd")
    {
        source_rd.yfilter = yfilter;
    }
    if(value_path == "orig-source-rd")
    {
        orig_source_rd.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "no-path")
    {
        no_path.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "label-oor")
    {
        label_oor.yfilter = yfilter;
    }
    if(value_path == "label-oor-version")
    {
        label_oor_version.yfilter = yfilter;
    }
    if(value_path == "label-fail")
    {
        label_fail.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "source-route-distinguisher")
    {
        source_route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "original-source-route-distinguisher")
    {
        original_source_route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "prefix-version")
    {
        prefix_version.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-vrf-name")
    {
        source_vrf_name.yfilter = yfilter;
    }
    if(value_path == "srcaf-name")
    {
        srcaf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised-neighbor" || name == "path-information" || name == "attributes-after-policy-in" || name == "rd" || name == "network" || name == "prefix-length" || name == "neighbor-address" || name == "route-type" || name == "source-rd" || name == "orig-source-rd" || name == "path-id" || name == "no-path" || name == "af-name" || name == "process-instance-id" || name == "label-oor" || name == "label-oor-version" || name == "label-fail" || name == "route-distinguisher" || name == "source-route-distinguisher" || name == "original-source-route-distinguisher" || name == "prefix-version" || name == "vrf-name" || name == "source-vrf-name" || name == "srcaf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::AdvertisedNeighbor()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "advertised-neighbor"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::~AdvertisedNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertised-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "advertised-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "advertised-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "advertised-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "advertised-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::AdvertisedNeighbor::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::PathInformation()
    :
    route_type{YType::enumeration, "route-type"},
    is_path_valid{YType::boolean, "is-path-valid"},
    is_path_damped{YType::boolean, "is-path-damped"},
    is_path_history_held{YType::boolean, "is-path-history-held"},
    is_internal_path{YType::boolean, "is-internal-path"},
    is_best_path{YType::boolean, "is-best-path"},
    is_as_best{YType::boolean, "is-as-best"},
    is_spkr_as_best{YType::boolean, "is-spkr-as-best"},
    is_partial_best{YType::boolean, "is-partial-best"},
    is_aggregation_suppressed{YType::boolean, "is-aggregation-suppressed"},
    is_import_dampened{YType::boolean, "is-import-dampened"},
    is_import_suspect{YType::boolean, "is-import-suspect"},
    is_path_not_advertised{YType::boolean, "is-path-not-advertised"},
    is_path_not_advertised_to_ebgp{YType::boolean, "is-path-not-advertised-to-ebgp"},
    is_path_advertised_local_as_only{YType::boolean, "is-path-advertised-local-as-only"},
    is_path_from_route_reflector{YType::boolean, "is-path-from-route-reflector"},
    is_path_received_only{YType::boolean, "is-path-received-only"},
    is_received_path_not_modified{YType::boolean, "is-received-path-not-modified"},
    is_path_locally_sourced{YType::boolean, "is-path-locally-sourced"},
    is_path_local_aggregate{YType::boolean, "is-path-local-aggregate"},
    is_path_from_network_command{YType::boolean, "is-path-from-network-command"},
    is_path_from_redistribute_command{YType::boolean, "is-path-from-redistribute-command"},
    is_path_imported{YType::boolean, "is-path-imported"},
    is_path_reoriginated{YType::boolean, "is-path-reoriginated"},
    is_path_reoriginated_stitching{YType::boolean, "is-path-reoriginated-stitching"},
    is_path_vpn_only{YType::boolean, "is-path-vpn-only"},
    is_path_from_confederation_peer{YType::boolean, "is-path-from-confederation-peer"},
    is_path_synced_with_igp{YType::boolean, "is-path-synced-with-igp"},
    is_path_multipath{YType::boolean, "is-path-multipath"},
    is_path_imp_candidate{YType::boolean, "is-path-imp-candidate"},
    is_path_stale{YType::boolean, "is-path-stale"},
    is_path_long_lived_stale{YType::boolean, "is-path-long-lived-stale"},
    is_path_backup{YType::boolean, "is-path-backup"},
    is_path_backup_protect_multipath{YType::boolean, "is-path-backup-protect-multipath"},
    is_path_best_external{YType::boolean, "is-path-best-external"},
    is_path_additional_path{YType::boolean, "is-path-additional-path"},
    is_path_nexthop_discarded{YType::boolean, "is-path-nexthop-discarded"},
    has_local_net_label{YType::boolean, "has-local-net-label"},
    local_label{YType::uint32, "local-label"},
    igp_metric{YType::uint32, "igp-metric"},
    path_weight{YType::uint16, "path-weight"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    has_mdt_group_addr{YType::boolean, "has-mdt-group-addr"},
    l2vpn_size{YType::uint32, "l2vpn-size"},
    l2vpn_evpn_esi{YType::str, "l2vpn-evpn-esi"},
    has_gw_addr{YType::boolean, "has-gw-addr"},
    has_nh_addr{YType::boolean, "has-nh-addr"},
    has_second_label{YType::boolean, "has-second-label"},
    second_label{YType::uint32, "second-label"},
    path_flap_count{YType::uint32, "path-flap-count"},
    seconds_since_first_flap{YType::uint32, "seconds-since-first-flap"},
    time_to_unsuppress{YType::uint32, "time-to-unsuppress"},
    dampen_penalty{YType::uint32, "dampen-penalty"},
    halflife_time{YType::uint32, "halflife-time"},
    suppress_penalty{YType::uint32, "suppress-penalty"},
    reuse_value{YType::uint32, "reuse-value"},
    maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
    best_path_comp_stage{YType::enumeration, "best-path-comp-stage"},
    best_path_id_comp_winner{YType::uint32, "best-path-id-comp-winner"},
    path_flags{YType::uint64, "path-flags"},
    path_import_flags{YType::uint32, "path-import-flags"},
    best_path_id{YType::uint32, "best-path-id"},
    local_path_id{YType::uint32, "local-path-id"},
    rcvd_path_id{YType::uint32, "rcvd-path-id"},
    path_table_version{YType::uint32, "path-table-version"},
    advertisedto_pe{YType::boolean, "advertisedto-pe"},
    rib_failed{YType::boolean, "rib-failed"},
    sn_rpki_origin_as_validity{YType::uint8, "sn-rpki-origin-as-validity"},
    show_rpki_origin_as_validity{YType::boolean, "show-rpki-origin-as-validity"},
    ibgp_signaled_validity{YType::boolean, "ibgp-signaled-validity"},
    rpki_origin_as_validation_disabled{YType::boolean, "rpki-origin-as-validation-disabled"},
    accept_own_path{YType::boolean, "accept-own-path"},
    accept_own_self_originated_path{YType::boolean, "accept-own-self-originated-path"},
    aigp_metric{YType::uint64, "aigp-metric"},
    mvpn_sfs_path{YType::boolean, "mvpn-sfs-path"},
    fspec_invalid_path{YType::boolean, "fspec-invalid-path"},
    has_mvpn_nbr_addr{YType::boolean, "has-mvpn-nbr-addr"},
    has_mvpn_nexthop_addr{YType::boolean, "has-mvpn-nexthop-addr"},
    has_mvpn_pmsi{YType::boolean, "has-mvpn-pmsi"},
    mvpn_pmsi_type{YType::uint16, "mvpn-pmsi-type"},
    mvpn_pmsi_flags{YType::uint8, "mvpn-pmsi-flags"},
    mvpn_pmsi_label{YType::uint32, "mvpn-pmsi-label"},
    has_mvpn_extcomm{YType::boolean, "has-mvpn-extcomm"},
    mvpn_path_flags{YType::uint16, "mvpn-path-flags"},
    local_nh{YType::boolean, "local-nh"},
    rt_set_limit_enabled{YType::boolean, "rt-set-limit-enabled"},
    path_rt_set_id{YType::uint32, "path-rt-set-id"},
    path_rt_set_route_count{YType::uint32, "path-rt-set-route-count"},
    is_path_af_install_eligible{YType::boolean, "is-path-af-install-eligible"},
    is_permanent_path{YType::boolean, "is-permanent-path"},
    graceful_shutdown{YType::boolean, "graceful-shutdown"},
    labeled_unicast_safi_path{YType::boolean, "labeled-unicast-safi-path"},
    has_vpn_nexthop_addr{YType::boolean, "has-vpn-nexthop-addr"},
    is_orig_src_rd_present{YType::boolean, "is-orig-src-rd-present"},
    af_name{YType::enumeration, "af-name"},
    route_distinguisher{YType::str, "route-distinguisher"},
    mac_ip_present{YType::boolean, "mac-ip-present"},
    mac_ip{YType::str, "mac-ip"}
        ,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix>())
    , neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress>())
    , next_hop(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop>())
    , nh_tunnel(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NhTunnel>())
    , mdt_group_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::MdtGroupAddr>())
    , gw_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::GwAddr>())
    , nh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NhAddr>())
    , best_path_comp_winner(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BestPathCompWinner>())
    , mvpn_nbr_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNbrAddr>())
    , mvpn_nexthop_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNexthopAddr>())
    , vpn_nexthop_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::VpnNexthopAddr>())
    , rcvd_label(this, {})
    , l2vpn_circuit_status_value(this, {})
    , mvpn_pmsi_value(this, {})
    , extended_community(this, {})
    , local_peers_advertised_to(this, {})
    , pe_peers_advertised_to(this, {})
    , best_path_orr_bitfield(this, {})
    , add_path_orr_bitfield(this, {})
{
    bgp_prefix->parent = this;
    neighbor_address->parent = this;
    next_hop->parent = this;
    nh_tunnel->parent = this;
    mdt_group_addr->parent = this;
    gw_addr->parent = this;
    nh_addr->parent = this;
    best_path_comp_winner->parent = this;
    mvpn_nbr_addr->parent = this;
    mvpn_nexthop_addr->parent = this;
    vpn_nexthop_addr->parent = this;

    yang_name = "path-information"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::~PathInformation()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rcvd_label.len(); index++)
    {
        if(rcvd_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2vpn_circuit_status_value.len(); index++)
    {
        if(l2vpn_circuit_status_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mvpn_pmsi_value.len(); index++)
    {
        if(mvpn_pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.len(); index++)
    {
        if(local_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.len(); index++)
    {
        if(pe_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.len(); index++)
    {
        if(best_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.len(); index++)
    {
        if(add_path_orr_bitfield[index]->has_data())
            return true;
    }
    return route_type.is_set
	|| is_path_valid.is_set
	|| is_path_damped.is_set
	|| is_path_history_held.is_set
	|| is_internal_path.is_set
	|| is_best_path.is_set
	|| is_as_best.is_set
	|| is_spkr_as_best.is_set
	|| is_partial_best.is_set
	|| is_aggregation_suppressed.is_set
	|| is_import_dampened.is_set
	|| is_import_suspect.is_set
	|| is_path_not_advertised.is_set
	|| is_path_not_advertised_to_ebgp.is_set
	|| is_path_advertised_local_as_only.is_set
	|| is_path_from_route_reflector.is_set
	|| is_path_received_only.is_set
	|| is_received_path_not_modified.is_set
	|| is_path_locally_sourced.is_set
	|| is_path_local_aggregate.is_set
	|| is_path_from_network_command.is_set
	|| is_path_from_redistribute_command.is_set
	|| is_path_imported.is_set
	|| is_path_reoriginated.is_set
	|| is_path_reoriginated_stitching.is_set
	|| is_path_vpn_only.is_set
	|| is_path_from_confederation_peer.is_set
	|| is_path_synced_with_igp.is_set
	|| is_path_multipath.is_set
	|| is_path_imp_candidate.is_set
	|| is_path_stale.is_set
	|| is_path_long_lived_stale.is_set
	|| is_path_backup.is_set
	|| is_path_backup_protect_multipath.is_set
	|| is_path_best_external.is_set
	|| is_path_additional_path.is_set
	|| is_path_nexthop_discarded.is_set
	|| has_local_net_label.is_set
	|| local_label.is_set
	|| igp_metric.is_set
	|| path_weight.is_set
	|| neighbor_router_id.is_set
	|| has_mdt_group_addr.is_set
	|| l2vpn_size.is_set
	|| l2vpn_evpn_esi.is_set
	|| has_gw_addr.is_set
	|| has_nh_addr.is_set
	|| has_second_label.is_set
	|| second_label.is_set
	|| path_flap_count.is_set
	|| seconds_since_first_flap.is_set
	|| time_to_unsuppress.is_set
	|| dampen_penalty.is_set
	|| halflife_time.is_set
	|| suppress_penalty.is_set
	|| reuse_value.is_set
	|| maximum_suppress_time.is_set
	|| best_path_comp_stage.is_set
	|| best_path_id_comp_winner.is_set
	|| path_flags.is_set
	|| path_import_flags.is_set
	|| best_path_id.is_set
	|| local_path_id.is_set
	|| rcvd_path_id.is_set
	|| path_table_version.is_set
	|| advertisedto_pe.is_set
	|| rib_failed.is_set
	|| sn_rpki_origin_as_validity.is_set
	|| show_rpki_origin_as_validity.is_set
	|| ibgp_signaled_validity.is_set
	|| rpki_origin_as_validation_disabled.is_set
	|| accept_own_path.is_set
	|| accept_own_self_originated_path.is_set
	|| aigp_metric.is_set
	|| mvpn_sfs_path.is_set
	|| fspec_invalid_path.is_set
	|| has_mvpn_nbr_addr.is_set
	|| has_mvpn_nexthop_addr.is_set
	|| has_mvpn_pmsi.is_set
	|| mvpn_pmsi_type.is_set
	|| mvpn_pmsi_flags.is_set
	|| mvpn_pmsi_label.is_set
	|| has_mvpn_extcomm.is_set
	|| mvpn_path_flags.is_set
	|| local_nh.is_set
	|| rt_set_limit_enabled.is_set
	|| path_rt_set_id.is_set
	|| path_rt_set_route_count.is_set
	|| is_path_af_install_eligible.is_set
	|| is_permanent_path.is_set
	|| graceful_shutdown.is_set
	|| labeled_unicast_safi_path.is_set
	|| has_vpn_nexthop_addr.is_set
	|| is_orig_src_rd_present.is_set
	|| af_name.is_set
	|| route_distinguisher.is_set
	|| mac_ip_present.is_set
	|| mac_ip.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (neighbor_address !=  nullptr && neighbor_address->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (nh_tunnel !=  nullptr && nh_tunnel->has_data())
	|| (mdt_group_addr !=  nullptr && mdt_group_addr->has_data())
	|| (gw_addr !=  nullptr && gw_addr->has_data())
	|| (nh_addr !=  nullptr && nh_addr->has_data())
	|| (best_path_comp_winner !=  nullptr && best_path_comp_winner->has_data())
	|| (mvpn_nbr_addr !=  nullptr && mvpn_nbr_addr->has_data())
	|| (mvpn_nexthop_addr !=  nullptr && mvpn_nexthop_addr->has_data())
	|| (vpn_nexthop_addr !=  nullptr && vpn_nexthop_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::has_operation() const
{
    for (std::size_t index=0; index<rcvd_label.len(); index++)
    {
        if(rcvd_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2vpn_circuit_status_value.len(); index++)
    {
        if(l2vpn_circuit_status_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mvpn_pmsi_value.len(); index++)
    {
        if(mvpn_pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.len(); index++)
    {
        if(local_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.len(); index++)
    {
        if(pe_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.len(); index++)
    {
        if(best_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.len(); index++)
    {
        if(add_path_orr_bitfield[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(is_path_valid.yfilter)
	|| ydk::is_set(is_path_damped.yfilter)
	|| ydk::is_set(is_path_history_held.yfilter)
	|| ydk::is_set(is_internal_path.yfilter)
	|| ydk::is_set(is_best_path.yfilter)
	|| ydk::is_set(is_as_best.yfilter)
	|| ydk::is_set(is_spkr_as_best.yfilter)
	|| ydk::is_set(is_partial_best.yfilter)
	|| ydk::is_set(is_aggregation_suppressed.yfilter)
	|| ydk::is_set(is_import_dampened.yfilter)
	|| ydk::is_set(is_import_suspect.yfilter)
	|| ydk::is_set(is_path_not_advertised.yfilter)
	|| ydk::is_set(is_path_not_advertised_to_ebgp.yfilter)
	|| ydk::is_set(is_path_advertised_local_as_only.yfilter)
	|| ydk::is_set(is_path_from_route_reflector.yfilter)
	|| ydk::is_set(is_path_received_only.yfilter)
	|| ydk::is_set(is_received_path_not_modified.yfilter)
	|| ydk::is_set(is_path_locally_sourced.yfilter)
	|| ydk::is_set(is_path_local_aggregate.yfilter)
	|| ydk::is_set(is_path_from_network_command.yfilter)
	|| ydk::is_set(is_path_from_redistribute_command.yfilter)
	|| ydk::is_set(is_path_imported.yfilter)
	|| ydk::is_set(is_path_reoriginated.yfilter)
	|| ydk::is_set(is_path_reoriginated_stitching.yfilter)
	|| ydk::is_set(is_path_vpn_only.yfilter)
	|| ydk::is_set(is_path_from_confederation_peer.yfilter)
	|| ydk::is_set(is_path_synced_with_igp.yfilter)
	|| ydk::is_set(is_path_multipath.yfilter)
	|| ydk::is_set(is_path_imp_candidate.yfilter)
	|| ydk::is_set(is_path_stale.yfilter)
	|| ydk::is_set(is_path_long_lived_stale.yfilter)
	|| ydk::is_set(is_path_backup.yfilter)
	|| ydk::is_set(is_path_backup_protect_multipath.yfilter)
	|| ydk::is_set(is_path_best_external.yfilter)
	|| ydk::is_set(is_path_additional_path.yfilter)
	|| ydk::is_set(is_path_nexthop_discarded.yfilter)
	|| ydk::is_set(has_local_net_label.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(path_weight.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(has_mdt_group_addr.yfilter)
	|| ydk::is_set(l2vpn_size.yfilter)
	|| ydk::is_set(l2vpn_evpn_esi.yfilter)
	|| ydk::is_set(has_gw_addr.yfilter)
	|| ydk::is_set(has_nh_addr.yfilter)
	|| ydk::is_set(has_second_label.yfilter)
	|| ydk::is_set(second_label.yfilter)
	|| ydk::is_set(path_flap_count.yfilter)
	|| ydk::is_set(seconds_since_first_flap.yfilter)
	|| ydk::is_set(time_to_unsuppress.yfilter)
	|| ydk::is_set(dampen_penalty.yfilter)
	|| ydk::is_set(halflife_time.yfilter)
	|| ydk::is_set(suppress_penalty.yfilter)
	|| ydk::is_set(reuse_value.yfilter)
	|| ydk::is_set(maximum_suppress_time.yfilter)
	|| ydk::is_set(best_path_comp_stage.yfilter)
	|| ydk::is_set(best_path_id_comp_winner.yfilter)
	|| ydk::is_set(path_flags.yfilter)
	|| ydk::is_set(path_import_flags.yfilter)
	|| ydk::is_set(best_path_id.yfilter)
	|| ydk::is_set(local_path_id.yfilter)
	|| ydk::is_set(rcvd_path_id.yfilter)
	|| ydk::is_set(path_table_version.yfilter)
	|| ydk::is_set(advertisedto_pe.yfilter)
	|| ydk::is_set(rib_failed.yfilter)
	|| ydk::is_set(sn_rpki_origin_as_validity.yfilter)
	|| ydk::is_set(show_rpki_origin_as_validity.yfilter)
	|| ydk::is_set(ibgp_signaled_validity.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disabled.yfilter)
	|| ydk::is_set(accept_own_path.yfilter)
	|| ydk::is_set(accept_own_self_originated_path.yfilter)
	|| ydk::is_set(aigp_metric.yfilter)
	|| ydk::is_set(mvpn_sfs_path.yfilter)
	|| ydk::is_set(fspec_invalid_path.yfilter)
	|| ydk::is_set(has_mvpn_nbr_addr.yfilter)
	|| ydk::is_set(has_mvpn_nexthop_addr.yfilter)
	|| ydk::is_set(has_mvpn_pmsi.yfilter)
	|| ydk::is_set(mvpn_pmsi_type.yfilter)
	|| ydk::is_set(mvpn_pmsi_flags.yfilter)
	|| ydk::is_set(mvpn_pmsi_label.yfilter)
	|| ydk::is_set(has_mvpn_extcomm.yfilter)
	|| ydk::is_set(mvpn_path_flags.yfilter)
	|| ydk::is_set(local_nh.yfilter)
	|| ydk::is_set(rt_set_limit_enabled.yfilter)
	|| ydk::is_set(path_rt_set_id.yfilter)
	|| ydk::is_set(path_rt_set_route_count.yfilter)
	|| ydk::is_set(is_path_af_install_eligible.yfilter)
	|| ydk::is_set(is_permanent_path.yfilter)
	|| ydk::is_set(graceful_shutdown.yfilter)
	|| ydk::is_set(labeled_unicast_safi_path.yfilter)
	|| ydk::is_set(has_vpn_nexthop_addr.yfilter)
	|| ydk::is_set(is_orig_src_rd_present.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(mac_ip_present.yfilter)
	|| ydk::is_set(mac_ip.yfilter)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (nh_tunnel !=  nullptr && nh_tunnel->has_operation())
	|| (mdt_group_addr !=  nullptr && mdt_group_addr->has_operation())
	|| (gw_addr !=  nullptr && gw_addr->has_operation())
	|| (nh_addr !=  nullptr && nh_addr->has_operation())
	|| (best_path_comp_winner !=  nullptr && best_path_comp_winner->has_operation())
	|| (mvpn_nbr_addr !=  nullptr && mvpn_nbr_addr->has_operation())
	|| (mvpn_nexthop_addr !=  nullptr && mvpn_nexthop_addr->has_operation())
	|| (vpn_nexthop_addr !=  nullptr && vpn_nexthop_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (is_path_valid.is_set || is_set(is_path_valid.yfilter)) leaf_name_data.push_back(is_path_valid.get_name_leafdata());
    if (is_path_damped.is_set || is_set(is_path_damped.yfilter)) leaf_name_data.push_back(is_path_damped.get_name_leafdata());
    if (is_path_history_held.is_set || is_set(is_path_history_held.yfilter)) leaf_name_data.push_back(is_path_history_held.get_name_leafdata());
    if (is_internal_path.is_set || is_set(is_internal_path.yfilter)) leaf_name_data.push_back(is_internal_path.get_name_leafdata());
    if (is_best_path.is_set || is_set(is_best_path.yfilter)) leaf_name_data.push_back(is_best_path.get_name_leafdata());
    if (is_as_best.is_set || is_set(is_as_best.yfilter)) leaf_name_data.push_back(is_as_best.get_name_leafdata());
    if (is_spkr_as_best.is_set || is_set(is_spkr_as_best.yfilter)) leaf_name_data.push_back(is_spkr_as_best.get_name_leafdata());
    if (is_partial_best.is_set || is_set(is_partial_best.yfilter)) leaf_name_data.push_back(is_partial_best.get_name_leafdata());
    if (is_aggregation_suppressed.is_set || is_set(is_aggregation_suppressed.yfilter)) leaf_name_data.push_back(is_aggregation_suppressed.get_name_leafdata());
    if (is_import_dampened.is_set || is_set(is_import_dampened.yfilter)) leaf_name_data.push_back(is_import_dampened.get_name_leafdata());
    if (is_import_suspect.is_set || is_set(is_import_suspect.yfilter)) leaf_name_data.push_back(is_import_suspect.get_name_leafdata());
    if (is_path_not_advertised.is_set || is_set(is_path_not_advertised.yfilter)) leaf_name_data.push_back(is_path_not_advertised.get_name_leafdata());
    if (is_path_not_advertised_to_ebgp.is_set || is_set(is_path_not_advertised_to_ebgp.yfilter)) leaf_name_data.push_back(is_path_not_advertised_to_ebgp.get_name_leafdata());
    if (is_path_advertised_local_as_only.is_set || is_set(is_path_advertised_local_as_only.yfilter)) leaf_name_data.push_back(is_path_advertised_local_as_only.get_name_leafdata());
    if (is_path_from_route_reflector.is_set || is_set(is_path_from_route_reflector.yfilter)) leaf_name_data.push_back(is_path_from_route_reflector.get_name_leafdata());
    if (is_path_received_only.is_set || is_set(is_path_received_only.yfilter)) leaf_name_data.push_back(is_path_received_only.get_name_leafdata());
    if (is_received_path_not_modified.is_set || is_set(is_received_path_not_modified.yfilter)) leaf_name_data.push_back(is_received_path_not_modified.get_name_leafdata());
    if (is_path_locally_sourced.is_set || is_set(is_path_locally_sourced.yfilter)) leaf_name_data.push_back(is_path_locally_sourced.get_name_leafdata());
    if (is_path_local_aggregate.is_set || is_set(is_path_local_aggregate.yfilter)) leaf_name_data.push_back(is_path_local_aggregate.get_name_leafdata());
    if (is_path_from_network_command.is_set || is_set(is_path_from_network_command.yfilter)) leaf_name_data.push_back(is_path_from_network_command.get_name_leafdata());
    if (is_path_from_redistribute_command.is_set || is_set(is_path_from_redistribute_command.yfilter)) leaf_name_data.push_back(is_path_from_redistribute_command.get_name_leafdata());
    if (is_path_imported.is_set || is_set(is_path_imported.yfilter)) leaf_name_data.push_back(is_path_imported.get_name_leafdata());
    if (is_path_reoriginated.is_set || is_set(is_path_reoriginated.yfilter)) leaf_name_data.push_back(is_path_reoriginated.get_name_leafdata());
    if (is_path_reoriginated_stitching.is_set || is_set(is_path_reoriginated_stitching.yfilter)) leaf_name_data.push_back(is_path_reoriginated_stitching.get_name_leafdata());
    if (is_path_vpn_only.is_set || is_set(is_path_vpn_only.yfilter)) leaf_name_data.push_back(is_path_vpn_only.get_name_leafdata());
    if (is_path_from_confederation_peer.is_set || is_set(is_path_from_confederation_peer.yfilter)) leaf_name_data.push_back(is_path_from_confederation_peer.get_name_leafdata());
    if (is_path_synced_with_igp.is_set || is_set(is_path_synced_with_igp.yfilter)) leaf_name_data.push_back(is_path_synced_with_igp.get_name_leafdata());
    if (is_path_multipath.is_set || is_set(is_path_multipath.yfilter)) leaf_name_data.push_back(is_path_multipath.get_name_leafdata());
    if (is_path_imp_candidate.is_set || is_set(is_path_imp_candidate.yfilter)) leaf_name_data.push_back(is_path_imp_candidate.get_name_leafdata());
    if (is_path_stale.is_set || is_set(is_path_stale.yfilter)) leaf_name_data.push_back(is_path_stale.get_name_leafdata());
    if (is_path_long_lived_stale.is_set || is_set(is_path_long_lived_stale.yfilter)) leaf_name_data.push_back(is_path_long_lived_stale.get_name_leafdata());
    if (is_path_backup.is_set || is_set(is_path_backup.yfilter)) leaf_name_data.push_back(is_path_backup.get_name_leafdata());
    if (is_path_backup_protect_multipath.is_set || is_set(is_path_backup_protect_multipath.yfilter)) leaf_name_data.push_back(is_path_backup_protect_multipath.get_name_leafdata());
    if (is_path_best_external.is_set || is_set(is_path_best_external.yfilter)) leaf_name_data.push_back(is_path_best_external.get_name_leafdata());
    if (is_path_additional_path.is_set || is_set(is_path_additional_path.yfilter)) leaf_name_data.push_back(is_path_additional_path.get_name_leafdata());
    if (is_path_nexthop_discarded.is_set || is_set(is_path_nexthop_discarded.yfilter)) leaf_name_data.push_back(is_path_nexthop_discarded.get_name_leafdata());
    if (has_local_net_label.is_set || is_set(has_local_net_label.yfilter)) leaf_name_data.push_back(has_local_net_label.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (path_weight.is_set || is_set(path_weight.yfilter)) leaf_name_data.push_back(path_weight.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (has_mdt_group_addr.is_set || is_set(has_mdt_group_addr.yfilter)) leaf_name_data.push_back(has_mdt_group_addr.get_name_leafdata());
    if (l2vpn_size.is_set || is_set(l2vpn_size.yfilter)) leaf_name_data.push_back(l2vpn_size.get_name_leafdata());
    if (l2vpn_evpn_esi.is_set || is_set(l2vpn_evpn_esi.yfilter)) leaf_name_data.push_back(l2vpn_evpn_esi.get_name_leafdata());
    if (has_gw_addr.is_set || is_set(has_gw_addr.yfilter)) leaf_name_data.push_back(has_gw_addr.get_name_leafdata());
    if (has_nh_addr.is_set || is_set(has_nh_addr.yfilter)) leaf_name_data.push_back(has_nh_addr.get_name_leafdata());
    if (has_second_label.is_set || is_set(has_second_label.yfilter)) leaf_name_data.push_back(has_second_label.get_name_leafdata());
    if (second_label.is_set || is_set(second_label.yfilter)) leaf_name_data.push_back(second_label.get_name_leafdata());
    if (path_flap_count.is_set || is_set(path_flap_count.yfilter)) leaf_name_data.push_back(path_flap_count.get_name_leafdata());
    if (seconds_since_first_flap.is_set || is_set(seconds_since_first_flap.yfilter)) leaf_name_data.push_back(seconds_since_first_flap.get_name_leafdata());
    if (time_to_unsuppress.is_set || is_set(time_to_unsuppress.yfilter)) leaf_name_data.push_back(time_to_unsuppress.get_name_leafdata());
    if (dampen_penalty.is_set || is_set(dampen_penalty.yfilter)) leaf_name_data.push_back(dampen_penalty.get_name_leafdata());
    if (halflife_time.is_set || is_set(halflife_time.yfilter)) leaf_name_data.push_back(halflife_time.get_name_leafdata());
    if (suppress_penalty.is_set || is_set(suppress_penalty.yfilter)) leaf_name_data.push_back(suppress_penalty.get_name_leafdata());
    if (reuse_value.is_set || is_set(reuse_value.yfilter)) leaf_name_data.push_back(reuse_value.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.yfilter)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (best_path_comp_stage.is_set || is_set(best_path_comp_stage.yfilter)) leaf_name_data.push_back(best_path_comp_stage.get_name_leafdata());
    if (best_path_id_comp_winner.is_set || is_set(best_path_id_comp_winner.yfilter)) leaf_name_data.push_back(best_path_id_comp_winner.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.yfilter)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_import_flags.is_set || is_set(path_import_flags.yfilter)) leaf_name_data.push_back(path_import_flags.get_name_leafdata());
    if (best_path_id.is_set || is_set(best_path_id.yfilter)) leaf_name_data.push_back(best_path_id.get_name_leafdata());
    if (local_path_id.is_set || is_set(local_path_id.yfilter)) leaf_name_data.push_back(local_path_id.get_name_leafdata());
    if (rcvd_path_id.is_set || is_set(rcvd_path_id.yfilter)) leaf_name_data.push_back(rcvd_path_id.get_name_leafdata());
    if (path_table_version.is_set || is_set(path_table_version.yfilter)) leaf_name_data.push_back(path_table_version.get_name_leafdata());
    if (advertisedto_pe.is_set || is_set(advertisedto_pe.yfilter)) leaf_name_data.push_back(advertisedto_pe.get_name_leafdata());
    if (rib_failed.is_set || is_set(rib_failed.yfilter)) leaf_name_data.push_back(rib_failed.get_name_leafdata());
    if (sn_rpki_origin_as_validity.is_set || is_set(sn_rpki_origin_as_validity.yfilter)) leaf_name_data.push_back(sn_rpki_origin_as_validity.get_name_leafdata());
    if (show_rpki_origin_as_validity.is_set || is_set(show_rpki_origin_as_validity.yfilter)) leaf_name_data.push_back(show_rpki_origin_as_validity.get_name_leafdata());
    if (ibgp_signaled_validity.is_set || is_set(ibgp_signaled_validity.yfilter)) leaf_name_data.push_back(ibgp_signaled_validity.get_name_leafdata());
    if (rpki_origin_as_validation_disabled.is_set || is_set(rpki_origin_as_validation_disabled.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disabled.get_name_leafdata());
    if (accept_own_path.is_set || is_set(accept_own_path.yfilter)) leaf_name_data.push_back(accept_own_path.get_name_leafdata());
    if (accept_own_self_originated_path.is_set || is_set(accept_own_self_originated_path.yfilter)) leaf_name_data.push_back(accept_own_self_originated_path.get_name_leafdata());
    if (aigp_metric.is_set || is_set(aigp_metric.yfilter)) leaf_name_data.push_back(aigp_metric.get_name_leafdata());
    if (mvpn_sfs_path.is_set || is_set(mvpn_sfs_path.yfilter)) leaf_name_data.push_back(mvpn_sfs_path.get_name_leafdata());
    if (fspec_invalid_path.is_set || is_set(fspec_invalid_path.yfilter)) leaf_name_data.push_back(fspec_invalid_path.get_name_leafdata());
    if (has_mvpn_nbr_addr.is_set || is_set(has_mvpn_nbr_addr.yfilter)) leaf_name_data.push_back(has_mvpn_nbr_addr.get_name_leafdata());
    if (has_mvpn_nexthop_addr.is_set || is_set(has_mvpn_nexthop_addr.yfilter)) leaf_name_data.push_back(has_mvpn_nexthop_addr.get_name_leafdata());
    if (has_mvpn_pmsi.is_set || is_set(has_mvpn_pmsi.yfilter)) leaf_name_data.push_back(has_mvpn_pmsi.get_name_leafdata());
    if (mvpn_pmsi_type.is_set || is_set(mvpn_pmsi_type.yfilter)) leaf_name_data.push_back(mvpn_pmsi_type.get_name_leafdata());
    if (mvpn_pmsi_flags.is_set || is_set(mvpn_pmsi_flags.yfilter)) leaf_name_data.push_back(mvpn_pmsi_flags.get_name_leafdata());
    if (mvpn_pmsi_label.is_set || is_set(mvpn_pmsi_label.yfilter)) leaf_name_data.push_back(mvpn_pmsi_label.get_name_leafdata());
    if (has_mvpn_extcomm.is_set || is_set(has_mvpn_extcomm.yfilter)) leaf_name_data.push_back(has_mvpn_extcomm.get_name_leafdata());
    if (mvpn_path_flags.is_set || is_set(mvpn_path_flags.yfilter)) leaf_name_data.push_back(mvpn_path_flags.get_name_leafdata());
    if (local_nh.is_set || is_set(local_nh.yfilter)) leaf_name_data.push_back(local_nh.get_name_leafdata());
    if (rt_set_limit_enabled.is_set || is_set(rt_set_limit_enabled.yfilter)) leaf_name_data.push_back(rt_set_limit_enabled.get_name_leafdata());
    if (path_rt_set_id.is_set || is_set(path_rt_set_id.yfilter)) leaf_name_data.push_back(path_rt_set_id.get_name_leafdata());
    if (path_rt_set_route_count.is_set || is_set(path_rt_set_route_count.yfilter)) leaf_name_data.push_back(path_rt_set_route_count.get_name_leafdata());
    if (is_path_af_install_eligible.is_set || is_set(is_path_af_install_eligible.yfilter)) leaf_name_data.push_back(is_path_af_install_eligible.get_name_leafdata());
    if (is_permanent_path.is_set || is_set(is_permanent_path.yfilter)) leaf_name_data.push_back(is_permanent_path.get_name_leafdata());
    if (graceful_shutdown.is_set || is_set(graceful_shutdown.yfilter)) leaf_name_data.push_back(graceful_shutdown.get_name_leafdata());
    if (labeled_unicast_safi_path.is_set || is_set(labeled_unicast_safi_path.yfilter)) leaf_name_data.push_back(labeled_unicast_safi_path.get_name_leafdata());
    if (has_vpn_nexthop_addr.is_set || is_set(has_vpn_nexthop_addr.yfilter)) leaf_name_data.push_back(has_vpn_nexthop_addr.get_name_leafdata());
    if (is_orig_src_rd_present.is_set || is_set(is_orig_src_rd_present.yfilter)) leaf_name_data.push_back(is_orig_src_rd_present.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (mac_ip_present.is_set || is_set(mac_ip_present.yfilter)) leaf_name_data.push_back(mac_ip_present.get_name_leafdata());
    if (mac_ip.is_set || is_set(mac_ip.yfilter)) leaf_name_data.push_back(mac_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix>();
        }
        return bgp_prefix;
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress>();
        }
        return neighbor_address;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "nh-tunnel")
    {
        if(nh_tunnel == nullptr)
        {
            nh_tunnel = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NhTunnel>();
        }
        return nh_tunnel;
    }

    if(child_yang_name == "mdt-group-addr")
    {
        if(mdt_group_addr == nullptr)
        {
            mdt_group_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::MdtGroupAddr>();
        }
        return mdt_group_addr;
    }

    if(child_yang_name == "gw-addr")
    {
        if(gw_addr == nullptr)
        {
            gw_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::GwAddr>();
        }
        return gw_addr;
    }

    if(child_yang_name == "nh-addr")
    {
        if(nh_addr == nullptr)
        {
            nh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NhAddr>();
        }
        return nh_addr;
    }

    if(child_yang_name == "best-path-comp-winner")
    {
        if(best_path_comp_winner == nullptr)
        {
            best_path_comp_winner = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BestPathCompWinner>();
        }
        return best_path_comp_winner;
    }

    if(child_yang_name == "mvpn-nbr-addr")
    {
        if(mvpn_nbr_addr == nullptr)
        {
            mvpn_nbr_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNbrAddr>();
        }
        return mvpn_nbr_addr;
    }

    if(child_yang_name == "mvpn-nexthop-addr")
    {
        if(mvpn_nexthop_addr == nullptr)
        {
            mvpn_nexthop_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnNexthopAddr>();
        }
        return mvpn_nexthop_addr;
    }

    if(child_yang_name == "vpn-nexthop-addr")
    {
        if(vpn_nexthop_addr == nullptr)
        {
            vpn_nexthop_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::VpnNexthopAddr>();
        }
        return vpn_nexthop_addr;
    }

    if(child_yang_name == "rcvd-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::RcvdLabel>();
        ent_->parent = this;
        rcvd_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2vpn-circuit-status-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::L2vpnCircuitStatusValue>();
        ent_->parent = this;
        l2vpn_circuit_status_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mvpn-pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::MvpnPmsiValue>();
        ent_->parent = this;
        mvpn_pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "local-peers-advertised-to")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::LocalPeersAdvertisedTo>();
        ent_->parent = this;
        local_peers_advertised_to.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-peers-advertised-to")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::PePeersAdvertisedTo>();
        ent_->parent = this;
        pe_peers_advertised_to.append(ent_);
        return ent_;
    }

    if(child_yang_name == "best-path-orr-bitfield")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BestPathOrrBitfield>();
        ent_->parent = this;
        best_path_orr_bitfield.append(ent_);
        return ent_;
    }

    if(child_yang_name == "add-path-orr-bitfield")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::AddPathOrrBitfield>();
        ent_->parent = this;
        add_path_orr_bitfield.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_prefix != nullptr)
    {
        _children["bgp-prefix"] = bgp_prefix;
    }

    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(nh_tunnel != nullptr)
    {
        _children["nh-tunnel"] = nh_tunnel;
    }

    if(mdt_group_addr != nullptr)
    {
        _children["mdt-group-addr"] = mdt_group_addr;
    }

    if(gw_addr != nullptr)
    {
        _children["gw-addr"] = gw_addr;
    }

    if(nh_addr != nullptr)
    {
        _children["nh-addr"] = nh_addr;
    }

    if(best_path_comp_winner != nullptr)
    {
        _children["best-path-comp-winner"] = best_path_comp_winner;
    }

    if(mvpn_nbr_addr != nullptr)
    {
        _children["mvpn-nbr-addr"] = mvpn_nbr_addr;
    }

    if(mvpn_nexthop_addr != nullptr)
    {
        _children["mvpn-nexthop-addr"] = mvpn_nexthop_addr;
    }

    if(vpn_nexthop_addr != nullptr)
    {
        _children["vpn-nexthop-addr"] = vpn_nexthop_addr;
    }

    count_ = 0;
    for (auto ent_ : rcvd_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2vpn_circuit_status_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mvpn_pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : local_peers_advertised_to.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_peers_advertised_to.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : best_path_orr_bitfield.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : add_path_orr_bitfield.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-valid")
    {
        is_path_valid = value;
        is_path_valid.value_namespace = name_space;
        is_path_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-damped")
    {
        is_path_damped = value;
        is_path_damped.value_namespace = name_space;
        is_path_damped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-history-held")
    {
        is_path_history_held = value;
        is_path_history_held.value_namespace = name_space;
        is_path_history_held.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-internal-path")
    {
        is_internal_path = value;
        is_internal_path.value_namespace = name_space;
        is_internal_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-best-path")
    {
        is_best_path = value;
        is_best_path.value_namespace = name_space;
        is_best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-best")
    {
        is_as_best = value;
        is_as_best.value_namespace = name_space;
        is_as_best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-spkr-as-best")
    {
        is_spkr_as_best = value;
        is_spkr_as_best.value_namespace = name_space;
        is_spkr_as_best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-best")
    {
        is_partial_best = value;
        is_partial_best.value_namespace = name_space;
        is_partial_best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregation-suppressed")
    {
        is_aggregation_suppressed = value;
        is_aggregation_suppressed.value_namespace = name_space;
        is_aggregation_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-import-dampened")
    {
        is_import_dampened = value;
        is_import_dampened.value_namespace = name_space;
        is_import_dampened.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-import-suspect")
    {
        is_import_suspect = value;
        is_import_suspect.value_namespace = name_space;
        is_import_suspect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-not-advertised")
    {
        is_path_not_advertised = value;
        is_path_not_advertised.value_namespace = name_space;
        is_path_not_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-not-advertised-to-ebgp")
    {
        is_path_not_advertised_to_ebgp = value;
        is_path_not_advertised_to_ebgp.value_namespace = name_space;
        is_path_not_advertised_to_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-advertised-local-as-only")
    {
        is_path_advertised_local_as_only = value;
        is_path_advertised_local_as_only.value_namespace = name_space;
        is_path_advertised_local_as_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-route-reflector")
    {
        is_path_from_route_reflector = value;
        is_path_from_route_reflector.value_namespace = name_space;
        is_path_from_route_reflector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-received-only")
    {
        is_path_received_only = value;
        is_path_received_only.value_namespace = name_space;
        is_path_received_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-path-not-modified")
    {
        is_received_path_not_modified = value;
        is_received_path_not_modified.value_namespace = name_space;
        is_received_path_not_modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-locally-sourced")
    {
        is_path_locally_sourced = value;
        is_path_locally_sourced.value_namespace = name_space;
        is_path_locally_sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-local-aggregate")
    {
        is_path_local_aggregate = value;
        is_path_local_aggregate.value_namespace = name_space;
        is_path_local_aggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-network-command")
    {
        is_path_from_network_command = value;
        is_path_from_network_command.value_namespace = name_space;
        is_path_from_network_command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-redistribute-command")
    {
        is_path_from_redistribute_command = value;
        is_path_from_redistribute_command.value_namespace = name_space;
        is_path_from_redistribute_command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-imported")
    {
        is_path_imported = value;
        is_path_imported.value_namespace = name_space;
        is_path_imported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-reoriginated")
    {
        is_path_reoriginated = value;
        is_path_reoriginated.value_namespace = name_space;
        is_path_reoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-reoriginated-stitching")
    {
        is_path_reoriginated_stitching = value;
        is_path_reoriginated_stitching.value_namespace = name_space;
        is_path_reoriginated_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-vpn-only")
    {
        is_path_vpn_only = value;
        is_path_vpn_only.value_namespace = name_space;
        is_path_vpn_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-confederation-peer")
    {
        is_path_from_confederation_peer = value;
        is_path_from_confederation_peer.value_namespace = name_space;
        is_path_from_confederation_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-synced-with-igp")
    {
        is_path_synced_with_igp = value;
        is_path_synced_with_igp.value_namespace = name_space;
        is_path_synced_with_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-multipath")
    {
        is_path_multipath = value;
        is_path_multipath.value_namespace = name_space;
        is_path_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-imp-candidate")
    {
        is_path_imp_candidate = value;
        is_path_imp_candidate.value_namespace = name_space;
        is_path_imp_candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-stale")
    {
        is_path_stale = value;
        is_path_stale.value_namespace = name_space;
        is_path_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-long-lived-stale")
    {
        is_path_long_lived_stale = value;
        is_path_long_lived_stale.value_namespace = name_space;
        is_path_long_lived_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-backup")
    {
        is_path_backup = value;
        is_path_backup.value_namespace = name_space;
        is_path_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-backup-protect-multipath")
    {
        is_path_backup_protect_multipath = value;
        is_path_backup_protect_multipath.value_namespace = name_space;
        is_path_backup_protect_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-best-external")
    {
        is_path_best_external = value;
        is_path_best_external.value_namespace = name_space;
        is_path_best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-additional-path")
    {
        is_path_additional_path = value;
        is_path_additional_path.value_namespace = name_space;
        is_path_additional_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-nexthop-discarded")
    {
        is_path_nexthop_discarded = value;
        is_path_nexthop_discarded.value_namespace = name_space;
        is_path_nexthop_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-local-net-label")
    {
        has_local_net_label = value;
        has_local_net_label.value_namespace = name_space;
        has_local_net_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-weight")
    {
        path_weight = value;
        path_weight.value_namespace = name_space;
        path_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mdt-group-addr")
    {
        has_mdt_group_addr = value;
        has_mdt_group_addr.value_namespace = name_space;
        has_mdt_group_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-size")
    {
        l2vpn_size = value;
        l2vpn_size.value_namespace = name_space;
        l2vpn_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-esi")
    {
        l2vpn_evpn_esi = value;
        l2vpn_evpn_esi.value_namespace = name_space;
        l2vpn_evpn_esi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-gw-addr")
    {
        has_gw_addr = value;
        has_gw_addr.value_namespace = name_space;
        has_gw_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-nh-addr")
    {
        has_nh_addr = value;
        has_nh_addr.value_namespace = name_space;
        has_nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-second-label")
    {
        has_second_label = value;
        has_second_label.value_namespace = name_space;
        has_second_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-label")
    {
        second_label = value;
        second_label.value_namespace = name_space;
        second_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flap-count")
    {
        path_flap_count = value;
        path_flap_count.value_namespace = name_space;
        path_flap_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-first-flap")
    {
        seconds_since_first_flap = value;
        seconds_since_first_flap.value_namespace = name_space;
        seconds_since_first_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-unsuppress")
    {
        time_to_unsuppress = value;
        time_to_unsuppress.value_namespace = name_space;
        time_to_unsuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampen-penalty")
    {
        dampen_penalty = value;
        dampen_penalty.value_namespace = name_space;
        dampen_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "halflife-time")
    {
        halflife_time = value;
        halflife_time.value_namespace = name_space;
        halflife_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty = value;
        suppress_penalty.value_namespace = name_space;
        suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-value")
    {
        reuse_value = value;
        reuse_value.value_namespace = name_space;
        reuse_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
        maximum_suppress_time.value_namespace = name_space;
        maximum_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-comp-stage")
    {
        best_path_comp_stage = value;
        best_path_comp_stage.value_namespace = name_space;
        best_path_comp_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-id-comp-winner")
    {
        best_path_id_comp_winner = value;
        best_path_id_comp_winner.value_namespace = name_space;
        best_path_id_comp_winner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
        path_flags.value_namespace = name_space;
        path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-import-flags")
    {
        path_import_flags = value;
        path_import_flags.value_namespace = name_space;
        path_import_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-id")
    {
        best_path_id = value;
        best_path_id.value_namespace = name_space;
        best_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-path-id")
    {
        local_path_id = value;
        local_path_id.value_namespace = name_space;
        local_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvd-path-id")
    {
        rcvd_path_id = value;
        rcvd_path_id.value_namespace = name_space;
        rcvd_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-table-version")
    {
        path_table_version = value;
        path_table_version.value_namespace = name_space;
        path_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe = value;
        advertisedto_pe.value_namespace = name_space;
        advertisedto_pe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-failed")
    {
        rib_failed = value;
        rib_failed.value_namespace = name_space;
        rib_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-rpki-origin-as-validity")
    {
        sn_rpki_origin_as_validity = value;
        sn_rpki_origin_as_validity.value_namespace = name_space;
        sn_rpki_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-rpki-origin-as-validity")
    {
        show_rpki_origin_as_validity = value;
        show_rpki_origin_as_validity.value_namespace = name_space;
        show_rpki_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibgp-signaled-validity")
    {
        ibgp_signaled_validity = value;
        ibgp_signaled_validity.value_namespace = name_space;
        ibgp_signaled_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disabled")
    {
        rpki_origin_as_validation_disabled = value;
        rpki_origin_as_validation_disabled.value_namespace = name_space;
        rpki_origin_as_validation_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own-path")
    {
        accept_own_path = value;
        accept_own_path.value_namespace = name_space;
        accept_own_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own-self-originated-path")
    {
        accept_own_self_originated_path = value;
        accept_own_self_originated_path.value_namespace = name_space;
        accept_own_self_originated_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric")
    {
        aigp_metric = value;
        aigp_metric.value_namespace = name_space;
        aigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-sfs-path")
    {
        mvpn_sfs_path = value;
        mvpn_sfs_path.value_namespace = name_space;
        mvpn_sfs_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fspec-invalid-path")
    {
        fspec_invalid_path = value;
        fspec_invalid_path.value_namespace = name_space;
        fspec_invalid_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-nbr-addr")
    {
        has_mvpn_nbr_addr = value;
        has_mvpn_nbr_addr.value_namespace = name_space;
        has_mvpn_nbr_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-nexthop-addr")
    {
        has_mvpn_nexthop_addr = value;
        has_mvpn_nexthop_addr.value_namespace = name_space;
        has_mvpn_nexthop_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-pmsi")
    {
        has_mvpn_pmsi = value;
        has_mvpn_pmsi.value_namespace = name_space;
        has_mvpn_pmsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-pmsi-type")
    {
        mvpn_pmsi_type = value;
        mvpn_pmsi_type.value_namespace = name_space;
        mvpn_pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-pmsi-flags")
    {
        mvpn_pmsi_flags = value;
        mvpn_pmsi_flags.value_namespace = name_space;
        mvpn_pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-pmsi-label")
    {
        mvpn_pmsi_label = value;
        mvpn_pmsi_label.value_namespace = name_space;
        mvpn_pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-extcomm")
    {
        has_mvpn_extcomm = value;
        has_mvpn_extcomm.value_namespace = name_space;
        has_mvpn_extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-path-flags")
    {
        mvpn_path_flags = value;
        mvpn_path_flags.value_namespace = name_space;
        mvpn_path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-nh")
    {
        local_nh = value;
        local_nh.value_namespace = name_space;
        local_nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-set-limit-enabled")
    {
        rt_set_limit_enabled = value;
        rt_set_limit_enabled.value_namespace = name_space;
        rt_set_limit_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-set-id")
    {
        path_rt_set_id = value;
        path_rt_set_id.value_namespace = name_space;
        path_rt_set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-set-route-count")
    {
        path_rt_set_route_count = value;
        path_rt_set_route_count.value_namespace = name_space;
        path_rt_set_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-af-install-eligible")
    {
        is_path_af_install_eligible = value;
        is_path_af_install_eligible.value_namespace = name_space;
        is_path_af_install_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-permanent-path")
    {
        is_permanent_path = value;
        is_permanent_path.value_namespace = name_space;
        is_permanent_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-shutdown")
    {
        graceful_shutdown = value;
        graceful_shutdown.value_namespace = name_space;
        graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-unicast-safi-path")
    {
        labeled_unicast_safi_path = value;
        labeled_unicast_safi_path.value_namespace = name_space;
        labeled_unicast_safi_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vpn-nexthop-addr")
    {
        has_vpn_nexthop_addr = value;
        has_vpn_nexthop_addr.value_namespace = name_space;
        has_vpn_nexthop_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orig-src-rd-present")
    {
        is_orig_src_rd_present = value;
        is_orig_src_rd_present.value_namespace = name_space;
        is_orig_src_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-ip-present")
    {
        mac_ip_present = value;
        mac_ip_present.value_namespace = name_space;
        mac_ip_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-ip")
    {
        mac_ip = value;
        mac_ip.value_namespace = name_space;
        mac_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "is-path-valid")
    {
        is_path_valid.yfilter = yfilter;
    }
    if(value_path == "is-path-damped")
    {
        is_path_damped.yfilter = yfilter;
    }
    if(value_path == "is-path-history-held")
    {
        is_path_history_held.yfilter = yfilter;
    }
    if(value_path == "is-internal-path")
    {
        is_internal_path.yfilter = yfilter;
    }
    if(value_path == "is-best-path")
    {
        is_best_path.yfilter = yfilter;
    }
    if(value_path == "is-as-best")
    {
        is_as_best.yfilter = yfilter;
    }
    if(value_path == "is-spkr-as-best")
    {
        is_spkr_as_best.yfilter = yfilter;
    }
    if(value_path == "is-partial-best")
    {
        is_partial_best.yfilter = yfilter;
    }
    if(value_path == "is-aggregation-suppressed")
    {
        is_aggregation_suppressed.yfilter = yfilter;
    }
    if(value_path == "is-import-dampened")
    {
        is_import_dampened.yfilter = yfilter;
    }
    if(value_path == "is-import-suspect")
    {
        is_import_suspect.yfilter = yfilter;
    }
    if(value_path == "is-path-not-advertised")
    {
        is_path_not_advertised.yfilter = yfilter;
    }
    if(value_path == "is-path-not-advertised-to-ebgp")
    {
        is_path_not_advertised_to_ebgp.yfilter = yfilter;
    }
    if(value_path == "is-path-advertised-local-as-only")
    {
        is_path_advertised_local_as_only.yfilter = yfilter;
    }
    if(value_path == "is-path-from-route-reflector")
    {
        is_path_from_route_reflector.yfilter = yfilter;
    }
    if(value_path == "is-path-received-only")
    {
        is_path_received_only.yfilter = yfilter;
    }
    if(value_path == "is-received-path-not-modified")
    {
        is_received_path_not_modified.yfilter = yfilter;
    }
    if(value_path == "is-path-locally-sourced")
    {
        is_path_locally_sourced.yfilter = yfilter;
    }
    if(value_path == "is-path-local-aggregate")
    {
        is_path_local_aggregate.yfilter = yfilter;
    }
    if(value_path == "is-path-from-network-command")
    {
        is_path_from_network_command.yfilter = yfilter;
    }
    if(value_path == "is-path-from-redistribute-command")
    {
        is_path_from_redistribute_command.yfilter = yfilter;
    }
    if(value_path == "is-path-imported")
    {
        is_path_imported.yfilter = yfilter;
    }
    if(value_path == "is-path-reoriginated")
    {
        is_path_reoriginated.yfilter = yfilter;
    }
    if(value_path == "is-path-reoriginated-stitching")
    {
        is_path_reoriginated_stitching.yfilter = yfilter;
    }
    if(value_path == "is-path-vpn-only")
    {
        is_path_vpn_only.yfilter = yfilter;
    }
    if(value_path == "is-path-from-confederation-peer")
    {
        is_path_from_confederation_peer.yfilter = yfilter;
    }
    if(value_path == "is-path-synced-with-igp")
    {
        is_path_synced_with_igp.yfilter = yfilter;
    }
    if(value_path == "is-path-multipath")
    {
        is_path_multipath.yfilter = yfilter;
    }
    if(value_path == "is-path-imp-candidate")
    {
        is_path_imp_candidate.yfilter = yfilter;
    }
    if(value_path == "is-path-stale")
    {
        is_path_stale.yfilter = yfilter;
    }
    if(value_path == "is-path-long-lived-stale")
    {
        is_path_long_lived_stale.yfilter = yfilter;
    }
    if(value_path == "is-path-backup")
    {
        is_path_backup.yfilter = yfilter;
    }
    if(value_path == "is-path-backup-protect-multipath")
    {
        is_path_backup_protect_multipath.yfilter = yfilter;
    }
    if(value_path == "is-path-best-external")
    {
        is_path_best_external.yfilter = yfilter;
    }
    if(value_path == "is-path-additional-path")
    {
        is_path_additional_path.yfilter = yfilter;
    }
    if(value_path == "is-path-nexthop-discarded")
    {
        is_path_nexthop_discarded.yfilter = yfilter;
    }
    if(value_path == "has-local-net-label")
    {
        has_local_net_label.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "path-weight")
    {
        path_weight.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "has-mdt-group-addr")
    {
        has_mdt_group_addr.yfilter = yfilter;
    }
    if(value_path == "l2vpn-size")
    {
        l2vpn_size.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-esi")
    {
        l2vpn_evpn_esi.yfilter = yfilter;
    }
    if(value_path == "has-gw-addr")
    {
        has_gw_addr.yfilter = yfilter;
    }
    if(value_path == "has-nh-addr")
    {
        has_nh_addr.yfilter = yfilter;
    }
    if(value_path == "has-second-label")
    {
        has_second_label.yfilter = yfilter;
    }
    if(value_path == "second-label")
    {
        second_label.yfilter = yfilter;
    }
    if(value_path == "path-flap-count")
    {
        path_flap_count.yfilter = yfilter;
    }
    if(value_path == "seconds-since-first-flap")
    {
        seconds_since_first_flap.yfilter = yfilter;
    }
    if(value_path == "time-to-unsuppress")
    {
        time_to_unsuppress.yfilter = yfilter;
    }
    if(value_path == "dampen-penalty")
    {
        dampen_penalty.yfilter = yfilter;
    }
    if(value_path == "halflife-time")
    {
        halflife_time.yfilter = yfilter;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty.yfilter = yfilter;
    }
    if(value_path == "reuse-value")
    {
        reuse_value.yfilter = yfilter;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time.yfilter = yfilter;
    }
    if(value_path == "best-path-comp-stage")
    {
        best_path_comp_stage.yfilter = yfilter;
    }
    if(value_path == "best-path-id-comp-winner")
    {
        best_path_id_comp_winner.yfilter = yfilter;
    }
    if(value_path == "path-flags")
    {
        path_flags.yfilter = yfilter;
    }
    if(value_path == "path-import-flags")
    {
        path_import_flags.yfilter = yfilter;
    }
    if(value_path == "best-path-id")
    {
        best_path_id.yfilter = yfilter;
    }
    if(value_path == "local-path-id")
    {
        local_path_id.yfilter = yfilter;
    }
    if(value_path == "rcvd-path-id")
    {
        rcvd_path_id.yfilter = yfilter;
    }
    if(value_path == "path-table-version")
    {
        path_table_version.yfilter = yfilter;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe.yfilter = yfilter;
    }
    if(value_path == "rib-failed")
    {
        rib_failed.yfilter = yfilter;
    }
    if(value_path == "sn-rpki-origin-as-validity")
    {
        sn_rpki_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "show-rpki-origin-as-validity")
    {
        show_rpki_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "ibgp-signaled-validity")
    {
        ibgp_signaled_validity.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disabled")
    {
        rpki_origin_as_validation_disabled.yfilter = yfilter;
    }
    if(value_path == "accept-own-path")
    {
        accept_own_path.yfilter = yfilter;
    }
    if(value_path == "accept-own-self-originated-path")
    {
        accept_own_self_originated_path.yfilter = yfilter;
    }
    if(value_path == "aigp-metric")
    {
        aigp_metric.yfilter = yfilter;
    }
    if(value_path == "mvpn-sfs-path")
    {
        mvpn_sfs_path.yfilter = yfilter;
    }
    if(value_path == "fspec-invalid-path")
    {
        fspec_invalid_path.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-nbr-addr")
    {
        has_mvpn_nbr_addr.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-nexthop-addr")
    {
        has_mvpn_nexthop_addr.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-pmsi")
    {
        has_mvpn_pmsi.yfilter = yfilter;
    }
    if(value_path == "mvpn-pmsi-type")
    {
        mvpn_pmsi_type.yfilter = yfilter;
    }
    if(value_path == "mvpn-pmsi-flags")
    {
        mvpn_pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "mvpn-pmsi-label")
    {
        mvpn_pmsi_label.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-extcomm")
    {
        has_mvpn_extcomm.yfilter = yfilter;
    }
    if(value_path == "mvpn-path-flags")
    {
        mvpn_path_flags.yfilter = yfilter;
    }
    if(value_path == "local-nh")
    {
        local_nh.yfilter = yfilter;
    }
    if(value_path == "rt-set-limit-enabled")
    {
        rt_set_limit_enabled.yfilter = yfilter;
    }
    if(value_path == "path-rt-set-id")
    {
        path_rt_set_id.yfilter = yfilter;
    }
    if(value_path == "path-rt-set-route-count")
    {
        path_rt_set_route_count.yfilter = yfilter;
    }
    if(value_path == "is-path-af-install-eligible")
    {
        is_path_af_install_eligible.yfilter = yfilter;
    }
    if(value_path == "is-permanent-path")
    {
        is_permanent_path.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown")
    {
        graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "labeled-unicast-safi-path")
    {
        labeled_unicast_safi_path.yfilter = yfilter;
    }
    if(value_path == "has-vpn-nexthop-addr")
    {
        has_vpn_nexthop_addr.yfilter = yfilter;
    }
    if(value_path == "is-orig-src-rd-present")
    {
        is_orig_src_rd_present.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "mac-ip-present")
    {
        mac_ip_present.yfilter = yfilter;
    }
    if(value_path == "mac-ip")
    {
        mac_ip.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-prefix" || name == "neighbor-address" || name == "next-hop" || name == "nh-tunnel" || name == "mdt-group-addr" || name == "gw-addr" || name == "nh-addr" || name == "best-path-comp-winner" || name == "mvpn-nbr-addr" || name == "mvpn-nexthop-addr" || name == "vpn-nexthop-addr" || name == "rcvd-label" || name == "l2vpn-circuit-status-value" || name == "mvpn-pmsi-value" || name == "extended-community" || name == "local-peers-advertised-to" || name == "pe-peers-advertised-to" || name == "best-path-orr-bitfield" || name == "add-path-orr-bitfield" || name == "route-type" || name == "is-path-valid" || name == "is-path-damped" || name == "is-path-history-held" || name == "is-internal-path" || name == "is-best-path" || name == "is-as-best" || name == "is-spkr-as-best" || name == "is-partial-best" || name == "is-aggregation-suppressed" || name == "is-import-dampened" || name == "is-import-suspect" || name == "is-path-not-advertised" || name == "is-path-not-advertised-to-ebgp" || name == "is-path-advertised-local-as-only" || name == "is-path-from-route-reflector" || name == "is-path-received-only" || name == "is-received-path-not-modified" || name == "is-path-locally-sourced" || name == "is-path-local-aggregate" || name == "is-path-from-network-command" || name == "is-path-from-redistribute-command" || name == "is-path-imported" || name == "is-path-reoriginated" || name == "is-path-reoriginated-stitching" || name == "is-path-vpn-only" || name == "is-path-from-confederation-peer" || name == "is-path-synced-with-igp" || name == "is-path-multipath" || name == "is-path-imp-candidate" || name == "is-path-stale" || name == "is-path-long-lived-stale" || name == "is-path-backup" || name == "is-path-backup-protect-multipath" || name == "is-path-best-external" || name == "is-path-additional-path" || name == "is-path-nexthop-discarded" || name == "has-local-net-label" || name == "local-label" || name == "igp-metric" || name == "path-weight" || name == "neighbor-router-id" || name == "has-mdt-group-addr" || name == "l2vpn-size" || name == "l2vpn-evpn-esi" || name == "has-gw-addr" || name == "has-nh-addr" || name == "has-second-label" || name == "second-label" || name == "path-flap-count" || name == "seconds-since-first-flap" || name == "time-to-unsuppress" || name == "dampen-penalty" || name == "halflife-time" || name == "suppress-penalty" || name == "reuse-value" || name == "maximum-suppress-time" || name == "best-path-comp-stage" || name == "best-path-id-comp-winner" || name == "path-flags" || name == "path-import-flags" || name == "best-path-id" || name == "local-path-id" || name == "rcvd-path-id" || name == "path-table-version" || name == "advertisedto-pe" || name == "rib-failed" || name == "sn-rpki-origin-as-validity" || name == "show-rpki-origin-as-validity" || name == "ibgp-signaled-validity" || name == "rpki-origin-as-validation-disabled" || name == "accept-own-path" || name == "accept-own-self-originated-path" || name == "aigp-metric" || name == "mvpn-sfs-path" || name == "fspec-invalid-path" || name == "has-mvpn-nbr-addr" || name == "has-mvpn-nexthop-addr" || name == "has-mvpn-pmsi" || name == "mvpn-pmsi-type" || name == "mvpn-pmsi-flags" || name == "mvpn-pmsi-label" || name == "has-mvpn-extcomm" || name == "mvpn-path-flags" || name == "local-nh" || name == "rt-set-limit-enabled" || name == "path-rt-set-id" || name == "path-rt-set-route-count" || name == "is-path-af-install-eligible" || name == "is-permanent-path" || name == "graceful-shutdown" || name == "labeled-unicast-safi-path" || name == "has-vpn-nexthop-addr" || name == "is-orig-src-rd-present" || name == "af-name" || name == "route-distinguisher" || name == "mac-ip-present" || name == "mac-ip")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
        ,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::~NextHop()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable::Path::PathInformation::NextHop::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}


}
}

