
/* entity LEAVE_QUADRANT event handler */

void __cdecl Ent_LeaveQuadrant(SpED *ent,Quadrant *q)

{
  int iVar1;
  
  FUN_00445720(ent,q,s_LEAVE_QUADRANT_00548d34);
  *(undefined2 *)&ent->field_0xc8 = 0;
  ent->engageCount = 0;
  ent->target = (SpED *)0x0;
  FUN_00492ba0(ent,ent->quadrant);
  ent[1].netId = 0;
  ent[1].next[1].quadrant = (Quadrant *)0x0;
  iVar1 = FUN_0045d080(ent,&q->staticSectorMap);
  if (iVar1 != 0) {
    FUN_004578e0(ent,q);
  }
  if (q->onLeave != (code *)0x0) {
    (*q->onLeave)();
  }
  return;
}

