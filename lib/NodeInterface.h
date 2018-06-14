#pragma once

namespace Pbft {

class NodeInterface
{
public:
    NodeInterface(const NodeInterface&) = delete;
    virtual ~NodeInterface() = default;

    NodeInterface& operator=(const NodeInterface&) = delete;

    virtual void SetNodeCount(uint32_t count) = 0;
    virtual void SetFaulty() = 0;
    virtual void SetOperational() = 0;

protected:
    NodeInterface() = default;
};

}