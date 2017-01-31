#ifndef _CISCO_IOS_XR_IPV6_ACL_OPER_
#define _CISCO_IOS_XR_IPV6_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_ipv6_acl_oper {

class Ipv6AclAndPrefixList : public Entity
{
    public:
        Ipv6AclAndPrefixList();
        ~Ipv6AclAndPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class AccessListManager : public Entity
    {
        public:
            AccessListManager();
            ~AccessListManager();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Prefixes : public Entity
        {
            public:
                Prefixes();
                ~Prefixes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Prefix : public Entity
            {
                public:
                    Prefix();
                    ~Prefix();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf prefix_list_name; //type: string

                class PrefixListSequences : public Entity
                {
                    public:
                        PrefixListSequences();
                        ~PrefixListSequences();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PrefixListSequence : public Entity
                    {
                        public:
                            PrefixListSequence();
                            ~PrefixListSequence();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf sequence_number; //type: uint32
                            YLeaf is_ace_type; //type: AclAce1Enum
                            YLeaf is_ace_sequence_number; //type: uint32
                            YLeaf is_packet_allow_or_deny; //type: AclActionEnum
                            YLeaf is_address_in_numbers; //type: string
                            YLeaf is_address_mask_length; //type: uint32
                            YLeaf is_length_operator; //type: AclPortOperatorEnum
                            YLeaf is_packet_minimum_length; //type: uint32
                            YLeaf is_packet_maximum_length; //type: uint32
                            YLeaf hits; //type: uint32
                            YLeaf is_comment_for_entry; //type: string
                            YLeaf acl_name; //type: string



                    }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence> > prefix_list_sequence;


                }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences


                    std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences> prefix_list_sequences;


            }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix> > prefix;


        }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes


        class Usages : public Entity
        {
            public:
                Usages();
                ~Usages();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Usage : public Entity
            {
                public:
                    Usage();
                    ~Usage();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf node_name; //type: string
                    YLeaf application_id; //type: AclUsageAppIdEnumEnum
                    YLeaf access_list_name; //type: string
                    YLeaf usage_details; //type: string



            }; // Ipv6AclAndPrefixList::AccessListManager::Usages::Usage


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Usages::Usage> > usage;


        }; // Ipv6AclAndPrefixList::AccessListManager::Usages


        class Accesses : public Entity
        {
            public:
                Accesses();
                ~Accesses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Access : public Entity
            {
                public:
                    Access();
                    ~Access();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf access_list_name; //type: string

                class AccessListSequences : public Entity
                {
                    public:
                        AccessListSequences();
                        ~AccessListSequences();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AccessListSequence : public Entity
                    {
                        public:
                            AccessListSequence();
                            ~AccessListSequence();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf sequence_number; //type: uint32
                            YLeaf is_ace_type; //type: AclAce1Enum
                            YLeaf is_ace_sequence_number; //type: uint32
                            YLeaf is_packet_allow_or_deny; //type: AclActionEnum
                            YLeaf is_ipv6_protocol_type; //type: int32
                            YLeaf is_source_address_in_numbers; //type: string
                            YLeaf is_source_address_prefix_length; //type: uint32
                            YLeaf source_mask; //type: string
                            YLeaf is_destination_address_in_numbers; //type: string
                            YLeaf is_destination_address_prefix_length; //type: uint32
                            YLeaf destination_mask; //type: string
                            YLeaf is_source_operator; //type: AclPortOperatorEnum
                            YLeaf is_source_port1; //type: uint32
                            YLeaf is_source_port2; //type: uint32
                            YLeaf is_destination_operator; //type: AclPortOperatorEnum
                            YLeaf is_destination_port1; //type: uint32
                            YLeaf is_destination_port2; //type: uint32
                            YLeaf is_log_option; //type: AclLogEnum
                            YLeaf counter_name; //type: string
                            YLeaf is_tcp_bits_operator; //type: AclTcpflagsOperatorEnum
                            YLeaf is_tcp_bits; //type: uint32
                            YLeaf is_tcp_bits_mask; //type: uint32
                            YLeaf is_dscp_present; //type: int32
                            YLeaf is_dscp_valu; //type: uint32
                            YLeaf is_precedence_present; //type: int32
                            YLeaf is_precedence_value; //type: uint32
                            YLeaf is_header_matches; //type: uint32
                            YLeaf is_packet_length_operator; //type: AclPortOperatorEnum
                            YLeaf is_packet_length_start; //type: uint32
                            YLeaf is_packet_length_end; //type: uint32
                            YLeaf is_time_to_live_operator; //type: AclPortOperatorEnum
                            YLeaf is_time_to_live_start; //type: uint32
                            YLeaf is_time_to_live_end; //type: uint32
                            YLeaf no_stats; //type: int32
                            YLeaf hits; //type: uint64
                            YLeaf capture; //type: boolean
                            YLeaf is_icmp_message_off; //type: int32
                            YLeaf is_comment_for_entry; //type: string
                            YLeaf next_hop_type; //type: BagAclNhEnum
                            YLeaf is_flow_id; //type: uint32
                            YLeaf source_prefix_group; //type: string
                            YLeaf destination_prefix_group; //type: string
                            YLeaf source_port_group; //type: string
                            YLeaf destination_port_group; //type: string
                            YLeaf acl_name; //type: string
                            YLeaf sequence_str; //type: string

                        class HwNextHopInfo : public Entity
                        {
                            public:
                                HwNextHopInfo();
                                ~HwNextHopInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf type; //type: BagAclNhEnum
                                YLeaf next_hop; //type: string
                                YLeaf table_id; //type: uint32
                                YLeaf vrf_name; //type: string



                        }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo


                        class NextHopInfo : public Entity
                        {
                            public:
                                NextHopInfo();
                                ~NextHopInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf next_hop; //type: string
                                YLeaf vrf_name; //type: string
                                YLeaf track_name; //type: string
                                YLeaf status; //type: BagAclNhStatusEnum
                                YLeaf at_status; //type: BagAclNhAtStatusEnum
                                YLeaf acl_nh_exist; //type: int32



                        }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo


                            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo> hw_next_hop_info;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo> > next_hop_info;


                    }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence> > access_list_sequence;


                }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences


                    std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences> access_list_sequences;


            }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access> > access;


        }; // Ipv6AclAndPrefixList::AccessListManager::Accesses


            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses> accesses;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes> prefixes;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Usages> usages;


    }; // Ipv6AclAndPrefixList::AccessListManager


    class Oor : public Entity
    {
        public:
            Oor();
            ~Oor();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Details : public Entity
        {
            public:
                Details();
                ~Details();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
                YLeaf is_default_maximum_configurable_ac_es; //type: uint32
                YLeaf is_current_configured_ac_ls; //type: uint32
                YLeaf is_current_configured_aces; //type: uint32
                YLeaf is_current_maximum_configurable_acls; //type: uint32
                YLeaf is_current_maximum_configurable_aces; //type: uint32
                YLeaf is_maximum_configurable_ac_ls; //type: uint32
                YLeaf is_maximum_configurable_ac_es; //type: uint32



        }; // Ipv6AclAndPrefixList::Oor::Details


        class PrefixListSummary : public Entity
        {
            public:
                PrefixListSummary();
                ~PrefixListSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Details : public Entity
            {
                public:
                    Details();
                    ~Details();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_default_maximum_configurable_ac_es; //type: uint32
                    YLeaf is_current_configured_ac_ls; //type: uint32
                    YLeaf is_current_configured_aces; //type: uint32
                    YLeaf is_current_maximum_configurable_acls; //type: uint32
                    YLeaf is_current_maximum_configurable_aces; //type: uint32
                    YLeaf is_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_maximum_configurable_ac_es; //type: uint32



            }; // Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details


                std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details> details;


        }; // Ipv6AclAndPrefixList::Oor::PrefixListSummary


        class OorAccesses : public Entity
        {
            public:
                OorAccesses();
                ~OorAccesses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class OorAccess : public Entity
            {
                public:
                    OorAccess();
                    ~OorAccess();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf access_list_name; //type: string
                    YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_default_maximum_configurable_ac_es; //type: uint32
                    YLeaf is_current_configured_ac_ls; //type: uint32
                    YLeaf is_current_configured_aces; //type: uint32
                    YLeaf is_current_maximum_configurable_acls; //type: uint32
                    YLeaf is_current_maximum_configurable_aces; //type: uint32
                    YLeaf is_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_maximum_configurable_ac_es; //type: uint32



            }; // Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess> > oor_access;


        }; // Ipv6AclAndPrefixList::Oor::OorAccesses


        class OorPrefixes : public Entity
        {
            public:
                OorPrefixes();
                ~OorPrefixes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class OorPrefix : public Entity
            {
                public:
                    OorPrefix();
                    ~OorPrefix();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf prefix_list_name; //type: string
                    YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_default_maximum_configurable_ac_es; //type: uint32
                    YLeaf is_current_configured_ac_ls; //type: uint32
                    YLeaf is_current_configured_aces; //type: uint32
                    YLeaf is_current_maximum_configurable_acls; //type: uint32
                    YLeaf is_current_maximum_configurable_aces; //type: uint32
                    YLeaf is_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_maximum_configurable_ac_es; //type: uint32



            }; // Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix> > oor_prefix;


        }; // Ipv6AclAndPrefixList::Oor::OorPrefixes


        class AccessListSummary : public Entity
        {
            public:
                AccessListSummary();
                ~AccessListSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Details : public Entity
            {
                public:
                    Details();
                    ~Details();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_default_maximum_configurable_ac_es; //type: uint32
                    YLeaf is_current_configured_ac_ls; //type: uint32
                    YLeaf is_current_configured_aces; //type: uint32
                    YLeaf is_current_maximum_configurable_acls; //type: uint32
                    YLeaf is_current_maximum_configurable_aces; //type: uint32
                    YLeaf is_maximum_configurable_ac_ls; //type: uint32
                    YLeaf is_maximum_configurable_ac_es; //type: uint32



            }; // Ipv6AclAndPrefixList::Oor::AccessListSummary::Details


                std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::AccessListSummary::Details> details;


        }; // Ipv6AclAndPrefixList::Oor::AccessListSummary


            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::AccessListSummary> access_list_summary;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::Details> details;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorAccesses> oor_accesses;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorPrefixes> oor_prefixes;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::PrefixListSummary> prefix_list_summary;


    }; // Ipv6AclAndPrefixList::Oor


        std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager> access_list_manager;
        std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor> oor;


}; // Ipv6AclAndPrefixList


class AclTcpflagsOperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf match_none;
        static const Enum::YLeaf match_all;
        static const Enum::YLeaf match_any_old;
        static const Enum::YLeaf match_any;

};

class AclPortOperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf eq;
        static const Enum::YLeaf gt;
        static const Enum::YLeaf lt;
        static const Enum::YLeaf neq;
        static const Enum::YLeaf range;
        static const Enum::YLeaf onebyte;
        static const Enum::YLeaf twobytes;

};

class AclAce1Enum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf remark;
        static const Enum::YLeaf abf;

};

class BagAclNhAtStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf max;

};

class BagAclNhEnum : public Enum
{
    public:
        static const Enum::YLeaf nexthop_none;
        static const Enum::YLeaf nexthop_default;
        static const Enum::YLeaf nexthop;

};

class AclActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;
        static const Enum::YLeaf encrypt;
        static const Enum::YLeaf bypass;
        static const Enum::YLeaf fallthrough;
        static const Enum::YLeaf invalid;

};

class BagAclNhStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf max;

};

class AclLogEnum : public Enum
{
    public:
        static const Enum::YLeaf log_none;
        static const Enum::YLeaf log;
        static const Enum::YLeaf log_input;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ACL_OPER_ */

