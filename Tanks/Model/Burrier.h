#pragma once
#include "MapObject.h"
#include "MapObjectVisitor.h"


class Burrier : public MapObject
{
public:
  Burrier(const MapObjectData&, BarrierType, IdGenerator&);
  BarrierType GetType();
  virtual void Accept(MapObjectVisitor&) override;

private:
  BarrierType m_type;
};

