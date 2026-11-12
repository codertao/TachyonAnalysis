
/* entity LEAVE_QUADRANT event handler */

void __cdecl Ent_LeaveQuadrant(SpED *ent,Quadrant *q)

{
  int iVar1;
  
  Nop(ent,q,s_LEAVE_QUADRANT_00548d34);
  *(undefined2 *)&ent->field_0xc8 = 0;
  ent->engageCount = 0;
  ent->target = (SpED *)0x0;
  Ent_ClearWeaponTargets(ent,ent->quadrant);
  ent[1].netId = 0;
  ent[1].next[1].quadrant = (Quadrant *)0x0;
  iVar1 = Quad_UnlinkDynamicHead(ent,&q->staticSectorMap);
  if (iVar1 != 0) {
    Ent_DespawnFromQuadrant(ent,q);
  }
  if (q->onLeave != (code *)0x0) {
    (*q->onLeave)();
  }
  return;
}

