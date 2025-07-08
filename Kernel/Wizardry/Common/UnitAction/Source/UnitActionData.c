#include "common-chax.h"
#include "action-expa.h"

s8 _ActionWait(ProcPtr proc);
s8 _ActionCombat(ProcPtr proc);
s8 _ActionStaffDoorChestUseItem(ProcPtr proc);
s8 _ActionPick(ProcPtr proc);

s8 ActionExecSkill(ProcPtr proc);
s8 ActionGaidenMagicCombat(ProcPtr proc);
s8 ActionGaidenMagicStaff(ProcPtr proc);

const UnitActionFunc_t gUnitActionTable[CONFIG_UNIT_ACTION_AMT] = {
	[UNIT_ACTION_WAIT] = _ActionWait,
	[UNIT_ACTION_TRAPPED] = _ActionWait,
	[UNIT_ACTION_RESCUE] = ActionRescue,
	[UNIT_ACTION_DROP] = ActionDrop,
	[UNIT_ACTION_VISIT] = ActionVisitAndSeize,
	[UNIT_ACTION_SEIZE] = ActionVisitAndSeize,
	[UNIT_ACTION_COMBAT] = _ActionCombat,
	[UNIT_ACTION_DANCE] = ActionDance,
	[UNIT_ACTION_TALK] = ActionTalk,
	[UNIT_ACTION_SUPPORT] = ActionSupport,
	[UNIT_ACTION_STEAL] = ActionSteal,
	[UNIT_ACTION_SUMMON] = ActionSummon,
	[UNIT_ACTION_SUMMON_DK] = ActionSummonDK,
	[UNIT_ACTION_ARENA] = ActionArena,
	[UNIT_ACTION_STAFF] = _ActionStaffDoorChestUseItem,
	[UNIT_ACTION_DOOR] = _ActionStaffDoorChestUseItem,
	[UNIT_ACTION_CHEST] = _ActionStaffDoorChestUseItem,
	[UNIT_ACTION_USE_ITEM] = _ActionStaffDoorChestUseItem,
	[UNIT_ACTION_PICK] = _ActionPick,

	[CONFIG_UNIT_ACTION_EXPA_ExecSkill] = ActionExecSkill,
	[CONFIG_UNIT_ACTION_EXPA_GaidenMagicCombat] = ActionGaidenMagicCombat,
	[CONFIG_UNIT_ACTION_EXPA_GaidenMagicStaff] = ActionGaidenMagicStaff,
};
