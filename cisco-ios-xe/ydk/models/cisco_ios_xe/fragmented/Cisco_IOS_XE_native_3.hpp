#ifndef _CISCO_IOS_XE_NATIVE_3_
#define _CISCO_IOS_XE_NATIVE_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_2.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Flow::Record::Collect::Connection::Server::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: empty

}; // Native::Flow::Record::Collect::Connection::Server::Transport


class Native::Flow::Record::Collect::Connection::Transaction : public ydk::Entity
{
    public:
        Transaction();
        ~Transaction();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Collect::Connection::Transaction::Counter
        class Duration; //type: Native::Flow::Record::Collect::Connection::Transaction::Duration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction::Duration> duration;
        
}; // Native::Flow::Record::Collect::Connection::Transaction


class Native::Flow::Record::Collect::Connection::Transaction::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf complete; //type: empty

}; // Native::Flow::Record::Collect::Connection::Transaction::Counter


class Native::Flow::Record::Collect::Connection::Transaction::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Connection::Transaction::Duration


class Native::Flow::Record::Collect::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flows; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes> bytes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets> packets; // presence node
        
}; // Native::Flow::Record::Collect::Counter


class Native::Flow::Record::Collect::Counter::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Collect::Counter::Bytes::Rate
        class Squared; //type: Native::Flow::Record::Collect::Counter::Bytes::Squared
        class Layer2; //type: Native::Flow::Record::Collect::Counter::Bytes::Layer2

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Rate> rate; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Squared> squared;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Layer2> layer2;
        
}; // Native::Flow::Record::Collect::Counter::Bytes


class Native::Flow::Record::Collect::Counter::Bytes::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Bytes::Rate


class Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow : public ydk::Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Counter::Bytes::Rate::PerFlow


class Native::Flow::Record::Collect::Counter::Bytes::Squared : public ydk::Entity
{
    public:
        Squared();
        ~Squared();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Counter::Bytes::Squared


class Native::Flow::Record::Collect::Counter::Bytes::Layer2 : public ydk::Entity
{
    public:
        Layer2();
        ~Layer2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Counter::Bytes::Layer2


class Native::Flow::Record::Collect::Counter::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dropped; //type: empty
        ydk::YLeaf long_; //type: empty
        class Rate; //type: Native::Flow::Record::Collect::Counter::Packets::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Packets


class Native::Flow::Record::Collect::Counter::Packets::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Counter::Packets::Rate


class Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow : public ydk::Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Counter::Packets::Rate::PerFlow


class Native::Flow::Record::Collect::Datalink : public ydk::Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_vlan_id; //type: empty
        ydk::YLeaf ethertype; //type: empty
        ydk::YLeaf vlan; //type: Vlan
        ydk::YLeaf source_vlan_id; //type: empty
        class Dot1q; //type: Native::Flow::Record::Collect::Datalink::Dot1q
        class Mac; //type: Native::Flow::Record::Collect::Datalink::Mac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Dot1q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac> mac;
                class Vlan;

}; // Native::Flow::Record::Collect::Datalink


class Native::Flow::Record::Collect::Datalink::Dot1q : public ydk::Entity
{
    public:
        Dot1q();
        ~Dot1q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: empty
        class Vlan; //type: Native::Flow::Record::Collect::Datalink::Dot1q::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Dot1q::Vlan> vlan;
        
}; // Native::Flow::Record::Collect::Datalink::Dot1q


class Native::Flow::Record::Collect::Datalink::Dot1q::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Dot1q::Vlan


class Native::Flow::Record::Collect::Datalink::Mac : public ydk::Entity
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

        class Destination; //type: Native::Flow::Record::Collect::Datalink::Mac::Destination
        class Source; //type: Native::Flow::Record::Collect::Datalink::Mac::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Source> source;
        
}; // Native::Flow::Record::Collect::Datalink::Mac


class Native::Flow::Record::Collect::Datalink::Mac::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Flow::Record::Collect::Datalink::Mac::Destination::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Destination::Address> address;
        
}; // Native::Flow::Record::Collect::Datalink::Mac::Destination


class Native::Flow::Record::Collect::Datalink::Mac::Destination::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Mac::Destination::Address


class Native::Flow::Record::Collect::Datalink::Mac::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Flow::Record::Collect::Datalink::Mac::Source::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink::Mac::Source::Address> address;
        
}; // Native::Flow::Record::Collect::Datalink::Mac::Source


class Native::Flow::Record::Collect::Datalink::Mac::Source::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Datalink::Mac::Source::Address


class Native::Flow::Record::Collect::Flow_ : public ydk::Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: empty
        ydk::YLeaf sampler; //type: empty
        ydk::YLeaf end_reason; //type: empty
        class Cts; //type: Native::Flow::Record::Collect::Flow_::Cts
        class Observation; //type: Native::Flow::Record::Collect::Flow_::Observation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Observation> observation;
        
}; // Native::Flow::Record::Collect::Flow_


class Native::Flow::Record::Collect::Flow_::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Flow::Record::Collect::Flow_::Cts::Destination
        class Source; //type: Native::Flow::Record::Collect::Flow_::Cts::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_::Cts::Source> source;
        
}; // Native::Flow::Record::Collect::Flow_::Cts


class Native::Flow::Record::Collect::Flow_::Cts::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Cts::Destination


class Native::Flow::Record::Collect::Flow_::Cts::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_tag; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Cts::Source


class Native::Flow::Record::Collect::Flow_::Observation : public ydk::Entity
{
    public:
        Observation();
        ~Observation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf point; //type: empty

}; // Native::Flow::Record::Collect::Flow_::Observation


class Native::Flow::Record::Collect::Interface : public ydk::Entity
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

        class Input; //type: Native::Flow::Record::Collect::Interface::Input
        class Output; //type: Native::Flow::Record::Collect::Interface::Output

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface::Input> input; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface::Output> output; // presence node
        
}; // Native::Flow::Record::Collect::Interface


class Native::Flow::Record::Collect::Interface::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmp; //type: empty

}; // Native::Flow::Record::Collect::Interface::Input


class Native::Flow::Record::Collect::Interface::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf snmp; //type: empty

}; // Native::Flow::Record::Collect::Interface::Output


class Native::Flow::Record::Collect::Ipv4 : public ydk::Entity
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

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf header_length; //type: empty
        ydk::YLeaf id; //type: empty
        ydk::YLeaf precedence; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf tos; //type: empty
        ydk::YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Collect::Ipv4::Destination
        class Fragmentation; //type: Native::Flow::Record::Collect::Ipv4::Fragmentation
        class Length; //type: Native::Flow::Record::Collect::Ipv4::Length
        class Option; //type: Native::Flow::Record::Collect::Ipv4::Option
        class Section; //type: Native::Flow::Record::Collect::Ipv4::Section
        class Source; //type: Native::Flow::Record::Collect::Ipv4::Source
        class TotalLength; //type: Native::Flow::Record::Collect::Ipv4::TotalLength
        class Ttl; //type: Native::Flow::Record::Collect::Ipv4::Ttl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Fragmentation> fragmentation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Length> length;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section> section;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::TotalLength> total_length; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Ttl> ttl; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4


class Native::Flow::Record::Collect::Ipv4::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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
        class Mask; //type: Native::Flow::Record::Collect::Ipv4::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv4::Destination::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Destination


class Native::Flow::Record::Collect::Ipv4::Destination::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Destination::Mask


class Native::Flow::Record::Collect::Ipv4::Destination::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Destination::Prefix


class Native::Flow::Record::Collect::Ipv4::Fragmentation : public ydk::Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: empty
        ydk::YLeaf offset; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Fragmentation


class Native::Flow::Record::Collect::Ipv4::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header; //type: empty
        ydk::YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Collect::Ipv4::Length::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Length


class Native::Flow::Record::Collect::Ipv4::Length::Total : public ydk::Entity
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

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Length::Total


class Native::Flow::Record::Collect::Ipv4::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Option


class Native::Flow::Record::Collect::Ipv4::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Native::Flow::Record::Collect::Ipv4::Section::Header
        class Payload; //type: Native::Flow::Record::Collect::Ipv4::Section::Payload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Section::Payload> payload;
        
}; // Native::Flow::Record::Collect::Ipv4::Section


class Native::Flow::Record::Collect::Ipv4::Section::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv4::Section::Header


class Native::Flow::Record::Collect::Ipv4::Section::Payload : public ydk::Entity
{
    public:
        Payload();
        ~Payload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv4::Section::Payload


class Native::Flow::Record::Collect::Ipv4::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        class Mask; //type: Native::Flow::Record::Collect::Ipv4::Source::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv4::Source::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv4::Source


class Native::Flow::Record::Collect::Ipv4::Source::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Source::Mask


class Native::Flow::Record::Collect::Ipv4::Source::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv4::Source::Prefix


class Native::Flow::Record::Collect::Ipv4::TotalLength : public ydk::Entity
{
    public:
        TotalLength();
        ~TotalLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::TotalLength


class Native::Flow::Record::Collect::Ipv4::Ttl : public ydk::Entity
{
    public:
        Ttl();
        ~Ttl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv4::Ttl


class Native::Flow::Record::Collect::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf flow_label; //type: empty
        ydk::YLeaf next_header; //type: empty
        ydk::YLeaf payload_length; //type: empty
        ydk::YLeaf precedence; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf traffic_class; //type: empty
        ydk::YLeaf version; //type: empty
        class Destination; //type: Native::Flow::Record::Collect::Ipv6::Destination
        class Extension; //type: Native::Flow::Record::Collect::Ipv6::Extension
        class Fragmentation; //type: Native::Flow::Record::Collect::Ipv6::Fragmentation
        class HopLimit; //type: Native::Flow::Record::Collect::Ipv6::HopLimit
        class Length; //type: Native::Flow::Record::Collect::Ipv6::Length
        class Section; //type: Native::Flow::Record::Collect::Ipv6::Section
        class Source; //type: Native::Flow::Record::Collect::Ipv6::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Extension> extension;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Fragmentation> fragmentation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::HopLimit> hop_limit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Length> length;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Section> section;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Source> source;
        
}; // Native::Flow::Record::Collect::Ipv6


class Native::Flow::Record::Collect::Ipv6::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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
        class Mask; //type: Native::Flow::Record::Collect::Ipv6::Destination::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv6::Destination::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Destination::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Destination::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv6::Destination


class Native::Flow::Record::Collect::Ipv6::Destination::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Destination::Mask


class Native::Flow::Record::Collect::Ipv6::Destination::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Destination::Prefix


class Native::Flow::Record::Collect::Ipv6::Extension : public ydk::Entity
{
    public:
        Extension();
        ~Extension();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::Extension


class Native::Flow::Record::Collect::Ipv6::Fragmentation : public ydk::Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: empty
        ydk::YLeaf id; //type: empty
        ydk::YLeaf offset; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::Fragmentation


class Native::Flow::Record::Collect::Ipv6::HopLimit : public ydk::Entity
{
    public:
        HopLimit();
        ~HopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::HopLimit


class Native::Flow::Record::Collect::Ipv6::Length : public ydk::Entity
{
    public:
        Length();
        ~Length();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf header; //type: empty
        ydk::YLeaf payload; //type: empty
        class Total; //type: Native::Flow::Record::Collect::Ipv6::Length::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Length::Total> total; // presence node
        
}; // Native::Flow::Record::Collect::Ipv6::Length


class Native::Flow::Record::Collect::Ipv6::Length::Total : public ydk::Entity
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

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty

}; // Native::Flow::Record::Collect::Ipv6::Length::Total


class Native::Flow::Record::Collect::Ipv6::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: Native::Flow::Record::Collect::Ipv6::Section::Header
        class Payload; //type: Native::Flow::Record::Collect::Ipv6::Section::Payload

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Section::Header> header;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Section::Payload> payload;
        
}; // Native::Flow::Record::Collect::Ipv6::Section


class Native::Flow::Record::Collect::Ipv6::Section::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv6::Section::Header


class Native::Flow::Record::Collect::Ipv6::Section::Payload : public ydk::Entity
{
    public:
        Payload();
        ~Payload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16

}; // Native::Flow::Record::Collect::Ipv6::Section::Payload


class Native::Flow::Record::Collect::Ipv6::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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
        class Mask; //type: Native::Flow::Record::Collect::Ipv6::Source::Mask
        class Prefix; //type: Native::Flow::Record::Collect::Ipv6::Source::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Source::Mask> mask; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6::Source::Prefix> prefix; // presence node
        
}; // Native::Flow::Record::Collect::Ipv6::Source


class Native::Flow::Record::Collect::Ipv6::Source::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Source::Mask


class Native::Flow::Record::Collect::Ipv6::Source::Prefix : public ydk::Entity
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

        ydk::YLeaf minimum_mask; //type: uint8

}; // Native::Flow::Record::Collect::Ipv6::Source::Prefix


class Native::Flow::Record::Collect::Metadata : public ydk::Entity
{
    public:
        Metadata();
        ~Metadata();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_rate; //type: empty
        ydk::YLeaf global_session_id; //type: empty
        ydk::YLeaf multi_party_session_id; //type: empty

}; // Native::Flow::Record::Collect::Metadata


class Native::Flow::Record::Collect::Monitor : public ydk::Entity
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

        ydk::YLeaf event; //type: empty

}; // Native::Flow::Record::Collect::Monitor


class Native::Flow::Record::Collect::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Label; //type: Native::Flow::Record::Collect::Mpls::Label

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label> label;
        
}; // Native::Flow::Record::Collect::Mpls


class Native::Flow::Record::Collect::Mpls::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class One; //type: Native::Flow::Record::Collect::Mpls::Label::One
        class Two; //type: Native::Flow::Record::Collect::Mpls::Label::Two
        class Three; //type: Native::Flow::Record::Collect::Mpls::Label::Three
        class Four; //type: Native::Flow::Record::Collect::Mpls::Label::Four
        class Five; //type: Native::Flow::Record::Collect::Mpls::Label::Five
        class Six; //type: Native::Flow::Record::Collect::Mpls::Label::Six

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::One> one;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Two> two;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Three> three;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Four> four;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Five> five;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls::Label::Six> six;
        
}; // Native::Flow::Record::Collect::Mpls::Label


class Native::Flow::Record::Collect::Mpls::Label::One : public ydk::Entity
{
    public:
        One();
        ~One();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty
        ydk::YLeaf exp; //type: empty
        ydk::YLeaf ttl; //type: empty
        ydk::YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::One


class Native::Flow::Record::Collect::Mpls::Label::Two : public ydk::Entity
{
    public:
        Two();
        ~Two();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Two


class Native::Flow::Record::Collect::Mpls::Label::Three : public ydk::Entity
{
    public:
        Three();
        ~Three();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Three


class Native::Flow::Record::Collect::Mpls::Label::Four : public ydk::Entity
{
    public:
        Four();
        ~Four();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Four


class Native::Flow::Record::Collect::Mpls::Label::Five : public ydk::Entity
{
    public:
        Five();
        ~Five();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Five


class Native::Flow::Record::Collect::Mpls::Label::Six : public ydk::Entity
{
    public:
        Six();
        ~Six();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf details; //type: empty

}; // Native::Flow::Record::Collect::Mpls::Label::Six


class Native::Flow::Record::Collect::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Flow::Record::Collect::Network::Delay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Network::Delay> delay;
        
}; // Native::Flow::Record::Collect::Network


class Native::Flow::Record::Collect::Network::Delay : public ydk::Entity
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

        ydk::YLeaf sample; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Network::Delay


class Native::Flow::Record::Collect::Pfr : public ydk::Entity
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

        class Label; //type: Native::Flow::Record::Collect::Pfr::Label
        class OneWayDelay; //type: Native::Flow::Record::Collect::Pfr::OneWayDelay
        class Service; //type: Native::Flow::Record::Collect::Pfr::Service
        class Site; //type: Native::Flow::Record::Collect::Pfr::Site

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::OneWayDelay> one_way_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site> site;
        
}; // Native::Flow::Record::Collect::Pfr


class Native::Flow::Record::Collect::Pfr::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Label


class Native::Flow::Record::Collect::Pfr::OneWayDelay : public ydk::Entity
{
    public:
        OneWayDelay();
        ~OneWayDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Pfr::OneWayDelay


class Native::Flow::Record::Collect::Pfr::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf provider; //type: empty
        ydk::YLeaf tag; //type: empty
        ydk::YLeaf identifier; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Service


class Native::Flow::Record::Collect::Pfr::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Flow::Record::Collect::Pfr::Site::Destination
        class Source; //type: Native::Flow::Record::Collect::Pfr::Site::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source> source;
        
}; // Native::Flow::Record::Collect::Pfr::Site


class Native::Flow::Record::Collect::Pfr::Site::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::Flow::Record::Collect::Pfr::Site::Destination::Id
        class Prefix; //type: Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination::Id> id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix> prefix;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Destination


class Native::Flow::Record::Collect::Pfr::Site::Destination::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Destination::Id


class Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix


class Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Destination::Prefix::Mask


class Native::Flow::Record::Collect::Pfr::Site::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::Flow::Record::Collect::Pfr::Site::Source::Id
        class Prefix; //type: Native::Flow::Record::Collect::Pfr::Site::Source::Prefix

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source::Id> id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source::Prefix> prefix;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Source


class Native::Flow::Record::Collect::Pfr::Site::Source::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Source::Id


class Native::Flow::Record::Collect::Pfr::Site::Source::Prefix : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: empty
        class Mask; //type: Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask> mask;
        
}; // Native::Flow::Record::Collect::Pfr::Site::Source::Prefix


class Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask : public ydk::Entity
{
    public:
        Mask();
        ~Mask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: empty

}; // Native::Flow::Record::Collect::Pfr::Site::Source::Prefix::Mask


class Native::Flow::Record::Collect::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerformanceMonitor; //type: Native::Flow::Record::Collect::Policy::PerformanceMonitor
        class Qos; //type: Native::Flow::Record::Collect::Policy::Qos

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::PerformanceMonitor> performance_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::Qos> qos;
        
}; // Native::Flow::Record::Collect::Policy


class Native::Flow::Record::Collect::Policy::PerformanceMonitor : public ydk::Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Classification; //type: Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification> classification;
        
}; // Native::Flow::Record::Collect::Policy::PerformanceMonitor


class Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hierarchy; //type: empty

}; // Native::Flow::Record::Collect::Policy::PerformanceMonitor::Classification


class Native::Flow::Record::Collect::Policy::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Classification; //type: Native::Flow::Record::Collect::Policy::Qos::Classification
        class Queue; //type: Native::Flow::Record::Collect::Policy::Qos::Queue

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::Qos::Classification> classification;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy::Qos::Queue> queue;
        
}; // Native::Flow::Record::Collect::Policy::Qos


class Native::Flow::Record::Collect::Policy::Qos::Classification : public ydk::Entity
{
    public:
        Classification();
        ~Classification();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hierarchy; //type: empty

}; // Native::Flow::Record::Collect::Policy::Qos::Classification


class Native::Flow::Record::Collect::Policy::Qos::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf drops; //type: empty
        ydk::YLeaf index_; //type: empty

}; // Native::Flow::Record::Collect::Policy::Qos::Queue


class Native::Flow::Record::Collect::Routing : public ydk::Entity
{
    public:
        Routing();
        ~Routing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_multicast; //type: empty
        class Destination; //type: Native::Flow::Record::Collect::Routing::Destination
        class ForwardingStatus; //type: Native::Flow::Record::Collect::Routing::ForwardingStatus
        class NextHop; //type: Native::Flow::Record::Collect::Routing::NextHop
        class Pw; //type: Native::Flow::Record::Collect::Routing::Pw
        class Source; //type: Native::Flow::Record::Collect::Routing::Source
        class Vrf; //type: Native::Flow::Record::Collect::Routing::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::ForwardingStatus> forwarding_status; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Pw> pw;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Vrf> vrf;
        
}; // Native::Flow::Record::Collect::Routing


class Native::Flow::Record::Collect::Routing::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_index; //type: empty
        class As; //type: Native::Flow::Record::Collect::Routing::Destination::As

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Destination::As> as; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Destination


class Native::Flow::Record::Collect::Routing::Destination::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as4_octet; //type: empty
        class Peer; //type: Native::Flow::Record::Collect::Routing::Destination::As::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Destination::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Destination::As


class Native::Flow::Record::Collect::Routing::Destination::As::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer4_octet; //type: empty

}; // Native::Flow::Record::Collect::Routing::Destination::As::Peer


class Native::Flow::Record::Collect::Routing::ForwardingStatus : public ydk::Entity
{
    public:
        ForwardingStatus();
        ~ForwardingStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason; //type: empty

}; // Native::Flow::Record::Collect::Routing::ForwardingStatus


class Native::Flow::Record::Collect::Routing::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Address; //type: Native::Flow::Record::Collect::Routing::NextHop::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop::Address> address;
        
}; // Native::Flow::Record::Collect::Routing::NextHop


class Native::Flow::Record::Collect::Routing::NextHop::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6> ipv6; // presence node
        
}; // Native::Flow::Record::Collect::Routing::NextHop::Address


class Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4 : public ydk::Entity
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

        ydk::YLeaf bgp; //type: empty

}; // Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv4


class Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bgp; //type: empty

}; // Native::Flow::Record::Collect::Routing::NextHop::Address::Ipv6


class Native::Flow::Record::Collect::Routing::Pw : public ydk::Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Destination; //type: Native::Flow::Record::Collect::Routing::Pw::Destination

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Pw::Destination> destination;
        
}; // Native::Flow::Record::Collect::Routing::Pw


class Native::Flow::Record::Collect::Routing::Pw::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

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

}; // Native::Flow::Record::Collect::Routing::Pw::Destination


class Native::Flow::Record::Collect::Routing::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf traffic_index; //type: empty
        class As; //type: Native::Flow::Record::Collect::Routing::Source::As

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Source::As> as; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Source


class Native::Flow::Record::Collect::Routing::Source::As : public ydk::Entity
{
    public:
        As();
        ~As();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as4_octet; //type: empty
        class Peer; //type: Native::Flow::Record::Collect::Routing::Source::As::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing::Source::As::Peer> peer; // presence node
        
}; // Native::Flow::Record::Collect::Routing::Source::As


class Native::Flow::Record::Collect::Routing::Source::As::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer4_octet; //type: empty

}; // Native::Flow::Record::Collect::Routing::Source::As::Peer


class Native::Flow::Record::Collect::Routing::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Flow::Record::Collect::Routing::Vrf


class Native::Flow::Record::Collect::Services : public ydk::Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Waas; //type: Native::Flow::Record::Collect::Services::Waas

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services::Waas> waas;
        
}; // Native::Flow::Record::Collect::Services


class Native::Flow::Record::Collect::Services::Waas : public ydk::Entity
{
    public:
        Waas();
        ~Waas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf passthrough_reason; //type: empty
        class Segment; //type: Native::Flow::Record::Collect::Services::Waas::Segment

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services::Waas::Segment> segment; // presence node
        
}; // Native::Flow::Record::Collect::Services::Waas


class Native::Flow::Record::Collect::Services::Waas::Segment : public ydk::Entity
{
    public:
        Segment();
        ~Segment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf account_on_resolution; //type: empty

}; // Native::Flow::Record::Collect::Services::Waas::Segment


class Native::Flow::Record::Collect::Timestamp : public ydk::Entity
{
    public:
        Timestamp();
        ~Timestamp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: empty
        class Absolute; //type: Native::Flow::Record::Collect::Timestamp::Absolute
        class SysUptime; //type: Native::Flow::Record::Collect::Timestamp::SysUptime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp::Absolute> absolute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp::SysUptime> sys_uptime;
        
}; // Native::Flow::Record::Collect::Timestamp


class Native::Flow::Record::Collect::Timestamp::Absolute : public ydk::Entity
{
    public:
        Absolute();
        ~Absolute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf first; //type: empty
        ydk::YLeaf last; //type: empty
        class MonitoringInterval; //type: Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval> monitoring_interval;
        
}; // Native::Flow::Record::Collect::Timestamp::Absolute


class Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval : public ydk::Entity
{
    public:
        MonitoringInterval();
        ~MonitoringInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf end; //type: empty
        ydk::YLeaf start; //type: empty

}; // Native::Flow::Record::Collect::Timestamp::Absolute::MonitoringInterval


class Native::Flow::Record::Collect::Timestamp::SysUptime : public ydk::Entity
{
    public:
        SysUptime();
        ~SysUptime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf first; //type: empty
        ydk::YLeaf last; //type: empty

}; // Native::Flow::Record::Collect::Timestamp::SysUptime


class Native::Flow::Record::Collect::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_port; //type: empty
        ydk::YLeaf source_port; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Transport::Bytes
        class Icmp; //type: Native::Flow::Record::Collect::Transport::Icmp
        class Igmp; //type: Native::Flow::Record::Collect::Transport::Igmp
        class Tcp; //type: Native::Flow::Record::Collect::Transport::Tcp
        class Udp; //type: Native::Flow::Record::Collect::Transport::Udp
        class Event; //type: Native::Flow::Record::Collect::Transport::Event
        class Packets; //type: Native::Flow::Record::Collect::Transport::Packets
        class RoundTripTime; //type: Native::Flow::Record::Collect::Transport::RoundTripTime
        class Rtp; //type: Native::Flow::Record::Collect::Transport::Rtp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Icmp> icmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Igmp> igmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Udp> udp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Event> event;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets> packets;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::RoundTripTime> round_trip_time; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp> rtp;
        
}; // Native::Flow::Record::Collect::Transport


class Native::Flow::Record::Collect::Transport::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf expected; //type: empty
        ydk::YLeaf out_of_order; //type: empty
        class Lost; //type: Native::Flow::Record::Collect::Transport::Bytes::Lost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Bytes::Lost> lost; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Bytes


class Native::Flow::Record::Collect::Transport::Bytes::Lost : public ydk::Entity
{
    public:
        Lost();
        ~Lost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: empty

}; // Native::Flow::Record::Collect::Transport::Bytes::Lost


class Native::Flow::Record::Collect::Transport::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Flow::Record::Collect::Transport::Icmp::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Transport::Icmp::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Icmp::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Icmp::Ipv6> ipv6;
        
}; // Native::Flow::Record::Collect::Transport::Icmp


class Native::Flow::Record::Collect::Transport::Icmp::Ipv4 : public ydk::Entity
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

        ydk::YLeaf code; //type: empty
        ydk::YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Transport::Icmp::Ipv4


class Native::Flow::Record::Collect::Transport::Icmp::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: empty
        ydk::YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Transport::Icmp::Ipv6


class Native::Flow::Record::Collect::Transport::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: empty

}; // Native::Flow::Record::Collect::Transport::Igmp


class Native::Flow::Record::Collect::Transport::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acknowledgement_number; //type: empty
        ydk::YLeaf destination_port; //type: empty
        ydk::YLeaf header_length; //type: empty
        ydk::YLeaf maximum_segment_size; //type: empty
        ydk::YLeaf sequence_number; //type: empty
        ydk::YLeaf source_port; //type: empty
        ydk::YLeaf urgent_pointer; //type: empty
        class Flags; //type: Native::Flow::Record::Collect::Transport::Tcp::Flags
        class Flow_; //type: Native::Flow::Record::Collect::Transport::Tcp::Flow_
        class Option; //type: Native::Flow::Record::Collect::Transport::Tcp::Option
        class WindowSize; //type: Native::Flow::Record::Collect::Transport::Tcp::WindowSize

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Flags> flags; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Flow_> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::WindowSize> window_size; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Tcp


class Native::Flow::Record::Collect::Transport::Tcp::Flags : public ydk::Entity
{
    public:
        Flags();
        ~Flags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ack; //type: empty
        ydk::YLeaf cwr; //type: empty
        ydk::YLeaf ece; //type: empty
        ydk::YLeaf fin; //type: empty
        ydk::YLeaf psh; //type: empty
        ydk::YLeaf rst; //type: empty
        ydk::YLeaf syn; //type: empty
        ydk::YLeaf urg; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::Flags


class Native::Flow::Record::Collect::Transport::Tcp::Flow_ : public ydk::Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::Flow_


class Native::Flow::Record::Collect::Transport::Tcp::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Map; //type: Native::Flow::Record::Collect::Transport::Tcp::Option::Map

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::Option::Map> map; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Tcp::Option


class Native::Flow::Record::Collect::Transport::Tcp::Option::Map : public ydk::Entity
{
    public:
        Map();
        ~Map();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::Option::Map


class Native::Flow::Record::Collect::Transport::Tcp::WindowSize : public ydk::Entity
{
    public:
        WindowSize();
        ~WindowSize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty
        ydk::YLeaf sum; //type: empty
        class Average; //type: Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average> average; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Tcp::WindowSize


class Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average : public ydk::Entity
{
    public:
        Average();
        ~Average();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Transport::Tcp::WindowSize::Average


class Native::Flow::Record::Collect::Transport::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_port; //type: empty
        ydk::YLeaf message_length; //type: empty
        ydk::YLeaf source_port; //type: empty

}; // Native::Flow::Record::Collect::Transport::Udp


class Native::Flow::Record::Collect::Transport::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PacketLoss; //type: Native::Flow::Record::Collect::Transport::Event::PacketLoss

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Event::PacketLoss> packet_loss;
        
}; // Native::Flow::Record::Collect::Transport::Event


class Native::Flow::Record::Collect::Transport::Event::PacketLoss : public ydk::Entity
{
    public:
        PacketLoss();
        ~PacketLoss();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter> counter; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Event::PacketLoss


class Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Transport::Event::PacketLoss::Counter


class Native::Flow::Record::Collect::Transport::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf out_of_order; //type: empty
        class Expected; //type: Native::Flow::Record::Collect::Transport::Packets::Expected
        class Lost; //type: Native::Flow::Record::Collect::Transport::Packets::Lost

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Expected> expected;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Lost> lost;
        
}; // Native::Flow::Record::Collect::Transport::Packets


class Native::Flow::Record::Collect::Transport::Packets::Expected : public ydk::Entity
{
    public:
        Expected();
        ~Expected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf counter; //type: empty

}; // Native::Flow::Record::Collect::Transport::Packets::Expected


class Native::Flow::Record::Collect::Transport::Packets::Lost : public ydk::Entity
{
    public:
        Lost();
        ~Lost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Collect::Transport::Packets::Lost::Counter
        class Rate; //type: Native::Flow::Record::Collect::Transport::Packets::Lost::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Lost::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Packets::Lost::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Packets::Lost


class Native::Flow::Record::Collect::Transport::Packets::Lost::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Transport::Packets::Lost::Counter


class Native::Flow::Record::Collect::Transport::Packets::Lost::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Transport::Packets::Lost::Rate


class Native::Flow::Record::Collect::Transport::RoundTripTime : public ydk::Entity
{
    public:
        RoundTripTime();
        ~RoundTripTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf samples; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Transport::RoundTripTime


class Native::Flow::Record::Collect::Transport::Rtp : public ydk::Entity
{
    public:
        Rtp();
        ~Rtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_type; //type: empty
        ydk::YLeaf ssrc; //type: empty
        class Flow_; //type: Native::Flow::Record::Collect::Transport::Rtp::Flow_
        class Jitter; //type: Native::Flow::Record::Collect::Transport::Rtp::Jitter

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp::Flow_> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp::Jitter> jitter;
        
}; // Native::Flow::Record::Collect::Transport::Rtp


class Native::Flow::Record::Collect::Transport::Rtp::Flow_ : public ydk::Entity
{
    public:
        Flow_();
        ~Flow_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf count; //type: empty

}; // Native::Flow::Record::Collect::Transport::Rtp::Flow_


class Native::Flow::Record::Collect::Transport::Rtp::Jitter : public ydk::Entity
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

        ydk::YLeaf maximum; //type: empty
        ydk::YLeaf minimum; //type: empty
        class Mean; //type: Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean> mean; // presence node
        
}; // Native::Flow::Record::Collect::Transport::Rtp::Jitter


class Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean : public ydk::Entity
{
    public:
        Mean();
        ~Mean();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Transport::Rtp::Jitter::Mean


class Native::Flow::Record::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

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
        class Collect; //type: Native::Flow::Record::Default::Collect
        class Match; //type: Native::Flow::Record::Default::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect> collect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Match> match;
        
}; // Native::Flow::Record::Default


class Native::Flow::Record::Default::Collect : public ydk::Entity
{
    public:
        Collect();
        ~Collect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Flow::Record::Default::Collect::Application
        class Connection; //type: Native::Flow::Record::Default::Collect::Connection
        class Counter; //type: Native::Flow::Record::Default::Collect::Counter
        class Datalink; //type: Native::Flow::Record::Default::Collect::Datalink
        class Flow_; //type: Native::Flow::Record::Default::Collect::Flow_
        class Interface; //type: Native::Flow::Record::Default::Collect::Interface
        class Ipv4; //type: Native::Flow::Record::Default::Collect::Ipv4
        class Ipv6; //type: Native::Flow::Record::Default::Collect::Ipv6
        class Metadata; //type: Native::Flow::Record::Default::Collect::Metadata
        class Monitor; //type: Native::Flow::Record::Default::Collect::Monitor
        class Mpls; //type: Native::Flow::Record::Default::Collect::Mpls
        class Network; //type: Native::Flow::Record::Default::Collect::Network
        class Pfr; //type: Native::Flow::Record::Default::Collect::Pfr
        class Policy; //type: Native::Flow::Record::Default::Collect::Policy
        class Routing; //type: Native::Flow::Record::Default::Collect::Routing
        class Services; //type: Native::Flow::Record::Default::Collect::Services
        class Timestamp; //type: Native::Flow::Record::Default::Collect::Timestamp
        class Transport; //type: Native::Flow::Record::Default::Collect::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Connection> connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Flow_> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Metadata> metadata;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Pfr> pfr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Routing> routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Services> services;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Timestamp> timestamp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Transport> transport;
        
}; // Native::Flow::Record::Default::Collect


class Native::Flow::Record::Default::Collect::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor; //type: empty
        ydk::YLeaf version; //type: empty
        class Dns; //type: Native::Flow::Record::Default::Collect::Application::Dns
        class Http; //type: Native::Flow::Record::Default::Collect::Application::Http
        class Media; //type: Native::Flow::Record::Default::Collect::Application::Media
        class Name; //type: Native::Flow::Record::Default::Collect::Application::Name
        class Nntp; //type: Native::Flow::Record::Default::Collect::Application::Nntp
        class Pop3; //type: Native::Flow::Record::Default::Collect::Application::Pop3
        class Rtmp; //type: Native::Flow::Record::Default::Collect::Application::Rtmp
        class Rtsp; //type: Native::Flow::Record::Default::Collect::Application::Rtsp
        class Sip; //type: Native::Flow::Record::Default::Collect::Application::Sip
        class Smtp; //type: Native::Flow::Record::Default::Collect::Application::Smtp
        class Ssl; //type: Native::Flow::Record::Default::Collect::Application::Ssl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media> media;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Name> name; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Nntp> nntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Pop3> pop3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Rtmp> rtmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Rtsp> rtsp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Sip> sip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Smtp> smtp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Ssl> ssl;
        
}; // Native::Flow::Record::Default::Collect::Application


class Native::Flow::Record::Default::Collect::Application::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Dns


class Native::Flow::Record::Default::Collect::Application::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty
        ydk::YLeaf referer; //type: empty
        ydk::YLeaf url; //type: empty
        ydk::YLeaf user_agent; //type: empty
        class Uri; //type: Native::Flow::Record::Default::Collect::Application::Http::Uri

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Http::Uri> uri;
        
}; // Native::Flow::Record::Default::Collect::Application::Http


class Native::Flow::Record::Default::Collect::Application::Http::Uri : public ydk::Entity
{
    public:
        Uri();
        ~Uri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statistics; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Http::Uri


class Native::Flow::Record::Default::Collect::Application::Media : public ydk::Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event; //type: empty
        class Bytes; //type: Native::Flow::Record::Default::Collect::Application::Media::Bytes
        class Packets; //type: Native::Flow::Record::Default::Collect::Application::Media::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Packets> packets;
        
}; // Native::Flow::Record::Default::Collect::Application::Media


class Native::Flow::Record::Default::Collect::Application::Media::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter
        class Rate; //type: Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate> rate; // presence node
        
}; // Native::Flow::Record::Default::Collect::Application::Media::Bytes


class Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Default::Collect::Application::Media::Bytes::Counter

class Native::Flow::Record::Collect::Datalink::Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_3_ */

