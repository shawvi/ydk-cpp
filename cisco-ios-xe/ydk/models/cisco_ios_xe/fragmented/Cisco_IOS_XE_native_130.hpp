#ifndef _CISCO_IOS_XE_NATIVE_130_
#define _CISCO_IOS_XE_NATIVE_130_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_129.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn : public ydk::Entity
{
    public:
        Learn();
        ~Learn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LrnModeConfigPfrMcLearn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn> lrn_mode__config_pfr_mc_learn;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn : public ydk::Entity
{
    public:
        LrnModeConfigPfrMcLearn();
        ~LrnModeConfigPfrMcLearn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf delay; //type: empty
        ydk::YLeaf monitor_period; //type: uint16
        ydk::YLeaf periodic_interval; //type: uint16
        ydk::YLeaf throughput; //type: empty
        class AggregationType; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType
        class Expire; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire
        class Inside; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside
        class List; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List
        class Prefixes; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes
        class TrafficClass; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType> aggregation_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire> expire;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside> inside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes> prefixes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass> traffic_class;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType : public ydk::Entity
{
    public:
        AggregationType();
        ~AggregationType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf non_bgp; //type: empty
        ydk::YLeaf prefix_length; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire : public ydk::Entity
{
    public:
        Expire();
        ~Expire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class After; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After> after;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After : public ydk::Entity
{
    public:
        After();
        ~After();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf session; //type: uint16
        ydk::YLeaf time; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside : public ydk::Entity
{
    public:
        Inside();
        ~Inside();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bgp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Seq; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq> seq;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq : public ydk::Entity
{
    public:
        Seq();
        ~Seq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PfrTc; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq::PfrTc

        ydk::YList pfr_tc;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq::PfrTc : public ydk::Entity
{
    public:
        PfrTc();
        ~PfrTc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pfr_tc; //type: uint16
        ydk::YLeaf refname; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq::PfrTc


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prnum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes::Prnum

        ydk::YList prnum;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes::Prnum : public ydk::Entity
{
    public:
        Prnum();
        ~Prnum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf prnum; //type: uint32
        ydk::YLeaf applications; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes::Prnum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Aggregate; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate
        class Filter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter
        class Keys; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate> aggregate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys> keys;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Dport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport
        class Dscp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport> dport; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp> dscp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol> protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport : public ydk::Entity
{
    public:
        Dport();
        ~Dport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max : public ydk::Entity
{
    public:
        Max();
        ~Max();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Prefix; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix
        class Range; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range> range;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Total; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total> total;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Maxpr; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr

        ydk::YList maxpr;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr : public ydk::Entity
{
    public:
        Maxpr();
        ~Maxpr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maxpr; //type: uint32
        ydk::YLeaf learn; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Receive; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive> receive;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive


class Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization : public ydk::Entity
{
    public:
        MaxRangeUtilization();
        ~MaxRangeUtilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer : public ydk::Entity
{
    public:
        McPeer();
        ~McPeer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4
        class Domain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp
        class HeadEnd; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd

        ydk::YList ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd> head_end;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface

        ydk::YList interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Dmval; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval

        ydk::YList dmval;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval : public ydk::Entity
{
    public:
        Dmval();
        ~Dmval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dmval; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf eigrp; //type: string
        ydk::YLeaf head_end; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4

        ydk::YList ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface

        ydk::YList interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd : public ydk::Entity
{
    public:
        HeadEnd();
        ~HeadEnd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface

        ydk::YList interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Monitor; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor
        class Route; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route
        class Verify; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify> verify;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf both; //type: empty
        ydk::YLeaf fast; //type: empty
        ydk::YLeaf passive; //type: empty
        class Active; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active> active; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf throughput; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf control; //type: empty
        ydk::YLeaf observe; //type: empty
        class Metric; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol> protocol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Bgp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp
        class Static; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static> static_;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local_pref; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pbr; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bidirectional; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos : public ydk::Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Threshold; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold> threshold;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MosThresh; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh

        ydk::YList mos_thresh;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh : public ydk::Entity
{
    public:
        MosThresh();
        ~MosThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mos_thresh; //type: string
        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh


class Native::Pfr::Master::IcmpModeConfigPfrMc::Probe : public ydk::Entity
{
    public:
        Probe();
        ~Probe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf packets; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Probe


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve : public ydk::Entity
{
    public:
        Resolve();
        ~Resolve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cost; //type: empty
        ydk::YLeaf equivalent_path_round_robin; //type: empty
        class Delay; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter
        class Loss; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss
        class Mos; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter> jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss> loss;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos> mos;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DelPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol

        ydk::YList del_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol : public ydk::Entity
{
    public:
        DelPol();
        ~DelPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf del_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class JitPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol

        ydk::YList jit_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol : public ydk::Entity
{
    public:
        JitPol();
        ~JitPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf jit_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LossPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol

        ydk::YList loss_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol : public ydk::Entity
{
    public:
        LossPol();
        ~LossPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf loss_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos : public ydk::Entity
{
    public:
        Mos();
        ~Mos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Priority; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority> priority;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MosPol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol

        ydk::YList mos_pol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority


class Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol : public ydk::Entity
{
    public:
        MosPol();
        ~MosPol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mos_pol; //type: uint8
        ydk::YLeaf variance; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp : public ydk::Entity
{
    public:
        Rsvp();
        ~Rsvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf post_dial_delay; //type: uint16
        ydk::YLeaf signaling_retries; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery : public ydk::Entity
{
    public:
        TargetDiscovery();
        ~TargetDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ResponderList; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList> responder_list;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList : public ydk::Entity
{
    public:
        ResponderList();
        ~ResponderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TdNum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum

        ydk::YList td_num;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList


class Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum : public ydk::Entity
{
    public:
        TdNum();
        ~TdNum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf td_num; //type: string
        ydk::YLeaf inside_prefixes; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute : public ydk::Entity
{
    public:
        Traceroute();
        ~Traceroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf probe_delay; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute


class Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable : public ydk::Entity
{
    public:
        Unreachable();
        ~Unreachable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable


class Native::PfrMap : public ydk::Entity
{
    public:
        PfrMap();
        ~PfrMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pfr_tg; //type: string
        class Match; //type: Native::PfrMap::Match
        class Set; //type: Native::PfrMap::Set

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set> set;
        
}; // Native::PfrMap


class Native::PfrMap::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::PfrMap::Match::Ip
        class Pfr; //type: Native::PfrMap::Match::Pfr
        class TrafficClass; //type: Native::PfrMap::Match::TrafficClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match::Pfr> pfr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Match::TrafficClass> traffic_class;
        
}; // Native::PfrMap::Match


class Native::PfrMap::Match::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::PfrMap::Match::Ip


class Native::PfrMap::Match::Pfr : public ydk::Entity
{
    public:
        Pfr();
        ~Pfr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learn; //type: empty

}; // Native::PfrMap::Match::Pfr


class Native::PfrMap::Match::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list; //type: empty
        ydk::YLeaf application; //type: empty
        ydk::YLeaf prefix_list; //type: empty

}; // Native::PfrMap::Match::TrafficClass


class Native::PfrMap::Set : public ydk::Entity
{
    public:
        Set();
        ~Set();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf interface; //type: string
        ydk::YLeaf jitter; //type: empty
        ydk::YLeaf mode; //type: empty
        ydk::YLeaf mos; //type: empty
        ydk::YLeaf next_hop; //type: empty
        ydk::YLeaf periodic; //type: empty
        ydk::YLeaf probe; //type: empty
        ydk::YLeaf resolve; //type: empty
        ydk::YLeaf traceroute; //type: empty
        ydk::YLeaf trap_enable; //type: empty
        ydk::YLeaf trigger_log_percentage; //type: empty
        ydk::YLeaf unreachable; //type: empty
        class ActiveProbe; //type: Native::PfrMap::Set::ActiveProbe
        class Backoff; //type: Native::PfrMap::Set::Backoff
        class Delay; //type: Native::PfrMap::Set::Delay
        class LinkGroup; //type: Native::PfrMap::Set::LinkGroup
        class Loss; //type: Native::PfrMap::Set::Loss

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe> active_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::Backoff> backoff;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup> link_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::Loss> loss;
        
}; // Native::PfrMap::Set


class Native::PfrMap::Set::ActiveProbe : public ydk::Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Echo; //type: Native::PfrMap::Set::ActiveProbe::Echo
        class Jitter; //type: Native::PfrMap::Set::ActiveProbe::Jitter
        class TcpConn; //type: Native::PfrMap::Set::ActiveProbe::TcpConn
        class UdpEcho; //type: Native::PfrMap::Set::ActiveProbe::UdpEcho

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Echo> echo;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::Jitter> jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::TcpConn> tcp_conn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::ActiveProbe::UdpEcho> udp_echo;
        
}; // Native::PfrMap::Set::ActiveProbe


class Native::PfrMap::Set::ActiveProbe::Echo : public ydk::Entity
{
    public:
        Echo();
        ~Echo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::Echo


class Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf dscp; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::Jitter


class Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::TcpConn : public ydk::Entity
{
    public:
        TcpConn();
        ~TcpConn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::TcpConn


class Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname


class Native::PfrMap::Set::ActiveProbe::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4OrHostname; //type: Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::PfrMap::Set::ActiveProbe::UdpEcho


class Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: empty

}; // Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname


class Native::PfrMap::Set::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BoffT; //type: Native::PfrMap::Set::Backoff::BoffT

        ydk::YList boff_t;
        
}; // Native::PfrMap::Set::Backoff


class Native::PfrMap::Set::Backoff::BoffT : public ydk::Entity
{
    public:
        BoffT();
        ~BoffT();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boff_t; //type: uint16
        class BoffT0; //type: Native::PfrMap::Set::Backoff::BoffT::BoffT0

        ydk::YList boff_t0;
        
}; // Native::PfrMap::Set::Backoff::BoffT


class Native::PfrMap::Set::Backoff::BoffT::BoffT0 : public ydk::Entity
{
    public:
        BoffT0();
        ~BoffT0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boff_t0; //type: uint16
        ydk::YLeaf boff_rng; //type: uint16

}; // Native::PfrMap::Set::Backoff::BoffT::BoffT0


class Native::PfrMap::Set::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relative; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::PfrMap::Set::Delay


class Native::PfrMap::Set::LinkGroup : public ydk::Entity
{
    public:
        LinkGroup();
        ~LinkGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LgName; //type: Native::PfrMap::Set::LinkGroup::LgName

        ydk::YList lg_name;
        
}; // Native::PfrMap::Set::LinkGroup


class Native::PfrMap::Set::LinkGroup::LgName : public ydk::Entity
{
    public:
        LgName();
        ~LgName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lg_name; //type: string
        class Fallback; //type: Native::PfrMap::Set::LinkGroup::LgName::Fallback

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::PfrMap::Set::LinkGroup::LgName::Fallback> fallback; // presence node
        
}; // Native::PfrMap::Set::LinkGroup::LgName


class Native::PfrMap::Set::LinkGroup::LgName::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fall_name; //type: string

}; // Native::PfrMap::Set::LinkGroup::LgName::Fallback


class Native::PfrMap::Set::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::PfrMap::Set::Loss


class Native::FacilityAlarm : public ydk::Entity
{
    public:
        FacilityAlarm();
        ~FacilityAlarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf severity; //type: Severity
        ydk::YLeaf exceed_action; //type: ExceedAction
        class Severity;
        class ExceedAction;

}; // Native::FacilityAlarm


class Native::Setup : public ydk::Entity
{
    public:
        Setup();
        ~Setup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf express; //type: boolean

}; // Native::Setup


class Native::TodClock : public ydk::Entity
{
    public:
        TodClock();
        ~TodClock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InputSource; //type: Native::TodClock::InputSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TodClock::InputSource> input_source;
        
}; // Native::TodClock


class Native::TodClock::InputSource : public ydk::Entity
{
    public:
        InputSource();
        ~InputSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority; //type: uint8
        class Ptp; //type: Native::TodClock::InputSource::Ptp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::TodClock::InputSource::Ptp> ptp;
        
}; // Native::TodClock::InputSource


class Native::TodClock::InputSource::Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf domain; //type: uint8

}; // Native::TodClock::InputSource::Ptp


class Native::NetworkClock : public ydk::Entity
{
    public:
        NetworkClock();
        ~NetworkClock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Synchronization; //type: Native::NetworkClock::Synchronization
        class WaitToRestore; //type: Native::NetworkClock::WaitToRestore
        class InputSource; //type: Native::NetworkClock::InputSource

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::Synchronization> synchronization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::WaitToRestore> wait_to_restore;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::InputSource> input_source;
        
}; // Native::NetworkClock


class Native::NetworkClock::Synchronization : public ydk::Entity
{
    public:
        Synchronization();
        ~Synchronization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf automatic; //type: empty
        ydk::YLeaf mode; //type: Mode
        class Mode;

}; // Native::NetworkClock::Synchronization


class Native::NetworkClock::WaitToRestore : public ydk::Entity
{
    public:
        WaitToRestore();
        ~WaitToRestore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time; //type: uint32
        ydk::YLeaf global; //type: empty

}; // Native::NetworkClock::WaitToRestore


class Native::NetworkClock::InputSource : public ydk::Entity
{
    public:
        InputSource();
        ~InputSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf priority; //type: uint8
        class Interface; //type: Native::NetworkClock::InputSource::Interface
        class Ptp; //type: Native::NetworkClock::InputSource::Ptp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Ptp> ptp;
        
}; // Native::NetworkClock::InputSource


class Native::NetworkClock::InputSource::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::NetworkClock::InputSource::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::NetworkClock::InputSource::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::NetworkClock::InputSource::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::NetworkClock::InputSource::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::NetworkClock::InputSource::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::NetworkClock::InputSource::Interface


class Native::NetworkClock::InputSource::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm; //type: string

}; // Native::NetworkClock::InputSource::Interface::ATMSubinterface


class Native::NetworkClock::InputSource::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::NetworkClock::InputSource::Interface::ATMACRsubinterface


class Native::NetworkClock::InputSource::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lisp; //type: string

}; // Native::NetworkClock::InputSource::Interface::LISPSubinterface


class Native::NetworkClock::InputSource::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::NetworkClock::InputSource::Interface::PortChannelSubinterface


class Native::NetworkClock::InputSource::Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf domain; //type: uint8

}; // Native::NetworkClock::InputSource::Ptp


class Native::L2vpn : public ydk::Entity
{
    public:
        L2vpn();
        ~L2vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pseudowire; //type: Native::L2vpn::Pseudowire
        class Vfi; //type: Native::L2vpn::Vfi
        class Xconnect; //type: Native::L2vpn::Xconnect
        class EvpnCont; //type: Native::L2vpn::EvpnCont

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire> pseudowire;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Vfi> vfi;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont> evpn_cont;
        
}; // Native::L2vpn


class Native::L2vpn::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf routing; //type: empty
        class StaticOam; //type: Native::L2vpn::Pseudowire::StaticOam
        class Tlv; //type: Native::L2vpn::Pseudowire::Tlv
        class Group; //type: Native::L2vpn::Pseudowire::Group

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::StaticOam> static_oam;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::Tlv> tlv;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::Group> group;
        
}; // Native::L2vpn::Pseudowire


class Native::L2vpn::Pseudowire::StaticOam : public ydk::Entity
{
    public:
        StaticOam();
        ~StaticOam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Class; //type: Native::L2vpn::Pseudowire::StaticOam::Class

        ydk::YList class_;
        
}; // Native::L2vpn::Pseudowire::StaticOam


class Native::L2vpn::Pseudowire::StaticOam::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pw_nm; //type: string
        class Timeout; //type: Native::L2vpn::Pseudowire::StaticOam::Class::Timeout

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::StaticOam::Class::Timeout> timeout;
        
}; // Native::L2vpn::Pseudowire::StaticOam::Class


class Native::L2vpn::Pseudowire::StaticOam::Class::Timeout : public ydk::Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Refresh; //type: Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh> refresh;
        
}; // Native::L2vpn::Pseudowire::StaticOam::Class::Timeout


class Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh : public ydk::Entity
{
    public:
        Refresh();
        ~Refresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Send; //type: Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send> send;
        
}; // Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh


class Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send : public ydk::Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32

}; // Native::L2vpn::Pseudowire::StaticOam::Class::Timeout::Refresh::Send


class Native::L2vpn::Pseudowire::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Template; //type: Native::L2vpn::Pseudowire::Tlv::Template

        ydk::YList template_;
        
}; // Native::L2vpn::Pseudowire::Tlv


class Native::L2vpn::Pseudowire::Tlv::Template : public ydk::Entity
{
    public:
        Template();
        ~Template();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tlv_nm; //type: string
        class Tlv_; //type: Native::L2vpn::Pseudowire::Tlv::Template::Tlv_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::Tlv::Template::Tlv_> tlv;
        
}; // Native::L2vpn::Pseudowire::Tlv::Template


class Native::L2vpn::Pseudowire::Tlv::Template::Tlv_ : public ydk::Entity
{
    public:
        Tlv_();
        ~Tlv_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlvType; //type: Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType
        class TlvDescription; //type: Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType> tlv_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription> tlv_description;
        
}; // Native::L2vpn::Pseudowire::Tlv::Template::Tlv_


class Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType : public ydk::Entity
{
    public:
        TlvType();
        ~TlvType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8

}; // Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvType


class Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription : public ydk::Entity
{
    public:
        TlvDescription();
        ~TlvDescription();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string

}; // Native::L2vpn::Pseudowire::Tlv::Template::Tlv_::TlvDescription


class Native::L2vpn::Pseudowire::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf status; //type: empty

}; // Native::L2vpn::Pseudowire::Group


class Native::L2vpn::Vfi : public ydk::Entity
{
    public:
        Vfi();
        ~Vfi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Context; //type: Native::L2vpn::Vfi::Context

        ydk::YList context;
        
}; // Native::L2vpn::Vfi


class Native::L2vpn::Vfi::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vfi_nm; //type: string
        class Autodiscovery; //type: Native::L2vpn::Vfi::Context::Autodiscovery
        class Vpn; //type: Native::L2vpn::Vfi::Context::Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Vfi::Context::Autodiscovery> autodiscovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Vfi::Context::Vpn> vpn;
        
}; // Native::L2vpn::Vfi::Context


class Native::L2vpn::Vfi::Context::Autodiscovery : public ydk::Entity
{
    public:
        Autodiscovery();
        ~Autodiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp; //type: Native::L2vpn::Vfi::Context::Autodiscovery::Bgp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Vfi::Context::Autodiscovery::Bgp> bgp;
        
}; // Native::L2vpn::Vfi::Context::Autodiscovery


class Native::L2vpn::Vfi::Context::Autodiscovery::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Signaling; //type: Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling> signaling;
        
}; // Native::L2vpn::Vfi::Context::Autodiscovery::Bgp


class Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling : public ydk::Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_
        class Ldp; //type: Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_> bgp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp> ldp; // presence node
        
}; // Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling


class Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_ : public ydk::Entity
{
    public:
        Bgp_();
        ~Bgp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_


class Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::L2vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp


class Native::L2vpn::Vfi::Context::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32

}; // Native::L2vpn::Vfi::Context::Vpn


class Native::L2vpn::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Context; //type: Native::L2vpn::Xconnect::Context

        ydk::YList context;
        
}; // Native::L2vpn::Xconnect


class Native::L2vpn::Xconnect::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf xc_name; //type: string
        class XcModeConfigXconnect; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect> xc_mode_config_xconnect;
        
}; // Native::L2vpn::Xconnect::Context


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect : public ydk::Entity
{
    public:
        XcModeConfigXconnect();
        ~XcModeConfigXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        ydk::YLeaf shutdown; //type: empty
        class Interworking; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking
        class Match; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match
        class Member; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member
        class Redundancy; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy
        class Remote; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking> interworking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member> member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote> remote;
        
}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking : public ydk::Entity
{
    public:
        Interworking();
        ~Interworking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethernet; //type: empty
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf vlan; //type: empty

}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Interworking


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol> protocol;
        
}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6; //type: empty

}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: uint16
        class Ipv4; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4
        class Interface; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface

        ydk::YList ipv4;
        ydk::YList interface;
        
}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf mem_vcid; //type: uint32

}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf group; //type: empty
        ydk::YLeaf service_instance; //type: empty

}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8
        class Predictive; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive> predictive;
        
}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive : public ydk::Entity
{
    public:
        Predictive();
        ~Predictive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disabled; //type: empty
        ydk::YLeaf enabled; //type: empty

}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Circuit; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit
        class Link; //type: Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit> circuit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link> link;
        
}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit : public ydk::Entity
{
    public:
        Circuit();
        ~Circuit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: empty

}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit


class Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure; //type: empty

}; // Native::L2vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link


class Native::L2vpn::EvpnCont : public ydk::Entity
{
    public:
        EvpnCont();
        ~EvpnCont();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Evpn; //type: Native::L2vpn::EvpnCont::Evpn
        class EvpnInstance; //type: Native::L2vpn::EvpnCont::EvpnInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn> evpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::EvpnInstance> evpn_instance;
        
}; // Native::L2vpn::EvpnCont


class Native::L2vpn::EvpnCont::Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ReplicationType; //type: Native::L2vpn::EvpnCont::Evpn::ReplicationType
        class Arp; //type: Native::L2vpn::EvpnCont::Evpn::Arp
        class Mac; //type: Native::L2vpn::EvpnCont::Evpn::Mac
        class Ip; //type: Native::L2vpn::EvpnCont::Evpn::Ip
        class Mpls; //type: Native::L2vpn::EvpnCont::Evpn::Mpls
        class Multihoming; //type: Native::L2vpn::EvpnCont::Evpn::Multihoming
        class RouterId; //type: Native::L2vpn::EvpnCont::Evpn::RouterId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::ReplicationType> replication_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Multihoming> multihoming;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::RouterId> router_id;
        
}; // Native::L2vpn::EvpnCont::Evpn


class Native::L2vpn::EvpnCont::Evpn::ReplicationType : public ydk::Entity
{
    public:
        ReplicationType();
        ~ReplicationType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf static_; //type: empty
        ydk::YLeaf p2mp; //type: empty
        ydk::YLeaf mp2mp; //type: empty

}; // Native::L2vpn::EvpnCont::Evpn::ReplicationType


class Native::L2vpn::EvpnCont::Evpn::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FloodingSuppression; //type: Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression> flooding_suppression;
        
}; // Native::L2vpn::EvpnCont::Evpn::Arp


class Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression : public ydk::Entity
{
    public:
        FloodingSuppression();
        ~FloodingSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: empty

}; // Native::L2vpn::EvpnCont::Evpn::Arp::FloodingSuppression


class Native::L2vpn::EvpnCont::Evpn::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Duplication; //type: Native::L2vpn::EvpnCont::Evpn::Mac::Duplication

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::L2vpn::EvpnCont::Evpn::Mac::Duplication> duplication;
        
}; // Native::L2vpn::EvpnCont::Evpn::Mac

class Native::FacilityAlarm::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;

};

class Native::FacilityAlarm::ExceedAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;

};

class Native::NetworkClock::Synchronization::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf QL_enabled;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_130_ */

