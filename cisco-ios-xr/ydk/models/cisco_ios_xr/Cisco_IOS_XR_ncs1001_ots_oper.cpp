
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1001_ots_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1001_ots_oper {

HwModule::HwModule()
    :
    amplifier_trails(std::make_shared<HwModule::AmplifierTrails>())
    , channels_trails(std::make_shared<HwModule::ChannelsTrails>())
{
    amplifier_trails->parent = this;
    channels_trails->parent = this;

    yang_name = "hw-module"; yang_parent_name = "Cisco-IOS-XR-ncs1001-ots-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

HwModule::~HwModule()
{
}

bool HwModule::has_data() const
{
    if (is_presence_container) return true;
    return (amplifier_trails !=  nullptr && amplifier_trails->has_data())
	|| (channels_trails !=  nullptr && channels_trails->has_data());
}

bool HwModule::has_operation() const
{
    return is_set(yfilter)
	|| (amplifier_trails !=  nullptr && amplifier_trails->has_operation())
	|| (channels_trails !=  nullptr && channels_trails->has_operation());
}

std::string HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-oper:hw-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amplifier-trails")
    {
        if(amplifier_trails == nullptr)
        {
            amplifier_trails = std::make_shared<HwModule::AmplifierTrails>();
        }
        return amplifier_trails;
    }

    if(child_yang_name == "channels-trails")
    {
        if(channels_trails == nullptr)
        {
            channels_trails = std::make_shared<HwModule::ChannelsTrails>();
        }
        return channels_trails;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(amplifier_trails != nullptr)
    {
        _children["amplifier-trails"] = amplifier_trails;
    }

    if(channels_trails != nullptr)
    {
        _children["channels-trails"] = channels_trails;
    }

    return _children;
}

void HwModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> HwModule::clone_ptr() const
{
    return std::make_shared<HwModule>();
}

std::string HwModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amplifier-trails" || name == "channels-trails")
        return true;
    return false;
}

HwModule::AmplifierTrails::AmplifierTrails()
    :
    amplifier_trail(this, {"slot_id"})
{

    yang_name = "amplifier-trails"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::AmplifierTrails::~AmplifierTrails()
{
}

bool HwModule::AmplifierTrails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<amplifier_trail.len(); index++)
    {
        if(amplifier_trail[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::AmplifierTrails::has_operation() const
{
    for (std::size_t index=0; index<amplifier_trail.len(); index++)
    {
        if(amplifier_trail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::AmplifierTrails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-oper:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::AmplifierTrails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amplifier-trails";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::AmplifierTrails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::AmplifierTrails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amplifier-trail")
    {
        auto ent_ = std::make_shared<HwModule::AmplifierTrails::AmplifierTrail>();
        ent_->parent = this;
        amplifier_trail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::AmplifierTrails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : amplifier_trail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::AmplifierTrails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::AmplifierTrails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::AmplifierTrails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amplifier-trail")
        return true;
    return false;
}

HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrail()
    :
    slot_id{YType::uint32, "slot-id"}
        ,
    amplifier_trail_data(this, {"amplifier_trail_data_type"})
{

    yang_name = "amplifier-trail"; yang_parent_name = "amplifier-trails"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::AmplifierTrails::AmplifierTrail::~AmplifierTrail()
{
}

bool HwModule::AmplifierTrails::AmplifierTrail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<amplifier_trail_data.len(); index++)
    {
        if(amplifier_trail_data[index]->has_data())
            return true;
    }
    return slot_id.is_set;
}

bool HwModule::AmplifierTrails::AmplifierTrail::has_operation() const
{
    for (std::size_t index=0; index<amplifier_trail_data.len(); index++)
    {
        if(amplifier_trail_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter);
}

std::string HwModule::AmplifierTrails::AmplifierTrail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-oper:hw-module/amplifier-trails/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::AmplifierTrails::AmplifierTrail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amplifier-trail";
    ADD_KEY_TOKEN(slot_id, "slot-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::AmplifierTrails::AmplifierTrail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::AmplifierTrails::AmplifierTrail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amplifier-trail-data")
    {
        auto ent_ = std::make_shared<HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData>();
        ent_->parent = this;
        amplifier_trail_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::AmplifierTrails::AmplifierTrail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : amplifier_trail_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::AmplifierTrails::AmplifierTrail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::AmplifierTrails::AmplifierTrail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
}

bool HwModule::AmplifierTrails::AmplifierTrail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amplifier-trail-data" || name == "slot-id")
        return true;
    return false;
}

HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmplifierTrailData()
    :
    amplifier_trail_data_type{YType::enumeration, "amplifier-trail-data-type"}
        ,
    ampli_trail_info(this, {})
    , channel_trail_info(this, {})
{

    yang_name = "amplifier-trail-data"; yang_parent_name = "amplifier-trail"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::~AmplifierTrailData()
{
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ampli_trail_info.len(); index++)
    {
        if(ampli_trail_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<channel_trail_info.len(); index++)
    {
        if(channel_trail_info[index]->has_data())
            return true;
    }
    return amplifier_trail_data_type.is_set;
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::has_operation() const
{
    for (std::size_t index=0; index<ampli_trail_info.len(); index++)
    {
        if(ampli_trail_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<channel_trail_info.len(); index++)
    {
        if(channel_trail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(amplifier_trail_data_type.yfilter);
}

std::string HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amplifier-trail-data";
    ADD_KEY_TOKEN(amplifier_trail_data_type, "amplifier-trail-data-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (amplifier_trail_data_type.is_set || is_set(amplifier_trail_data_type.yfilter)) leaf_name_data.push_back(amplifier_trail_data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ampli-trail-info")
    {
        auto ent_ = std::make_shared<HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo>();
        ent_->parent = this;
        ampli_trail_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "channel-trail-info")
    {
        auto ent_ = std::make_shared<HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo>();
        ent_->parent = this;
        channel_trail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ampli_trail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : channel_trail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "amplifier-trail-data-type")
    {
        amplifier_trail_data_type = value;
        amplifier_trail_data_type.value_namespace = name_space;
        amplifier_trail_data_type.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "amplifier-trail-data-type")
    {
        amplifier_trail_data_type.yfilter = yfilter;
    }
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ampli-trail-info" || name == "channel-trail-info" || name == "amplifier-trail-data-type")
        return true;
    return false;
}

HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::AmpliTrailInfo()
    :
    eqpt_fail{YType::uint8, "eqpt-fail"},
    view{YType::enumeration, "view"},
    com_port_number{YType::uint8, "com-port-number"},
    com_port_name{YType::str, "com-port-name"},
    line_port_number{YType::uint8, "line-port-number"},
    line_port_name{YType::str, "line-port-name"},
    bst_in_rx_power{YType::int16, "bst-in-rx-power"},
    bst_in_rx_total_power{YType::int16, "bst-in-rx-total-power"},
    bst_in_rx_power_th_low{YType::int16, "bst-in-rx-power-th-low"},
    bst_out_tx_power{YType::int16, "bst-out-tx-power"},
    bst_out_tx_total_power{YType::int16, "bst-out-tx-total-power"},
    bst_out_tx_power_th_low{YType::int16, "bst-out-tx-power-th-low"},
    bst_working_mode{YType::uint16, "bst-working-mode"},
    bst_safety_mode{YType::uint16, "bst-safety-mode"},
    bst_gain_range{YType::uint16, "bst-gain-range"},
    bst_osri{YType::uint16, "bst-osri"},
    bst_channel_power{YType::int16, "bst-channel-power"},
    bst_gain{YType::int16, "bst-gain"},
    bst_tilt{YType::int16, "bst-tilt"},
    pre_in_rx_power{YType::int16, "pre-in-rx-power"},
    pre_in_rx_total_power{YType::int16, "pre-in-rx-total-power"},
    pre_in_rx_power_th_low{YType::int16, "pre-in-rx-power-th-low"},
    pre_out_tx_power{YType::int16, "pre-out-tx-power"},
    pre_out_tx_total_power{YType::int16, "pre-out-tx-total-power"},
    pre_out_tx_power_th_low{YType::int16, "pre-out-tx-power-th-low"},
    pre_working_mode{YType::uint16, "pre-working-mode"},
    pre_safety_mode{YType::uint16, "pre-safety-mode"},
    pre_gain_range{YType::uint16, "pre-gain-range"},
    pre_osri{YType::uint16, "pre-osri"},
    pre_channel_power{YType::int16, "pre-channel-power"},
    pre_gain{YType::int16, "pre-gain"},
    pre_tilt{YType::int16, "pre-tilt"}
{

    yang_name = "ampli-trail-info"; yang_parent_name = "amplifier-trail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::~AmpliTrailInfo()
{
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::has_data() const
{
    if (is_presence_container) return true;
    return eqpt_fail.is_set
	|| view.is_set
	|| com_port_number.is_set
	|| com_port_name.is_set
	|| line_port_number.is_set
	|| line_port_name.is_set
	|| bst_in_rx_power.is_set
	|| bst_in_rx_total_power.is_set
	|| bst_in_rx_power_th_low.is_set
	|| bst_out_tx_power.is_set
	|| bst_out_tx_total_power.is_set
	|| bst_out_tx_power_th_low.is_set
	|| bst_working_mode.is_set
	|| bst_safety_mode.is_set
	|| bst_gain_range.is_set
	|| bst_osri.is_set
	|| bst_channel_power.is_set
	|| bst_gain.is_set
	|| bst_tilt.is_set
	|| pre_in_rx_power.is_set
	|| pre_in_rx_total_power.is_set
	|| pre_in_rx_power_th_low.is_set
	|| pre_out_tx_power.is_set
	|| pre_out_tx_total_power.is_set
	|| pre_out_tx_power_th_low.is_set
	|| pre_working_mode.is_set
	|| pre_safety_mode.is_set
	|| pre_gain_range.is_set
	|| pre_osri.is_set
	|| pre_channel_power.is_set
	|| pre_gain.is_set
	|| pre_tilt.is_set;
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eqpt_fail.yfilter)
	|| ydk::is_set(view.yfilter)
	|| ydk::is_set(com_port_number.yfilter)
	|| ydk::is_set(com_port_name.yfilter)
	|| ydk::is_set(line_port_number.yfilter)
	|| ydk::is_set(line_port_name.yfilter)
	|| ydk::is_set(bst_in_rx_power.yfilter)
	|| ydk::is_set(bst_in_rx_total_power.yfilter)
	|| ydk::is_set(bst_in_rx_power_th_low.yfilter)
	|| ydk::is_set(bst_out_tx_power.yfilter)
	|| ydk::is_set(bst_out_tx_total_power.yfilter)
	|| ydk::is_set(bst_out_tx_power_th_low.yfilter)
	|| ydk::is_set(bst_working_mode.yfilter)
	|| ydk::is_set(bst_safety_mode.yfilter)
	|| ydk::is_set(bst_gain_range.yfilter)
	|| ydk::is_set(bst_osri.yfilter)
	|| ydk::is_set(bst_channel_power.yfilter)
	|| ydk::is_set(bst_gain.yfilter)
	|| ydk::is_set(bst_tilt.yfilter)
	|| ydk::is_set(pre_in_rx_power.yfilter)
	|| ydk::is_set(pre_in_rx_total_power.yfilter)
	|| ydk::is_set(pre_in_rx_power_th_low.yfilter)
	|| ydk::is_set(pre_out_tx_power.yfilter)
	|| ydk::is_set(pre_out_tx_total_power.yfilter)
	|| ydk::is_set(pre_out_tx_power_th_low.yfilter)
	|| ydk::is_set(pre_working_mode.yfilter)
	|| ydk::is_set(pre_safety_mode.yfilter)
	|| ydk::is_set(pre_gain_range.yfilter)
	|| ydk::is_set(pre_osri.yfilter)
	|| ydk::is_set(pre_channel_power.yfilter)
	|| ydk::is_set(pre_gain.yfilter)
	|| ydk::is_set(pre_tilt.yfilter);
}

std::string HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ampli-trail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eqpt_fail.is_set || is_set(eqpt_fail.yfilter)) leaf_name_data.push_back(eqpt_fail.get_name_leafdata());
    if (view.is_set || is_set(view.yfilter)) leaf_name_data.push_back(view.get_name_leafdata());
    if (com_port_number.is_set || is_set(com_port_number.yfilter)) leaf_name_data.push_back(com_port_number.get_name_leafdata());
    if (com_port_name.is_set || is_set(com_port_name.yfilter)) leaf_name_data.push_back(com_port_name.get_name_leafdata());
    if (line_port_number.is_set || is_set(line_port_number.yfilter)) leaf_name_data.push_back(line_port_number.get_name_leafdata());
    if (line_port_name.is_set || is_set(line_port_name.yfilter)) leaf_name_data.push_back(line_port_name.get_name_leafdata());
    if (bst_in_rx_power.is_set || is_set(bst_in_rx_power.yfilter)) leaf_name_data.push_back(bst_in_rx_power.get_name_leafdata());
    if (bst_in_rx_total_power.is_set || is_set(bst_in_rx_total_power.yfilter)) leaf_name_data.push_back(bst_in_rx_total_power.get_name_leafdata());
    if (bst_in_rx_power_th_low.is_set || is_set(bst_in_rx_power_th_low.yfilter)) leaf_name_data.push_back(bst_in_rx_power_th_low.get_name_leafdata());
    if (bst_out_tx_power.is_set || is_set(bst_out_tx_power.yfilter)) leaf_name_data.push_back(bst_out_tx_power.get_name_leafdata());
    if (bst_out_tx_total_power.is_set || is_set(bst_out_tx_total_power.yfilter)) leaf_name_data.push_back(bst_out_tx_total_power.get_name_leafdata());
    if (bst_out_tx_power_th_low.is_set || is_set(bst_out_tx_power_th_low.yfilter)) leaf_name_data.push_back(bst_out_tx_power_th_low.get_name_leafdata());
    if (bst_working_mode.is_set || is_set(bst_working_mode.yfilter)) leaf_name_data.push_back(bst_working_mode.get_name_leafdata());
    if (bst_safety_mode.is_set || is_set(bst_safety_mode.yfilter)) leaf_name_data.push_back(bst_safety_mode.get_name_leafdata());
    if (bst_gain_range.is_set || is_set(bst_gain_range.yfilter)) leaf_name_data.push_back(bst_gain_range.get_name_leafdata());
    if (bst_osri.is_set || is_set(bst_osri.yfilter)) leaf_name_data.push_back(bst_osri.get_name_leafdata());
    if (bst_channel_power.is_set || is_set(bst_channel_power.yfilter)) leaf_name_data.push_back(bst_channel_power.get_name_leafdata());
    if (bst_gain.is_set || is_set(bst_gain.yfilter)) leaf_name_data.push_back(bst_gain.get_name_leafdata());
    if (bst_tilt.is_set || is_set(bst_tilt.yfilter)) leaf_name_data.push_back(bst_tilt.get_name_leafdata());
    if (pre_in_rx_power.is_set || is_set(pre_in_rx_power.yfilter)) leaf_name_data.push_back(pre_in_rx_power.get_name_leafdata());
    if (pre_in_rx_total_power.is_set || is_set(pre_in_rx_total_power.yfilter)) leaf_name_data.push_back(pre_in_rx_total_power.get_name_leafdata());
    if (pre_in_rx_power_th_low.is_set || is_set(pre_in_rx_power_th_low.yfilter)) leaf_name_data.push_back(pre_in_rx_power_th_low.get_name_leafdata());
    if (pre_out_tx_power.is_set || is_set(pre_out_tx_power.yfilter)) leaf_name_data.push_back(pre_out_tx_power.get_name_leafdata());
    if (pre_out_tx_total_power.is_set || is_set(pre_out_tx_total_power.yfilter)) leaf_name_data.push_back(pre_out_tx_total_power.get_name_leafdata());
    if (pre_out_tx_power_th_low.is_set || is_set(pre_out_tx_power_th_low.yfilter)) leaf_name_data.push_back(pre_out_tx_power_th_low.get_name_leafdata());
    if (pre_working_mode.is_set || is_set(pre_working_mode.yfilter)) leaf_name_data.push_back(pre_working_mode.get_name_leafdata());
    if (pre_safety_mode.is_set || is_set(pre_safety_mode.yfilter)) leaf_name_data.push_back(pre_safety_mode.get_name_leafdata());
    if (pre_gain_range.is_set || is_set(pre_gain_range.yfilter)) leaf_name_data.push_back(pre_gain_range.get_name_leafdata());
    if (pre_osri.is_set || is_set(pre_osri.yfilter)) leaf_name_data.push_back(pre_osri.get_name_leafdata());
    if (pre_channel_power.is_set || is_set(pre_channel_power.yfilter)) leaf_name_data.push_back(pre_channel_power.get_name_leafdata());
    if (pre_gain.is_set || is_set(pre_gain.yfilter)) leaf_name_data.push_back(pre_gain.get_name_leafdata());
    if (pre_tilt.is_set || is_set(pre_tilt.yfilter)) leaf_name_data.push_back(pre_tilt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail = value;
        eqpt_fail.value_namespace = name_space;
        eqpt_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view")
    {
        view = value;
        view.value_namespace = name_space;
        view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-number")
    {
        com_port_number = value;
        com_port_number.value_namespace = name_space;
        com_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-name")
    {
        com_port_name = value;
        com_port_name.value_namespace = name_space;
        com_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-number")
    {
        line_port_number = value;
        line_port_number.value_namespace = name_space;
        line_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-name")
    {
        line_port_name = value;
        line_port_name.value_namespace = name_space;
        line_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power = value;
        bst_in_rx_power.value_namespace = name_space;
        bst_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-total-power")
    {
        bst_in_rx_total_power = value;
        bst_in_rx_total_power.value_namespace = name_space;
        bst_in_rx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-power-th-low")
    {
        bst_in_rx_power_th_low = value;
        bst_in_rx_power_th_low.value_namespace = name_space;
        bst_in_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power = value;
        bst_out_tx_power.value_namespace = name_space;
        bst_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-total-power")
    {
        bst_out_tx_total_power = value;
        bst_out_tx_total_power.value_namespace = name_space;
        bst_out_tx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-power-th-low")
    {
        bst_out_tx_power_th_low = value;
        bst_out_tx_power_th_low.value_namespace = name_space;
        bst_out_tx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-working-mode")
    {
        bst_working_mode = value;
        bst_working_mode.value_namespace = name_space;
        bst_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-safety-mode")
    {
        bst_safety_mode = value;
        bst_safety_mode.value_namespace = name_space;
        bst_safety_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-gain-range")
    {
        bst_gain_range = value;
        bst_gain_range.value_namespace = name_space;
        bst_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-osri")
    {
        bst_osri = value;
        bst_osri.value_namespace = name_space;
        bst_osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-channel-power")
    {
        bst_channel_power = value;
        bst_channel_power.value_namespace = name_space;
        bst_channel_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-gain")
    {
        bst_gain = value;
        bst_gain.value_namespace = name_space;
        bst_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-tilt")
    {
        bst_tilt = value;
        bst_tilt.value_namespace = name_space;
        bst_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power = value;
        pre_in_rx_power.value_namespace = name_space;
        pre_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-total-power")
    {
        pre_in_rx_total_power = value;
        pre_in_rx_total_power.value_namespace = name_space;
        pre_in_rx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-power-th-low")
    {
        pre_in_rx_power_th_low = value;
        pre_in_rx_power_th_low.value_namespace = name_space;
        pre_in_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power = value;
        pre_out_tx_power.value_namespace = name_space;
        pre_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-total-power")
    {
        pre_out_tx_total_power = value;
        pre_out_tx_total_power.value_namespace = name_space;
        pre_out_tx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-power-th-low")
    {
        pre_out_tx_power_th_low = value;
        pre_out_tx_power_th_low.value_namespace = name_space;
        pre_out_tx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-working-mode")
    {
        pre_working_mode = value;
        pre_working_mode.value_namespace = name_space;
        pre_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-safety-mode")
    {
        pre_safety_mode = value;
        pre_safety_mode.value_namespace = name_space;
        pre_safety_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-gain-range")
    {
        pre_gain_range = value;
        pre_gain_range.value_namespace = name_space;
        pre_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-osri")
    {
        pre_osri = value;
        pre_osri.value_namespace = name_space;
        pre_osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-channel-power")
    {
        pre_channel_power = value;
        pre_channel_power.value_namespace = name_space;
        pre_channel_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-gain")
    {
        pre_gain = value;
        pre_gain.value_namespace = name_space;
        pre_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-tilt")
    {
        pre_tilt = value;
        pre_tilt.value_namespace = name_space;
        pre_tilt.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail.yfilter = yfilter;
    }
    if(value_path == "view")
    {
        view.yfilter = yfilter;
    }
    if(value_path == "com-port-number")
    {
        com_port_number.yfilter = yfilter;
    }
    if(value_path == "com-port-name")
    {
        com_port_name.yfilter = yfilter;
    }
    if(value_path == "line-port-number")
    {
        line_port_number.yfilter = yfilter;
    }
    if(value_path == "line-port-name")
    {
        line_port_name.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-total-power")
    {
        bst_in_rx_total_power.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-power-th-low")
    {
        bst_in_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-total-power")
    {
        bst_out_tx_total_power.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-power-th-low")
    {
        bst_out_tx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "bst-working-mode")
    {
        bst_working_mode.yfilter = yfilter;
    }
    if(value_path == "bst-safety-mode")
    {
        bst_safety_mode.yfilter = yfilter;
    }
    if(value_path == "bst-gain-range")
    {
        bst_gain_range.yfilter = yfilter;
    }
    if(value_path == "bst-osri")
    {
        bst_osri.yfilter = yfilter;
    }
    if(value_path == "bst-channel-power")
    {
        bst_channel_power.yfilter = yfilter;
    }
    if(value_path == "bst-gain")
    {
        bst_gain.yfilter = yfilter;
    }
    if(value_path == "bst-tilt")
    {
        bst_tilt.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-total-power")
    {
        pre_in_rx_total_power.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-power-th-low")
    {
        pre_in_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-total-power")
    {
        pre_out_tx_total_power.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-power-th-low")
    {
        pre_out_tx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "pre-working-mode")
    {
        pre_working_mode.yfilter = yfilter;
    }
    if(value_path == "pre-safety-mode")
    {
        pre_safety_mode.yfilter = yfilter;
    }
    if(value_path == "pre-gain-range")
    {
        pre_gain_range.yfilter = yfilter;
    }
    if(value_path == "pre-osri")
    {
        pre_osri.yfilter = yfilter;
    }
    if(value_path == "pre-channel-power")
    {
        pre_channel_power.yfilter = yfilter;
    }
    if(value_path == "pre-gain")
    {
        pre_gain.yfilter = yfilter;
    }
    if(value_path == "pre-tilt")
    {
        pre_tilt.yfilter = yfilter;
    }
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::AmpliTrailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eqpt-fail" || name == "view" || name == "com-port-number" || name == "com-port-name" || name == "line-port-number" || name == "line-port-name" || name == "bst-in-rx-power" || name == "bst-in-rx-total-power" || name == "bst-in-rx-power-th-low" || name == "bst-out-tx-power" || name == "bst-out-tx-total-power" || name == "bst-out-tx-power-th-low" || name == "bst-working-mode" || name == "bst-safety-mode" || name == "bst-gain-range" || name == "bst-osri" || name == "bst-channel-power" || name == "bst-gain" || name == "bst-tilt" || name == "pre-in-rx-power" || name == "pre-in-rx-total-power" || name == "pre-in-rx-power-th-low" || name == "pre-out-tx-power" || name == "pre-out-tx-total-power" || name == "pre-out-tx-power-th-low" || name == "pre-working-mode" || name == "pre-safety-mode" || name == "pre-gain-range" || name == "pre-osri" || name == "pre-channel-power" || name == "pre-gain" || name == "pre-tilt")
        return true;
    return false;
}

HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::ChannelTrailInfo()
    :
    eqpt_fail{YType::uint8, "eqpt-fail"},
    filter{YType::enumeration, "filter"},
    och_name{YType::str, "och-name"},
    wavelength{YType::uint32, "wavelength"},
    frequency{YType::uint32, "frequency"},
    com_port_number{YType::uint8, "com-port-number"},
    com_port_name{YType::str, "com-port-name"},
    com_rx_power_th_low{YType::int16, "com-rx-power-th-low"},
    line_port_number{YType::uint8, "line-port-number"},
    line_port_name{YType::str, "line-port-name"},
    line_rx_power_th_low{YType::int16, "line-rx-power-th-low"},
    bst_in_rx_power{YType::int16, "bst-in-rx-power"},
    bst_out_tx_power{YType::int16, "bst-out-tx-power"},
    pre_in_rx_power{YType::int16, "pre-in-rx-power"},
    pre_out_tx_power{YType::int16, "pre-out-tx-power"}
{

    yang_name = "channel-trail-info"; yang_parent_name = "amplifier-trail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::~ChannelTrailInfo()
{
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::has_data() const
{
    if (is_presence_container) return true;
    return eqpt_fail.is_set
	|| filter.is_set
	|| och_name.is_set
	|| wavelength.is_set
	|| frequency.is_set
	|| com_port_number.is_set
	|| com_port_name.is_set
	|| com_rx_power_th_low.is_set
	|| line_port_number.is_set
	|| line_port_name.is_set
	|| line_rx_power_th_low.is_set
	|| bst_in_rx_power.is_set
	|| bst_out_tx_power.is_set
	|| pre_in_rx_power.is_set
	|| pre_out_tx_power.is_set;
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eqpt_fail.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(och_name.yfilter)
	|| ydk::is_set(wavelength.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(com_port_number.yfilter)
	|| ydk::is_set(com_port_name.yfilter)
	|| ydk::is_set(com_rx_power_th_low.yfilter)
	|| ydk::is_set(line_port_number.yfilter)
	|| ydk::is_set(line_port_name.yfilter)
	|| ydk::is_set(line_rx_power_th_low.yfilter)
	|| ydk::is_set(bst_in_rx_power.yfilter)
	|| ydk::is_set(bst_out_tx_power.yfilter)
	|| ydk::is_set(pre_in_rx_power.yfilter)
	|| ydk::is_set(pre_out_tx_power.yfilter);
}

std::string HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-trail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eqpt_fail.is_set || is_set(eqpt_fail.yfilter)) leaf_name_data.push_back(eqpt_fail.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (och_name.is_set || is_set(och_name.yfilter)) leaf_name_data.push_back(och_name.get_name_leafdata());
    if (wavelength.is_set || is_set(wavelength.yfilter)) leaf_name_data.push_back(wavelength.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (com_port_number.is_set || is_set(com_port_number.yfilter)) leaf_name_data.push_back(com_port_number.get_name_leafdata());
    if (com_port_name.is_set || is_set(com_port_name.yfilter)) leaf_name_data.push_back(com_port_name.get_name_leafdata());
    if (com_rx_power_th_low.is_set || is_set(com_rx_power_th_low.yfilter)) leaf_name_data.push_back(com_rx_power_th_low.get_name_leafdata());
    if (line_port_number.is_set || is_set(line_port_number.yfilter)) leaf_name_data.push_back(line_port_number.get_name_leafdata());
    if (line_port_name.is_set || is_set(line_port_name.yfilter)) leaf_name_data.push_back(line_port_name.get_name_leafdata());
    if (line_rx_power_th_low.is_set || is_set(line_rx_power_th_low.yfilter)) leaf_name_data.push_back(line_rx_power_th_low.get_name_leafdata());
    if (bst_in_rx_power.is_set || is_set(bst_in_rx_power.yfilter)) leaf_name_data.push_back(bst_in_rx_power.get_name_leafdata());
    if (bst_out_tx_power.is_set || is_set(bst_out_tx_power.yfilter)) leaf_name_data.push_back(bst_out_tx_power.get_name_leafdata());
    if (pre_in_rx_power.is_set || is_set(pre_in_rx_power.yfilter)) leaf_name_data.push_back(pre_in_rx_power.get_name_leafdata());
    if (pre_out_tx_power.is_set || is_set(pre_out_tx_power.yfilter)) leaf_name_data.push_back(pre_out_tx_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail = value;
        eqpt_fail.value_namespace = name_space;
        eqpt_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "och-name")
    {
        och_name = value;
        och_name.value_namespace = name_space;
        och_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wavelength")
    {
        wavelength = value;
        wavelength.value_namespace = name_space;
        wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-number")
    {
        com_port_number = value;
        com_port_number.value_namespace = name_space;
        com_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-name")
    {
        com_port_name = value;
        com_port_name.value_namespace = name_space;
        com_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-rx-power-th-low")
    {
        com_rx_power_th_low = value;
        com_rx_power_th_low.value_namespace = name_space;
        com_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-number")
    {
        line_port_number = value;
        line_port_number.value_namespace = name_space;
        line_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-name")
    {
        line_port_name = value;
        line_port_name.value_namespace = name_space;
        line_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-rx-power-th-low")
    {
        line_rx_power_th_low = value;
        line_rx_power_th_low.value_namespace = name_space;
        line_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power = value;
        bst_in_rx_power.value_namespace = name_space;
        bst_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power = value;
        bst_out_tx_power.value_namespace = name_space;
        bst_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power = value;
        pre_in_rx_power.value_namespace = name_space;
        pre_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power = value;
        pre_out_tx_power.value_namespace = name_space;
        pre_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "och-name")
    {
        och_name.yfilter = yfilter;
    }
    if(value_path == "wavelength")
    {
        wavelength.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "com-port-number")
    {
        com_port_number.yfilter = yfilter;
    }
    if(value_path == "com-port-name")
    {
        com_port_name.yfilter = yfilter;
    }
    if(value_path == "com-rx-power-th-low")
    {
        com_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "line-port-number")
    {
        line_port_number.yfilter = yfilter;
    }
    if(value_path == "line-port-name")
    {
        line_port_name.yfilter = yfilter;
    }
    if(value_path == "line-rx-power-th-low")
    {
        line_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power.yfilter = yfilter;
    }
}

bool HwModule::AmplifierTrails::AmplifierTrail::AmplifierTrailData::ChannelTrailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eqpt-fail" || name == "filter" || name == "och-name" || name == "wavelength" || name == "frequency" || name == "com-port-number" || name == "com-port-name" || name == "com-rx-power-th-low" || name == "line-port-number" || name == "line-port-name" || name == "line-rx-power-th-low" || name == "bst-in-rx-power" || name == "bst-out-tx-power" || name == "pre-in-rx-power" || name == "pre-out-tx-power")
        return true;
    return false;
}

HwModule::ChannelsTrails::ChannelsTrails()
    :
    channels_trail(this, {"slot_id"})
{

    yang_name = "channels-trails"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::ChannelsTrails::~ChannelsTrails()
{
}

bool HwModule::ChannelsTrails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<channels_trail.len(); index++)
    {
        if(channels_trail[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::ChannelsTrails::has_operation() const
{
    for (std::size_t index=0; index<channels_trail.len(); index++)
    {
        if(channels_trail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::ChannelsTrails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-oper:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::ChannelsTrails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channels-trails";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::ChannelsTrails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::ChannelsTrails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channels-trail")
    {
        auto ent_ = std::make_shared<HwModule::ChannelsTrails::ChannelsTrail>();
        ent_->parent = this;
        channels_trail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::ChannelsTrails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : channels_trail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::ChannelsTrails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::ChannelsTrails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::ChannelsTrails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channels-trail")
        return true;
    return false;
}

HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrail()
    :
    slot_id{YType::uint32, "slot-id"}
        ,
    channels_trail_data(this, {"channels_trail_data_type"})
{

    yang_name = "channels-trail"; yang_parent_name = "channels-trails"; is_top_level_class = false; has_list_ancestor = false; 
}

HwModule::ChannelsTrails::ChannelsTrail::~ChannelsTrail()
{
}

bool HwModule::ChannelsTrails::ChannelsTrail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<channels_trail_data.len(); index++)
    {
        if(channels_trail_data[index]->has_data())
            return true;
    }
    return slot_id.is_set;
}

bool HwModule::ChannelsTrails::ChannelsTrail::has_operation() const
{
    for (std::size_t index=0; index<channels_trail_data.len(); index++)
    {
        if(channels_trail_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slot_id.yfilter);
}

std::string HwModule::ChannelsTrails::ChannelsTrail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1001-ots-oper:hw-module/channels-trails/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::ChannelsTrails::ChannelsTrail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channels-trail";
    ADD_KEY_TOKEN(slot_id, "slot-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::ChannelsTrails::ChannelsTrail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_id.is_set || is_set(slot_id.yfilter)) leaf_name_data.push_back(slot_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::ChannelsTrails::ChannelsTrail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channels-trail-data")
    {
        auto ent_ = std::make_shared<HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData>();
        ent_->parent = this;
        channels_trail_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::ChannelsTrails::ChannelsTrail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : channels_trail_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::ChannelsTrails::ChannelsTrail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-id")
    {
        slot_id = value;
        slot_id.value_namespace = name_space;
        slot_id.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::ChannelsTrails::ChannelsTrail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-id")
    {
        slot_id.yfilter = yfilter;
    }
}

bool HwModule::ChannelsTrails::ChannelsTrail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channels-trail-data" || name == "slot-id")
        return true;
    return false;
}

HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelsTrailData()
    :
    channels_trail_data_type{YType::enumeration, "channels-trail-data-type"}
        ,
    ampli_trail_info(this, {})
    , channel_trail_info(this, {})
{

    yang_name = "channels-trail-data"; yang_parent_name = "channels-trail"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::~ChannelsTrailData()
{
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ampli_trail_info.len(); index++)
    {
        if(ampli_trail_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<channel_trail_info.len(); index++)
    {
        if(channel_trail_info[index]->has_data())
            return true;
    }
    return channels_trail_data_type.is_set;
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::has_operation() const
{
    for (std::size_t index=0; index<ampli_trail_info.len(); index++)
    {
        if(ampli_trail_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<channel_trail_info.len(); index++)
    {
        if(channel_trail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(channels_trail_data_type.yfilter);
}

std::string HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channels-trail-data";
    ADD_KEY_TOKEN(channels_trail_data_type, "channels-trail-data-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channels_trail_data_type.is_set || is_set(channels_trail_data_type.yfilter)) leaf_name_data.push_back(channels_trail_data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ampli-trail-info")
    {
        auto ent_ = std::make_shared<HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo>();
        ent_->parent = this;
        ampli_trail_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "channel-trail-info")
    {
        auto ent_ = std::make_shared<HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo>();
        ent_->parent = this;
        channel_trail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ampli_trail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : channel_trail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channels-trail-data-type")
    {
        channels_trail_data_type = value;
        channels_trail_data_type.value_namespace = name_space;
        channels_trail_data_type.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channels-trail-data-type")
    {
        channels_trail_data_type.yfilter = yfilter;
    }
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ampli-trail-info" || name == "channel-trail-info" || name == "channels-trail-data-type")
        return true;
    return false;
}

HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::AmpliTrailInfo()
    :
    eqpt_fail{YType::uint8, "eqpt-fail"},
    view{YType::enumeration, "view"},
    com_port_number{YType::uint8, "com-port-number"},
    com_port_name{YType::str, "com-port-name"},
    line_port_number{YType::uint8, "line-port-number"},
    line_port_name{YType::str, "line-port-name"},
    bst_in_rx_power{YType::int16, "bst-in-rx-power"},
    bst_in_rx_total_power{YType::int16, "bst-in-rx-total-power"},
    bst_in_rx_power_th_low{YType::int16, "bst-in-rx-power-th-low"},
    bst_out_tx_power{YType::int16, "bst-out-tx-power"},
    bst_out_tx_total_power{YType::int16, "bst-out-tx-total-power"},
    bst_out_tx_power_th_low{YType::int16, "bst-out-tx-power-th-low"},
    bst_working_mode{YType::uint16, "bst-working-mode"},
    bst_safety_mode{YType::uint16, "bst-safety-mode"},
    bst_gain_range{YType::uint16, "bst-gain-range"},
    bst_osri{YType::uint16, "bst-osri"},
    bst_channel_power{YType::int16, "bst-channel-power"},
    bst_gain{YType::int16, "bst-gain"},
    bst_tilt{YType::int16, "bst-tilt"},
    pre_in_rx_power{YType::int16, "pre-in-rx-power"},
    pre_in_rx_total_power{YType::int16, "pre-in-rx-total-power"},
    pre_in_rx_power_th_low{YType::int16, "pre-in-rx-power-th-low"},
    pre_out_tx_power{YType::int16, "pre-out-tx-power"},
    pre_out_tx_total_power{YType::int16, "pre-out-tx-total-power"},
    pre_out_tx_power_th_low{YType::int16, "pre-out-tx-power-th-low"},
    pre_working_mode{YType::uint16, "pre-working-mode"},
    pre_safety_mode{YType::uint16, "pre-safety-mode"},
    pre_gain_range{YType::uint16, "pre-gain-range"},
    pre_osri{YType::uint16, "pre-osri"},
    pre_channel_power{YType::int16, "pre-channel-power"},
    pre_gain{YType::int16, "pre-gain"},
    pre_tilt{YType::int16, "pre-tilt"}
{

    yang_name = "ampli-trail-info"; yang_parent_name = "channels-trail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::~AmpliTrailInfo()
{
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::has_data() const
{
    if (is_presence_container) return true;
    return eqpt_fail.is_set
	|| view.is_set
	|| com_port_number.is_set
	|| com_port_name.is_set
	|| line_port_number.is_set
	|| line_port_name.is_set
	|| bst_in_rx_power.is_set
	|| bst_in_rx_total_power.is_set
	|| bst_in_rx_power_th_low.is_set
	|| bst_out_tx_power.is_set
	|| bst_out_tx_total_power.is_set
	|| bst_out_tx_power_th_low.is_set
	|| bst_working_mode.is_set
	|| bst_safety_mode.is_set
	|| bst_gain_range.is_set
	|| bst_osri.is_set
	|| bst_channel_power.is_set
	|| bst_gain.is_set
	|| bst_tilt.is_set
	|| pre_in_rx_power.is_set
	|| pre_in_rx_total_power.is_set
	|| pre_in_rx_power_th_low.is_set
	|| pre_out_tx_power.is_set
	|| pre_out_tx_total_power.is_set
	|| pre_out_tx_power_th_low.is_set
	|| pre_working_mode.is_set
	|| pre_safety_mode.is_set
	|| pre_gain_range.is_set
	|| pre_osri.is_set
	|| pre_channel_power.is_set
	|| pre_gain.is_set
	|| pre_tilt.is_set;
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eqpt_fail.yfilter)
	|| ydk::is_set(view.yfilter)
	|| ydk::is_set(com_port_number.yfilter)
	|| ydk::is_set(com_port_name.yfilter)
	|| ydk::is_set(line_port_number.yfilter)
	|| ydk::is_set(line_port_name.yfilter)
	|| ydk::is_set(bst_in_rx_power.yfilter)
	|| ydk::is_set(bst_in_rx_total_power.yfilter)
	|| ydk::is_set(bst_in_rx_power_th_low.yfilter)
	|| ydk::is_set(bst_out_tx_power.yfilter)
	|| ydk::is_set(bst_out_tx_total_power.yfilter)
	|| ydk::is_set(bst_out_tx_power_th_low.yfilter)
	|| ydk::is_set(bst_working_mode.yfilter)
	|| ydk::is_set(bst_safety_mode.yfilter)
	|| ydk::is_set(bst_gain_range.yfilter)
	|| ydk::is_set(bst_osri.yfilter)
	|| ydk::is_set(bst_channel_power.yfilter)
	|| ydk::is_set(bst_gain.yfilter)
	|| ydk::is_set(bst_tilt.yfilter)
	|| ydk::is_set(pre_in_rx_power.yfilter)
	|| ydk::is_set(pre_in_rx_total_power.yfilter)
	|| ydk::is_set(pre_in_rx_power_th_low.yfilter)
	|| ydk::is_set(pre_out_tx_power.yfilter)
	|| ydk::is_set(pre_out_tx_total_power.yfilter)
	|| ydk::is_set(pre_out_tx_power_th_low.yfilter)
	|| ydk::is_set(pre_working_mode.yfilter)
	|| ydk::is_set(pre_safety_mode.yfilter)
	|| ydk::is_set(pre_gain_range.yfilter)
	|| ydk::is_set(pre_osri.yfilter)
	|| ydk::is_set(pre_channel_power.yfilter)
	|| ydk::is_set(pre_gain.yfilter)
	|| ydk::is_set(pre_tilt.yfilter);
}

std::string HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ampli-trail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eqpt_fail.is_set || is_set(eqpt_fail.yfilter)) leaf_name_data.push_back(eqpt_fail.get_name_leafdata());
    if (view.is_set || is_set(view.yfilter)) leaf_name_data.push_back(view.get_name_leafdata());
    if (com_port_number.is_set || is_set(com_port_number.yfilter)) leaf_name_data.push_back(com_port_number.get_name_leafdata());
    if (com_port_name.is_set || is_set(com_port_name.yfilter)) leaf_name_data.push_back(com_port_name.get_name_leafdata());
    if (line_port_number.is_set || is_set(line_port_number.yfilter)) leaf_name_data.push_back(line_port_number.get_name_leafdata());
    if (line_port_name.is_set || is_set(line_port_name.yfilter)) leaf_name_data.push_back(line_port_name.get_name_leafdata());
    if (bst_in_rx_power.is_set || is_set(bst_in_rx_power.yfilter)) leaf_name_data.push_back(bst_in_rx_power.get_name_leafdata());
    if (bst_in_rx_total_power.is_set || is_set(bst_in_rx_total_power.yfilter)) leaf_name_data.push_back(bst_in_rx_total_power.get_name_leafdata());
    if (bst_in_rx_power_th_low.is_set || is_set(bst_in_rx_power_th_low.yfilter)) leaf_name_data.push_back(bst_in_rx_power_th_low.get_name_leafdata());
    if (bst_out_tx_power.is_set || is_set(bst_out_tx_power.yfilter)) leaf_name_data.push_back(bst_out_tx_power.get_name_leafdata());
    if (bst_out_tx_total_power.is_set || is_set(bst_out_tx_total_power.yfilter)) leaf_name_data.push_back(bst_out_tx_total_power.get_name_leafdata());
    if (bst_out_tx_power_th_low.is_set || is_set(bst_out_tx_power_th_low.yfilter)) leaf_name_data.push_back(bst_out_tx_power_th_low.get_name_leafdata());
    if (bst_working_mode.is_set || is_set(bst_working_mode.yfilter)) leaf_name_data.push_back(bst_working_mode.get_name_leafdata());
    if (bst_safety_mode.is_set || is_set(bst_safety_mode.yfilter)) leaf_name_data.push_back(bst_safety_mode.get_name_leafdata());
    if (bst_gain_range.is_set || is_set(bst_gain_range.yfilter)) leaf_name_data.push_back(bst_gain_range.get_name_leafdata());
    if (bst_osri.is_set || is_set(bst_osri.yfilter)) leaf_name_data.push_back(bst_osri.get_name_leafdata());
    if (bst_channel_power.is_set || is_set(bst_channel_power.yfilter)) leaf_name_data.push_back(bst_channel_power.get_name_leafdata());
    if (bst_gain.is_set || is_set(bst_gain.yfilter)) leaf_name_data.push_back(bst_gain.get_name_leafdata());
    if (bst_tilt.is_set || is_set(bst_tilt.yfilter)) leaf_name_data.push_back(bst_tilt.get_name_leafdata());
    if (pre_in_rx_power.is_set || is_set(pre_in_rx_power.yfilter)) leaf_name_data.push_back(pre_in_rx_power.get_name_leafdata());
    if (pre_in_rx_total_power.is_set || is_set(pre_in_rx_total_power.yfilter)) leaf_name_data.push_back(pre_in_rx_total_power.get_name_leafdata());
    if (pre_in_rx_power_th_low.is_set || is_set(pre_in_rx_power_th_low.yfilter)) leaf_name_data.push_back(pre_in_rx_power_th_low.get_name_leafdata());
    if (pre_out_tx_power.is_set || is_set(pre_out_tx_power.yfilter)) leaf_name_data.push_back(pre_out_tx_power.get_name_leafdata());
    if (pre_out_tx_total_power.is_set || is_set(pre_out_tx_total_power.yfilter)) leaf_name_data.push_back(pre_out_tx_total_power.get_name_leafdata());
    if (pre_out_tx_power_th_low.is_set || is_set(pre_out_tx_power_th_low.yfilter)) leaf_name_data.push_back(pre_out_tx_power_th_low.get_name_leafdata());
    if (pre_working_mode.is_set || is_set(pre_working_mode.yfilter)) leaf_name_data.push_back(pre_working_mode.get_name_leafdata());
    if (pre_safety_mode.is_set || is_set(pre_safety_mode.yfilter)) leaf_name_data.push_back(pre_safety_mode.get_name_leafdata());
    if (pre_gain_range.is_set || is_set(pre_gain_range.yfilter)) leaf_name_data.push_back(pre_gain_range.get_name_leafdata());
    if (pre_osri.is_set || is_set(pre_osri.yfilter)) leaf_name_data.push_back(pre_osri.get_name_leafdata());
    if (pre_channel_power.is_set || is_set(pre_channel_power.yfilter)) leaf_name_data.push_back(pre_channel_power.get_name_leafdata());
    if (pre_gain.is_set || is_set(pre_gain.yfilter)) leaf_name_data.push_back(pre_gain.get_name_leafdata());
    if (pre_tilt.is_set || is_set(pre_tilt.yfilter)) leaf_name_data.push_back(pre_tilt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail = value;
        eqpt_fail.value_namespace = name_space;
        eqpt_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "view")
    {
        view = value;
        view.value_namespace = name_space;
        view.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-number")
    {
        com_port_number = value;
        com_port_number.value_namespace = name_space;
        com_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-name")
    {
        com_port_name = value;
        com_port_name.value_namespace = name_space;
        com_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-number")
    {
        line_port_number = value;
        line_port_number.value_namespace = name_space;
        line_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-name")
    {
        line_port_name = value;
        line_port_name.value_namespace = name_space;
        line_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power = value;
        bst_in_rx_power.value_namespace = name_space;
        bst_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-total-power")
    {
        bst_in_rx_total_power = value;
        bst_in_rx_total_power.value_namespace = name_space;
        bst_in_rx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-power-th-low")
    {
        bst_in_rx_power_th_low = value;
        bst_in_rx_power_th_low.value_namespace = name_space;
        bst_in_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power = value;
        bst_out_tx_power.value_namespace = name_space;
        bst_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-total-power")
    {
        bst_out_tx_total_power = value;
        bst_out_tx_total_power.value_namespace = name_space;
        bst_out_tx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-power-th-low")
    {
        bst_out_tx_power_th_low = value;
        bst_out_tx_power_th_low.value_namespace = name_space;
        bst_out_tx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-working-mode")
    {
        bst_working_mode = value;
        bst_working_mode.value_namespace = name_space;
        bst_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-safety-mode")
    {
        bst_safety_mode = value;
        bst_safety_mode.value_namespace = name_space;
        bst_safety_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-gain-range")
    {
        bst_gain_range = value;
        bst_gain_range.value_namespace = name_space;
        bst_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-osri")
    {
        bst_osri = value;
        bst_osri.value_namespace = name_space;
        bst_osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-channel-power")
    {
        bst_channel_power = value;
        bst_channel_power.value_namespace = name_space;
        bst_channel_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-gain")
    {
        bst_gain = value;
        bst_gain.value_namespace = name_space;
        bst_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-tilt")
    {
        bst_tilt = value;
        bst_tilt.value_namespace = name_space;
        bst_tilt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power = value;
        pre_in_rx_power.value_namespace = name_space;
        pre_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-total-power")
    {
        pre_in_rx_total_power = value;
        pre_in_rx_total_power.value_namespace = name_space;
        pre_in_rx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-power-th-low")
    {
        pre_in_rx_power_th_low = value;
        pre_in_rx_power_th_low.value_namespace = name_space;
        pre_in_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power = value;
        pre_out_tx_power.value_namespace = name_space;
        pre_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-total-power")
    {
        pre_out_tx_total_power = value;
        pre_out_tx_total_power.value_namespace = name_space;
        pre_out_tx_total_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-power-th-low")
    {
        pre_out_tx_power_th_low = value;
        pre_out_tx_power_th_low.value_namespace = name_space;
        pre_out_tx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-working-mode")
    {
        pre_working_mode = value;
        pre_working_mode.value_namespace = name_space;
        pre_working_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-safety-mode")
    {
        pre_safety_mode = value;
        pre_safety_mode.value_namespace = name_space;
        pre_safety_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-gain-range")
    {
        pre_gain_range = value;
        pre_gain_range.value_namespace = name_space;
        pre_gain_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-osri")
    {
        pre_osri = value;
        pre_osri.value_namespace = name_space;
        pre_osri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-channel-power")
    {
        pre_channel_power = value;
        pre_channel_power.value_namespace = name_space;
        pre_channel_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-gain")
    {
        pre_gain = value;
        pre_gain.value_namespace = name_space;
        pre_gain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-tilt")
    {
        pre_tilt = value;
        pre_tilt.value_namespace = name_space;
        pre_tilt.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail.yfilter = yfilter;
    }
    if(value_path == "view")
    {
        view.yfilter = yfilter;
    }
    if(value_path == "com-port-number")
    {
        com_port_number.yfilter = yfilter;
    }
    if(value_path == "com-port-name")
    {
        com_port_name.yfilter = yfilter;
    }
    if(value_path == "line-port-number")
    {
        line_port_number.yfilter = yfilter;
    }
    if(value_path == "line-port-name")
    {
        line_port_name.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-total-power")
    {
        bst_in_rx_total_power.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-power-th-low")
    {
        bst_in_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-total-power")
    {
        bst_out_tx_total_power.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-power-th-low")
    {
        bst_out_tx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "bst-working-mode")
    {
        bst_working_mode.yfilter = yfilter;
    }
    if(value_path == "bst-safety-mode")
    {
        bst_safety_mode.yfilter = yfilter;
    }
    if(value_path == "bst-gain-range")
    {
        bst_gain_range.yfilter = yfilter;
    }
    if(value_path == "bst-osri")
    {
        bst_osri.yfilter = yfilter;
    }
    if(value_path == "bst-channel-power")
    {
        bst_channel_power.yfilter = yfilter;
    }
    if(value_path == "bst-gain")
    {
        bst_gain.yfilter = yfilter;
    }
    if(value_path == "bst-tilt")
    {
        bst_tilt.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-total-power")
    {
        pre_in_rx_total_power.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-power-th-low")
    {
        pre_in_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-total-power")
    {
        pre_out_tx_total_power.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-power-th-low")
    {
        pre_out_tx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "pre-working-mode")
    {
        pre_working_mode.yfilter = yfilter;
    }
    if(value_path == "pre-safety-mode")
    {
        pre_safety_mode.yfilter = yfilter;
    }
    if(value_path == "pre-gain-range")
    {
        pre_gain_range.yfilter = yfilter;
    }
    if(value_path == "pre-osri")
    {
        pre_osri.yfilter = yfilter;
    }
    if(value_path == "pre-channel-power")
    {
        pre_channel_power.yfilter = yfilter;
    }
    if(value_path == "pre-gain")
    {
        pre_gain.yfilter = yfilter;
    }
    if(value_path == "pre-tilt")
    {
        pre_tilt.yfilter = yfilter;
    }
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::AmpliTrailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eqpt-fail" || name == "view" || name == "com-port-number" || name == "com-port-name" || name == "line-port-number" || name == "line-port-name" || name == "bst-in-rx-power" || name == "bst-in-rx-total-power" || name == "bst-in-rx-power-th-low" || name == "bst-out-tx-power" || name == "bst-out-tx-total-power" || name == "bst-out-tx-power-th-low" || name == "bst-working-mode" || name == "bst-safety-mode" || name == "bst-gain-range" || name == "bst-osri" || name == "bst-channel-power" || name == "bst-gain" || name == "bst-tilt" || name == "pre-in-rx-power" || name == "pre-in-rx-total-power" || name == "pre-in-rx-power-th-low" || name == "pre-out-tx-power" || name == "pre-out-tx-total-power" || name == "pre-out-tx-power-th-low" || name == "pre-working-mode" || name == "pre-safety-mode" || name == "pre-gain-range" || name == "pre-osri" || name == "pre-channel-power" || name == "pre-gain" || name == "pre-tilt")
        return true;
    return false;
}

HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::ChannelTrailInfo()
    :
    eqpt_fail{YType::uint8, "eqpt-fail"},
    filter{YType::enumeration, "filter"},
    och_name{YType::str, "och-name"},
    wavelength{YType::uint32, "wavelength"},
    frequency{YType::uint32, "frequency"},
    com_port_number{YType::uint8, "com-port-number"},
    com_port_name{YType::str, "com-port-name"},
    com_rx_power_th_low{YType::int16, "com-rx-power-th-low"},
    line_port_number{YType::uint8, "line-port-number"},
    line_port_name{YType::str, "line-port-name"},
    line_rx_power_th_low{YType::int16, "line-rx-power-th-low"},
    bst_in_rx_power{YType::int16, "bst-in-rx-power"},
    bst_out_tx_power{YType::int16, "bst-out-tx-power"},
    pre_in_rx_power{YType::int16, "pre-in-rx-power"},
    pre_out_tx_power{YType::int16, "pre-out-tx-power"}
{

    yang_name = "channel-trail-info"; yang_parent_name = "channels-trail-data"; is_top_level_class = false; has_list_ancestor = true; 
}

HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::~ChannelTrailInfo()
{
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::has_data() const
{
    if (is_presence_container) return true;
    return eqpt_fail.is_set
	|| filter.is_set
	|| och_name.is_set
	|| wavelength.is_set
	|| frequency.is_set
	|| com_port_number.is_set
	|| com_port_name.is_set
	|| com_rx_power_th_low.is_set
	|| line_port_number.is_set
	|| line_port_name.is_set
	|| line_rx_power_th_low.is_set
	|| bst_in_rx_power.is_set
	|| bst_out_tx_power.is_set
	|| pre_in_rx_power.is_set
	|| pre_out_tx_power.is_set;
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eqpt_fail.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(och_name.yfilter)
	|| ydk::is_set(wavelength.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(com_port_number.yfilter)
	|| ydk::is_set(com_port_name.yfilter)
	|| ydk::is_set(com_rx_power_th_low.yfilter)
	|| ydk::is_set(line_port_number.yfilter)
	|| ydk::is_set(line_port_name.yfilter)
	|| ydk::is_set(line_rx_power_th_low.yfilter)
	|| ydk::is_set(bst_in_rx_power.yfilter)
	|| ydk::is_set(bst_out_tx_power.yfilter)
	|| ydk::is_set(pre_in_rx_power.yfilter)
	|| ydk::is_set(pre_out_tx_power.yfilter);
}

std::string HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-trail-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eqpt_fail.is_set || is_set(eqpt_fail.yfilter)) leaf_name_data.push_back(eqpt_fail.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (och_name.is_set || is_set(och_name.yfilter)) leaf_name_data.push_back(och_name.get_name_leafdata());
    if (wavelength.is_set || is_set(wavelength.yfilter)) leaf_name_data.push_back(wavelength.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (com_port_number.is_set || is_set(com_port_number.yfilter)) leaf_name_data.push_back(com_port_number.get_name_leafdata());
    if (com_port_name.is_set || is_set(com_port_name.yfilter)) leaf_name_data.push_back(com_port_name.get_name_leafdata());
    if (com_rx_power_th_low.is_set || is_set(com_rx_power_th_low.yfilter)) leaf_name_data.push_back(com_rx_power_th_low.get_name_leafdata());
    if (line_port_number.is_set || is_set(line_port_number.yfilter)) leaf_name_data.push_back(line_port_number.get_name_leafdata());
    if (line_port_name.is_set || is_set(line_port_name.yfilter)) leaf_name_data.push_back(line_port_name.get_name_leafdata());
    if (line_rx_power_th_low.is_set || is_set(line_rx_power_th_low.yfilter)) leaf_name_data.push_back(line_rx_power_th_low.get_name_leafdata());
    if (bst_in_rx_power.is_set || is_set(bst_in_rx_power.yfilter)) leaf_name_data.push_back(bst_in_rx_power.get_name_leafdata());
    if (bst_out_tx_power.is_set || is_set(bst_out_tx_power.yfilter)) leaf_name_data.push_back(bst_out_tx_power.get_name_leafdata());
    if (pre_in_rx_power.is_set || is_set(pre_in_rx_power.yfilter)) leaf_name_data.push_back(pre_in_rx_power.get_name_leafdata());
    if (pre_out_tx_power.is_set || is_set(pre_out_tx_power.yfilter)) leaf_name_data.push_back(pre_out_tx_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail = value;
        eqpt_fail.value_namespace = name_space;
        eqpt_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "och-name")
    {
        och_name = value;
        och_name.value_namespace = name_space;
        och_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wavelength")
    {
        wavelength = value;
        wavelength.value_namespace = name_space;
        wavelength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-number")
    {
        com_port_number = value;
        com_port_number.value_namespace = name_space;
        com_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-port-name")
    {
        com_port_name = value;
        com_port_name.value_namespace = name_space;
        com_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "com-rx-power-th-low")
    {
        com_rx_power_th_low = value;
        com_rx_power_th_low.value_namespace = name_space;
        com_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-number")
    {
        line_port_number = value;
        line_port_number.value_namespace = name_space;
        line_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-port-name")
    {
        line_port_name = value;
        line_port_name.value_namespace = name_space;
        line_port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-rx-power-th-low")
    {
        line_rx_power_th_low = value;
        line_rx_power_th_low.value_namespace = name_space;
        line_rx_power_th_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power = value;
        bst_in_rx_power.value_namespace = name_space;
        bst_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power = value;
        bst_out_tx_power.value_namespace = name_space;
        bst_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power = value;
        pre_in_rx_power.value_namespace = name_space;
        pre_in_rx_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power = value;
        pre_out_tx_power.value_namespace = name_space;
        pre_out_tx_power.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eqpt-fail")
    {
        eqpt_fail.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "och-name")
    {
        och_name.yfilter = yfilter;
    }
    if(value_path == "wavelength")
    {
        wavelength.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "com-port-number")
    {
        com_port_number.yfilter = yfilter;
    }
    if(value_path == "com-port-name")
    {
        com_port_name.yfilter = yfilter;
    }
    if(value_path == "com-rx-power-th-low")
    {
        com_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "line-port-number")
    {
        line_port_number.yfilter = yfilter;
    }
    if(value_path == "line-port-name")
    {
        line_port_name.yfilter = yfilter;
    }
    if(value_path == "line-rx-power-th-low")
    {
        line_rx_power_th_low.yfilter = yfilter;
    }
    if(value_path == "bst-in-rx-power")
    {
        bst_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "bst-out-tx-power")
    {
        bst_out_tx_power.yfilter = yfilter;
    }
    if(value_path == "pre-in-rx-power")
    {
        pre_in_rx_power.yfilter = yfilter;
    }
    if(value_path == "pre-out-tx-power")
    {
        pre_out_tx_power.yfilter = yfilter;
    }
}

bool HwModule::ChannelsTrails::ChannelsTrail::ChannelsTrailData::ChannelTrailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eqpt-fail" || name == "filter" || name == "och-name" || name == "wavelength" || name == "frequency" || name == "com-port-number" || name == "com-port-name" || name == "com-rx-power-th-low" || name == "line-port-number" || name == "line-port-name" || name == "line-rx-power-th-low" || name == "bst-in-rx-power" || name == "bst-out-tx-power" || name == "pre-in-rx-power" || name == "pre-out-tx-power")
        return true;
    return false;
}

const Enum::YLeaf OtsChannelsTrailData::all {1, "all"};
const Enum::YLeaf OtsChannelsTrailData::active {2, "active"};

const Enum::YLeaf OtsAmpliTrailData::all {1, "all"};
const Enum::YLeaf OtsAmpliTrailData::bst {2, "bst"};
const Enum::YLeaf OtsAmpliTrailData::pre {3, "pre"};

const Enum::YLeaf Trailview::trail_view_all {0, "trail-view-all"};
const Enum::YLeaf Trailview::trail_view_bst {1, "trail-view-bst"};
const Enum::YLeaf Trailview::trail_view_pre {2, "trail-view-pre"};

const Enum::YLeaf Chfilter::ch_filter_active {0, "ch-filter-active"};
const Enum::YLeaf Chfilter::ch_filter_all {1, "ch-filter-all"};


}
}

