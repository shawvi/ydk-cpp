
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_32.hpp"
#include "Cisco_IOS_XE_native_33.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Tengigabitethernet::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{
    yang_name = "padding"; yang_parent_name = "hello";
}

Native::Interface::Tengigabitethernet::Isis::Hello::Padding::~Padding()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Hello::Padding::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Hello::Padding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Padding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Hello::Padding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
{
    yang_name = "hello-interval"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Tengigabitethernet::Isis::HelloInterval::has_data() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        for(auto const & c : hello_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList>();
        c->parent = this;
        hello_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval";
}

Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloIntervalList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
{
    yang_name = "hello-multiplier"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::has_data() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultiplier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        for(auto const & c : hello_multiplier_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList>();
        c->parent = this;
        hello_multiplier_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_multiplier_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{
    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier";
}

Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloMultiplierList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
    	,
    metric(std::make_shared<Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric>())
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Ipv6::has_data() const
{
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::Tengigabitethernet::Isis::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Isis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
{
    yang_name = "metric"; yang_parent_name = "ipv6";
}

Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "metric-list"; yang_parent_name = "metric";
}

Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Metric::Metric()
    :
    value_{YType::str, "value"}
{
    yang_name = "metric"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::Metric::~Metric()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{
    yang_name = "metric-list"; yang_parent_name = "metric";
}

Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Password::Password()
    :
    password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::Password::~Password()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Password::has_data() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(password.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        for(auto const & c : password_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Password::PasswordList>();
        c->parent = this;
        password_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{
    yang_name = "password-list"; yang_parent_name = "password";
}

Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::has_data() const
{
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(password.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PasswordList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "priority"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::Priority::~Priority()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Priority::has_data() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        for(auto const & c : priority_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList>();
        c->parent = this;
        priority_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Priority::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{
    yang_name = "priority-list"; yang_parent_name = "priority";
}

Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list" <<"[levels='" <<levels <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriorityList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{
    yang_name = "three-way-handshake"; yang_parent_name = "isis";
}

Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::has_data() const
{
    return implementor.is_set;
}

bool Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::has_operation() const
{
    return is_set(operation)
	|| is_set(implementor.operation);
}

std::string Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreeWayHandshake' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.operation)) leaf_name_data.push_back(implementor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "implementor")
    {
        implementor = value;
    }
}

Native::Interface::Tengigabitethernet::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{
    yang_name = "keepalive-settings"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::Tengigabitethernet::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Tengigabitethernet::KeepaliveSettings::has_operation() const
{
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Tengigabitethernet::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::KeepaliveSettings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeepaliveSettings' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::KeepaliveSettings::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{
    yang_name = "keepalive"; yang_parent_name = "keepalive-settings";
}

Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(operation)
	|| is_set(period.operation)
	|| is_set(retries.operation);
}

std::string Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.operation)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "period")
    {
        period = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
}

Native::Interface::Tengigabitethernet::Bfd::Bfd()
    :
    echo{YType::boolean, "Cisco-IOS-XE-bfd:echo"},
    template_{YType::str, "Cisco-IOS-XE-bfd:template"}
    	,
    interval(std::make_shared<Native::Interface::Tengigabitethernet::Bfd::Interval>())
{
    interval->parent = this;

    yang_name = "bfd"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Bfd::~Bfd()
{
}

bool Native::Interface::Tengigabitethernet::Bfd::has_data() const
{
    return echo.is_set
	|| template_.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Interface::Tengigabitethernet::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(echo.operation)
	|| is_set(template_.operation)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo.is_set || is_set(echo.operation)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (template_.is_set || is_set(template_.operation)) leaf_name_data.push_back(template_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Interface::Tengigabitethernet::Bfd::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "echo")
    {
        echo = value;
    }
    if(value_path == "template")
    {
        template_ = value;
    }
}

Native::Interface::Tengigabitethernet::Bfd::Interval::Interval()
    :
    min_rx{YType::uint16, "min_rx"},
    msecs{YType::uint16, "msecs"},
    multiplier{YType::uint8, "multiplier"}
{
    yang_name = "interval"; yang_parent_name = "bfd";
}

Native::Interface::Tengigabitethernet::Bfd::Interval::~Interval()
{
}

bool Native::Interface::Tengigabitethernet::Bfd::Interval::has_data() const
{
    return min_rx.is_set
	|| msecs.is_set
	|| multiplier.is_set;
}

bool Native::Interface::Tengigabitethernet::Bfd::Interval::has_operation() const
{
    return is_set(operation)
	|| is_set(min_rx.operation)
	|| is_set(msecs.operation)
	|| is_set(multiplier.operation);
}

std::string Native::Interface::Tengigabitethernet::Bfd::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Bfd::Interval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_rx.is_set || is_set(min_rx.operation)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (msecs.is_set || is_set(msecs.operation)) leaf_name_data.push_back(msecs.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Bfd::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Bfd::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Bfd::Interval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min_rx")
    {
        min_rx = value;
    }
    if(value_path == "msecs")
    {
        msecs = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Native::Interface::Tengigabitethernet::Bandwidth::Bandwidth()
    :
    kilobits{YType::uint32, "kilobits"},
    qos_reference{YType::uint32, "qos-reference"}
    	,
    inherit(nullptr) // presence node
	,receive(std::make_shared<Native::Interface::Tengigabitethernet::Bandwidth::Receive>())
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tengigabitethernet::Bandwidth::has_data() const
{
    return kilobits.is_set
	|| qos_reference.is_set
	|| (inherit !=  nullptr && inherit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Interface::Tengigabitethernet::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(kilobits.operation)
	|| is_set(qos_reference.operation)
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());
    if (qos_reference.is_set || is_set(qos_reference.operation)) leaf_name_data.push_back(qos_reference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Tengigabitethernet::Bandwidth::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Tengigabitethernet::Bandwidth::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
    if(value_path == "qos-reference")
    {
        qos_reference = value;
    }
}

Native::Interface::Tengigabitethernet::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{
    yang_name = "receive"; yang_parent_name = "bandwidth";
}

Native::Interface::Tengigabitethernet::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::Tengigabitethernet::Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Tengigabitethernet::Bandwidth::Receive::has_operation() const
{
    return is_set(operation)
	|| is_set(inherit.operation)
	|| is_set(kilobits.operation);
}

std::string Native::Interface::Tengigabitethernet::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Bandwidth::Receive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Receive' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.operation)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Bandwidth::Receive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inherit")
    {
        inherit = value;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
}

Native::Interface::Tengigabitethernet::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{
    yang_name = "inherit"; yang_parent_name = "bandwidth";
}

Native::Interface::Tengigabitethernet::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Tengigabitethernet::Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Tengigabitethernet::Bandwidth::Inherit::has_operation() const
{
    return is_set(operation)
	|| is_set(kilobits.operation);
}

std::string Native::Interface::Tengigabitethernet::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Bandwidth::Inherit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inherit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.operation)) leaf_name_data.push_back(kilobits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Bandwidth::Inherit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
    }
}

Native::Interface::Tengigabitethernet::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Tengigabitethernet::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Dampening::~Dampening()
{
}

bool Native::Interface::Tengigabitethernet::Dampening::has_data() const
{
    return dampening_time.is_set
	|| maximum_supressing_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Tengigabitethernet::Dampening::has_operation() const
{
    return is_set(operation)
	|| is_set(dampening_time.operation)
	|| is_set(maximum_supressing_time.operation)
	|| is_set(start_reusing_time.operation)
	|| is_set(start_supressing_time.operation)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.operation)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.operation)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.operation)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.operation)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Tengigabitethernet::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Dampening::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
    }
}

Native::Interface::Tengigabitethernet::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{
    yang_name = "restart"; yang_parent_name = "dampening";
}

Native::Interface::Tengigabitethernet::Dampening::Restart::~Restart()
{
}

bool Native::Interface::Tengigabitethernet::Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Tengigabitethernet::Dampening::Restart::has_operation() const
{
    return is_set(operation)
	|| is_set(restart.operation)
	|| is_set(restart_penalty.operation);
}

std::string Native::Interface::Tengigabitethernet::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Dampening::Restart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Restart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.operation)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.operation)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Dampening::Restart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "restart")
    {
        restart = value;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
    }
}

Native::Interface::Tengigabitethernet::Domain::Domain()
    :
    internet_bound{YType::empty, "internet-bound"},
    name{YType::str, "name"},
    path{YType::str, "path"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{
    yang_name = "domain"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Domain::~Domain()
{
}

bool Native::Interface::Tengigabitethernet::Domain::has_data() const
{
    return internet_bound.is_set
	|| name.is_set
	|| path.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Tengigabitethernet::Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(internet_bound.operation)
	|| is_set(name.operation)
	|| is_set(path.operation)
	|| is_set(path_id.operation)
	|| is_set(path_last_resort.operation)
	|| is_set(zero_sla.operation);
}

std::string Native::Interface::Tengigabitethernet::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Domain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_bound.is_set || is_set(internet_bound.operation)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.operation)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.operation)) leaf_name_data.push_back(zero_sla.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internet-bound")
    {
        internet_bound = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
    }
}

Native::Interface::Tengigabitethernet::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{
    yang_name = "hold-queue"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::Tengigabitethernet::HoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Tengigabitethernet::HoldQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(queue_length.operation);
}

std::string Native::Interface::Tengigabitethernet::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::HoldQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.operation)) leaf_name_data.push_back(queue_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::HoldQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
    }
}

Native::Interface::Tengigabitethernet::Mpls::Mpls()
    :
    ip{YType::empty, "Cisco-IOS-XE-mpls:ip"},
    mtu{YType::str, "Cisco-IOS-XE-mpls:mtu"}
    	,
    accounting(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Accounting>())
	,bgp(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Bgp>())
	,label(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Label>())
	,ldp(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Ldp>())
	,traffic_eng(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::TrafficEng>())
{
    accounting->parent = this;

    bgp->parent = this;

    label->parent = this;

    ldp->parent = this;

    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Mpls::~Mpls()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::has_data() const
{
    return ip.is_set
	|| mtu.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::Tengigabitethernet::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(mtu.operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Native::Interface::Tengigabitethernet::Mpls::Accounting::Accounting()
    :
    experimental(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental>())
{
    experimental->parent = this;

    yang_name = "accounting"; yang_parent_name = "mpls";
}

Native::Interface::Tengigabitethernet::Mpls::Accounting::~Accounting()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::Accounting::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Interface::Tengigabitethernet::Mpls::Accounting::has_operation() const
{
    return is_set(operation)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Mpls::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:accounting";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::Accounting::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::Experimental()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{
    yang_name = "experimental"; yang_parent_name = "accounting";
}

Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::~Experimental()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::has_operation() const
{
    return is_set(operation)
	|| is_set(input.operation)
	|| is_set(output.operation);
}

std::string Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Experimental' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::Accounting::Experimental::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::Tengigabitethernet::Mpls::Bgp::Bgp()
    :
    forwarding{YType::empty, "forwarding"}
{
    yang_name = "bgp"; yang_parent_name = "mpls";
}

Native::Interface::Tengigabitethernet::Mpls::Bgp::~Bgp()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::Bgp::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Tengigabitethernet::Mpls::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Tengigabitethernet::Mpls::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:bgp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Tengigabitethernet::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "label"; yang_parent_name = "mpls";
}

Native::Interface::Tengigabitethernet::Mpls::Label::~Label()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::Label::has_data() const
{
    return protocol.is_set;
}

bool Native::Interface::Tengigabitethernet::Mpls::Label::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Native::Interface::Tengigabitethernet::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Interface::Tengigabitethernet::Mpls::Ldp::Ldp()
    :
    discovery(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery>())
{
    discovery->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls";
}

Native::Interface::Tengigabitethernet::Mpls::Ldp::~Ldp()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::Ldp::has_data() const
{
    return (discovery !=  nullptr && discovery->has_data());
}

bool Native::Interface::Tengigabitethernet::Mpls::Ldp::has_operation() const
{
    return is_set(operation)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ldp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery>();
        }
        return discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::Ldp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::Discovery()
    :
    transport_address{YType::str, "transport-address"}
{
    yang_name = "discovery"; yang_parent_name = "ldp";
}

Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::~Discovery()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::has_data() const
{
    return transport_address.is_set;
}

bool Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(transport_address.operation);
}

std::string Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.operation)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::Ldp::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
    }
}

Native::Interface::Tengigabitethernet::Mpls::TrafficEng::TrafficEng()
    :
    administrative_weight{YType::uint32, "administrative-weight"},
    attribute_flags{YType::str, "attribute-flags"},
    backup_path{YType::str, "backup-path"},
    tunnels{YType::empty, "tunnels"}
    	,
    flooding(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding>())
{
    flooding->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls";
}

Native::Interface::Tengigabitethernet::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::TrafficEng::has_data() const
{
    return administrative_weight.is_set
	|| attribute_flags.is_set
	|| backup_path.is_set
	|| tunnels.is_set
	|| (flooding !=  nullptr && flooding->has_data());
}

bool Native::Interface::Tengigabitethernet::Mpls::TrafficEng::has_operation() const
{
    return is_set(operation)
	|| is_set(administrative_weight.operation)
	|| is_set(attribute_flags.operation)
	|| is_set(backup_path.operation)
	|| is_set(tunnels.operation)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::TrafficEng::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficEng' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_weight.is_set || is_set(administrative_weight.operation)) leaf_name_data.push_back(administrative_weight.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.operation)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.operation)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::TrafficEng::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight = value;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Flooding()
    :
    thresholds(std::make_shared<Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds>())
{
    thresholds->parent = this;

    yang_name = "flooding"; yang_parent_name = "traffic-eng";
}

Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::~Flooding()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::has_data() const
{
    return (thresholds !=  nullptr && thresholds->has_data());
}

bool Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::has_operation() const
{
    return is_set(operation)
	|| (thresholds !=  nullptr && thresholds->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds>();
        }
        return thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(thresholds != nullptr)
    {
        children["thresholds"] = thresholds;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::Thresholds()
    :
    down{YType::uint8, "down"},
    up{YType::uint8, "up"}
{
    yang_name = "thresholds"; yang_parent_name = "flooding";
}

Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::~Thresholds()
{
}

bool Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::has_data() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::has_operation() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Thresholds' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_name_datas = down.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_name_datas.begin(), down_name_datas.end());
    auto up_name_datas = up.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_name_datas.begin(), up_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Mpls::TrafficEng::Flooding::Thresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down.append(value);
    }
    if(value_path == "up")
    {
        up.append(value);
    }
}

Native::Interface::Tengigabitethernet::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::Tengigabitethernet::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::IpVrf::~IpVrf()
{
}

bool Native::Interface::Tengigabitethernet::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Tengigabitethernet::IpVrf::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Tengigabitethernet::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::IpVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpVrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Tengigabitethernet::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::IpVrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf";
}

Native::Interface::Tengigabitethernet::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::Tengigabitethernet::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Tengigabitethernet::IpVrf::Ip::has_operation() const
{
    return is_set(operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Tengigabitethernet::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::IpVrf::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::IpVrf::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::IpVrf::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Tengigabitethernet::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Vrf::~Vrf()
{
}

bool Native::Interface::Tengigabitethernet::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Tengigabitethernet::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Interface::Tengigabitethernet::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ip()
    :
    admission{YType::str, "admission"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    mroute_cache{YType::boolean, "mroute-cache"},
    mtu{YType::uint16, "mtu"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
    	,
    access_group(std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup>())
	,address(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address>())
	,arp(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Arp>())
	,authentication(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Authentication>())
	,dhcp(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp>())
	,flow(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Flow>())
	,hello_interval(std::make_shared<Native::Interface::Tengigabitethernet::Ip::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Tengigabitethernet::Ip::HoldTime>())
	,igmp(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Igmp>())
	,lisp(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Lisp>())
	,nat(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Nat>())
	,nbar(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Nbar>())
	,no_address(std::make_shared<Native::Interface::Tengigabitethernet::Ip::NoAddress>())
	,ospf(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf>())
	,pim(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Pim>())
	,policy(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Policy>())
	,route_cache(nullptr) // presence node
	,route_cache_conf(std::make_shared<Native::Interface::Tengigabitethernet::Ip::RouteCacheConf>())
	,router(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Router>())
	,summary_address(std::make_shared<Native::Interface::Tengigabitethernet::Ip::SummaryAddress>())
	,tcp(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Tcp>())
	,verify(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify>())
	,virtual_reassembly(std::make_shared<Native::Interface::Tengigabitethernet::Ip::VirtualReassembly>())
	,vrf(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Vrf>())
	,wccp(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp>())
{
    access_group->parent = this;

    address->parent = this;

    arp->parent = this;

    authentication->parent = this;

    dhcp->parent = this;

    flow->parent = this;

    hello_interval->parent = this;

    hold_time->parent = this;

    igmp->parent = this;

    lisp->parent = this;

    nat->parent = this;

    nbar->parent = this;

    no_address->parent = this;

    ospf->parent = this;

    pim->parent = this;

    policy->parent = this;

    route_cache_conf->parent = this;

    router->parent = this;

    summary_address->parent = this;

    tcp->parent = this;

    verify->parent = this;

    virtual_reassembly->parent = this;

    vrf->parent = this;

    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Ip::~Ip()
{
}

bool Native::Interface::Tengigabitethernet::Ip::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| mroute_cache.is_set
	|| mtu.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| unreachables.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admission.operation)
	|| is_set(directed_broadcast.operation)
	|| is_set(local_proxy_arp.operation)
	|| is_set(mroute_cache.operation)
	|| is_set(mtu.operation)
	|| is_set(proxy_arp.operation)
	|| is_set(redirects.operation)
	|| is_set(unnumbered.operation)
	|| is_set(unreachables.operation)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.operation)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.operation)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.operation)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.operation)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.operation)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Tengigabitethernet::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Tengigabitethernet::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::Tengigabitethernet::Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Tengigabitethernet::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Tengigabitethernet::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Tengigabitethernet::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Tengigabitethernet::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(wccp != nullptr)
    {
        children["wccp"] = wccp;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admission")
    {
        admission = value;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out>())
{
    in->parent = this;

    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::AccessGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::In()
    :
    acl(std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl>())
	,common_acl(std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl>())
{
    acl->parent = this;

    common_acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group";
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{
    yang_name = "common-acl"; yang_parent_name = "in";
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(common.operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.operation)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{
    yang_name = "acl"; yang_parent_name = "in";
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Out()
    :
    acl(std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl>())
	,common_acl(std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl>())
{
    acl->parent = this;

    common_acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group";
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{
    yang_name = "common-acl"; yang_parent_name = "out";
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(common.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.operation)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{
    yang_name = "acl"; yang_parent_name = "out";
}

Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Arp::~Arp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Arp::has_operation() const
{
    return is_set(operation)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Arp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp";
}

Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::has_operation() const
{
    return is_set(operation)
	|| is_set(trust.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inspection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{
    yang_name = "limit"; yang_parent_name = "inspection";
}

Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(rate.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(receive.operation)
	|| is_set(sitemap.operation)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.operation)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.operation)) leaf_name_data.push_back(sitemap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive")
    {
        receive = value;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{
    yang_name = "forwarding"; yang_parent_name = "vrf";
}

Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(operation)
	|| is_set(liin_vrf.operation)
	|| is_set(mgmtvrf.operation)
	|| is_set(word.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.operation)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.operation)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Vrf::Forwarding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
    }
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{
    yang_name = "no-address"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::NoAddress::~NoAddress()
{
}

bool Native::Interface::Tengigabitethernet::Ip::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::NoAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::NoAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::NoAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    dhcp(nullptr) // presence node
	,primary(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address::Primary>())
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Address::~Address()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Address::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(negotiated.operation)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.operation)) leaf_name_data.push_back(negotiated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{
    yang_name = "primary"; yang_parent_name = "address";
}

Native::Interface::Tengigabitethernet::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Primary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Address::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Address::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "secondary"; yang_parent_name = "address";
}

Native::Interface::Tengigabitethernet::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Secondary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation)
	|| is_set(secondary.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Address::Secondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Address::Secondary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address";
}

Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "client-id"; yang_parent_name = "dhcp";
}

Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| fortygigabitethernet.is_set
	|| gigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(operation)
	|| is_set(fastethernet.operation)
	|| is_set(fortygigabitethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(port_channel.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(vlan.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.operation)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "hello-interval"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Tengigabitethernet::Ip::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Authentication::Mode>())
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(md5.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{
    yang_name = "hold-time"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::Tengigabitethernet::Ip::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::HoldTime::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::HoldTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{
    yang_name = "helper-address"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Tengigabitethernet::Ip::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(global.operation)
	|| is_set(vrf.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelperAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Pim::Pim()
    :
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    sparse_mode{YType::enumeration, "Cisco-IOS-XE-multicast:sparse-mode"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
    	,
    accept_register(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister>())
	,query_interval(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval>())
{
    accept_register->parent = this;

    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Pim::~Pim()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Pim::has_data() const
{
    return dr_priority.is_set
	|| nbma_mode.is_set
	|| sparse_mode.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Pim::has_operation() const
{
    return is_set(operation)
	|| is_set(dr_priority.operation)
	|| is_set(nbma_mode.operation)
	|| is_set(sparse_mode.operation)
	|| is_set(spt_threshold.operation)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pim' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.operation)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (sparse_mode.is_set || is_set(sparse_mode.operation)) leaf_name_data.push_back(sparse_mode.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.operation)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(query_interval != nullptr)
    {
        children["query-interval"] = query_interval;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Pim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode = value;
    }
    if(value_path == "sparse-mode")
    {
        sparse_mode = value;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{
    yang_name = "accept-register"; yang_parent_name = "pim";
}

Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptRegister' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::QueryInterval()
    :
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"},
    seconds_interval{YType::uint16, "seconds-interval"}
{
    yang_name = "query-interval"; yang_parent_name = "pim";
}

Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::has_data() const
{
    return milliseconds_interval.is_set
	|| msec.is_set
	|| seconds_interval.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(milliseconds_interval.operation)
	|| is_set(msec.operation)
	|| is_set(seconds_interval.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QueryInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds_interval.is_set || is_set(milliseconds_interval.operation)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds_interval.is_set || is_set(seconds_interval.operation)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Pim::QueryInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval = value;
    }
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "policy"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Policy::~Policy()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{
    yang_name = "route-cache-conf"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::has_operation() const
{
    return is_set(operation)
	|| is_set(route_cache.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCacheConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.operation)) leaf_name_data.push_back(route_cache.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::RouteCacheConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{
    yang_name = "route-cache"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::Tengigabitethernet::Ip::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::RouteCache::has_operation() const
{
    return is_set(operation)
	|| is_set(cef.operation)
	|| is_set(flow.operation)
	|| is_set(policy.operation)
	|| is_set(same_interface.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::RouteCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.operation)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.operation)) leaf_name_data.push_back(same_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::RouteCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cef")
    {
        cef = value;
    }
    if(value_path == "flow")
    {
        flow = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{
    yang_name = "router"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Router::~Router()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Router::has_operation() const
{
    return is_set(operation)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Router::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{
    yang_name = "isis"; yang_parent_name = "router";
}

Native::Interface::Tengigabitethernet::Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Router::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Router::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Router::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{
    yang_name = "tcp"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Tcp::~Tcp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(adjust_mss.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.operation)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::VirtualReassembly()
    :
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"},
    max_fragments{YType::uint32, "max-fragments"},
    max_reassemblies{YType::uint32, "max-reassemblies"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "virtual-reassembly"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::has_data() const
{
    return drop_fragments.is_set
	|| in.is_set
	|| max_fragments.is_set
	|| max_reassemblies.is_set
	|| timeout.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_fragments.operation)
	|| is_set(in.operation)
	|| is_set(max_fragments.operation)
	|| is_set(max_reassemblies.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualReassembly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_fragments.is_set || is_set(drop_fragments.operation)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.operation)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (max_reassemblies.is_set || is_set(max_reassemblies.operation)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::VirtualReassembly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping>())
{
    client->parent = this;

    relay->parent = this;

    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{
    yang_name = "client"; yang_parent_name = "dhcp";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::~Client()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_action.operation)
	|| is_set(trusted.operation)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.operation)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.operation)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check_reply != nullptr)
    {
        children["check-reply"] = check_reply;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(option_insert != nullptr)
    {
        children["option-insert"] = option_insert;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-action")
    {
        policy_action = value;
    }
    if(value_path == "trusted")
    {
        trusted = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{
    yang_name = "check-reply"; yang_parent_name = "information";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckReply' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{
    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_id.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{
    yang_name = "option-insert"; yang_parent_name = "information";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionInsert' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(trust.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snooping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Vlan()
    :
    id{YType::uint16, "id"}
    	,
    information(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information>())
{
    information->parent = this;

    yang_name = "vlan"; yang_parent_name = "snooping";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::~Vlan()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::has_data() const
{
    return id.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Information()
    :
    option(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "vlan";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::~Information()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::has_operation() const
{
    return is_set(operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::Option()
    :
    format_type(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>())
{
    format_type->parent = this;

    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::~Option()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_data() const
{
    return (format_type !=  nullptr && format_type->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::has_operation() const
{
    return is_set(operation)
	|| (format_type !=  nullptr && format_type->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-type")
    {
        if(format_type == nullptr)
        {
            format_type = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>();
        }
        return format_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format_type != nullptr)
    {
        children["format-type"] = format_type;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::FormatType()
    :
    circuit_id(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>())
{
    circuit_id->parent = this;

    yang_name = "format-type"; yang_parent_name = "option";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::~FormatType()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_data() const
{
    return (circuit_id !=  nullptr && circuit_id->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_operation() const
{
    return is_set(operation)
	|| (circuit_id !=  nullptr && circuit_id->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FormatType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>();
        }
        return circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::CircuitId()
    :
    string{YType::str, "string"}
{
    yang_name = "circuit-id"; yang_parent_name = "format-type";
}

Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::~CircuitId()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_data() const
{
    return string.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::SummaryAddress::SummaryAddress()
{
    yang_name = "summary-address"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::Tengigabitethernet::Ip::SummaryAddress::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tengigabitethernet::Ip::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::SummaryAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::SummaryAddress::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{
    yang_name = "eigrp"; yang_parent_name = "summary-address";
}

Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::has_data() const
{
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| is_set(metric.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::SummaryAddress::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Verify::Verify()
    :
    source(nullptr) // presence node
	,unicast(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Verify::~Verify()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Verify::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify";
}

Native::Interface::Tengigabitethernet::Ip::Verify::Source::~Source()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Source::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Source::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Verify::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Verify::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::Vlan()
    :
    dhcp_snooping(nullptr) // presence node
{
    yang_name = "vlan"; yang_parent_name = "source";
}

Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::~Vlan()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::has_data() const
{
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::has_operation() const
{
    return is_set(operation)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_snooping != nullptr)
    {
        children["dhcp-snooping"] = dhcp_snooping;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{
    yang_name = "dhcp-snooping"; yang_parent_name = "vlan";
}

Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_data() const
{
    return port_security.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::has_operation() const
{
    return is_set(operation)
	|| is_set(port_security.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpSnooping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.operation)) leaf_name_data.push_back(port_security.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Verify::Source::Vlan::DhcpSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-security")
    {
        port_security = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
	,source(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify";
}

Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::has_data() const
{
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::has_operation() const
{
    return is_set(operation)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_path != nullptr)
    {
        children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::ReversePath()
{
    yang_name = "reverse-path"; yang_parent_name = "unicast";
}

Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::has_data() const
{
    return false;
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReversePath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::ReversePath::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::Source()
    :
    allow_default{YType::empty, "allow-default"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    reachable_via{YType::enumeration, "reachable-via"}
{
    yang_name = "source"; yang_parent_name = "unicast";
}

Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::has_data() const
{
    return allow_default.is_set
	|| allow_self_ping.is_set
	|| reachable_via.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_default.operation)
	|| is_set(allow_self_ping.operation)
	|| is_set(reachable_via.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default.is_set || is_set(allow_default.operation)) leaf_name_data.push_back(allow_default.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.operation)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (reachable_via.is_set || is_set(reachable_via.operation)) leaf_name_data.push_back(reachable_via.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-default")
    {
        allow_default = value;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
    }
    if(value_path == "reachable-via")
    {
        reachable_via = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Flow::Flow()
    :
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"}
{
    yang_name = "flow"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Flow::~Flow()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return egress.is_set
	|| ingress.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress.operation)
	|| is_set(ingress.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.operation)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.operation)) leaf_name_data.push_back(ingress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress")
    {
        egress = value;
    }
    if(value_path == "ingress")
    {
        ingress = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    multicast{YType::empty, "multicast"},
    output{YType::empty, "output"},
    unicast{YType::empty, "unicast"}
{
    yang_name = "monitor"; yang_parent_name = "flow";
}

Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::has_data() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| multicast.is_set
	|| output.is_set
	|| unicast.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(input.operation)
	|| is_set(multicast.operation)
	|| is_set(output.operation)
	|| is_set(unicast.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        for(auto const & c : sampler)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler>();
        c->parent = this;
        sampler.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sampler)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{
    yang_name = "sampler"; yang_parent_name = "monitor";
}

Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sampler' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Igmp::Igmp()
    :
    version{YType::uint8, "version"}
    	,
    static_group(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup>())
{
    static_group->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Igmp::~Igmp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    return version.is_set
	|| (static_group !=  nullptr && static_group->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(version.operation)
	|| (static_group !=  nullptr && static_group->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup>();
        c->parent = this;
        join_group.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group")
    {
        if(static_group == nullptr)
        {
            static_group = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup>();
        }
        return static_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : join_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_group != nullptr)
    {
        children["static-group"] = static_group;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::StaticGroup()
{
    yang_name = "static-group"; yang_parent_name = "igmp";
}

Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::~StaticGroup()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<groups.size(); index++)
    {
        if(groups[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<groups.size(); index++)
    {
        if(groups[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "groups")
    {
        for(auto const & c : groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups>();
        c->parent = this;
        groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::Groups()
    :
    name{YType::str, "name"}
{
    yang_name = "groups"; yang_parent_name = "static-group";
}

Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::~Groups()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Groups' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::ClassMap()
    :
    id{YType::str, "id"}
{
    yang_name = "class-map"; yang_parent_name = "static-group";
}

Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::~ClassMap()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::has_data() const
{
    return id.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::ClassMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::JoinGroup()
    :
    ip_group_address{YType::str, "ip-group-address"},
    source{YType::str, "source"}
{
    yang_name = "join-group"; yang_parent_name = "igmp";
}

Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::~JoinGroup()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::has_data() const
{
    return ip_group_address.is_set
	|| source.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_group_address.operation)
	|| is_set(source.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[ip-group-address='" <<ip_group_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JoinGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_group_address.is_set || is_set(ip_group_address.operation)) leaf_name_data.push_back(ip_group_address.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Igmp::JoinGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Lisp::Lisp()
    :
    source_locator{YType::str, "source-locator"}
{
    yang_name = "lisp"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Lisp::~Lisp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Lisp::has_data() const
{
    return source_locator.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(source_locator.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_locator.is_set || is_set(source_locator.operation)) leaf_name_data.push_back(source_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-locator")
    {
        source_locator = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Nat::Nat()
    :
    allow_static_host{YType::empty, "allow-static-host"},
    enable{YType::empty, "enable"},
    inside{YType::empty, "inside"},
    outside{YType::empty, "outside"}
{
    yang_name = "nat"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Nat::~Nat()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Nat::has_data() const
{
    return allow_static_host.is_set
	|| enable.is_set
	|| inside.is_set
	|| outside.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Nat::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_static_host.operation)
	|| is_set(enable.operation)
	|| is_set(inside.operation)
	|| is_set(outside.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nat:nat";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Nat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nat' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_static_host.is_set || is_set(allow_static_host.operation)) leaf_name_data.push_back(allow_static_host.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (inside.is_set || is_set(inside.operation)) leaf_name_data.push_back(inside.get_name_leafdata());
    if (outside.is_set || is_set(outside.operation)) leaf_name_data.push_back(outside.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Nat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-static-host")
    {
        allow_static_host = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "inside")
    {
        inside = value;
    }
    if(value_path == "outside")
    {
        outside = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Nbar::Nbar()
    :
    protocol_discovery(nullptr) // presence node
{
    yang_name = "nbar"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Nbar::~Nbar()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Nbar::has_data() const
{
    return (protocol_discovery !=  nullptr && protocol_discovery->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Nbar::has_operation() const
{
    return is_set(operation)
	|| (protocol_discovery !=  nullptr && protocol_discovery->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Nbar::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nbar' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-discovery")
    {
        if(protocol_discovery == nullptr)
        {
            protocol_discovery = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery>();
        }
        return protocol_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_discovery != nullptr)
    {
        children["protocol-discovery"] = protocol_discovery;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Nbar::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::ProtocolDiscovery()
    :
    ipv4_ipv6{YType::enumeration, "ipv4-ipv6"}
{
    yang_name = "protocol-discovery"; yang_parent_name = "nbar";
}

Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::~ProtocolDiscovery()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::has_data() const
{
    return ipv4_ipv6.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_ipv6.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-discovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_ipv6.is_set || is_set(ipv4_ipv6.operation)) leaf_name_data.push_back(ipv4_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6 = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Ospf()
    :
    cost{YType::uint16, "cost"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    network{YType::enumeration, "network"},
    priority{YType::uint8, "priority"},
    resync_timeout{YType::uint32, "resync-timeout"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(nullptr) // presence node
	,authentication_key(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey>())
	,bfd(nullptr) // presence node
	,database_filter(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter>())
	,dead_interval(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval>())
	,demand_circuit(nullptr) // presence node
	,fast_reroute(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute>())
	,lls(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea>())
	,prefix_suppression(nullptr) // presence node
	,ttl_security(nullptr) // presence node
{
    authentication_key->parent = this;

    database_filter->parent = this;

    dead_interval->parent = this;

    fast_reroute->parent = this;

    multi_area->parent = this;

    yang_name = "ospf"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::~Ospf()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return cost.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| priority.is_set
	|| resync_timeout.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (lls !=  nullptr && lls->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network.operation)
	|| is_set(priority.operation)
	|| is_set(resync_timeout.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(shutdown.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (lls !=  nullptr && lls->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (resync_timeout.is_set || is_set(resync_timeout.operation)) leaf_name_data.push_back(resync_timeout.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "lls")
    {
        if(lls == nullptr)
        {
            lls = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::Lls>();
        }
        return lls;
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
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::get_children() const
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

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(dead_interval != nullptr)
    {
        children["dead-interval"] = dead_interval;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(lls != nullptr)
    {
        children["lls"] = lls;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    for (auto const & c : process_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    area{YType::str, "area"},
    none{YType::empty, "none"},
    secondaries{YType::empty, "secondaries"}
{
    yang_name = "process-id"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::~ProcessId()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::has_data() const
{
    return id.is_set
	|| area.is_set
	|| none.is_set
	|| secondaries.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(area.operation)
	|| is_set(none.operation)
	|| is_set(secondaries.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (secondaries.is_set || is_set(secondaries.operation)) leaf_name_data.push_back(secondaries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::ProcessId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "secondaries")
    {
        secondaries = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"},
    null{YType::empty, "null"}
    	,
    key_chain(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::has_data() const
{
    return message_digest.is_set
	|| null.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(message_digest.operation)
	|| is_set(null.operation)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.operation)) leaf_name_data.push_back(message_digest.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{
    yang_name = "authentication-key"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_key.operation)
	|| is_set(auth_type.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.operation)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.operation)) leaf_name_data.push_back(auth_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::AuthenticationKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::~Bfd()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::DatabaseFilter()
    :
    all{YType::empty, "all"},
    out{YType::empty, "out"}
{
    yang_name = "database-filter"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::has_data() const
{
    return all.is_set
	|| out.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::DeadInterval()
    :
    value_{YType::uint32, "value"}
    	,
    minimal(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal>())
{
    minimal->parent = this;

    yang_name = "dead-interval"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::~DeadInterval()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::has_data() const
{
    return value_.is_set
	|| (minimal !=  nullptr && minimal->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (minimal !=  nullptr && minimal->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal>();
        }
        return minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimal != nullptr)
    {
        children["minimal"] = minimal;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::Minimal()
    :
    hello_multiplier{YType::uint8, "hello-multiplier"}
{
    yang_name = "minimal"; yang_parent_name = "dead-interval";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::~Minimal()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::has_data() const
{
    return hello_multiplier.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_multiplier.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minimal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_multiplier.is_set || is_set(hello_multiplier.operation)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::DeadInterval::Minimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::has_data() const
{
    return ignore.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::DemandCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::FastReroute()
    :
    per_prefix(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix>())
{
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::~FastReroute()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::has_data() const
{
    return (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::PerPrefix()
    :
    candidate(nullptr) // presence node
	,protection(nullptr) // presence node
{
    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::has_data() const
{
    return (candidate !=  nullptr && candidate->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| (candidate !=  nullptr && candidate->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate")
    {
        if(candidate == nullptr)
        {
            candidate = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate>();
        }
        return candidate;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate != nullptr)
    {
        children["candidate"] = candidate;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::Candidate()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "candidate"; yang_parent_name = "per-prefix";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::~Candidate()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Candidate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::Protection()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "protection"; yang_parent_name = "per-prefix";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::~Protection()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::FastReroute::PerPrefix::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::Lls()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "lls"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::~Lls()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lls";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::Lls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::Md5()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{
    yang_name = "md5"; yang_parent_name = "message-digest-key";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_key.operation)
	|| is_set(auth_type.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.operation)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.operation)) leaf_name_data.push_back(auth_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::MessageDigestKey::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::~MultiArea()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::has_data() const
{
    return cost.is_set
	|| id.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::TtlSecurity()
    :
    diable{YType::empty, "diable"},
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "ospf";
}

Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::~TtlSecurity()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::has_data() const
{
    return diable.is_set
	|| hops.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::has_operation() const
{
    return is_set(operation)
	|| is_set(diable.operation)
	|| is_set(hops.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diable.is_set || is_set(diable.operation)) leaf_name_data.push_back(diable.get_name_leafdata());
    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Ospf::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diable")
    {
        diable = value;
    }
    if(value_path == "hops")
    {
        hops = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Wccp()
    :
    redirect(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect>())
	,web_cache(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache>())
{
    redirect->parent = this;

    web_cache->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::~Wccp()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return (redirect !=  nullptr && redirect->has_data())
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wccp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::has_data() const
{
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WccpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "wccp-list";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::WccpList::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::has_data() const
{
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WebCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "web-cache";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::WebCache::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Redirect()
    :
    exclude(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude>())
{
    exclude->parent = this;

    yang_name = "redirect"; yang_parent_name = "wccp";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::~Redirect()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::has_data() const
{
    return (exclude !=  nullptr && exclude->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::has_operation() const
{
    return is_set(operation)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::Exclude()
    :
    in{YType::empty, "in"}
{
    yang_name = "exclude"; yang_parent_name = "redirect";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::~Exclude()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::has_data() const
{
    return in.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exclude' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::Redirect::Exclude::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    web_cache(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::~Vrf()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::has_data() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "vrf";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::~WccpList()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::has_data() const
{
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WccpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "wccp-list";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WccpList::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "vrf";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::has_data() const
{
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WebCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "web-cache";
}

Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ip::Wccp::Vrf::WebCache::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tengigabitethernet::Ipv6::Ipv6()
    :
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
    	,
    address(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Address>())
	,destination_guard(nullptr) // presence node
	,dhcp(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Dhcp>())
	,flow(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Flow>())
	,nd(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Nd>())
	,no_pim(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::NoPim>())
	,ospf(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Ospf>())
	,pim(std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Pim>())
{
    address->parent = this;

    dhcp->parent = this;

    flow->parent = this;

    nd->parent = this;

    no_pim->parent = this;

    ospf->parent = this;

    pim->parent = this;

    yang_name = "ipv6"; yang_parent_name = "TenGigabitEthernet";
}

Native::Interface::Tengigabitethernet::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::has_data() const
{
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    return enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| unreachables.is_set
	|| (address !=  nullptr && address->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (no_pim !=  nullptr && no_pim->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (pim !=  nullptr && pim->has_data());
}

bool Native::Interface::Tengigabitethernet::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(mtu.operation)
	|| is_set(redirects.operation)
	|| is_set(unreachables.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (no_pim !=  nullptr && no_pim->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (pim !=  nullptr && pim->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "no-pim")
    {
        if(no_pim == nullptr)
        {
            no_pim = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::NoPim>();
        }
        return no_pim;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Pim>();
        }
        return pim;
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
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-filter")
    {
        for(auto const & c : traffic_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::TrafficFilter>();
        c->parent = this;
        traffic_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(destination_guard != nullptr)
    {
        children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(no_pim != nullptr)
    {
        children["no-pim"] = no_pim;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : traffic_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "destination-guard"; yang_parent_name = "ipv6";
}

Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationGuard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::DestinationGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Dhcp()
    :
    guard(nullptr) // presence node
{
    yang_name = "dhcp"; yang_parent_name = "ipv6";
}

Native::Interface::Tengigabitethernet::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::Dhcp::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (guard !=  nullptr && guard->has_data());
}

bool Native::Interface::Tengigabitethernet::Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::Server()
    :
    word{YType::str, "word"},
    preference{YType::uint8, "preference"}
{
    yang_name = "server"; yang_parent_name = "dhcp";
}

Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::has_data() const
{
    return word.is_set
	|| preference.is_set;
}

bool Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(preference.operation);
}

std::string Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
}

Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "guard"; yang_parent_name = "dhcp";
}

Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Guard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Tengigabitethernet::Ipv6::Address::Address()
    :
    autoconfig(nullptr) // presence node
	,dhcp(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

Native::Interface::Tengigabitethernet::Ipv6::Address::~Address()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::Address::has_data() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::Tengigabitethernet::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::Tengigabitethernet::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "link-local-address")
    {
        for(auto const & c : link_local_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Address::LinkLocalAddress>();
        c->parent = this;
        link_local_address.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tengigabitethernet::Ipv6::Address::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    for (auto const & c : link_local_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{
    yang_name = "dhcp"; yang_parent_name = "address";
}

Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::has_data() const
{
    return rapid_commit.is_set;
}

bool Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(rapid_commit.operation);
}

std::string Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.operation)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::Address::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
    }
}

Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{
    yang_name = "autoconfig"; yang_parent_name = "address";
}

Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconfig' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tengigabitethernet::Ipv6::Address::Autoconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::HelloInterval::ValueEnum::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::HelloInterval::HelloIntervalList::ValueEnum::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::HelloMultiplier::HelloMultiplierList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Ipv6::Metric::MetricList::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Metric::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Metric::MetricList::ValueEnum::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Password::PasswordList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::Priority::PriorityList::LevelsEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::ImplementorEnum::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake::ImplementorEnum::ietf {1, "ietf"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::HoldQueue::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::HoldQueue::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Mpls::Label::ProtocolEnum::both {0, "both"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Mpls::Label::ProtocolEnum::ldp {1, "ldp"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Mpls::Label::ProtocolEnum::tdp {2, "tdp"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Pim::SparseModeEnum::sparse_dense_mode {0, "sparse-dense-mode"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Pim::SparseModeEnum::sparse_mode {1, "sparse-mode"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Pim::SptThresholdEnum::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Dhcp::Relay::Information::PolicyActionEnum::replace {3, "replace"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::ReachableViaEnum::any {0, "any"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Verify::Unicast::Source::ReachableViaEnum::rx {1, "rx"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::DirectionEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Flow::Monitor::Sampler::DirectionEnum::output {1, "output"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Igmp::StaticGroup::Groups::NameEnum::Y__STAR__ {0, "*"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Ospf::NetworkEnum::broadcast {0, "broadcast"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Ospf::NetworkEnum::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Ospf::NetworkEnum::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf Native::Interface::Tengigabitethernet::Ip::Ospf::NetworkEnum::point_to_point {3, "point-to-point"};


}
}
