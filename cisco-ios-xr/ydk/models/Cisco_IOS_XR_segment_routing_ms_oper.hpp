#ifndef _CISCO_IOS_XR_SEGMENT_ROUTING_MS_OPER_
#define _CISCO_IOS_XR_SEGMENT_ROUTING_MS_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_segment_routing_ms_oper {

class Srms : public Entity
{
    public:
        Srms();
        ~Srms();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Mapping : public Entity
    {
        public:
            Mapping();
            ~Mapping();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class MappingIpv4 : public Entity
        {
            public:
                MappingIpv4();
                ~MappingIpv4();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MappingMi : public Entity
            {
                public:
                    MappingMi();
                    ~MappingMi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ip; //type: string
                    YLeaf prefix; //type: int32
                    YLeaf src; //type: SrmsMiSrcEBEnum
                    YLeaf router; //type: string
                    YLeaf area; //type: string
                    YLeaf prefix_xr; //type: uint8
                    YLeaf sid_start; //type: uint32
                    YLeaf sid_count; //type: uint32
                    YLeaf last_prefix; //type: string
                    YLeaf last_sid_index; //type: uint32
                    YLeaf flag_attached; //type: SrmsMiFlagEBEnum

                class Addr : public Entity
                {
                    public:
                        Addr();
                        ~Addr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf af; //type: SrmsMiAfEBEnum
                        YLeaf ipv4; //type: string
                        YLeaf ipv6; //type: string



                }; // Srms::Mapping::MappingIpv4::MappingMi::Addr


                    std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv4::MappingMi::Addr> addr;


            }; // Srms::Mapping::MappingIpv4::MappingMi


                std::vector<std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv4::MappingMi> > mapping_mi;


        }; // Srms::Mapping::MappingIpv4


        class MappingIpv6 : public Entity
        {
            public:
                MappingIpv6();
                ~MappingIpv6();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class MappingMi : public Entity
            {
                public:
                    MappingMi();
                    ~MappingMi();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ip; //type: string
                    YLeaf prefix; //type: int32
                    YLeaf src; //type: SrmsMiSrcEBEnum
                    YLeaf router; //type: string
                    YLeaf area; //type: string
                    YLeaf prefix_xr; //type: uint8
                    YLeaf sid_start; //type: uint32
                    YLeaf sid_count; //type: uint32
                    YLeaf last_prefix; //type: string
                    YLeaf last_sid_index; //type: uint32
                    YLeaf flag_attached; //type: SrmsMiFlagEBEnum

                class Addr : public Entity
                {
                    public:
                        Addr();
                        ~Addr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf af; //type: SrmsMiAfEBEnum
                        YLeaf ipv4; //type: string
                        YLeaf ipv6; //type: string



                }; // Srms::Mapping::MappingIpv6::MappingMi::Addr


                    std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv6::MappingMi::Addr> addr;


            }; // Srms::Mapping::MappingIpv6::MappingMi


                std::vector<std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv6::MappingMi> > mapping_mi;


        }; // Srms::Mapping::MappingIpv6


            std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv4> mapping_ipv4;
            std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping::MappingIpv6> mapping_ipv6;


    }; // Srms::Mapping


    class Policy : public Entity
    {
        public:
            Policy();
            ~Policy();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class PolicyIpv4 : public Entity
        {
            public:
                PolicyIpv4();
                ~PolicyIpv4();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class PolicyIpv4Backup : public Entity
            {
                public:
                    PolicyIpv4Backup();
                    ~PolicyIpv4Backup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class PolicyMi : public Entity
                {
                    public:
                        PolicyMi();
                        ~PolicyMi();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mi_id; //type: string
                        YLeaf src; //type: SrmsMiSrcEBEnum
                        YLeaf router; //type: string
                        YLeaf area; //type: string
                        YLeaf prefix_xr; //type: uint8
                        YLeaf sid_start; //type: uint32
                        YLeaf sid_count; //type: uint32
                        YLeaf last_prefix; //type: string
                        YLeaf last_sid_index; //type: uint32
                        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

                    class Addr : public Entity
                    {
                        public:
                            Addr();
                            ~Addr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf af; //type: SrmsMiAfEBEnum
                            YLeaf ipv4; //type: string
                            YLeaf ipv6; //type: string



                    }; // Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr


                        std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr> addr;


                }; // Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi


                    std::vector<std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi> > policy_mi;


            }; // Srms::Policy::PolicyIpv4::PolicyIpv4Backup


            class PolicyIpv4Active : public Entity
            {
                public:
                    PolicyIpv4Active();
                    ~PolicyIpv4Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class PolicyMi : public Entity
                {
                    public:
                        PolicyMi();
                        ~PolicyMi();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mi_id; //type: string
                        YLeaf src; //type: SrmsMiSrcEBEnum
                        YLeaf router; //type: string
                        YLeaf area; //type: string
                        YLeaf prefix_xr; //type: uint8
                        YLeaf sid_start; //type: uint32
                        YLeaf sid_count; //type: uint32
                        YLeaf last_prefix; //type: string
                        YLeaf last_sid_index; //type: uint32
                        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

                    class Addr : public Entity
                    {
                        public:
                            Addr();
                            ~Addr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf af; //type: SrmsMiAfEBEnum
                            YLeaf ipv4; //type: string
                            YLeaf ipv6; //type: string



                    }; // Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr


                        std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr> addr;


                }; // Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi


                    std::vector<std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi> > policy_mi;


            }; // Srms::Policy::PolicyIpv4::PolicyIpv4Active


                std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Active> policy_ipv4_active;
                std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4::PolicyIpv4Backup> policy_ipv4_backup;


        }; // Srms::Policy::PolicyIpv4


        class PolicyIpv6 : public Entity
        {
            public:
                PolicyIpv6();
                ~PolicyIpv6();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class PolicyIpv6Backup : public Entity
            {
                public:
                    PolicyIpv6Backup();
                    ~PolicyIpv6Backup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class PolicyMi : public Entity
                {
                    public:
                        PolicyMi();
                        ~PolicyMi();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mi_id; //type: string
                        YLeaf src; //type: SrmsMiSrcEBEnum
                        YLeaf router; //type: string
                        YLeaf area; //type: string
                        YLeaf prefix_xr; //type: uint8
                        YLeaf sid_start; //type: uint32
                        YLeaf sid_count; //type: uint32
                        YLeaf last_prefix; //type: string
                        YLeaf last_sid_index; //type: uint32
                        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

                    class Addr : public Entity
                    {
                        public:
                            Addr();
                            ~Addr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf af; //type: SrmsMiAfEBEnum
                            YLeaf ipv4; //type: string
                            YLeaf ipv6; //type: string



                    }; // Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr


                        std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr> addr;


                }; // Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi


                    std::vector<std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi> > policy_mi;


            }; // Srms::Policy::PolicyIpv6::PolicyIpv6Backup


            class PolicyIpv6Active : public Entity
            {
                public:
                    PolicyIpv6Active();
                    ~PolicyIpv6Active();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class PolicyMi : public Entity
                {
                    public:
                        PolicyMi();
                        ~PolicyMi();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf mi_id; //type: string
                        YLeaf src; //type: SrmsMiSrcEBEnum
                        YLeaf router; //type: string
                        YLeaf area; //type: string
                        YLeaf prefix_xr; //type: uint8
                        YLeaf sid_start; //type: uint32
                        YLeaf sid_count; //type: uint32
                        YLeaf last_prefix; //type: string
                        YLeaf last_sid_index; //type: uint32
                        YLeaf flag_attached; //type: SrmsMiFlagEBEnum

                    class Addr : public Entity
                    {
                        public:
                            Addr();
                            ~Addr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf af; //type: SrmsMiAfEBEnum
                            YLeaf ipv4; //type: string
                            YLeaf ipv6; //type: string



                    }; // Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr


                        std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr> addr;


                }; // Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi


                    std::vector<std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi> > policy_mi;


            }; // Srms::Policy::PolicyIpv6::PolicyIpv6Active


                std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Active> policy_ipv6_active;
                std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6::PolicyIpv6Backup> policy_ipv6_backup;


        }; // Srms::Policy::PolicyIpv6


            std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv4> policy_ipv4;
            std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy::PolicyIpv6> policy_ipv6;


    }; // Srms::Policy


        std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Mapping> mapping;
        std::unique_ptr<Cisco_IOS_XR_segment_routing_ms_oper::Srms::Policy> policy;


}; // Srms


class SrmsMiAfEBEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class SrmsMiFlagEBEnum : public Enum
{
    public:
        static const Enum::YLeaf false_;
        static const Enum::YLeaf true_;

};

class SrmsMiSrcEBEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};


}
}

#endif /* _CISCO_IOS_XR_SEGMENT_ROUTING_MS_OPER_ */

