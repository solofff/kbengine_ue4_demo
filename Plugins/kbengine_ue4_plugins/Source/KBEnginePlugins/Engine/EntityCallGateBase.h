/*
	Generated by KBEngine!
	Please do not modify this file!
	
	tools = kbcmd
*/

#pragma once

#include "KBECommon.h"
#include "EntityCall.h"
#include "KBETypes.h"
#include "CustomDataTypes.h"


// defined in */scripts/entity_defs/Gate.def

class KBENGINEPLUGINS_API EntityBaseEntityCall_GateBase : public EntityCall
{
public:

	EntityBaseEntityCall_GateBase(int32 eid, const FString& ename);

	virtual ~EntityBaseEntityCall_GateBase();
};

class KBENGINEPLUGINS_API EntityCellEntityCall_GateBase : public EntityCall
{
public:

	EntityCellEntityCall_GateBase(int32 eid, const FString& ename);

	virtual ~EntityCellEntityCall_GateBase();
};
