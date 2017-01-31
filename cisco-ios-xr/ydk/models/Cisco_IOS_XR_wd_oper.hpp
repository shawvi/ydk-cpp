#ifndef _CISCO_IOS_XR_WD_OPER_
#define _CISCO_IOS_XR_WD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wd_oper {

class Watchdog : public Entity
{
    public:
        Watchdog();
        ~Watchdog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf node_name; //type: string

            class ThresholdMemory : public Entity
            {
                public:
                    ThresholdMemory();
                    ~ThresholdMemory();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Default_ : public Entity
                {
                    public:
                        Default_();
                        ~Default_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class ConfiguredMemory : public Entity
                    {
                        public:
                            ConfiguredMemory();
                            ~ConfiguredMemory();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf minor; //type: uint32
                            YLeaf severe; //type: uint32
                            YLeaf critical; //type: uint64



                    }; // Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory


                    class Memory : public Entity
                    {
                        public:
                            Memory();
                            ~Memory();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf physical_memory; //type: uint32
                            YLeaf free_memory; //type: uint64
                            YLeaf memory_state; //type: MemoryStateEnum



                    }; // Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory


                        std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory> configured_memory;
                        std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory> memory;


                }; // Watchdog::Nodes::Node::ThresholdMemory::Default_


                class Configured : public Entity
                {
                    public:
                        Configured();
                        ~Configured();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf minor; //type: uint32
                        YLeaf severe; //type: uint32
                        YLeaf critical; //type: uint64



                }; // Watchdog::Nodes::Node::ThresholdMemory::Configured


                    std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Configured> configured;
                    std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default_> default_;


            }; // Watchdog::Nodes::Node::ThresholdMemory


            class MemoryState : public Entity
            {
                public:
                    MemoryState();
                    ~MemoryState();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf physical_memory; //type: uint32
                    YLeaf free_memory; //type: uint64
                    YLeaf memory_state; //type: MemoryStateEnum



            }; // Watchdog::Nodes::Node::MemoryState


            class OverloadState : public Entity
            {
                public:
                    OverloadState();
                    ~OverloadState();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf overload_control_notification; //type: OverloadCtrlNotifEnum
                    YLeaf default_wdsysmon_throttle; //type: uint32
                    YLeaf configured_wdsysmon_throttle; //type: uint32

                class CurrentThrottle : public Entity
                {
                    public:
                        CurrentThrottle();
                        ~CurrentThrottle();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf throttle_duration; //type: uint32
                        YLeaf start_time; //type: string



                }; // Watchdog::Nodes::Node::OverloadState::CurrentThrottle


                class LastThrottle : public Entity
                {
                    public:
                        LastThrottle();
                        ~LastThrottle();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf throttle_duration; //type: uint32
                        YLeaf start_time; //type: string
                        YLeaf stop_time; //type: string



                }; // Watchdog::Nodes::Node::OverloadState::LastThrottle


                    std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState::CurrentThrottle> current_throttle;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState::LastThrottle> > last_throttle;


            }; // Watchdog::Nodes::Node::OverloadState


                std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::MemoryState> memory_state;
                std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState> overload_state;
                std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory> threshold_memory;


        }; // Watchdog::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node> > node;


    }; // Watchdog::Nodes


        std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes> nodes;


}; // Watchdog


class MemoryStateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf normal;
        static const Enum::YLeaf minor;
        static const Enum::YLeaf severe;
        static const Enum::YLeaf critical;

};

class OverloadCtrlNotifEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_IOS_XR_WD_OPER_ */

